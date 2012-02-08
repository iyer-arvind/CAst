#include "CAst.h"


CAst::translation_unit *root;
extern FILE* yyin;
extern int yyparse(void);

namespace CAst
{




translation_unit* parseFile(const char *fileName)
{
	yyin=fopen(fileName,"r");
	yyparse();
	return root;
}

std::ostream& Properties::toStream(std::ostream& stream,int indent)const
{
	if(__className=="token")
	{
		return stream<<"\""<<__tokValue<<"\"";
	}
	std::string sp="  ";
	std::string nl="\n";
	std::string tab=nl;
	for(register int i=0;i<indent;i++)tab+=sp;
	int n=0;
	for(const_iterator i=begin();(i!=end())&&(n<=1);i++)
	{
		if(i->second)n++;
	}
	if(n>1)
	{
		bool flag=false;
		stream<<tab<<"{"<<tab<<sp<<"\"type\":\""<<__className<<"\","<<tab<<sp<<"\"value\":"<<tab<<sp<<"{";
		for(const_iterator i=begin();i!=end();i++)
		{
			if(i->second)
			{
				if(flag)stream<<",";
				stream<<tab<<sp<<sp<<"\""<<i->first<<"\":";
				if(i->second->isList())
				{
					i->second->getPropertiesList().toStream(stream,indent+2);
				}
				else
				{
					i->second->getProperties().toStream(stream,indent+2);
				}
				flag=true;
			}
		}
		stream<<tab<<sp<<"}";
		stream<<tab<<"}";
	}
	else if(n==1)
	{
		for(const_iterator i=begin();i!=end();i++)
		{
			if(i->second)
			{
				if(i->second->isList())
				{
					i->second->getPropertiesList().toStream(stream,indent);
				}
				else
				{
					i->second->getProperties().toStream(stream,indent);
				}
				break;
			}
		}
		
	}
	else
		stream<<"\"\"";
	return stream;
}

std::ostream& PropertiesList::toStream(std::ostream& stream,int indent)const
{
	std::string sp="  ";
	std::string nl="\n";
	std::string tab=nl;
	for(register int i=0;i<indent;i++)tab+=sp;
	if(size()>1)
	{
		stream<<tab<<"{"<<tab<<sp<<"\"type\":\""<<__className<<"\","<<tab<<sp<<"\"value\":";
		stream<<tab<<sp<<"[";
		for(const_iterator i=begin();i!=end();i++)
		{
			if(i!=begin())stream<<","<<tab<<sp;
			i->toStream(stream,indent+2);
		}
		stream<<tab<<sp<<"]";
		stream<<tab<<"}";
	}
	else
	{
		begin()->toStream(stream,indent);
	}
	return stream;
}



			
/*=============================================================================================================*\
                                                                                                                 
 	THE storage_class_specifier CLASS                                                                                 
 	FOR PATTERN : [TYPEDEF]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*storage_class_specifier::name() returns the name of the class*/
std::string storage_class_specifier::name()const {return "storage_class_specifier";}

/*storage_class_specifier::pattern returns the pattern matched*/
std::string storage_class_specifier::pattern()const {return "TYPEDEF";}

/*construct from elements*/
storage_class_specifier::storage_class_specifier
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m storage_class_specifier");
}


/*storage_class_specifier::getProperties returns a map of properties*/
Properties storage_class_specifier::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
storage_class_specifier::~storage_class_specifier()
{
	LOG("\033[31mDELETING\033[0m storage_class_specifier");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE expression_statement CLASS                                                                                 
 	FOR PATTERN : [expression,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*expression_statement::name() returns the name of the class*/
std::string expression_statement::name()const {return "expression_statement";}

/*expression_statement::pattern returns the pattern matched*/
std::string expression_statement::pattern()const {return "expression,';'";}

/*construct from elements*/
expression_statement::expression_statement
	(
		std::string _arg_s_matchedPattern,
		expression *_arg__p_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_expression(_arg__p_expression)
{
	LOG("\033[32mCREATING\033[0m expression_statement");
}


/*expression_statement::getProperties returns a map of properties*/
Properties expression_statement::getProperties()const
{
	Properties props(name());
	props["expression"]=_p_expression;
	return props;
}


/*the destructor*/
expression_statement::~expression_statement()
{
	LOG("\033[31mDELETING\033[0m expression_statement");
	if(_p_expression)
	{
		delete _p_expression;
		_p_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE type_name CLASS                                                                                 
 	FOR PATTERN : [specifier_qualifier_list,abstract_declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*type_name::name() returns the name of the class*/
std::string type_name::name()const {return "type_name";}

/*type_name::pattern returns the pattern matched*/
std::string type_name::pattern()const {return "specifier_qualifier_list,abstract_declarator";}

/*construct from elements*/
type_name::type_name
	(
		std::string _arg_s_matchedPattern,
		specifier_qualifier_list *_arg__p_specifier_qualifier_list,
		abstract_declarator *_arg__p_abstract_declarator
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_specifier_qualifier_list(_arg__p_specifier_qualifier_list),
	_p_abstract_declarator(_arg__p_abstract_declarator)
{
	LOG("\033[32mCREATING\033[0m type_name");
}


/*type_name::getProperties returns a map of properties*/
Properties type_name::getProperties()const
{
	Properties props(name());
	props["specifier_qualifier_list"]=_p_specifier_qualifier_list;
	props["abstract_declarator"]=_p_abstract_declarator;
	return props;
}


/*the destructor*/
type_name::~type_name()
{
	LOG("\033[31mDELETING\033[0m type_name");
	if(_p_specifier_qualifier_list)
	{
		delete _p_specifier_qualifier_list;
		_p_specifier_qualifier_list=0;
	}
	if(_p_abstract_declarator)
	{
		delete _p_abstract_declarator;
		_p_abstract_declarator=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE unary_expression1 CLASS                                                                                 
 	FOR PATTERN : [SIZEOF,'(',type_name,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*unary_expression1::name() returns the name of the class*/
std::string unary_expression1::name()const {return "unary_expression1";}

/*unary_expression1::pattern returns the pattern matched*/
std::string unary_expression1::pattern()const {return "SIZEOF,'(',type_name,')'";}

/*construct from elements*/
unary_expression1::unary_expression1
	(
		std::string _arg_s_matchedPattern,
		type_name *_arg__p_type_name
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_type_name(_arg__p_type_name)
{
	LOG("\033[32mCREATING\033[0m unary_expression1");
}


/*unary_expression1::getProperties returns a map of properties*/
Properties unary_expression1::getProperties()const
{
	Properties props(name());
	props["type_name"]=_p_type_name;
	return props;
}


/*the destructor*/
unary_expression1::~unary_expression1()
{
	LOG("\033[31mDELETING\033[0m unary_expression1");
	if(_p_type_name)
	{
		delete _p_type_name;
		_p_type_name=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE unary_expression2 CLASS                                                                                 
 	FOR PATTERN : [INC_OP,unary_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*unary_expression2::name() returns the name of the class*/
std::string unary_expression2::name()const {return "unary_expression2";}

/*unary_expression2::pattern returns the pattern matched*/
std::string unary_expression2::pattern()const {return "INC_OP,unary_expression";}

/*construct from elements*/
unary_expression2::unary_expression2
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		unary_expression *_arg__p_unary_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1),
	_p_unary_expression(_arg__p_unary_expression)
{
	LOG("\033[32mCREATING\033[0m unary_expression2");
}


/*unary_expression2::getProperties returns a map of properties*/
Properties unary_expression2::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	props["unary_expression"]=_p_unary_expression;
	return props;
}


/*the destructor*/
unary_expression2::~unary_expression2()
{
	LOG("\033[31mDELETING\033[0m unary_expression2");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_unary_expression)
	{
		delete _p_unary_expression;
		_p_unary_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE unary_expression3 CLASS                                                                                 
 	FOR PATTERN : [unary_operator,cast_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*unary_expression3::name() returns the name of the class*/
std::string unary_expression3::name()const {return "unary_expression3";}

/*unary_expression3::pattern returns the pattern matched*/
std::string unary_expression3::pattern()const {return "unary_operator,cast_expression";}

/*construct from elements*/
unary_expression3::unary_expression3
	(
		std::string _arg_s_matchedPattern,
		unary_operator *_arg__p_unary_operator,
		cast_expression *_arg__p_cast_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_unary_operator(_arg__p_unary_operator),
	_p_cast_expression(_arg__p_cast_expression)
{
	LOG("\033[32mCREATING\033[0m unary_expression3");
}


/*unary_expression3::getProperties returns a map of properties*/
Properties unary_expression3::getProperties()const
{
	Properties props(name());
	props["unary_operator"]=_p_unary_operator;
	props["cast_expression"]=_p_cast_expression;
	return props;
}


/*the destructor*/
unary_expression3::~unary_expression3()
{
	LOG("\033[31mDELETING\033[0m unary_expression3");
	if(_p_unary_operator)
	{
		delete _p_unary_operator;
		_p_unary_operator=0;
	}
	if(_p_cast_expression)
	{
		delete _p_cast_expression;
		_p_cast_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE unary_expression4 CLASS                                                                                 
 	FOR PATTERN : [postfix_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*unary_expression4::name() returns the name of the class*/
std::string unary_expression4::name()const {return "unary_expression4";}

/*unary_expression4::pattern returns the pattern matched*/
std::string unary_expression4::pattern()const {return "postfix_expression";}

/*construct from elements*/
unary_expression4::unary_expression4
	(
		std::string _arg_s_matchedPattern,
		postfix_expression *_arg__p_postfix_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_postfix_expression(_arg__p_postfix_expression)
{
	LOG("\033[32mCREATING\033[0m unary_expression4");
}


/*unary_expression4::getProperties returns a map of properties*/
Properties unary_expression4::getProperties()const
{
	Properties props(name());
	props["postfix_expression"]=_p_postfix_expression;
	return props;
}


/*the destructor*/
unary_expression4::~unary_expression4()
{
	LOG("\033[31mDELETING\033[0m unary_expression4");
	if(_p_postfix_expression)
	{
		delete _p_postfix_expression;
		_p_postfix_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE conditional_expression CLASS                                                                                 
 	FOR PATTERN : [logical_or_expression,'?',expression,':',conditional_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class conditional_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
conditional_expression_item::conditional_expression_item
	(
		std::string _arg_s_matchedPattern,
		logical_or_expression *_arg__p_logical_or_expression,
		expression *_arg__p_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_logical_or_expression(_arg__p_logical_or_expression),
	_p_expression(_arg__p_expression)
{
	LOG("\033[32mCREATING\033[0m conditional_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
conditional_expression_item::conditional_expression_item(const conditional_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_logical_or_expression(other._p_logical_or_expression),
		_p_expression(other._p_expression)
{
	LOG("\033[32mCOPYING\033[0m conditional_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*conditional_expression_item::getProperties returns a map of properties for the item*/
Properties conditional_expression_item::getProperties()const
{
	Properties props("conditional_expression_items");
	props["logical_or_expression"]=_p_logical_or_expression;
	props["expression"]=_p_expression;
	return props;
}


/*the destructor*/
conditional_expression_item::~conditional_expression_item()
{
	LOG("\033[31mDELETING?\033[0m conditional_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_logical_or_expression)
	{
		delete _p_logical_or_expression;
		_p_logical_or_expression=0;
	}
	if(_p_expression)
	{
		delete _p_expression;
		_p_expression=0;
	}
	LOG("\033[31mDELETED\033[0m conditional_expression");
}
/*------------------------------------------------------------*\
 							        
  main class conditional_expression                         
                                                                
\*------------------------------------------------------------*/
/*conditional_expression::name() returns the name of the class*/
std::string conditional_expression::name()const {return "conditional_expression";}

/*conditional_expression::pattern returns the pattern matched*/
std::string conditional_expression::pattern()const {return "logical_or_expression,'?',expression,':',conditional_expression";}

/*construct from elements*/
conditional_expression::conditional_expression
	(
		std::string _arg_s_matchedPattern,
		logical_or_expression *_arg__p_logical_or_expression
	 )
{
	LOG("\033[32mCREATING\033[0m conditional_expression");
	conditional_expression_item item(_arg_s_matchedPattern,_arg__p_logical_or_expression,NULL);
	_items.push_back(item);
}

/*conditional_expression::append() appends an item to the list of items*/
void conditional_expression::append
	(
		std::string _arg_s_matchedPattern,
		logical_or_expression *_arg__p_logical_or_expression,
		expression *_arg__p_expression	)
{
	conditional_expression_item item(_arg_s_matchedPattern, _arg__p_logical_or_expression, _arg__p_expression);
	_items.push_back(item);
		
}

/*conditional_expression::getPropertyList() returns the list of properties*/
PropertiesList conditional_expression::getPropertiesList()const
{
	PropertiesList pList("conditional_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
conditional_expression::~conditional_expression()
{
	LOG("\033[32mDESTOYING\033[0m conditional_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE struct_or_union_specifier CLASS                                                                                 
 	FOR PATTERN : [struct_or_union,IDENTIFIER,'{',struct_declaration_list,'}']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*struct_or_union_specifier::name() returns the name of the class*/
std::string struct_or_union_specifier::name()const {return "struct_or_union_specifier";}

/*struct_or_union_specifier::pattern returns the pattern matched*/
std::string struct_or_union_specifier::pattern()const {return "struct_or_union,IDENTIFIER,'{',struct_declaration_list,'}'";}

/*construct from elements*/
struct_or_union_specifier::struct_or_union_specifier
	(
		std::string _arg_s_matchedPattern,
		struct_or_union *_arg__p_struct_or_union,
		Token *_arg__p_token1,
		Token *_arg__p_token2,
		struct_declaration_list *_arg__p_struct_declaration_list,
		Token *_arg__p_token3
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_struct_or_union(_arg__p_struct_or_union),
	_p_token1(_arg__p_token1),
	_p_token2(_arg__p_token2),
	_p_struct_declaration_list(_arg__p_struct_declaration_list),
	_p_token3(_arg__p_token3)
{
	LOG("\033[32mCREATING\033[0m struct_or_union_specifier");
}


/*struct_or_union_specifier::getProperties returns a map of properties*/
Properties struct_or_union_specifier::getProperties()const
{
	Properties props(name());
	props["struct_or_union"]=_p_struct_or_union;
	props["token1"]=_p_token1;
	props["token2"]=_p_token2;
	props["struct_declaration_list"]=_p_struct_declaration_list;
	props["token3"]=_p_token3;
	return props;
}


/*the destructor*/
struct_or_union_specifier::~struct_or_union_specifier()
{
	LOG("\033[31mDELETING\033[0m struct_or_union_specifier");
	if(_p_struct_or_union)
	{
		delete _p_struct_or_union;
		_p_struct_or_union=0;
	}
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_token2)
	{
		delete _p_token2;
		_p_token2=0;
	}
	if(_p_struct_declaration_list)
	{
		delete _p_struct_declaration_list;
		_p_struct_declaration_list=0;
	}
	if(_p_token3)
	{
		delete _p_token3;
		_p_token3=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE exclusive_or_expression CLASS                                                                                 
 	FOR PATTERN : [exclusive_or_expression,'^',and_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class exclusive_or_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
exclusive_or_expression_item::exclusive_or_expression_item
	(
		std::string _arg_s_matchedPattern,
		and_expression *_arg__p_and_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_and_expression(_arg__p_and_expression)
{
	LOG("\033[32mCREATING\033[0m exclusive_or_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
exclusive_or_expression_item::exclusive_or_expression_item(const exclusive_or_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_and_expression(other._p_and_expression)
{
	LOG("\033[32mCOPYING\033[0m exclusive_or_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*exclusive_or_expression_item::getProperties returns a map of properties for the item*/
Properties exclusive_or_expression_item::getProperties()const
{
	Properties props("exclusive_or_expression_items");
	props["and_expression"]=_p_and_expression;
	return props;
}


/*the destructor*/
exclusive_or_expression_item::~exclusive_or_expression_item()
{
	LOG("\033[31mDELETING?\033[0m exclusive_or_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_and_expression)
	{
		delete _p_and_expression;
		_p_and_expression=0;
	}
	LOG("\033[31mDELETED\033[0m exclusive_or_expression");
}
/*------------------------------------------------------------*\
 							        
  main class exclusive_or_expression                         
                                                                
\*------------------------------------------------------------*/
/*exclusive_or_expression::name() returns the name of the class*/
std::string exclusive_or_expression::name()const {return "exclusive_or_expression";}

/*exclusive_or_expression::pattern returns the pattern matched*/
std::string exclusive_or_expression::pattern()const {return "exclusive_or_expression,'^',and_expression";}

/*construct from elements*/
exclusive_or_expression::exclusive_or_expression
	(
		std::string _arg_s_matchedPattern,
		and_expression *_arg__p_and_expression
	 )
{
	LOG("\033[32mCREATING\033[0m exclusive_or_expression");
	exclusive_or_expression_item item(_arg_s_matchedPattern,_arg__p_and_expression);
	_items.push_back(item);
}

/*exclusive_or_expression::append() appends an item to the list of items*/
void exclusive_or_expression::append
	(
		std::string _arg_s_matchedPattern,
		and_expression *_arg__p_and_expression	)
{
	exclusive_or_expression_item item(_arg_s_matchedPattern, _arg__p_and_expression);
	_items.push_back(item);
		
}

/*exclusive_or_expression::getPropertyList() returns the list of properties*/
PropertiesList exclusive_or_expression::getPropertiesList()const
{
	PropertiesList pList("exclusive_or_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
exclusive_or_expression::~exclusive_or_expression()
{
	LOG("\033[32mDESTOYING\033[0m exclusive_or_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE initializer1 CLASS                                                                                 
 	FOR PATTERN : ['{',initializer_list,',','}']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*initializer1::name() returns the name of the class*/
std::string initializer1::name()const {return "initializer1";}

/*initializer1::pattern returns the pattern matched*/
std::string initializer1::pattern()const {return "'{',initializer_list,',','}'";}

/*construct from elements*/
initializer1::initializer1
	(
		std::string _arg_s_matchedPattern,
		initializer_list *_arg__p_initializer_list,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_initializer_list(_arg__p_initializer_list),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m initializer1");
}


/*initializer1::getProperties returns a map of properties*/
Properties initializer1::getProperties()const
{
	Properties props(name());
	props["initializer_list"]=_p_initializer_list;
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
initializer1::~initializer1()
{
	LOG("\033[31mDELETING\033[0m initializer1");
	if(_p_initializer_list)
	{
		delete _p_initializer_list;
		_p_initializer_list=0;
	}
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE initializer2 CLASS                                                                                 
 	FOR PATTERN : [assignment_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*initializer2::name() returns the name of the class*/
std::string initializer2::name()const {return "initializer2";}

/*initializer2::pattern returns the pattern matched*/
std::string initializer2::pattern()const {return "assignment_expression";}

/*construct from elements*/
initializer2::initializer2
	(
		std::string _arg_s_matchedPattern,
		assignment_expression *_arg__p_assignment_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_assignment_expression(_arg__p_assignment_expression)
{
	LOG("\033[32mCREATING\033[0m initializer2");
}


/*initializer2::getProperties returns a map of properties*/
Properties initializer2::getProperties()const
{
	Properties props(name());
	props["assignment_expression"]=_p_assignment_expression;
	return props;
}


/*the destructor*/
initializer2::~initializer2()
{
	LOG("\033[31mDELETING\033[0m initializer2");
	if(_p_assignment_expression)
	{
		delete _p_assignment_expression;
		_p_assignment_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE struct_declaration_list CLASS                                                                                 
 	FOR PATTERN : [struct_declaration_list,struct_declaration]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class struct_declaration_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
struct_declaration_list_item::struct_declaration_list_item
	(
		std::string _arg_s_matchedPattern,
		struct_declaration *_arg__p_struct_declaration
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_struct_declaration(_arg__p_struct_declaration)
{
	LOG("\033[32mCREATING\033[0m struct_declaration_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
struct_declaration_list_item::struct_declaration_list_item(const struct_declaration_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_struct_declaration(other._p_struct_declaration)
{
	LOG("\033[32mCOPYING\033[0m struct_declaration_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*struct_declaration_list_item::getProperties returns a map of properties for the item*/
Properties struct_declaration_list_item::getProperties()const
{
	Properties props("struct_declaration_list_items");
	props["struct_declaration"]=_p_struct_declaration;
	return props;
}


/*the destructor*/
struct_declaration_list_item::~struct_declaration_list_item()
{
	LOG("\033[31mDELETING?\033[0m struct_declaration_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_struct_declaration)
	{
		delete _p_struct_declaration;
		_p_struct_declaration=0;
	}
	LOG("\033[31mDELETED\033[0m struct_declaration_list");
}
/*------------------------------------------------------------*\
 							        
  main class struct_declaration_list                         
                                                                
\*------------------------------------------------------------*/
/*struct_declaration_list::name() returns the name of the class*/
std::string struct_declaration_list::name()const {return "struct_declaration_list";}

/*struct_declaration_list::pattern returns the pattern matched*/
std::string struct_declaration_list::pattern()const {return "struct_declaration_list,struct_declaration";}

/*construct from elements*/
struct_declaration_list::struct_declaration_list
	(
		std::string _arg_s_matchedPattern,
		struct_declaration *_arg__p_struct_declaration
	 )
{
	LOG("\033[32mCREATING\033[0m struct_declaration_list");
	struct_declaration_list_item item(_arg_s_matchedPattern,_arg__p_struct_declaration);
	_items.push_back(item);
}

/*struct_declaration_list::append() appends an item to the list of items*/
void struct_declaration_list::append
	(
		std::string _arg_s_matchedPattern,
		struct_declaration *_arg__p_struct_declaration	)
{
	struct_declaration_list_item item(_arg_s_matchedPattern, _arg__p_struct_declaration);
	_items.push_back(item);
		
}

/*struct_declaration_list::getPropertyList() returns the list of properties*/
PropertiesList struct_declaration_list::getPropertiesList()const
{
	PropertiesList pList("struct_declaration_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
struct_declaration_list::~struct_declaration_list()
{
	LOG("\033[32mDESTOYING\033[0m struct_declaration_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE assignment_operator CLASS                                                                                 
 	FOR PATTERN : ['=']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*assignment_operator::name() returns the name of the class*/
std::string assignment_operator::name()const {return "assignment_operator";}

/*assignment_operator::pattern returns the pattern matched*/
std::string assignment_operator::pattern()const {return "'='";}

/*construct from elements*/
assignment_operator::assignment_operator
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m assignment_operator");
}


/*assignment_operator::getProperties returns a map of properties*/
Properties assignment_operator::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
assignment_operator::~assignment_operator()
{
	LOG("\033[31mDELETING\033[0m assignment_operator");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE struct_declaration CLASS                                                                                 
 	FOR PATTERN : [specifier_qualifier_list,struct_declarator_list,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*struct_declaration::name() returns the name of the class*/
std::string struct_declaration::name()const {return "struct_declaration";}

/*struct_declaration::pattern returns the pattern matched*/
std::string struct_declaration::pattern()const {return "specifier_qualifier_list,struct_declarator_list,';'";}

/*construct from elements*/
struct_declaration::struct_declaration
	(
		std::string _arg_s_matchedPattern,
		specifier_qualifier_list *_arg__p_specifier_qualifier_list,
		struct_declarator_list *_arg__p_struct_declarator_list
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_specifier_qualifier_list(_arg__p_specifier_qualifier_list),
	_p_struct_declarator_list(_arg__p_struct_declarator_list)
{
	LOG("\033[32mCREATING\033[0m struct_declaration");
}


/*struct_declaration::getProperties returns a map of properties*/
Properties struct_declaration::getProperties()const
{
	Properties props(name());
	props["specifier_qualifier_list"]=_p_specifier_qualifier_list;
	props["struct_declarator_list"]=_p_struct_declarator_list;
	return props;
}


/*the destructor*/
struct_declaration::~struct_declaration()
{
	LOG("\033[31mDELETING\033[0m struct_declaration");
	if(_p_specifier_qualifier_list)
	{
		delete _p_specifier_qualifier_list;
		_p_specifier_qualifier_list=0;
	}
	if(_p_struct_declarator_list)
	{
		delete _p_struct_declarator_list;
		_p_struct_declarator_list=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE abstract_declarator CLASS                                                                                 
 	FOR PATTERN : [pointer,direct_abstract_declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*abstract_declarator::name() returns the name of the class*/
std::string abstract_declarator::name()const {return "abstract_declarator";}

/*abstract_declarator::pattern returns the pattern matched*/
std::string abstract_declarator::pattern()const {return "pointer,direct_abstract_declarator";}

/*construct from elements*/
abstract_declarator::abstract_declarator
	(
		std::string _arg_s_matchedPattern,
		pointer *_arg__p_pointer,
		direct_abstract_declarator *_arg__p_direct_abstract_declarator
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_pointer(_arg__p_pointer),
	_p_direct_abstract_declarator(_arg__p_direct_abstract_declarator)
{
	LOG("\033[32mCREATING\033[0m abstract_declarator");
}


/*abstract_declarator::getProperties returns a map of properties*/
Properties abstract_declarator::getProperties()const
{
	Properties props(name());
	props["pointer"]=_p_pointer;
	props["direct_abstract_declarator"]=_p_direct_abstract_declarator;
	return props;
}


/*the destructor*/
abstract_declarator::~abstract_declarator()
{
	LOG("\033[31mDELETING\033[0m abstract_declarator");
	if(_p_pointer)
	{
		delete _p_pointer;
		_p_pointer=0;
	}
	if(_p_direct_abstract_declarator)
	{
		delete _p_direct_abstract_declarator;
		_p_direct_abstract_declarator=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE iteration_statement1 CLASS                                                                                 
 	FOR PATTERN : [DO,statement,WHILE,'(',expression,')',';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*iteration_statement1::name() returns the name of the class*/
std::string iteration_statement1::name()const {return "iteration_statement1";}

/*iteration_statement1::pattern returns the pattern matched*/
std::string iteration_statement1::pattern()const {return "DO,statement,WHILE,'(',expression,')',';'";}

/*construct from elements*/
iteration_statement1::iteration_statement1
	(
		std::string _arg_s_matchedPattern,
		statement *_arg__p_statement,
		expression *_arg__p_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_statement(_arg__p_statement),
	_p_expression(_arg__p_expression)
{
	LOG("\033[32mCREATING\033[0m iteration_statement1");
}


/*iteration_statement1::getProperties returns a map of properties*/
Properties iteration_statement1::getProperties()const
{
	Properties props(name());
	props["statement"]=_p_statement;
	props["expression"]=_p_expression;
	return props;
}


/*the destructor*/
iteration_statement1::~iteration_statement1()
{
	LOG("\033[31mDELETING\033[0m iteration_statement1");
	if(_p_statement)
	{
		delete _p_statement;
		_p_statement=0;
	}
	if(_p_expression)
	{
		delete _p_expression;
		_p_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE iteration_statement2 CLASS                                                                                 
 	FOR PATTERN : [FOR,'(',expression_statement,expression_statement,expression,')',statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*iteration_statement2::name() returns the name of the class*/
std::string iteration_statement2::name()const {return "iteration_statement2";}

/*iteration_statement2::pattern returns the pattern matched*/
std::string iteration_statement2::pattern()const {return "FOR,'(',expression_statement,expression_statement,expression,')',statement";}

/*construct from elements*/
iteration_statement2::iteration_statement2
	(
		std::string _arg_s_matchedPattern,
		expression_statement *_arg__p_expression_statement,
		expression_statement *_arg__p_expression_statement1,
		expression *_arg__p_expression,
		statement *_arg__p_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_expression_statement(_arg__p_expression_statement),
	_p_expression_statement1(_arg__p_expression_statement1),
	_p_expression(_arg__p_expression),
	_p_statement(_arg__p_statement)
{
	LOG("\033[32mCREATING\033[0m iteration_statement2");
}


/*iteration_statement2::getProperties returns a map of properties*/
Properties iteration_statement2::getProperties()const
{
	Properties props(name());
	props["expression_statement"]=_p_expression_statement;
	props["expression_statement1"]=_p_expression_statement1;
	props["expression"]=_p_expression;
	props["statement"]=_p_statement;
	return props;
}


/*the destructor*/
iteration_statement2::~iteration_statement2()
{
	LOG("\033[31mDELETING\033[0m iteration_statement2");
	if(_p_expression_statement)
	{
		delete _p_expression_statement;
		_p_expression_statement=0;
	}
	if(_p_expression_statement1)
	{
		delete _p_expression_statement1;
		_p_expression_statement1=0;
	}
	if(_p_expression)
	{
		delete _p_expression;
		_p_expression=0;
	}
	if(_p_statement)
	{
		delete _p_statement;
		_p_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE iteration_statement3 CLASS                                                                                 
 	FOR PATTERN : [WHILE,'(',expression,')',statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*iteration_statement3::name() returns the name of the class*/
std::string iteration_statement3::name()const {return "iteration_statement3";}

/*iteration_statement3::pattern returns the pattern matched*/
std::string iteration_statement3::pattern()const {return "WHILE,'(',expression,')',statement";}

/*construct from elements*/
iteration_statement3::iteration_statement3
	(
		std::string _arg_s_matchedPattern,
		expression *_arg__p_expression,
		statement *_arg__p_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_expression(_arg__p_expression),
	_p_statement(_arg__p_statement)
{
	LOG("\033[32mCREATING\033[0m iteration_statement3");
}


/*iteration_statement3::getProperties returns a map of properties*/
Properties iteration_statement3::getProperties()const
{
	Properties props(name());
	props["expression"]=_p_expression;
	props["statement"]=_p_statement;
	return props;
}


/*the destructor*/
iteration_statement3::~iteration_statement3()
{
	LOG("\033[31mDELETING\033[0m iteration_statement3");
	if(_p_expression)
	{
		delete _p_expression;
		_p_expression=0;
	}
	if(_p_statement)
	{
		delete _p_statement;
		_p_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE additive_expression CLASS                                                                                 
 	FOR PATTERN : [additive_expression,'+',multiplicative_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class additive_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
additive_expression_item::additive_expression_item
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		multiplicative_expression *_arg__p_multiplicative_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_token1(_arg__p_token1),
	_p_multiplicative_expression(_arg__p_multiplicative_expression)
{
	LOG("\033[32mCREATING\033[0m additive_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
additive_expression_item::additive_expression_item(const additive_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_token1(other._p_token1),
		_p_multiplicative_expression(other._p_multiplicative_expression)
{
	LOG("\033[32mCOPYING\033[0m additive_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*additive_expression_item::getProperties returns a map of properties for the item*/
Properties additive_expression_item::getProperties()const
{
	Properties props("additive_expression_items");
	props["token1"]=_p_token1;
	props["multiplicative_expression"]=_p_multiplicative_expression;
	return props;
}


/*the destructor*/
additive_expression_item::~additive_expression_item()
{
	LOG("\033[31mDELETING?\033[0m additive_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_multiplicative_expression)
	{
		delete _p_multiplicative_expression;
		_p_multiplicative_expression=0;
	}
	LOG("\033[31mDELETED\033[0m additive_expression");
}
/*------------------------------------------------------------*\
 							        
  main class additive_expression                         
                                                                
\*------------------------------------------------------------*/
/*additive_expression::name() returns the name of the class*/
std::string additive_expression::name()const {return "additive_expression";}

/*additive_expression::pattern returns the pattern matched*/
std::string additive_expression::pattern()const {return "additive_expression,'+',multiplicative_expression";}

/*construct from elements*/
additive_expression::additive_expression
	(
		std::string _arg_s_matchedPattern,
		multiplicative_expression *_arg__p_multiplicative_expression
	 )
{
	LOG("\033[32mCREATING\033[0m additive_expression");
	additive_expression_item item(_arg_s_matchedPattern,NULL,_arg__p_multiplicative_expression);
	_items.push_back(item);
}

/*additive_expression::append() appends an item to the list of items*/
void additive_expression::append
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		multiplicative_expression *_arg__p_multiplicative_expression	)
{
	additive_expression_item item(_arg_s_matchedPattern, _arg__p_token1, _arg__p_multiplicative_expression);
	_items.push_back(item);
		
}

/*additive_expression::getPropertyList() returns the list of properties*/
PropertiesList additive_expression::getPropertiesList()const
{
	PropertiesList pList("additive_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
additive_expression::~additive_expression()
{
	LOG("\033[32mDESTOYING\033[0m additive_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE external_declaration1 CLASS                                                                                 
 	FOR PATTERN : [function_definition]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*external_declaration1::name() returns the name of the class*/
std::string external_declaration1::name()const {return "external_declaration1";}

/*external_declaration1::pattern returns the pattern matched*/
std::string external_declaration1::pattern()const {return "function_definition";}

/*construct from elements*/
external_declaration1::external_declaration1
	(
		std::string _arg_s_matchedPattern,
		function_definition *_arg__p_function_definition
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_function_definition(_arg__p_function_definition)
{
	LOG("\033[32mCREATING\033[0m external_declaration1");
}


/*external_declaration1::getProperties returns a map of properties*/
Properties external_declaration1::getProperties()const
{
	Properties props(name());
	props["function_definition"]=_p_function_definition;
	return props;
}


/*the destructor*/
external_declaration1::~external_declaration1()
{
	LOG("\033[31mDELETING\033[0m external_declaration1");
	if(_p_function_definition)
	{
		delete _p_function_definition;
		_p_function_definition=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE external_declaration2 CLASS                                                                                 
 	FOR PATTERN : [declaration]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*external_declaration2::name() returns the name of the class*/
std::string external_declaration2::name()const {return "external_declaration2";}

/*external_declaration2::pattern returns the pattern matched*/
std::string external_declaration2::pattern()const {return "declaration";}

/*construct from elements*/
external_declaration2::external_declaration2
	(
		std::string _arg_s_matchedPattern,
		declaration *_arg__p_declaration
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_declaration(_arg__p_declaration)
{
	LOG("\033[32mCREATING\033[0m external_declaration2");
}


/*external_declaration2::getProperties returns a map of properties*/
Properties external_declaration2::getProperties()const
{
	Properties props(name());
	props["declaration"]=_p_declaration;
	return props;
}


/*the destructor*/
external_declaration2::~external_declaration2()
{
	LOG("\033[31mDELETING\033[0m external_declaration2");
	if(_p_declaration)
	{
		delete _p_declaration;
		_p_declaration=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE type_specifier1 CLASS                                                                                 
 	FOR PATTERN : [VOID]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*type_specifier1::name() returns the name of the class*/
std::string type_specifier1::name()const {return "type_specifier1";}

/*type_specifier1::pattern returns the pattern matched*/
std::string type_specifier1::pattern()const {return "VOID";}

/*construct from elements*/
type_specifier1::type_specifier1
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m type_specifier1");
}


/*type_specifier1::getProperties returns a map of properties*/
Properties type_specifier1::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
type_specifier1::~type_specifier1()
{
	LOG("\033[31mDELETING\033[0m type_specifier1");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE type_specifier2 CLASS                                                                                 
 	FOR PATTERN : [struct_or_union_specifier]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*type_specifier2::name() returns the name of the class*/
std::string type_specifier2::name()const {return "type_specifier2";}

/*type_specifier2::pattern returns the pattern matched*/
std::string type_specifier2::pattern()const {return "struct_or_union_specifier";}

/*construct from elements*/
type_specifier2::type_specifier2
	(
		std::string _arg_s_matchedPattern,
		struct_or_union_specifier *_arg__p_struct_or_union_specifier
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_struct_or_union_specifier(_arg__p_struct_or_union_specifier)
{
	LOG("\033[32mCREATING\033[0m type_specifier2");
}


/*type_specifier2::getProperties returns a map of properties*/
Properties type_specifier2::getProperties()const
{
	Properties props(name());
	props["struct_or_union_specifier"]=_p_struct_or_union_specifier;
	return props;
}


/*the destructor*/
type_specifier2::~type_specifier2()
{
	LOG("\033[31mDELETING\033[0m type_specifier2");
	if(_p_struct_or_union_specifier)
	{
		delete _p_struct_or_union_specifier;
		_p_struct_or_union_specifier=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE type_specifier3 CLASS                                                                                 
 	FOR PATTERN : [enum_specifier]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*type_specifier3::name() returns the name of the class*/
std::string type_specifier3::name()const {return "type_specifier3";}

/*type_specifier3::pattern returns the pattern matched*/
std::string type_specifier3::pattern()const {return "enum_specifier";}

/*construct from elements*/
type_specifier3::type_specifier3
	(
		std::string _arg_s_matchedPattern,
		enum_specifier *_arg__p_enum_specifier
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_enum_specifier(_arg__p_enum_specifier)
{
	LOG("\033[32mCREATING\033[0m type_specifier3");
}


/*type_specifier3::getProperties returns a map of properties*/
Properties type_specifier3::getProperties()const
{
	Properties props(name());
	props["enum_specifier"]=_p_enum_specifier;
	return props;
}


/*the destructor*/
type_specifier3::~type_specifier3()
{
	LOG("\033[31mDELETING\033[0m type_specifier3");
	if(_p_enum_specifier)
	{
		delete _p_enum_specifier;
		_p_enum_specifier=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE compound_statement CLASS                                                                                 
 	FOR PATTERN : ['{',declaration_list,statement_list,'}']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*compound_statement::name() returns the name of the class*/
std::string compound_statement::name()const {return "compound_statement";}

/*compound_statement::pattern returns the pattern matched*/
std::string compound_statement::pattern()const {return "'{',declaration_list,statement_list,'}'";}

/*construct from elements*/
compound_statement::compound_statement
	(
		std::string _arg_s_matchedPattern,
		declaration_list *_arg__p_declaration_list,
		statement_list *_arg__p_statement_list
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_declaration_list(_arg__p_declaration_list),
	_p_statement_list(_arg__p_statement_list)
{
	LOG("\033[32mCREATING\033[0m compound_statement");
}


/*compound_statement::getProperties returns a map of properties*/
Properties compound_statement::getProperties()const
{
	Properties props(name());
	props["declaration_list"]=_p_declaration_list;
	props["statement_list"]=_p_statement_list;
	return props;
}


/*the destructor*/
compound_statement::~compound_statement()
{
	LOG("\033[31mDELETING\033[0m compound_statement");
	if(_p_declaration_list)
	{
		delete _p_declaration_list;
		_p_declaration_list=0;
	}
	if(_p_statement_list)
	{
		delete _p_statement_list;
		_p_statement_list=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE inclusive_or_expression CLASS                                                                                 
 	FOR PATTERN : [inclusive_or_expression,'|',exclusive_or_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class inclusive_or_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
inclusive_or_expression_item::inclusive_or_expression_item
	(
		std::string _arg_s_matchedPattern,
		exclusive_or_expression *_arg__p_exclusive_or_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_exclusive_or_expression(_arg__p_exclusive_or_expression)
{
	LOG("\033[32mCREATING\033[0m inclusive_or_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
inclusive_or_expression_item::inclusive_or_expression_item(const inclusive_or_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_exclusive_or_expression(other._p_exclusive_or_expression)
{
	LOG("\033[32mCOPYING\033[0m inclusive_or_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*inclusive_or_expression_item::getProperties returns a map of properties for the item*/
Properties inclusive_or_expression_item::getProperties()const
{
	Properties props("inclusive_or_expression_items");
	props["exclusive_or_expression"]=_p_exclusive_or_expression;
	return props;
}


/*the destructor*/
inclusive_or_expression_item::~inclusive_or_expression_item()
{
	LOG("\033[31mDELETING?\033[0m inclusive_or_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_exclusive_or_expression)
	{
		delete _p_exclusive_or_expression;
		_p_exclusive_or_expression=0;
	}
	LOG("\033[31mDELETED\033[0m inclusive_or_expression");
}
/*------------------------------------------------------------*\
 							        
  main class inclusive_or_expression                         
                                                                
\*------------------------------------------------------------*/
/*inclusive_or_expression::name() returns the name of the class*/
std::string inclusive_or_expression::name()const {return "inclusive_or_expression";}

/*inclusive_or_expression::pattern returns the pattern matched*/
std::string inclusive_or_expression::pattern()const {return "inclusive_or_expression,'|',exclusive_or_expression";}

/*construct from elements*/
inclusive_or_expression::inclusive_or_expression
	(
		std::string _arg_s_matchedPattern,
		exclusive_or_expression *_arg__p_exclusive_or_expression
	 )
{
	LOG("\033[32mCREATING\033[0m inclusive_or_expression");
	inclusive_or_expression_item item(_arg_s_matchedPattern,_arg__p_exclusive_or_expression);
	_items.push_back(item);
}

/*inclusive_or_expression::append() appends an item to the list of items*/
void inclusive_or_expression::append
	(
		std::string _arg_s_matchedPattern,
		exclusive_or_expression *_arg__p_exclusive_or_expression	)
{
	inclusive_or_expression_item item(_arg_s_matchedPattern, _arg__p_exclusive_or_expression);
	_items.push_back(item);
		
}

/*inclusive_or_expression::getPropertyList() returns the list of properties*/
PropertiesList inclusive_or_expression::getPropertiesList()const
{
	PropertiesList pList("inclusive_or_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
inclusive_or_expression::~inclusive_or_expression()
{
	LOG("\033[32mDESTOYING\033[0m inclusive_or_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE pointer CLASS                                                                                 
 	FOR PATTERN : ['*',type_qualifier_list,pointer]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class pointer_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
pointer_item::pointer_item
	(
		std::string _arg_s_matchedPattern,
		type_qualifier_list *_arg__p_type_qualifier_list
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_type_qualifier_list(_arg__p_type_qualifier_list)
{
	LOG("\033[32mCREATING\033[0m pointer");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
pointer_item::pointer_item(const pointer_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_type_qualifier_list(other._p_type_qualifier_list)
{
	LOG("\033[32mCOPYING\033[0m pointer_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*pointer_item::getProperties returns a map of properties for the item*/
Properties pointer_item::getProperties()const
{
	Properties props("pointer_items");
	props["type_qualifier_list"]=_p_type_qualifier_list;
	return props;
}


/*the destructor*/
pointer_item::~pointer_item()
{
	LOG("\033[31mDELETING?\033[0m pointer_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_type_qualifier_list)
	{
		delete _p_type_qualifier_list;
		_p_type_qualifier_list=0;
	}
	LOG("\033[31mDELETED\033[0m pointer");
}
/*------------------------------------------------------------*\
 							        
  main class pointer                         
                                                                
\*------------------------------------------------------------*/
/*pointer::name() returns the name of the class*/
std::string pointer::name()const {return "pointer";}

/*pointer::pattern returns the pattern matched*/
std::string pointer::pattern()const {return "'*',type_qualifier_list,pointer";}

/*construct from elements*/
pointer::pointer
	(
		std::string _arg_s_matchedPattern,
		type_qualifier_list *_arg__p_type_qualifier_list
	 )
{
	LOG("\033[32mCREATING\033[0m pointer");
	pointer_item item(_arg_s_matchedPattern,_arg__p_type_qualifier_list);
	_items.push_back(item);
}

/*pointer::append() appends an item to the list of items*/
void pointer::append
	(
		std::string _arg_s_matchedPattern,
		type_qualifier_list *_arg__p_type_qualifier_list	)
{
	pointer_item item(_arg_s_matchedPattern, _arg__p_type_qualifier_list);
	_items.push_back(item);
		
}

/*pointer::getPropertyList() returns the list of properties*/
PropertiesList pointer::getPropertiesList()const
{
	PropertiesList pList("pointer");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
pointer::~pointer()
{
	LOG("\033[32mDESTOYING\033[0m pointer");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE selection_statement1 CLASS                                                                                 
 	FOR PATTERN : [IF,'(',expression,')',statement,ELSE,statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*selection_statement1::name() returns the name of the class*/
std::string selection_statement1::name()const {return "selection_statement1";}

/*selection_statement1::pattern returns the pattern matched*/
std::string selection_statement1::pattern()const {return "IF,'(',expression,')',statement,ELSE,statement";}

/*construct from elements*/
selection_statement1::selection_statement1
	(
		std::string _arg_s_matchedPattern,
		expression *_arg__p_expression,
		statement *_arg__p_statement,
		Token *_arg__p_token1,
		statement *_arg__p_statement1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_expression(_arg__p_expression),
	_p_statement(_arg__p_statement),
	_p_token1(_arg__p_token1),
	_p_statement1(_arg__p_statement1)
{
	LOG("\033[32mCREATING\033[0m selection_statement1");
}


/*selection_statement1::getProperties returns a map of properties*/
Properties selection_statement1::getProperties()const
{
	Properties props(name());
	props["expression"]=_p_expression;
	props["statement"]=_p_statement;
	props["token1"]=_p_token1;
	props["statement1"]=_p_statement1;
	return props;
}


/*the destructor*/
selection_statement1::~selection_statement1()
{
	LOG("\033[31mDELETING\033[0m selection_statement1");
	if(_p_expression)
	{
		delete _p_expression;
		_p_expression=0;
	}
	if(_p_statement)
	{
		delete _p_statement;
		_p_statement=0;
	}
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_statement1)
	{
		delete _p_statement1;
		_p_statement1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE selection_statement2 CLASS                                                                                 
 	FOR PATTERN : [SWITCH,'(',expression,')',statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*selection_statement2::name() returns the name of the class*/
std::string selection_statement2::name()const {return "selection_statement2";}

/*selection_statement2::pattern returns the pattern matched*/
std::string selection_statement2::pattern()const {return "SWITCH,'(',expression,')',statement";}

/*construct from elements*/
selection_statement2::selection_statement2
	(
		std::string _arg_s_matchedPattern,
		expression *_arg__p_expression,
		statement *_arg__p_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_expression(_arg__p_expression),
	_p_statement(_arg__p_statement)
{
	LOG("\033[32mCREATING\033[0m selection_statement2");
}


/*selection_statement2::getProperties returns a map of properties*/
Properties selection_statement2::getProperties()const
{
	Properties props(name());
	props["expression"]=_p_expression;
	props["statement"]=_p_statement;
	return props;
}


/*the destructor*/
selection_statement2::~selection_statement2()
{
	LOG("\033[31mDELETING\033[0m selection_statement2");
	if(_p_expression)
	{
		delete _p_expression;
		_p_expression=0;
	}
	if(_p_statement)
	{
		delete _p_statement;
		_p_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression1 CLASS                                                                                 
 	FOR PATTERN : [postfix_expression,'[',expression,']']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*postfix_expression1::name() returns the name of the class*/
std::string postfix_expression1::name()const {return "postfix_expression1";}

/*postfix_expression1::pattern returns the pattern matched*/
std::string postfix_expression1::pattern()const {return "postfix_expression,'[',expression,']'";}

/*construct from elements*/
postfix_expression1::postfix_expression1
	(
		std::string _arg_s_matchedPattern,
		postfix_expression *_arg__p_postfix_expression,
		expression *_arg__p_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_postfix_expression(_arg__p_postfix_expression),
	_p_expression(_arg__p_expression)
{
	LOG("\033[32mCREATING\033[0m postfix_expression1");
}


/*postfix_expression1::getProperties returns a map of properties*/
Properties postfix_expression1::getProperties()const
{
	Properties props(name());
	props["postfix_expression"]=_p_postfix_expression;
	props["expression"]=_p_expression;
	return props;
}


/*the destructor*/
postfix_expression1::~postfix_expression1()
{
	LOG("\033[31mDELETING\033[0m postfix_expression1");
	if(_p_postfix_expression)
	{
		delete _p_postfix_expression;
		_p_postfix_expression=0;
	}
	if(_p_expression)
	{
		delete _p_expression;
		_p_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression2 CLASS                                                                                 
 	FOR PATTERN : [postfix_expression,'(',argument_expression_list,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*postfix_expression2::name() returns the name of the class*/
std::string postfix_expression2::name()const {return "postfix_expression2";}

/*postfix_expression2::pattern returns the pattern matched*/
std::string postfix_expression2::pattern()const {return "postfix_expression,'(',argument_expression_list,')'";}

/*construct from elements*/
postfix_expression2::postfix_expression2
	(
		std::string _arg_s_matchedPattern,
		postfix_expression *_arg__p_postfix_expression,
		argument_expression_list *_arg__p_argument_expression_list
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_postfix_expression(_arg__p_postfix_expression),
	_p_argument_expression_list(_arg__p_argument_expression_list)
{
	LOG("\033[32mCREATING\033[0m postfix_expression2");
}


/*postfix_expression2::getProperties returns a map of properties*/
Properties postfix_expression2::getProperties()const
{
	Properties props(name());
	props["postfix_expression"]=_p_postfix_expression;
	props["argument_expression_list"]=_p_argument_expression_list;
	return props;
}


/*the destructor*/
postfix_expression2::~postfix_expression2()
{
	LOG("\033[31mDELETING\033[0m postfix_expression2");
	if(_p_postfix_expression)
	{
		delete _p_postfix_expression;
		_p_postfix_expression=0;
	}
	if(_p_argument_expression_list)
	{
		delete _p_argument_expression_list;
		_p_argument_expression_list=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression3 CLASS                                                                                 
 	FOR PATTERN : [postfix_expression,'.',IDENTIFIER]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*postfix_expression3::name() returns the name of the class*/
std::string postfix_expression3::name()const {return "postfix_expression3";}

/*postfix_expression3::pattern returns the pattern matched*/
std::string postfix_expression3::pattern()const {return "postfix_expression,'.',IDENTIFIER";}

/*construct from elements*/
postfix_expression3::postfix_expression3
	(
		std::string _arg_s_matchedPattern,
		postfix_expression *_arg__p_postfix_expression,
		Token *_arg__p_token1,
		Token *_arg__p_token2
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_postfix_expression(_arg__p_postfix_expression),
	_p_token1(_arg__p_token1),
	_p_token2(_arg__p_token2)
{
	LOG("\033[32mCREATING\033[0m postfix_expression3");
}


/*postfix_expression3::getProperties returns a map of properties*/
Properties postfix_expression3::getProperties()const
{
	Properties props(name());
	props["postfix_expression"]=_p_postfix_expression;
	props["token1"]=_p_token1;
	props["token2"]=_p_token2;
	return props;
}


/*the destructor*/
postfix_expression3::~postfix_expression3()
{
	LOG("\033[31mDELETING\033[0m postfix_expression3");
	if(_p_postfix_expression)
	{
		delete _p_postfix_expression;
		_p_postfix_expression=0;
	}
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_token2)
	{
		delete _p_token2;
		_p_token2=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression4 CLASS                                                                                 
 	FOR PATTERN : [postfix_expression,INC_OP]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*postfix_expression4::name() returns the name of the class*/
std::string postfix_expression4::name()const {return "postfix_expression4";}

/*postfix_expression4::pattern returns the pattern matched*/
std::string postfix_expression4::pattern()const {return "postfix_expression,INC_OP";}

/*construct from elements*/
postfix_expression4::postfix_expression4
	(
		std::string _arg_s_matchedPattern,
		postfix_expression *_arg__p_postfix_expression,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_postfix_expression(_arg__p_postfix_expression),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m postfix_expression4");
}


/*postfix_expression4::getProperties returns a map of properties*/
Properties postfix_expression4::getProperties()const
{
	Properties props(name());
	props["postfix_expression"]=_p_postfix_expression;
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
postfix_expression4::~postfix_expression4()
{
	LOG("\033[31mDELETING\033[0m postfix_expression4");
	if(_p_postfix_expression)
	{
		delete _p_postfix_expression;
		_p_postfix_expression=0;
	}
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression5 CLASS                                                                                 
 	FOR PATTERN : [primary_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*postfix_expression5::name() returns the name of the class*/
std::string postfix_expression5::name()const {return "postfix_expression5";}

/*postfix_expression5::pattern returns the pattern matched*/
std::string postfix_expression5::pattern()const {return "primary_expression";}

/*construct from elements*/
postfix_expression5::postfix_expression5
	(
		std::string _arg_s_matchedPattern,
		primary_expression *_arg__p_primary_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_primary_expression(_arg__p_primary_expression)
{
	LOG("\033[32mCREATING\033[0m postfix_expression5");
}


/*postfix_expression5::getProperties returns a map of properties*/
Properties postfix_expression5::getProperties()const
{
	Properties props(name());
	props["primary_expression"]=_p_primary_expression;
	return props;
}


/*the destructor*/
postfix_expression5::~postfix_expression5()
{
	LOG("\033[31mDELETING\033[0m postfix_expression5");
	if(_p_primary_expression)
	{
		delete _p_primary_expression;
		_p_primary_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE and_expression CLASS                                                                                 
 	FOR PATTERN : [and_expression,'&',equality_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class and_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
and_expression_item::and_expression_item
	(
		std::string _arg_s_matchedPattern,
		equality_expression *_arg__p_equality_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_equality_expression(_arg__p_equality_expression)
{
	LOG("\033[32mCREATING\033[0m and_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
and_expression_item::and_expression_item(const and_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_equality_expression(other._p_equality_expression)
{
	LOG("\033[32mCOPYING\033[0m and_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*and_expression_item::getProperties returns a map of properties for the item*/
Properties and_expression_item::getProperties()const
{
	Properties props("and_expression_items");
	props["equality_expression"]=_p_equality_expression;
	return props;
}


/*the destructor*/
and_expression_item::~and_expression_item()
{
	LOG("\033[31mDELETING?\033[0m and_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_equality_expression)
	{
		delete _p_equality_expression;
		_p_equality_expression=0;
	}
	LOG("\033[31mDELETED\033[0m and_expression");
}
/*------------------------------------------------------------*\
 							        
  main class and_expression                         
                                                                
\*------------------------------------------------------------*/
/*and_expression::name() returns the name of the class*/
std::string and_expression::name()const {return "and_expression";}

/*and_expression::pattern returns the pattern matched*/
std::string and_expression::pattern()const {return "and_expression,'&',equality_expression";}

/*construct from elements*/
and_expression::and_expression
	(
		std::string _arg_s_matchedPattern,
		equality_expression *_arg__p_equality_expression
	 )
{
	LOG("\033[32mCREATING\033[0m and_expression");
	and_expression_item item(_arg_s_matchedPattern,_arg__p_equality_expression);
	_items.push_back(item);
}

/*and_expression::append() appends an item to the list of items*/
void and_expression::append
	(
		std::string _arg_s_matchedPattern,
		equality_expression *_arg__p_equality_expression	)
{
	and_expression_item item(_arg_s_matchedPattern, _arg__p_equality_expression);
	_items.push_back(item);
		
}

/*and_expression::getPropertyList() returns the list of properties*/
PropertiesList and_expression::getPropertiesList()const
{
	PropertiesList pList("and_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
and_expression::~and_expression()
{
	LOG("\033[32mDESTOYING\033[0m and_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE statement1 CLASS                                                                                 
 	FOR PATTERN : [labeled_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*statement1::name() returns the name of the class*/
std::string statement1::name()const {return "statement1";}

/*statement1::pattern returns the pattern matched*/
std::string statement1::pattern()const {return "labeled_statement";}

/*construct from elements*/
statement1::statement1
	(
		std::string _arg_s_matchedPattern,
		labeled_statement *_arg__p_labeled_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_labeled_statement(_arg__p_labeled_statement)
{
	LOG("\033[32mCREATING\033[0m statement1");
}


/*statement1::getProperties returns a map of properties*/
Properties statement1::getProperties()const
{
	Properties props(name());
	props["labeled_statement"]=_p_labeled_statement;
	return props;
}


/*the destructor*/
statement1::~statement1()
{
	LOG("\033[31mDELETING\033[0m statement1");
	if(_p_labeled_statement)
	{
		delete _p_labeled_statement;
		_p_labeled_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE statement2 CLASS                                                                                 
 	FOR PATTERN : [compound_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*statement2::name() returns the name of the class*/
std::string statement2::name()const {return "statement2";}

/*statement2::pattern returns the pattern matched*/
std::string statement2::pattern()const {return "compound_statement";}

/*construct from elements*/
statement2::statement2
	(
		std::string _arg_s_matchedPattern,
		compound_statement *_arg__p_compound_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_compound_statement(_arg__p_compound_statement)
{
	LOG("\033[32mCREATING\033[0m statement2");
}


/*statement2::getProperties returns a map of properties*/
Properties statement2::getProperties()const
{
	Properties props(name());
	props["compound_statement"]=_p_compound_statement;
	return props;
}


/*the destructor*/
statement2::~statement2()
{
	LOG("\033[31mDELETING\033[0m statement2");
	if(_p_compound_statement)
	{
		delete _p_compound_statement;
		_p_compound_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE statement3 CLASS                                                                                 
 	FOR PATTERN : [expression_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*statement3::name() returns the name of the class*/
std::string statement3::name()const {return "statement3";}

/*statement3::pattern returns the pattern matched*/
std::string statement3::pattern()const {return "expression_statement";}

/*construct from elements*/
statement3::statement3
	(
		std::string _arg_s_matchedPattern,
		expression_statement *_arg__p_expression_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_expression_statement(_arg__p_expression_statement)
{
	LOG("\033[32mCREATING\033[0m statement3");
}


/*statement3::getProperties returns a map of properties*/
Properties statement3::getProperties()const
{
	Properties props(name());
	props["expression_statement"]=_p_expression_statement;
	return props;
}


/*the destructor*/
statement3::~statement3()
{
	LOG("\033[31mDELETING\033[0m statement3");
	if(_p_expression_statement)
	{
		delete _p_expression_statement;
		_p_expression_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE statement4 CLASS                                                                                 
 	FOR PATTERN : [selection_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*statement4::name() returns the name of the class*/
std::string statement4::name()const {return "statement4";}

/*statement4::pattern returns the pattern matched*/
std::string statement4::pattern()const {return "selection_statement";}

/*construct from elements*/
statement4::statement4
	(
		std::string _arg_s_matchedPattern,
		selection_statement *_arg__p_selection_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_selection_statement(_arg__p_selection_statement)
{
	LOG("\033[32mCREATING\033[0m statement4");
}


/*statement4::getProperties returns a map of properties*/
Properties statement4::getProperties()const
{
	Properties props(name());
	props["selection_statement"]=_p_selection_statement;
	return props;
}


/*the destructor*/
statement4::~statement4()
{
	LOG("\033[31mDELETING\033[0m statement4");
	if(_p_selection_statement)
	{
		delete _p_selection_statement;
		_p_selection_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE statement5 CLASS                                                                                 
 	FOR PATTERN : [iteration_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*statement5::name() returns the name of the class*/
std::string statement5::name()const {return "statement5";}

/*statement5::pattern returns the pattern matched*/
std::string statement5::pattern()const {return "iteration_statement";}

/*construct from elements*/
statement5::statement5
	(
		std::string _arg_s_matchedPattern,
		iteration_statement *_arg__p_iteration_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_iteration_statement(_arg__p_iteration_statement)
{
	LOG("\033[32mCREATING\033[0m statement5");
}


/*statement5::getProperties returns a map of properties*/
Properties statement5::getProperties()const
{
	Properties props(name());
	props["iteration_statement"]=_p_iteration_statement;
	return props;
}


/*the destructor*/
statement5::~statement5()
{
	LOG("\033[31mDELETING\033[0m statement5");
	if(_p_iteration_statement)
	{
		delete _p_iteration_statement;
		_p_iteration_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE statement6 CLASS                                                                                 
 	FOR PATTERN : [jump_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*statement6::name() returns the name of the class*/
std::string statement6::name()const {return "statement6";}

/*statement6::pattern returns the pattern matched*/
std::string statement6::pattern()const {return "jump_statement";}

/*construct from elements*/
statement6::statement6
	(
		std::string _arg_s_matchedPattern,
		jump_statement *_arg__p_jump_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_jump_statement(_arg__p_jump_statement)
{
	LOG("\033[32mCREATING\033[0m statement6");
}


/*statement6::getProperties returns a map of properties*/
Properties statement6::getProperties()const
{
	Properties props(name());
	props["jump_statement"]=_p_jump_statement;
	return props;
}


/*the destructor*/
statement6::~statement6()
{
	LOG("\033[31mDELETING\033[0m statement6");
	if(_p_jump_statement)
	{
		delete _p_jump_statement;
		_p_jump_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE cast_expression1 CLASS                                                                                 
 	FOR PATTERN : ['(',type_name,')',cast_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*cast_expression1::name() returns the name of the class*/
std::string cast_expression1::name()const {return "cast_expression1";}

/*cast_expression1::pattern returns the pattern matched*/
std::string cast_expression1::pattern()const {return "'(',type_name,')',cast_expression";}

/*construct from elements*/
cast_expression1::cast_expression1
	(
		std::string _arg_s_matchedPattern,
		type_name *_arg__p_type_name,
		cast_expression *_arg__p_cast_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_type_name(_arg__p_type_name),
	_p_cast_expression(_arg__p_cast_expression)
{
	LOG("\033[32mCREATING\033[0m cast_expression1");
}


/*cast_expression1::getProperties returns a map of properties*/
Properties cast_expression1::getProperties()const
{
	Properties props(name());
	props["type_name"]=_p_type_name;
	props["cast_expression"]=_p_cast_expression;
	return props;
}


/*the destructor*/
cast_expression1::~cast_expression1()
{
	LOG("\033[31mDELETING\033[0m cast_expression1");
	if(_p_type_name)
	{
		delete _p_type_name;
		_p_type_name=0;
	}
	if(_p_cast_expression)
	{
		delete _p_cast_expression;
		_p_cast_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE cast_expression2 CLASS                                                                                 
 	FOR PATTERN : [unary_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*cast_expression2::name() returns the name of the class*/
std::string cast_expression2::name()const {return "cast_expression2";}

/*cast_expression2::pattern returns the pattern matched*/
std::string cast_expression2::pattern()const {return "unary_expression";}

/*construct from elements*/
cast_expression2::cast_expression2
	(
		std::string _arg_s_matchedPattern,
		unary_expression *_arg__p_unary_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_unary_expression(_arg__p_unary_expression)
{
	LOG("\033[32mCREATING\033[0m cast_expression2");
}


/*cast_expression2::getProperties returns a map of properties*/
Properties cast_expression2::getProperties()const
{
	Properties props(name());
	props["unary_expression"]=_p_unary_expression;
	return props;
}


/*the destructor*/
cast_expression2::~cast_expression2()
{
	LOG("\033[31mDELETING\033[0m cast_expression2");
	if(_p_unary_expression)
	{
		delete _p_unary_expression;
		_p_unary_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE init_declarator CLASS                                                                                 
 	FOR PATTERN : [declarator,'=',initializer]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*init_declarator::name() returns the name of the class*/
std::string init_declarator::name()const {return "init_declarator";}

/*init_declarator::pattern returns the pattern matched*/
std::string init_declarator::pattern()const {return "declarator,'=',initializer";}

/*construct from elements*/
init_declarator::init_declarator
	(
		std::string _arg_s_matchedPattern,
		declarator *_arg__p_declarator,
		Token *_arg__p_token1,
		initializer *_arg__p_initializer
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_declarator(_arg__p_declarator),
	_p_token1(_arg__p_token1),
	_p_initializer(_arg__p_initializer)
{
	LOG("\033[32mCREATING\033[0m init_declarator");
}


/*init_declarator::getProperties returns a map of properties*/
Properties init_declarator::getProperties()const
{
	Properties props(name());
	props["declarator"]=_p_declarator;
	props["token1"]=_p_token1;
	props["initializer"]=_p_initializer;
	return props;
}


/*the destructor*/
init_declarator::~init_declarator()
{
	LOG("\033[31mDELETING\033[0m init_declarator");
	if(_p_declarator)
	{
		delete _p_declarator;
		_p_declarator=0;
	}
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_initializer)
	{
		delete _p_initializer;
		_p_initializer=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE struct_declarator_list CLASS                                                                                 
 	FOR PATTERN : [struct_declarator_list,',',struct_declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class struct_declarator_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
struct_declarator_list_item::struct_declarator_list_item
	(
		std::string _arg_s_matchedPattern,
		struct_declarator *_arg__p_struct_declarator
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_struct_declarator(_arg__p_struct_declarator)
{
	LOG("\033[32mCREATING\033[0m struct_declarator_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
struct_declarator_list_item::struct_declarator_list_item(const struct_declarator_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_struct_declarator(other._p_struct_declarator)
{
	LOG("\033[32mCOPYING\033[0m struct_declarator_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*struct_declarator_list_item::getProperties returns a map of properties for the item*/
Properties struct_declarator_list_item::getProperties()const
{
	Properties props("struct_declarator_list_items");
	props["struct_declarator"]=_p_struct_declarator;
	return props;
}


/*the destructor*/
struct_declarator_list_item::~struct_declarator_list_item()
{
	LOG("\033[31mDELETING?\033[0m struct_declarator_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_struct_declarator)
	{
		delete _p_struct_declarator;
		_p_struct_declarator=0;
	}
	LOG("\033[31mDELETED\033[0m struct_declarator_list");
}
/*------------------------------------------------------------*\
 							        
  main class struct_declarator_list                         
                                                                
\*------------------------------------------------------------*/
/*struct_declarator_list::name() returns the name of the class*/
std::string struct_declarator_list::name()const {return "struct_declarator_list";}

/*struct_declarator_list::pattern returns the pattern matched*/
std::string struct_declarator_list::pattern()const {return "struct_declarator_list,',',struct_declarator";}

/*construct from elements*/
struct_declarator_list::struct_declarator_list
	(
		std::string _arg_s_matchedPattern,
		struct_declarator *_arg__p_struct_declarator
	 )
{
	LOG("\033[32mCREATING\033[0m struct_declarator_list");
	struct_declarator_list_item item(_arg_s_matchedPattern,_arg__p_struct_declarator);
	_items.push_back(item);
}

/*struct_declarator_list::append() appends an item to the list of items*/
void struct_declarator_list::append
	(
		std::string _arg_s_matchedPattern,
		struct_declarator *_arg__p_struct_declarator	)
{
	struct_declarator_list_item item(_arg_s_matchedPattern, _arg__p_struct_declarator);
	_items.push_back(item);
		
}

/*struct_declarator_list::getPropertyList() returns the list of properties*/
PropertiesList struct_declarator_list::getPropertiesList()const
{
	PropertiesList pList("struct_declarator_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
struct_declarator_list::~struct_declarator_list()
{
	LOG("\033[32mDESTOYING\033[0m struct_declarator_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE logical_or_expression CLASS                                                                                 
 	FOR PATTERN : [logical_or_expression,OR_OP,logical_and_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class logical_or_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
logical_or_expression_item::logical_or_expression_item
	(
		std::string _arg_s_matchedPattern,
		logical_and_expression *_arg__p_logical_and_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_logical_and_expression(_arg__p_logical_and_expression)
{
	LOG("\033[32mCREATING\033[0m logical_or_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
logical_or_expression_item::logical_or_expression_item(const logical_or_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_logical_and_expression(other._p_logical_and_expression)
{
	LOG("\033[32mCOPYING\033[0m logical_or_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*logical_or_expression_item::getProperties returns a map of properties for the item*/
Properties logical_or_expression_item::getProperties()const
{
	Properties props("logical_or_expression_items");
	props["logical_and_expression"]=_p_logical_and_expression;
	return props;
}


/*the destructor*/
logical_or_expression_item::~logical_or_expression_item()
{
	LOG("\033[31mDELETING?\033[0m logical_or_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_logical_and_expression)
	{
		delete _p_logical_and_expression;
		_p_logical_and_expression=0;
	}
	LOG("\033[31mDELETED\033[0m logical_or_expression");
}
/*------------------------------------------------------------*\
 							        
  main class logical_or_expression                         
                                                                
\*------------------------------------------------------------*/
/*logical_or_expression::name() returns the name of the class*/
std::string logical_or_expression::name()const {return "logical_or_expression";}

/*logical_or_expression::pattern returns the pattern matched*/
std::string logical_or_expression::pattern()const {return "logical_or_expression,OR_OP,logical_and_expression";}

/*construct from elements*/
logical_or_expression::logical_or_expression
	(
		std::string _arg_s_matchedPattern,
		logical_and_expression *_arg__p_logical_and_expression
	 )
{
	LOG("\033[32mCREATING\033[0m logical_or_expression");
	logical_or_expression_item item(_arg_s_matchedPattern,_arg__p_logical_and_expression);
	_items.push_back(item);
}

/*logical_or_expression::append() appends an item to the list of items*/
void logical_or_expression::append
	(
		std::string _arg_s_matchedPattern,
		logical_and_expression *_arg__p_logical_and_expression	)
{
	logical_or_expression_item item(_arg_s_matchedPattern, _arg__p_logical_and_expression);
	_items.push_back(item);
		
}

/*logical_or_expression::getPropertyList() returns the list of properties*/
PropertiesList logical_or_expression::getPropertiesList()const
{
	PropertiesList pList("logical_or_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
logical_or_expression::~logical_or_expression()
{
	LOG("\033[32mDESTOYING\033[0m logical_or_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE unary_operator CLASS                                                                                 
 	FOR PATTERN : ['&']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*unary_operator::name() returns the name of the class*/
std::string unary_operator::name()const {return "unary_operator";}

/*unary_operator::pattern returns the pattern matched*/
std::string unary_operator::pattern()const {return "'&'";}

/*construct from elements*/
unary_operator::unary_operator
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m unary_operator");
}


/*unary_operator::getProperties returns a map of properties*/
Properties unary_operator::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
unary_operator::~unary_operator()
{
	LOG("\033[31mDELETING\033[0m unary_operator");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE relational_expression CLASS                                                                                 
 	FOR PATTERN : [relational_expression,'<',shift_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class relational_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
relational_expression_item::relational_expression_item
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		shift_expression *_arg__p_shift_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_token1(_arg__p_token1),
	_p_shift_expression(_arg__p_shift_expression)
{
	LOG("\033[32mCREATING\033[0m relational_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
relational_expression_item::relational_expression_item(const relational_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_token1(other._p_token1),
		_p_shift_expression(other._p_shift_expression)
{
	LOG("\033[32mCOPYING\033[0m relational_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*relational_expression_item::getProperties returns a map of properties for the item*/
Properties relational_expression_item::getProperties()const
{
	Properties props("relational_expression_items");
	props["token1"]=_p_token1;
	props["shift_expression"]=_p_shift_expression;
	return props;
}


/*the destructor*/
relational_expression_item::~relational_expression_item()
{
	LOG("\033[31mDELETING?\033[0m relational_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_shift_expression)
	{
		delete _p_shift_expression;
		_p_shift_expression=0;
	}
	LOG("\033[31mDELETED\033[0m relational_expression");
}
/*------------------------------------------------------------*\
 							        
  main class relational_expression                         
                                                                
\*------------------------------------------------------------*/
/*relational_expression::name() returns the name of the class*/
std::string relational_expression::name()const {return "relational_expression";}

/*relational_expression::pattern returns the pattern matched*/
std::string relational_expression::pattern()const {return "relational_expression,'<',shift_expression";}

/*construct from elements*/
relational_expression::relational_expression
	(
		std::string _arg_s_matchedPattern,
		shift_expression *_arg__p_shift_expression
	 )
{
	LOG("\033[32mCREATING\033[0m relational_expression");
	relational_expression_item item(_arg_s_matchedPattern,NULL,_arg__p_shift_expression);
	_items.push_back(item);
}

/*relational_expression::append() appends an item to the list of items*/
void relational_expression::append
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		shift_expression *_arg__p_shift_expression	)
{
	relational_expression_item item(_arg_s_matchedPattern, _arg__p_token1, _arg__p_shift_expression);
	_items.push_back(item);
		
}

/*relational_expression::getPropertyList() returns the list of properties*/
PropertiesList relational_expression::getPropertiesList()const
{
	PropertiesList pList("relational_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
relational_expression::~relational_expression()
{
	LOG("\033[32mDESTOYING\033[0m relational_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE struct_or_union CLASS                                                                                 
 	FOR PATTERN : [STRUCT]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*struct_or_union::name() returns the name of the class*/
std::string struct_or_union::name()const {return "struct_or_union";}

/*struct_or_union::pattern returns the pattern matched*/
std::string struct_or_union::pattern()const {return "STRUCT";}

/*construct from elements*/
struct_or_union::struct_or_union
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m struct_or_union");
}


/*struct_or_union::getProperties returns a map of properties*/
Properties struct_or_union::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
struct_or_union::~struct_or_union()
{
	LOG("\033[31mDELETING\033[0m struct_or_union");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE enumerator CLASS                                                                                 
 	FOR PATTERN : [IDENTIFIER,'=',constant_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*enumerator::name() returns the name of the class*/
std::string enumerator::name()const {return "enumerator";}

/*enumerator::pattern returns the pattern matched*/
std::string enumerator::pattern()const {return "IDENTIFIER,'=',constant_expression";}

/*construct from elements*/
enumerator::enumerator
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		Token *_arg__p_token2,
		constant_expression *_arg__p_constant_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1),
	_p_token2(_arg__p_token2),
	_p_constant_expression(_arg__p_constant_expression)
{
	LOG("\033[32mCREATING\033[0m enumerator");
}


/*enumerator::getProperties returns a map of properties*/
Properties enumerator::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	props["token2"]=_p_token2;
	props["constant_expression"]=_p_constant_expression;
	return props;
}


/*the destructor*/
enumerator::~enumerator()
{
	LOG("\033[31mDELETING\033[0m enumerator");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_token2)
	{
		delete _p_token2;
		_p_token2=0;
	}
	if(_p_constant_expression)
	{
		delete _p_constant_expression;
		_p_constant_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE assignment_expression1 CLASS                                                                                 
 	FOR PATTERN : [unary_expression,assignment_operator,assignment_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*assignment_expression1::name() returns the name of the class*/
std::string assignment_expression1::name()const {return "assignment_expression1";}

/*assignment_expression1::pattern returns the pattern matched*/
std::string assignment_expression1::pattern()const {return "unary_expression,assignment_operator,assignment_expression";}

/*construct from elements*/
assignment_expression1::assignment_expression1
	(
		std::string _arg_s_matchedPattern,
		unary_expression *_arg__p_unary_expression,
		assignment_operator *_arg__p_assignment_operator,
		assignment_expression *_arg__p_assignment_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_unary_expression(_arg__p_unary_expression),
	_p_assignment_operator(_arg__p_assignment_operator),
	_p_assignment_expression(_arg__p_assignment_expression)
{
	LOG("\033[32mCREATING\033[0m assignment_expression1");
}


/*assignment_expression1::getProperties returns a map of properties*/
Properties assignment_expression1::getProperties()const
{
	Properties props(name());
	props["unary_expression"]=_p_unary_expression;
	props["assignment_operator"]=_p_assignment_operator;
	props["assignment_expression"]=_p_assignment_expression;
	return props;
}


/*the destructor*/
assignment_expression1::~assignment_expression1()
{
	LOG("\033[31mDELETING\033[0m assignment_expression1");
	if(_p_unary_expression)
	{
		delete _p_unary_expression;
		_p_unary_expression=0;
	}
	if(_p_assignment_operator)
	{
		delete _p_assignment_operator;
		_p_assignment_operator=0;
	}
	if(_p_assignment_expression)
	{
		delete _p_assignment_expression;
		_p_assignment_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE assignment_expression2 CLASS                                                                                 
 	FOR PATTERN : [conditional_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*assignment_expression2::name() returns the name of the class*/
std::string assignment_expression2::name()const {return "assignment_expression2";}

/*assignment_expression2::pattern returns the pattern matched*/
std::string assignment_expression2::pattern()const {return "conditional_expression";}

/*construct from elements*/
assignment_expression2::assignment_expression2
	(
		std::string _arg_s_matchedPattern,
		conditional_expression *_arg__p_conditional_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_conditional_expression(_arg__p_conditional_expression)
{
	LOG("\033[32mCREATING\033[0m assignment_expression2");
}


/*assignment_expression2::getProperties returns a map of properties*/
Properties assignment_expression2::getProperties()const
{
	Properties props(name());
	props["conditional_expression"]=_p_conditional_expression;
	return props;
}


/*the destructor*/
assignment_expression2::~assignment_expression2()
{
	LOG("\033[31mDELETING\033[0m assignment_expression2");
	if(_p_conditional_expression)
	{
		delete _p_conditional_expression;
		_p_conditional_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE parameter_type_list CLASS                                                                                 
 	FOR PATTERN : [parameter_list,',',ELLIPSIS]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*parameter_type_list::name() returns the name of the class*/
std::string parameter_type_list::name()const {return "parameter_type_list";}

/*parameter_type_list::pattern returns the pattern matched*/
std::string parameter_type_list::pattern()const {return "parameter_list,',',ELLIPSIS";}

/*construct from elements*/
parameter_type_list::parameter_type_list
	(
		std::string _arg_s_matchedPattern,
		parameter_list *_arg__p_parameter_list,
		Token *_arg__p_token1,
		Token *_arg__p_token2
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_parameter_list(_arg__p_parameter_list),
	_p_token1(_arg__p_token1),
	_p_token2(_arg__p_token2)
{
	LOG("\033[32mCREATING\033[0m parameter_type_list");
}


/*parameter_type_list::getProperties returns a map of properties*/
Properties parameter_type_list::getProperties()const
{
	Properties props(name());
	props["parameter_list"]=_p_parameter_list;
	props["token1"]=_p_token1;
	props["token2"]=_p_token2;
	return props;
}


/*the destructor*/
parameter_type_list::~parameter_type_list()
{
	LOG("\033[31mDELETING\033[0m parameter_type_list");
	if(_p_parameter_list)
	{
		delete _p_parameter_list;
		_p_parameter_list=0;
	}
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_token2)
	{
		delete _p_token2;
		_p_token2=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE parameter_declaration1 CLASS                                                                                 
 	FOR PATTERN : [declaration_specifiers,declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*parameter_declaration1::name() returns the name of the class*/
std::string parameter_declaration1::name()const {return "parameter_declaration1";}

/*parameter_declaration1::pattern returns the pattern matched*/
std::string parameter_declaration1::pattern()const {return "declaration_specifiers,declarator";}

/*construct from elements*/
parameter_declaration1::parameter_declaration1
	(
		std::string _arg_s_matchedPattern,
		declaration_specifiers *_arg__p_declaration_specifiers,
		declarator *_arg__p_declarator
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_declaration_specifiers(_arg__p_declaration_specifiers),
	_p_declarator(_arg__p_declarator)
{
	LOG("\033[32mCREATING\033[0m parameter_declaration1");
}


/*parameter_declaration1::getProperties returns a map of properties*/
Properties parameter_declaration1::getProperties()const
{
	Properties props(name());
	props["declaration_specifiers"]=_p_declaration_specifiers;
	props["declarator"]=_p_declarator;
	return props;
}


/*the destructor*/
parameter_declaration1::~parameter_declaration1()
{
	LOG("\033[31mDELETING\033[0m parameter_declaration1");
	if(_p_declaration_specifiers)
	{
		delete _p_declaration_specifiers;
		_p_declaration_specifiers=0;
	}
	if(_p_declarator)
	{
		delete _p_declarator;
		_p_declarator=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE parameter_declaration2 CLASS                                                                                 
 	FOR PATTERN : [declaration_specifiers,abstract_declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*parameter_declaration2::name() returns the name of the class*/
std::string parameter_declaration2::name()const {return "parameter_declaration2";}

/*parameter_declaration2::pattern returns the pattern matched*/
std::string parameter_declaration2::pattern()const {return "declaration_specifiers,abstract_declarator";}

/*construct from elements*/
parameter_declaration2::parameter_declaration2
	(
		std::string _arg_s_matchedPattern,
		declaration_specifiers *_arg__p_declaration_specifiers,
		abstract_declarator *_arg__p_abstract_declarator
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_declaration_specifiers(_arg__p_declaration_specifiers),
	_p_abstract_declarator(_arg__p_abstract_declarator)
{
	LOG("\033[32mCREATING\033[0m parameter_declaration2");
}


/*parameter_declaration2::getProperties returns a map of properties*/
Properties parameter_declaration2::getProperties()const
{
	Properties props(name());
	props["declaration_specifiers"]=_p_declaration_specifiers;
	props["abstract_declarator"]=_p_abstract_declarator;
	return props;
}


/*the destructor*/
parameter_declaration2::~parameter_declaration2()
{
	LOG("\033[31mDELETING\033[0m parameter_declaration2");
	if(_p_declaration_specifiers)
	{
		delete _p_declaration_specifiers;
		_p_declaration_specifiers=0;
	}
	if(_p_abstract_declarator)
	{
		delete _p_abstract_declarator;
		_p_abstract_declarator=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE multiplicative_expression CLASS                                                                                 
 	FOR PATTERN : [multiplicative_expression,'*',cast_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class multiplicative_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
multiplicative_expression_item::multiplicative_expression_item
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		cast_expression *_arg__p_cast_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_token1(_arg__p_token1),
	_p_cast_expression(_arg__p_cast_expression)
{
	LOG("\033[32mCREATING\033[0m multiplicative_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
multiplicative_expression_item::multiplicative_expression_item(const multiplicative_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_token1(other._p_token1),
		_p_cast_expression(other._p_cast_expression)
{
	LOG("\033[32mCOPYING\033[0m multiplicative_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*multiplicative_expression_item::getProperties returns a map of properties for the item*/
Properties multiplicative_expression_item::getProperties()const
{
	Properties props("multiplicative_expression_items");
	props["token1"]=_p_token1;
	props["cast_expression"]=_p_cast_expression;
	return props;
}


/*the destructor*/
multiplicative_expression_item::~multiplicative_expression_item()
{
	LOG("\033[31mDELETING?\033[0m multiplicative_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_cast_expression)
	{
		delete _p_cast_expression;
		_p_cast_expression=0;
	}
	LOG("\033[31mDELETED\033[0m multiplicative_expression");
}
/*------------------------------------------------------------*\
 							        
  main class multiplicative_expression                         
                                                                
\*------------------------------------------------------------*/
/*multiplicative_expression::name() returns the name of the class*/
std::string multiplicative_expression::name()const {return "multiplicative_expression";}

/*multiplicative_expression::pattern returns the pattern matched*/
std::string multiplicative_expression::pattern()const {return "multiplicative_expression,'*',cast_expression";}

/*construct from elements*/
multiplicative_expression::multiplicative_expression
	(
		std::string _arg_s_matchedPattern,
		cast_expression *_arg__p_cast_expression
	 )
{
	LOG("\033[32mCREATING\033[0m multiplicative_expression");
	multiplicative_expression_item item(_arg_s_matchedPattern,NULL,_arg__p_cast_expression);
	_items.push_back(item);
}

/*multiplicative_expression::append() appends an item to the list of items*/
void multiplicative_expression::append
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		cast_expression *_arg__p_cast_expression	)
{
	multiplicative_expression_item item(_arg_s_matchedPattern, _arg__p_token1, _arg__p_cast_expression);
	_items.push_back(item);
		
}

/*multiplicative_expression::getPropertyList() returns the list of properties*/
PropertiesList multiplicative_expression::getPropertiesList()const
{
	PropertiesList pList("multiplicative_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
multiplicative_expression::~multiplicative_expression()
{
	LOG("\033[32mDESTOYING\033[0m multiplicative_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE type_qualifier_list CLASS                                                                                 
 	FOR PATTERN : [type_qualifier_list,type_qualifier]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class type_qualifier_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
type_qualifier_list_item::type_qualifier_list_item
	(
		std::string _arg_s_matchedPattern,
		type_qualifier *_arg__p_type_qualifier
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_type_qualifier(_arg__p_type_qualifier)
{
	LOG("\033[32mCREATING\033[0m type_qualifier_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
type_qualifier_list_item::type_qualifier_list_item(const type_qualifier_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_type_qualifier(other._p_type_qualifier)
{
	LOG("\033[32mCOPYING\033[0m type_qualifier_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*type_qualifier_list_item::getProperties returns a map of properties for the item*/
Properties type_qualifier_list_item::getProperties()const
{
	Properties props("type_qualifier_list_items");
	props["type_qualifier"]=_p_type_qualifier;
	return props;
}


/*the destructor*/
type_qualifier_list_item::~type_qualifier_list_item()
{
	LOG("\033[31mDELETING?\033[0m type_qualifier_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_type_qualifier)
	{
		delete _p_type_qualifier;
		_p_type_qualifier=0;
	}
	LOG("\033[31mDELETED\033[0m type_qualifier_list");
}
/*------------------------------------------------------------*\
 							        
  main class type_qualifier_list                         
                                                                
\*------------------------------------------------------------*/
/*type_qualifier_list::name() returns the name of the class*/
std::string type_qualifier_list::name()const {return "type_qualifier_list";}

/*type_qualifier_list::pattern returns the pattern matched*/
std::string type_qualifier_list::pattern()const {return "type_qualifier_list,type_qualifier";}

/*construct from elements*/
type_qualifier_list::type_qualifier_list
	(
		std::string _arg_s_matchedPattern,
		type_qualifier *_arg__p_type_qualifier
	 )
{
	LOG("\033[32mCREATING\033[0m type_qualifier_list");
	type_qualifier_list_item item(_arg_s_matchedPattern,_arg__p_type_qualifier);
	_items.push_back(item);
}

/*type_qualifier_list::append() appends an item to the list of items*/
void type_qualifier_list::append
	(
		std::string _arg_s_matchedPattern,
		type_qualifier *_arg__p_type_qualifier	)
{
	type_qualifier_list_item item(_arg_s_matchedPattern, _arg__p_type_qualifier);
	_items.push_back(item);
		
}

/*type_qualifier_list::getPropertyList() returns the list of properties*/
PropertiesList type_qualifier_list::getPropertiesList()const
{
	PropertiesList pList("type_qualifier_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
type_qualifier_list::~type_qualifier_list()
{
	LOG("\033[32mDESTOYING\033[0m type_qualifier_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE argument_expression_list CLASS                                                                                 
 	FOR PATTERN : [argument_expression_list,',',assignment_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class argument_expression_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
argument_expression_list_item::argument_expression_list_item
	(
		std::string _arg_s_matchedPattern,
		assignment_expression *_arg__p_assignment_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_assignment_expression(_arg__p_assignment_expression)
{
	LOG("\033[32mCREATING\033[0m argument_expression_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
argument_expression_list_item::argument_expression_list_item(const argument_expression_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_assignment_expression(other._p_assignment_expression)
{
	LOG("\033[32mCOPYING\033[0m argument_expression_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*argument_expression_list_item::getProperties returns a map of properties for the item*/
Properties argument_expression_list_item::getProperties()const
{
	Properties props("argument_expression_list_items");
	props["assignment_expression"]=_p_assignment_expression;
	return props;
}


/*the destructor*/
argument_expression_list_item::~argument_expression_list_item()
{
	LOG("\033[31mDELETING?\033[0m argument_expression_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_assignment_expression)
	{
		delete _p_assignment_expression;
		_p_assignment_expression=0;
	}
	LOG("\033[31mDELETED\033[0m argument_expression_list");
}
/*------------------------------------------------------------*\
 							        
  main class argument_expression_list                         
                                                                
\*------------------------------------------------------------*/
/*argument_expression_list::name() returns the name of the class*/
std::string argument_expression_list::name()const {return "argument_expression_list";}

/*argument_expression_list::pattern returns the pattern matched*/
std::string argument_expression_list::pattern()const {return "argument_expression_list,',',assignment_expression";}

/*construct from elements*/
argument_expression_list::argument_expression_list
	(
		std::string _arg_s_matchedPattern,
		assignment_expression *_arg__p_assignment_expression
	 )
{
	LOG("\033[32mCREATING\033[0m argument_expression_list");
	argument_expression_list_item item(_arg_s_matchedPattern,_arg__p_assignment_expression);
	_items.push_back(item);
}

/*argument_expression_list::append() appends an item to the list of items*/
void argument_expression_list::append
	(
		std::string _arg_s_matchedPattern,
		assignment_expression *_arg__p_assignment_expression	)
{
	argument_expression_list_item item(_arg_s_matchedPattern, _arg__p_assignment_expression);
	_items.push_back(item);
		
}

/*argument_expression_list::getPropertyList() returns the list of properties*/
PropertiesList argument_expression_list::getPropertiesList()const
{
	PropertiesList pList("argument_expression_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
argument_expression_list::~argument_expression_list()
{
	LOG("\033[32mDESTOYING\033[0m argument_expression_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE direct_abstract_declarator1 CLASS                                                                                 
 	FOR PATTERN : [direct_abstract_declarator,'[',constant_expression,']']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*direct_abstract_declarator1::name() returns the name of the class*/
std::string direct_abstract_declarator1::name()const {return "direct_abstract_declarator1";}

/*direct_abstract_declarator1::pattern returns the pattern matched*/
std::string direct_abstract_declarator1::pattern()const {return "direct_abstract_declarator,'[',constant_expression,']'";}

/*construct from elements*/
direct_abstract_declarator1::direct_abstract_declarator1
	(
		std::string _arg_s_matchedPattern,
		direct_abstract_declarator *_arg__p_direct_abstract_declarator,
		constant_expression *_arg__p_constant_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_direct_abstract_declarator(_arg__p_direct_abstract_declarator),
	_p_constant_expression(_arg__p_constant_expression)
{
	LOG("\033[32mCREATING\033[0m direct_abstract_declarator1");
}


/*direct_abstract_declarator1::getProperties returns a map of properties*/
Properties direct_abstract_declarator1::getProperties()const
{
	Properties props(name());
	props["direct_abstract_declarator"]=_p_direct_abstract_declarator;
	props["constant_expression"]=_p_constant_expression;
	return props;
}


/*the destructor*/
direct_abstract_declarator1::~direct_abstract_declarator1()
{
	LOG("\033[31mDELETING\033[0m direct_abstract_declarator1");
	if(_p_direct_abstract_declarator)
	{
		delete _p_direct_abstract_declarator;
		_p_direct_abstract_declarator=0;
	}
	if(_p_constant_expression)
	{
		delete _p_constant_expression;
		_p_constant_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE direct_abstract_declarator2 CLASS                                                                                 
 	FOR PATTERN : [direct_abstract_declarator,'(',parameter_type_list,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*direct_abstract_declarator2::name() returns the name of the class*/
std::string direct_abstract_declarator2::name()const {return "direct_abstract_declarator2";}

/*direct_abstract_declarator2::pattern returns the pattern matched*/
std::string direct_abstract_declarator2::pattern()const {return "direct_abstract_declarator,'(',parameter_type_list,')'";}

/*construct from elements*/
direct_abstract_declarator2::direct_abstract_declarator2
	(
		std::string _arg_s_matchedPattern,
		direct_abstract_declarator *_arg__p_direct_abstract_declarator,
		parameter_type_list *_arg__p_parameter_type_list
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_direct_abstract_declarator(_arg__p_direct_abstract_declarator),
	_p_parameter_type_list(_arg__p_parameter_type_list)
{
	LOG("\033[32mCREATING\033[0m direct_abstract_declarator2");
}


/*direct_abstract_declarator2::getProperties returns a map of properties*/
Properties direct_abstract_declarator2::getProperties()const
{
	Properties props(name());
	props["direct_abstract_declarator"]=_p_direct_abstract_declarator;
	props["parameter_type_list"]=_p_parameter_type_list;
	return props;
}


/*the destructor*/
direct_abstract_declarator2::~direct_abstract_declarator2()
{
	LOG("\033[31mDELETING\033[0m direct_abstract_declarator2");
	if(_p_direct_abstract_declarator)
	{
		delete _p_direct_abstract_declarator;
		_p_direct_abstract_declarator=0;
	}
	if(_p_parameter_type_list)
	{
		delete _p_parameter_type_list;
		_p_parameter_type_list=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE direct_abstract_declarator3 CLASS                                                                                 
 	FOR PATTERN : ['(',abstract_declarator,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*direct_abstract_declarator3::name() returns the name of the class*/
std::string direct_abstract_declarator3::name()const {return "direct_abstract_declarator3";}

/*direct_abstract_declarator3::pattern returns the pattern matched*/
std::string direct_abstract_declarator3::pattern()const {return "'(',abstract_declarator,')'";}

/*construct from elements*/
direct_abstract_declarator3::direct_abstract_declarator3
	(
		std::string _arg_s_matchedPattern,
		abstract_declarator *_arg__p_abstract_declarator
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_abstract_declarator(_arg__p_abstract_declarator)
{
	LOG("\033[32mCREATING\033[0m direct_abstract_declarator3");
}


/*direct_abstract_declarator3::getProperties returns a map of properties*/
Properties direct_abstract_declarator3::getProperties()const
{
	Properties props(name());
	props["abstract_declarator"]=_p_abstract_declarator;
	return props;
}


/*the destructor*/
direct_abstract_declarator3::~direct_abstract_declarator3()
{
	LOG("\033[31mDELETING\033[0m direct_abstract_declarator3");
	if(_p_abstract_declarator)
	{
		delete _p_abstract_declarator;
		_p_abstract_declarator=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE equality_expression CLASS                                                                                 
 	FOR PATTERN : [equality_expression,EQ_OP,relational_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class equality_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
equality_expression_item::equality_expression_item
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		relational_expression *_arg__p_relational_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_token1(_arg__p_token1),
	_p_relational_expression(_arg__p_relational_expression)
{
	LOG("\033[32mCREATING\033[0m equality_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
equality_expression_item::equality_expression_item(const equality_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_token1(other._p_token1),
		_p_relational_expression(other._p_relational_expression)
{
	LOG("\033[32mCOPYING\033[0m equality_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*equality_expression_item::getProperties returns a map of properties for the item*/
Properties equality_expression_item::getProperties()const
{
	Properties props("equality_expression_items");
	props["token1"]=_p_token1;
	props["relational_expression"]=_p_relational_expression;
	return props;
}


/*the destructor*/
equality_expression_item::~equality_expression_item()
{
	LOG("\033[31mDELETING?\033[0m equality_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_relational_expression)
	{
		delete _p_relational_expression;
		_p_relational_expression=0;
	}
	LOG("\033[31mDELETED\033[0m equality_expression");
}
/*------------------------------------------------------------*\
 							        
  main class equality_expression                         
                                                                
\*------------------------------------------------------------*/
/*equality_expression::name() returns the name of the class*/
std::string equality_expression::name()const {return "equality_expression";}

/*equality_expression::pattern returns the pattern matched*/
std::string equality_expression::pattern()const {return "equality_expression,EQ_OP,relational_expression";}

/*construct from elements*/
equality_expression::equality_expression
	(
		std::string _arg_s_matchedPattern,
		relational_expression *_arg__p_relational_expression
	 )
{
	LOG("\033[32mCREATING\033[0m equality_expression");
	equality_expression_item item(_arg_s_matchedPattern,NULL,_arg__p_relational_expression);
	_items.push_back(item);
}

/*equality_expression::append() appends an item to the list of items*/
void equality_expression::append
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		relational_expression *_arg__p_relational_expression	)
{
	equality_expression_item item(_arg_s_matchedPattern, _arg__p_token1, _arg__p_relational_expression);
	_items.push_back(item);
		
}

/*equality_expression::getPropertyList() returns the list of properties*/
PropertiesList equality_expression::getPropertiesList()const
{
	PropertiesList pList("equality_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
equality_expression::~equality_expression()
{
	LOG("\033[32mDESTOYING\033[0m equality_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE primary_expression1 CLASS                                                                                 
 	FOR PATTERN : ['(',expression,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*primary_expression1::name() returns the name of the class*/
std::string primary_expression1::name()const {return "primary_expression1";}

/*primary_expression1::pattern returns the pattern matched*/
std::string primary_expression1::pattern()const {return "'(',expression,')'";}

/*construct from elements*/
primary_expression1::primary_expression1
	(
		std::string _arg_s_matchedPattern,
		expression *_arg__p_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_expression(_arg__p_expression)
{
	LOG("\033[32mCREATING\033[0m primary_expression1");
}


/*primary_expression1::getProperties returns a map of properties*/
Properties primary_expression1::getProperties()const
{
	Properties props(name());
	props["expression"]=_p_expression;
	return props;
}


/*the destructor*/
primary_expression1::~primary_expression1()
{
	LOG("\033[31mDELETING\033[0m primary_expression1");
	if(_p_expression)
	{
		delete _p_expression;
		_p_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE primary_expression2 CLASS                                                                                 
 	FOR PATTERN : [IDENTIFIER]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*primary_expression2::name() returns the name of the class*/
std::string primary_expression2::name()const {return "primary_expression2";}

/*primary_expression2::pattern returns the pattern matched*/
std::string primary_expression2::pattern()const {return "IDENTIFIER";}

/*construct from elements*/
primary_expression2::primary_expression2
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m primary_expression2");
}


/*primary_expression2::getProperties returns a map of properties*/
Properties primary_expression2::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
primary_expression2::~primary_expression2()
{
	LOG("\033[31mDELETING\033[0m primary_expression2");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE declaration_specifiers1 CLASS                                                                                 
 	FOR PATTERN : [storage_class_specifier,declaration_specifiers]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class declaration_specifiers1_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
declaration_specifiers1_item::declaration_specifiers1_item
	(
		std::string _arg_s_matchedPattern,
		storage_class_specifier *_arg__p_storage_class_specifier
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_storage_class_specifier(_arg__p_storage_class_specifier)
{
	LOG("\033[32mCREATING\033[0m declaration_specifiers1");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
declaration_specifiers1_item::declaration_specifiers1_item(const declaration_specifiers1_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_storage_class_specifier(other._p_storage_class_specifier)
{
	LOG("\033[32mCOPYING\033[0m declaration_specifiers1_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*declaration_specifiers1_item::getProperties returns a map of properties for the item*/
Properties declaration_specifiers1_item::getProperties()const
{
	Properties props("declaration_specifiers1_items");
	props["storage_class_specifier"]=_p_storage_class_specifier;
	return props;
}


/*the destructor*/
declaration_specifiers1_item::~declaration_specifiers1_item()
{
	LOG("\033[31mDELETING?\033[0m declaration_specifiers1_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_storage_class_specifier)
	{
		delete _p_storage_class_specifier;
		_p_storage_class_specifier=0;
	}
	LOG("\033[31mDELETED\033[0m declaration_specifiers1");
}
/*------------------------------------------------------------*\
 							        
  main class declaration_specifiers1                         
                                                                
\*------------------------------------------------------------*/
/*declaration_specifiers1::name() returns the name of the class*/
std::string declaration_specifiers1::name()const {return "declaration_specifiers1";}

/*declaration_specifiers1::pattern returns the pattern matched*/
std::string declaration_specifiers1::pattern()const {return "storage_class_specifier,declaration_specifiers";}

/*construct from elements*/
declaration_specifiers1::declaration_specifiers1
	(
		std::string _arg_s_matchedPattern,
		storage_class_specifier *_arg__p_storage_class_specifier
	 )
{
	LOG("\033[32mCREATING\033[0m declaration_specifiers1");
	declaration_specifiers1_item item(_arg_s_matchedPattern,_arg__p_storage_class_specifier);
	_items.push_back(item);
}

/*declaration_specifiers1::append() appends an item to the list of items*/
void declaration_specifiers1::append
	(
		std::string _arg_s_matchedPattern,
		storage_class_specifier *_arg__p_storage_class_specifier	)
{
	declaration_specifiers1_item item(_arg_s_matchedPattern, _arg__p_storage_class_specifier);
	_items.push_back(item);
		
}

/*declaration_specifiers1::getPropertyList() returns the list of properties*/
PropertiesList declaration_specifiers1::getPropertiesList()const
{
	PropertiesList pList("declaration_specifiers1");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
declaration_specifiers1::~declaration_specifiers1()
{
	LOG("\033[32mDESTOYING\033[0m declaration_specifiers1");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE declaration_specifiers2 CLASS                                                                                 
 	FOR PATTERN : [type_specifier,declaration_specifiers]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class declaration_specifiers2_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
declaration_specifiers2_item::declaration_specifiers2_item
	(
		std::string _arg_s_matchedPattern,
		type_specifier *_arg__p_type_specifier
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_type_specifier(_arg__p_type_specifier)
{
	LOG("\033[32mCREATING\033[0m declaration_specifiers2");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
declaration_specifiers2_item::declaration_specifiers2_item(const declaration_specifiers2_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_type_specifier(other._p_type_specifier)
{
	LOG("\033[32mCOPYING\033[0m declaration_specifiers2_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*declaration_specifiers2_item::getProperties returns a map of properties for the item*/
Properties declaration_specifiers2_item::getProperties()const
{
	Properties props("declaration_specifiers2_items");
	props["type_specifier"]=_p_type_specifier;
	return props;
}


/*the destructor*/
declaration_specifiers2_item::~declaration_specifiers2_item()
{
	LOG("\033[31mDELETING?\033[0m declaration_specifiers2_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_type_specifier)
	{
		delete _p_type_specifier;
		_p_type_specifier=0;
	}
	LOG("\033[31mDELETED\033[0m declaration_specifiers2");
}
/*------------------------------------------------------------*\
 							        
  main class declaration_specifiers2                         
                                                                
\*------------------------------------------------------------*/
/*declaration_specifiers2::name() returns the name of the class*/
std::string declaration_specifiers2::name()const {return "declaration_specifiers2";}

/*declaration_specifiers2::pattern returns the pattern matched*/
std::string declaration_specifiers2::pattern()const {return "type_specifier,declaration_specifiers";}

/*construct from elements*/
declaration_specifiers2::declaration_specifiers2
	(
		std::string _arg_s_matchedPattern,
		type_specifier *_arg__p_type_specifier
	 )
{
	LOG("\033[32mCREATING\033[0m declaration_specifiers2");
	declaration_specifiers2_item item(_arg_s_matchedPattern,_arg__p_type_specifier);
	_items.push_back(item);
}

/*declaration_specifiers2::append() appends an item to the list of items*/
void declaration_specifiers2::append
	(
		std::string _arg_s_matchedPattern,
		type_specifier *_arg__p_type_specifier	)
{
	declaration_specifiers2_item item(_arg_s_matchedPattern, _arg__p_type_specifier);
	_items.push_back(item);
		
}

/*declaration_specifiers2::getPropertyList() returns the list of properties*/
PropertiesList declaration_specifiers2::getPropertiesList()const
{
	PropertiesList pList("declaration_specifiers2");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
declaration_specifiers2::~declaration_specifiers2()
{
	LOG("\033[32mDESTOYING\033[0m declaration_specifiers2");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE declaration_specifiers3 CLASS                                                                                 
 	FOR PATTERN : [type_qualifier,declaration_specifiers]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class declaration_specifiers3_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
declaration_specifiers3_item::declaration_specifiers3_item
	(
		std::string _arg_s_matchedPattern,
		type_qualifier *_arg__p_type_qualifier
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_type_qualifier(_arg__p_type_qualifier)
{
	LOG("\033[32mCREATING\033[0m declaration_specifiers3");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
declaration_specifiers3_item::declaration_specifiers3_item(const declaration_specifiers3_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_type_qualifier(other._p_type_qualifier)
{
	LOG("\033[32mCOPYING\033[0m declaration_specifiers3_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*declaration_specifiers3_item::getProperties returns a map of properties for the item*/
Properties declaration_specifiers3_item::getProperties()const
{
	Properties props("declaration_specifiers3_items");
	props["type_qualifier"]=_p_type_qualifier;
	return props;
}


/*the destructor*/
declaration_specifiers3_item::~declaration_specifiers3_item()
{
	LOG("\033[31mDELETING?\033[0m declaration_specifiers3_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_type_qualifier)
	{
		delete _p_type_qualifier;
		_p_type_qualifier=0;
	}
	LOG("\033[31mDELETED\033[0m declaration_specifiers3");
}
/*------------------------------------------------------------*\
 							        
  main class declaration_specifiers3                         
                                                                
\*------------------------------------------------------------*/
/*declaration_specifiers3::name() returns the name of the class*/
std::string declaration_specifiers3::name()const {return "declaration_specifiers3";}

/*declaration_specifiers3::pattern returns the pattern matched*/
std::string declaration_specifiers3::pattern()const {return "type_qualifier,declaration_specifiers";}

/*construct from elements*/
declaration_specifiers3::declaration_specifiers3
	(
		std::string _arg_s_matchedPattern,
		type_qualifier *_arg__p_type_qualifier
	 )
{
	LOG("\033[32mCREATING\033[0m declaration_specifiers3");
	declaration_specifiers3_item item(_arg_s_matchedPattern,_arg__p_type_qualifier);
	_items.push_back(item);
}

/*declaration_specifiers3::append() appends an item to the list of items*/
void declaration_specifiers3::append
	(
		std::string _arg_s_matchedPattern,
		type_qualifier *_arg__p_type_qualifier	)
{
	declaration_specifiers3_item item(_arg_s_matchedPattern, _arg__p_type_qualifier);
	_items.push_back(item);
		
}

/*declaration_specifiers3::getPropertyList() returns the list of properties*/
PropertiesList declaration_specifiers3::getPropertiesList()const
{
	PropertiesList pList("declaration_specifiers3");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
declaration_specifiers3::~declaration_specifiers3()
{
	LOG("\033[32mDESTOYING\033[0m declaration_specifiers3");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE declaration CLASS                                                                                 
 	FOR PATTERN : [declaration_specifiers,init_declarator_list,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*declaration::name() returns the name of the class*/
std::string declaration::name()const {return "declaration";}

/*declaration::pattern returns the pattern matched*/
std::string declaration::pattern()const {return "declaration_specifiers,init_declarator_list,';'";}

/*construct from elements*/
declaration::declaration
	(
		std::string _arg_s_matchedPattern,
		declaration_specifiers *_arg__p_declaration_specifiers,
		init_declarator_list *_arg__p_init_declarator_list
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_declaration_specifiers(_arg__p_declaration_specifiers),
	_p_init_declarator_list(_arg__p_init_declarator_list)
{
	LOG("\033[32mCREATING\033[0m declaration");
}


/*declaration::getProperties returns a map of properties*/
Properties declaration::getProperties()const
{
	Properties props(name());
	props["declaration_specifiers"]=_p_declaration_specifiers;
	props["init_declarator_list"]=_p_init_declarator_list;
	return props;
}


/*the destructor*/
declaration::~declaration()
{
	LOG("\033[31mDELETING\033[0m declaration");
	if(_p_declaration_specifiers)
	{
		delete _p_declaration_specifiers;
		_p_declaration_specifiers=0;
	}
	if(_p_init_declarator_list)
	{
		delete _p_init_declarator_list;
		_p_init_declarator_list=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator1 CLASS                                                                                 
 	FOR PATTERN : [direct_declarator,'[',constant_expression,']']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*direct_declarator1::name() returns the name of the class*/
std::string direct_declarator1::name()const {return "direct_declarator1";}

/*direct_declarator1::pattern returns the pattern matched*/
std::string direct_declarator1::pattern()const {return "direct_declarator,'[',constant_expression,']'";}

/*construct from elements*/
direct_declarator1::direct_declarator1
	(
		std::string _arg_s_matchedPattern,
		direct_declarator *_arg__p_direct_declarator,
		constant_expression *_arg__p_constant_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_direct_declarator(_arg__p_direct_declarator),
	_p_constant_expression(_arg__p_constant_expression)
{
	LOG("\033[32mCREATING\033[0m direct_declarator1");
}


/*direct_declarator1::getProperties returns a map of properties*/
Properties direct_declarator1::getProperties()const
{
	Properties props(name());
	props["direct_declarator"]=_p_direct_declarator;
	props["constant_expression"]=_p_constant_expression;
	return props;
}


/*the destructor*/
direct_declarator1::~direct_declarator1()
{
	LOG("\033[31mDELETING\033[0m direct_declarator1");
	if(_p_direct_declarator)
	{
		delete _p_direct_declarator;
		_p_direct_declarator=0;
	}
	if(_p_constant_expression)
	{
		delete _p_constant_expression;
		_p_constant_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator2 CLASS                                                                                 
 	FOR PATTERN : [direct_declarator,'(',parameter_type_list,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*direct_declarator2::name() returns the name of the class*/
std::string direct_declarator2::name()const {return "direct_declarator2";}

/*direct_declarator2::pattern returns the pattern matched*/
std::string direct_declarator2::pattern()const {return "direct_declarator,'(',parameter_type_list,')'";}

/*construct from elements*/
direct_declarator2::direct_declarator2
	(
		std::string _arg_s_matchedPattern,
		direct_declarator *_arg__p_direct_declarator,
		parameter_type_list *_arg__p_parameter_type_list
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_direct_declarator(_arg__p_direct_declarator),
	_p_parameter_type_list(_arg__p_parameter_type_list)
{
	LOG("\033[32mCREATING\033[0m direct_declarator2");
}


/*direct_declarator2::getProperties returns a map of properties*/
Properties direct_declarator2::getProperties()const
{
	Properties props(name());
	props["direct_declarator"]=_p_direct_declarator;
	props["parameter_type_list"]=_p_parameter_type_list;
	return props;
}


/*the destructor*/
direct_declarator2::~direct_declarator2()
{
	LOG("\033[31mDELETING\033[0m direct_declarator2");
	if(_p_direct_declarator)
	{
		delete _p_direct_declarator;
		_p_direct_declarator=0;
	}
	if(_p_parameter_type_list)
	{
		delete _p_parameter_type_list;
		_p_parameter_type_list=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator3 CLASS                                                                                 
 	FOR PATTERN : [direct_declarator,'(',identifier_list,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*direct_declarator3::name() returns the name of the class*/
std::string direct_declarator3::name()const {return "direct_declarator3";}

/*direct_declarator3::pattern returns the pattern matched*/
std::string direct_declarator3::pattern()const {return "direct_declarator,'(',identifier_list,')'";}

/*construct from elements*/
direct_declarator3::direct_declarator3
	(
		std::string _arg_s_matchedPattern,
		direct_declarator *_arg__p_direct_declarator,
		identifier_list *_arg__p_identifier_list
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_direct_declarator(_arg__p_direct_declarator),
	_p_identifier_list(_arg__p_identifier_list)
{
	LOG("\033[32mCREATING\033[0m direct_declarator3");
}


/*direct_declarator3::getProperties returns a map of properties*/
Properties direct_declarator3::getProperties()const
{
	Properties props(name());
	props["direct_declarator"]=_p_direct_declarator;
	props["identifier_list"]=_p_identifier_list;
	return props;
}


/*the destructor*/
direct_declarator3::~direct_declarator3()
{
	LOG("\033[31mDELETING\033[0m direct_declarator3");
	if(_p_direct_declarator)
	{
		delete _p_direct_declarator;
		_p_direct_declarator=0;
	}
	if(_p_identifier_list)
	{
		delete _p_identifier_list;
		_p_identifier_list=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator4 CLASS                                                                                 
 	FOR PATTERN : ['(',declarator,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*direct_declarator4::name() returns the name of the class*/
std::string direct_declarator4::name()const {return "direct_declarator4";}

/*direct_declarator4::pattern returns the pattern matched*/
std::string direct_declarator4::pattern()const {return "'(',declarator,')'";}

/*construct from elements*/
direct_declarator4::direct_declarator4
	(
		std::string _arg_s_matchedPattern,
		declarator *_arg__p_declarator
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_declarator(_arg__p_declarator)
{
	LOG("\033[32mCREATING\033[0m direct_declarator4");
}


/*direct_declarator4::getProperties returns a map of properties*/
Properties direct_declarator4::getProperties()const
{
	Properties props(name());
	props["declarator"]=_p_declarator;
	return props;
}


/*the destructor*/
direct_declarator4::~direct_declarator4()
{
	LOG("\033[31mDELETING\033[0m direct_declarator4");
	if(_p_declarator)
	{
		delete _p_declarator;
		_p_declarator=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator5 CLASS                                                                                 
 	FOR PATTERN : [IDENTIFIER]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*direct_declarator5::name() returns the name of the class*/
std::string direct_declarator5::name()const {return "direct_declarator5";}

/*direct_declarator5::pattern returns the pattern matched*/
std::string direct_declarator5::pattern()const {return "IDENTIFIER";}

/*construct from elements*/
direct_declarator5::direct_declarator5
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m direct_declarator5");
}


/*direct_declarator5::getProperties returns a map of properties*/
Properties direct_declarator5::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
direct_declarator5::~direct_declarator5()
{
	LOG("\033[31mDELETING\033[0m direct_declarator5");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE logical_and_expression CLASS                                                                                 
 	FOR PATTERN : [logical_and_expression,AND_OP,inclusive_or_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class logical_and_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
logical_and_expression_item::logical_and_expression_item
	(
		std::string _arg_s_matchedPattern,
		inclusive_or_expression *_arg__p_inclusive_or_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_inclusive_or_expression(_arg__p_inclusive_or_expression)
{
	LOG("\033[32mCREATING\033[0m logical_and_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
logical_and_expression_item::logical_and_expression_item(const logical_and_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_inclusive_or_expression(other._p_inclusive_or_expression)
{
	LOG("\033[32mCOPYING\033[0m logical_and_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*logical_and_expression_item::getProperties returns a map of properties for the item*/
Properties logical_and_expression_item::getProperties()const
{
	Properties props("logical_and_expression_items");
	props["inclusive_or_expression"]=_p_inclusive_or_expression;
	return props;
}


/*the destructor*/
logical_and_expression_item::~logical_and_expression_item()
{
	LOG("\033[31mDELETING?\033[0m logical_and_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_inclusive_or_expression)
	{
		delete _p_inclusive_or_expression;
		_p_inclusive_or_expression=0;
	}
	LOG("\033[31mDELETED\033[0m logical_and_expression");
}
/*------------------------------------------------------------*\
 							        
  main class logical_and_expression                         
                                                                
\*------------------------------------------------------------*/
/*logical_and_expression::name() returns the name of the class*/
std::string logical_and_expression::name()const {return "logical_and_expression";}

/*logical_and_expression::pattern returns the pattern matched*/
std::string logical_and_expression::pattern()const {return "logical_and_expression,AND_OP,inclusive_or_expression";}

/*construct from elements*/
logical_and_expression::logical_and_expression
	(
		std::string _arg_s_matchedPattern,
		inclusive_or_expression *_arg__p_inclusive_or_expression
	 )
{
	LOG("\033[32mCREATING\033[0m logical_and_expression");
	logical_and_expression_item item(_arg_s_matchedPattern,_arg__p_inclusive_or_expression);
	_items.push_back(item);
}

/*logical_and_expression::append() appends an item to the list of items*/
void logical_and_expression::append
	(
		std::string _arg_s_matchedPattern,
		inclusive_or_expression *_arg__p_inclusive_or_expression	)
{
	logical_and_expression_item item(_arg_s_matchedPattern, _arg__p_inclusive_or_expression);
	_items.push_back(item);
		
}

/*logical_and_expression::getPropertyList() returns the list of properties*/
PropertiesList logical_and_expression::getPropertiesList()const
{
	PropertiesList pList("logical_and_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
logical_and_expression::~logical_and_expression()
{
	LOG("\033[32mDESTOYING\033[0m logical_and_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE init_declarator_list CLASS                                                                                 
 	FOR PATTERN : [init_declarator_list,',',init_declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class init_declarator_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
init_declarator_list_item::init_declarator_list_item
	(
		std::string _arg_s_matchedPattern,
		init_declarator *_arg__p_init_declarator
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_init_declarator(_arg__p_init_declarator)
{
	LOG("\033[32mCREATING\033[0m init_declarator_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
init_declarator_list_item::init_declarator_list_item(const init_declarator_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_init_declarator(other._p_init_declarator)
{
	LOG("\033[32mCOPYING\033[0m init_declarator_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*init_declarator_list_item::getProperties returns a map of properties for the item*/
Properties init_declarator_list_item::getProperties()const
{
	Properties props("init_declarator_list_items");
	props["init_declarator"]=_p_init_declarator;
	return props;
}


/*the destructor*/
init_declarator_list_item::~init_declarator_list_item()
{
	LOG("\033[31mDELETING?\033[0m init_declarator_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_init_declarator)
	{
		delete _p_init_declarator;
		_p_init_declarator=0;
	}
	LOG("\033[31mDELETED\033[0m init_declarator_list");
}
/*------------------------------------------------------------*\
 							        
  main class init_declarator_list                         
                                                                
\*------------------------------------------------------------*/
/*init_declarator_list::name() returns the name of the class*/
std::string init_declarator_list::name()const {return "init_declarator_list";}

/*init_declarator_list::pattern returns the pattern matched*/
std::string init_declarator_list::pattern()const {return "init_declarator_list,',',init_declarator";}

/*construct from elements*/
init_declarator_list::init_declarator_list
	(
		std::string _arg_s_matchedPattern,
		init_declarator *_arg__p_init_declarator
	 )
{
	LOG("\033[32mCREATING\033[0m init_declarator_list");
	init_declarator_list_item item(_arg_s_matchedPattern,_arg__p_init_declarator);
	_items.push_back(item);
}

/*init_declarator_list::append() appends an item to the list of items*/
void init_declarator_list::append
	(
		std::string _arg_s_matchedPattern,
		init_declarator *_arg__p_init_declarator	)
{
	init_declarator_list_item item(_arg_s_matchedPattern, _arg__p_init_declarator);
	_items.push_back(item);
		
}

/*init_declarator_list::getPropertyList() returns the list of properties*/
PropertiesList init_declarator_list::getPropertiesList()const
{
	PropertiesList pList("init_declarator_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
init_declarator_list::~init_declarator_list()
{
	LOG("\033[32mDESTOYING\033[0m init_declarator_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE shift_expression CLASS                                                                                 
 	FOR PATTERN : [shift_expression,LEFT_OP,additive_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class shift_expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
shift_expression_item::shift_expression_item
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		additive_expression *_arg__p_additive_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_token1(_arg__p_token1),
	_p_additive_expression(_arg__p_additive_expression)
{
	LOG("\033[32mCREATING\033[0m shift_expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
shift_expression_item::shift_expression_item(const shift_expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_token1(other._p_token1),
		_p_additive_expression(other._p_additive_expression)
{
	LOG("\033[32mCOPYING\033[0m shift_expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*shift_expression_item::getProperties returns a map of properties for the item*/
Properties shift_expression_item::getProperties()const
{
	Properties props("shift_expression_items");
	props["token1"]=_p_token1;
	props["additive_expression"]=_p_additive_expression;
	return props;
}


/*the destructor*/
shift_expression_item::~shift_expression_item()
{
	LOG("\033[31mDELETING?\033[0m shift_expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_additive_expression)
	{
		delete _p_additive_expression;
		_p_additive_expression=0;
	}
	LOG("\033[31mDELETED\033[0m shift_expression");
}
/*------------------------------------------------------------*\
 							        
  main class shift_expression                         
                                                                
\*------------------------------------------------------------*/
/*shift_expression::name() returns the name of the class*/
std::string shift_expression::name()const {return "shift_expression";}

/*shift_expression::pattern returns the pattern matched*/
std::string shift_expression::pattern()const {return "shift_expression,LEFT_OP,additive_expression";}

/*construct from elements*/
shift_expression::shift_expression
	(
		std::string _arg_s_matchedPattern,
		additive_expression *_arg__p_additive_expression
	 )
{
	LOG("\033[32mCREATING\033[0m shift_expression");
	shift_expression_item item(_arg_s_matchedPattern,NULL,_arg__p_additive_expression);
	_items.push_back(item);
}

/*shift_expression::append() appends an item to the list of items*/
void shift_expression::append
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		additive_expression *_arg__p_additive_expression	)
{
	shift_expression_item item(_arg_s_matchedPattern, _arg__p_token1, _arg__p_additive_expression);
	_items.push_back(item);
		
}

/*shift_expression::getPropertyList() returns the list of properties*/
PropertiesList shift_expression::getPropertiesList()const
{
	PropertiesList pList("shift_expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
shift_expression::~shift_expression()
{
	LOG("\033[32mDESTOYING\033[0m shift_expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE identifier_list CLASS                                                                                 
 	FOR PATTERN : [identifier_list,',',IDENTIFIER]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class identifier_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
identifier_list_item::identifier_list_item
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m identifier_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
identifier_list_item::identifier_list_item(const identifier_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_token1(other._p_token1)
{
	LOG("\033[32mCOPYING\033[0m identifier_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*identifier_list_item::getProperties returns a map of properties for the item*/
Properties identifier_list_item::getProperties()const
{
	Properties props("identifier_list_items");
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
identifier_list_item::~identifier_list_item()
{
	LOG("\033[31mDELETING?\033[0m identifier_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	LOG("\033[31mDELETED\033[0m identifier_list");
}
/*------------------------------------------------------------*\
 							        
  main class identifier_list                         
                                                                
\*------------------------------------------------------------*/
/*identifier_list::name() returns the name of the class*/
std::string identifier_list::name()const {return "identifier_list";}

/*identifier_list::pattern returns the pattern matched*/
std::string identifier_list::pattern()const {return "identifier_list,',',IDENTIFIER";}

/*construct from elements*/
identifier_list::identifier_list
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	 )
{
	LOG("\033[32mCREATING\033[0m identifier_list");
	identifier_list_item item(_arg_s_matchedPattern,_arg__p_token1);
	_items.push_back(item);
}

/*identifier_list::append() appends an item to the list of items*/
void identifier_list::append
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1	)
{
	identifier_list_item item(_arg_s_matchedPattern, _arg__p_token1);
	_items.push_back(item);
		
}

/*identifier_list::getPropertyList() returns the list of properties*/
PropertiesList identifier_list::getPropertiesList()const
{
	PropertiesList pList("identifier_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
identifier_list::~identifier_list()
{
	LOG("\033[32mDESTOYING\033[0m identifier_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE jump_statement1 CLASS                                                                                 
 	FOR PATTERN : [GOTO,IDENTIFIER,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*jump_statement1::name() returns the name of the class*/
std::string jump_statement1::name()const {return "jump_statement1";}

/*jump_statement1::pattern returns the pattern matched*/
std::string jump_statement1::pattern()const {return "GOTO,IDENTIFIER,';'";}

/*construct from elements*/
jump_statement1::jump_statement1
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m jump_statement1");
}


/*jump_statement1::getProperties returns a map of properties*/
Properties jump_statement1::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
jump_statement1::~jump_statement1()
{
	LOG("\033[31mDELETING\033[0m jump_statement1");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE jump_statement2 CLASS                                                                                 
 	FOR PATTERN : [RETURN,expression,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*jump_statement2::name() returns the name of the class*/
std::string jump_statement2::name()const {return "jump_statement2";}

/*jump_statement2::pattern returns the pattern matched*/
std::string jump_statement2::pattern()const {return "RETURN,expression,';'";}

/*construct from elements*/
jump_statement2::jump_statement2
	(
		std::string _arg_s_matchedPattern,
		expression *_arg__p_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_expression(_arg__p_expression)
{
	LOG("\033[32mCREATING\033[0m jump_statement2");
}


/*jump_statement2::getProperties returns a map of properties*/
Properties jump_statement2::getProperties()const
{
	Properties props(name());
	props["expression"]=_p_expression;
	return props;
}


/*the destructor*/
jump_statement2::~jump_statement2()
{
	LOG("\033[31mDELETING\033[0m jump_statement2");
	if(_p_expression)
	{
		delete _p_expression;
		_p_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE jump_statement3 CLASS                                                                                 
 	FOR PATTERN : [CONTINUE,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*jump_statement3::name() returns the name of the class*/
std::string jump_statement3::name()const {return "jump_statement3";}

/*jump_statement3::pattern returns the pattern matched*/
std::string jump_statement3::pattern()const {return "CONTINUE,';'";}

/*construct from elements*/
jump_statement3::jump_statement3
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m jump_statement3");
}


/*jump_statement3::getProperties returns a map of properties*/
Properties jump_statement3::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
jump_statement3::~jump_statement3()
{
	LOG("\033[31mDELETING\033[0m jump_statement3");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE struct_declarator CLASS                                                                                 
 	FOR PATTERN : [declarator,':',constant_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*struct_declarator::name() returns the name of the class*/
std::string struct_declarator::name()const {return "struct_declarator";}

/*struct_declarator::pattern returns the pattern matched*/
std::string struct_declarator::pattern()const {return "declarator,':',constant_expression";}

/*construct from elements*/
struct_declarator::struct_declarator
	(
		std::string _arg_s_matchedPattern,
		declarator *_arg__p_declarator,
		Token *_arg__p_token1,
		constant_expression *_arg__p_constant_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_declarator(_arg__p_declarator),
	_p_token1(_arg__p_token1),
	_p_constant_expression(_arg__p_constant_expression)
{
	LOG("\033[32mCREATING\033[0m struct_declarator");
}


/*struct_declarator::getProperties returns a map of properties*/
Properties struct_declarator::getProperties()const
{
	Properties props(name());
	props["declarator"]=_p_declarator;
	props["token1"]=_p_token1;
	props["constant_expression"]=_p_constant_expression;
	return props;
}


/*the destructor*/
struct_declarator::~struct_declarator()
{
	LOG("\033[31mDELETING\033[0m struct_declarator");
	if(_p_declarator)
	{
		delete _p_declarator;
		_p_declarator=0;
	}
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_constant_expression)
	{
		delete _p_constant_expression;
		_p_constant_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE function_definition CLASS                                                                                 
 	FOR PATTERN : [declaration_specifiers,declarator,declaration_list,compound_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*function_definition::name() returns the name of the class*/
std::string function_definition::name()const {return "function_definition";}

/*function_definition::pattern returns the pattern matched*/
std::string function_definition::pattern()const {return "declaration_specifiers,declarator,declaration_list,compound_statement";}

/*construct from elements*/
function_definition::function_definition
	(
		std::string _arg_s_matchedPattern,
		declaration_specifiers *_arg__p_declaration_specifiers,
		declarator *_arg__p_declarator,
		declaration_list *_arg__p_declaration_list,
		compound_statement *_arg__p_compound_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_declaration_specifiers(_arg__p_declaration_specifiers),
	_p_declarator(_arg__p_declarator),
	_p_declaration_list(_arg__p_declaration_list),
	_p_compound_statement(_arg__p_compound_statement)
{
	LOG("\033[32mCREATING\033[0m function_definition");
}


/*function_definition::getProperties returns a map of properties*/
Properties function_definition::getProperties()const
{
	Properties props(name());
	props["declaration_specifiers"]=_p_declaration_specifiers;
	props["declarator"]=_p_declarator;
	props["declaration_list"]=_p_declaration_list;
	props["compound_statement"]=_p_compound_statement;
	return props;
}


/*the destructor*/
function_definition::~function_definition()
{
	LOG("\033[31mDELETING\033[0m function_definition");
	if(_p_declaration_specifiers)
	{
		delete _p_declaration_specifiers;
		_p_declaration_specifiers=0;
	}
	if(_p_declarator)
	{
		delete _p_declarator;
		_p_declarator=0;
	}
	if(_p_declaration_list)
	{
		delete _p_declaration_list;
		_p_declaration_list=0;
	}
	if(_p_compound_statement)
	{
		delete _p_compound_statement;
		_p_compound_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE parameter_list CLASS                                                                                 
 	FOR PATTERN : [parameter_list,',',parameter_declaration]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class parameter_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
parameter_list_item::parameter_list_item
	(
		std::string _arg_s_matchedPattern,
		parameter_declaration *_arg__p_parameter_declaration
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_parameter_declaration(_arg__p_parameter_declaration)
{
	LOG("\033[32mCREATING\033[0m parameter_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
parameter_list_item::parameter_list_item(const parameter_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_parameter_declaration(other._p_parameter_declaration)
{
	LOG("\033[32mCOPYING\033[0m parameter_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*parameter_list_item::getProperties returns a map of properties for the item*/
Properties parameter_list_item::getProperties()const
{
	Properties props("parameter_list_items");
	props["parameter_declaration"]=_p_parameter_declaration;
	return props;
}


/*the destructor*/
parameter_list_item::~parameter_list_item()
{
	LOG("\033[31mDELETING?\033[0m parameter_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_parameter_declaration)
	{
		delete _p_parameter_declaration;
		_p_parameter_declaration=0;
	}
	LOG("\033[31mDELETED\033[0m parameter_list");
}
/*------------------------------------------------------------*\
 							        
  main class parameter_list                         
                                                                
\*------------------------------------------------------------*/
/*parameter_list::name() returns the name of the class*/
std::string parameter_list::name()const {return "parameter_list";}

/*parameter_list::pattern returns the pattern matched*/
std::string parameter_list::pattern()const {return "parameter_list,',',parameter_declaration";}

/*construct from elements*/
parameter_list::parameter_list
	(
		std::string _arg_s_matchedPattern,
		parameter_declaration *_arg__p_parameter_declaration
	 )
{
	LOG("\033[32mCREATING\033[0m parameter_list");
	parameter_list_item item(_arg_s_matchedPattern,_arg__p_parameter_declaration);
	_items.push_back(item);
}

/*parameter_list::append() appends an item to the list of items*/
void parameter_list::append
	(
		std::string _arg_s_matchedPattern,
		parameter_declaration *_arg__p_parameter_declaration	)
{
	parameter_list_item item(_arg_s_matchedPattern, _arg__p_parameter_declaration);
	_items.push_back(item);
		
}

/*parameter_list::getPropertyList() returns the list of properties*/
PropertiesList parameter_list::getPropertiesList()const
{
	PropertiesList pList("parameter_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
parameter_list::~parameter_list()
{
	LOG("\033[32mDESTOYING\033[0m parameter_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE enum_specifier CLASS                                                                                 
 	FOR PATTERN : [ENUM,IDENTIFIER,'{',enumerator_list,'}']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*enum_specifier::name() returns the name of the class*/
std::string enum_specifier::name()const {return "enum_specifier";}

/*enum_specifier::pattern returns the pattern matched*/
std::string enum_specifier::pattern()const {return "ENUM,IDENTIFIER,'{',enumerator_list,'}'";}

/*construct from elements*/
enum_specifier::enum_specifier
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		Token *_arg__p_token2,
		enumerator_list *_arg__p_enumerator_list,
		Token *_arg__p_token3
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1),
	_p_token2(_arg__p_token2),
	_p_enumerator_list(_arg__p_enumerator_list),
	_p_token3(_arg__p_token3)
{
	LOG("\033[32mCREATING\033[0m enum_specifier");
}


/*enum_specifier::getProperties returns a map of properties*/
Properties enum_specifier::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	props["token2"]=_p_token2;
	props["enumerator_list"]=_p_enumerator_list;
	props["token3"]=_p_token3;
	return props;
}


/*the destructor*/
enum_specifier::~enum_specifier()
{
	LOG("\033[31mDELETING\033[0m enum_specifier");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_token2)
	{
		delete _p_token2;
		_p_token2=0;
	}
	if(_p_enumerator_list)
	{
		delete _p_enumerator_list;
		_p_enumerator_list=0;
	}
	if(_p_token3)
	{
		delete _p_token3;
		_p_token3=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE type_qualifier CLASS                                                                                 
 	FOR PATTERN : [CONST]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*type_qualifier::name() returns the name of the class*/
std::string type_qualifier::name()const {return "type_qualifier";}

/*type_qualifier::pattern returns the pattern matched*/
std::string type_qualifier::pattern()const {return "CONST";}

/*construct from elements*/
type_qualifier::type_qualifier
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1)
{
	LOG("\033[32mCREATING\033[0m type_qualifier");
}


/*type_qualifier::getProperties returns a map of properties*/
Properties type_qualifier::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	return props;
}


/*the destructor*/
type_qualifier::~type_qualifier()
{
	LOG("\033[31mDELETING\033[0m type_qualifier");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE enumerator_list CLASS                                                                                 
 	FOR PATTERN : [enumerator_list,',',enumerator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class enumerator_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
enumerator_list_item::enumerator_list_item
	(
		std::string _arg_s_matchedPattern,
		enumerator *_arg__p_enumerator
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_enumerator(_arg__p_enumerator)
{
	LOG("\033[32mCREATING\033[0m enumerator_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
enumerator_list_item::enumerator_list_item(const enumerator_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_enumerator(other._p_enumerator)
{
	LOG("\033[32mCOPYING\033[0m enumerator_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*enumerator_list_item::getProperties returns a map of properties for the item*/
Properties enumerator_list_item::getProperties()const
{
	Properties props("enumerator_list_items");
	props["enumerator"]=_p_enumerator;
	return props;
}


/*the destructor*/
enumerator_list_item::~enumerator_list_item()
{
	LOG("\033[31mDELETING?\033[0m enumerator_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_enumerator)
	{
		delete _p_enumerator;
		_p_enumerator=0;
	}
	LOG("\033[31mDELETED\033[0m enumerator_list");
}
/*------------------------------------------------------------*\
 							        
  main class enumerator_list                         
                                                                
\*------------------------------------------------------------*/
/*enumerator_list::name() returns the name of the class*/
std::string enumerator_list::name()const {return "enumerator_list";}

/*enumerator_list::pattern returns the pattern matched*/
std::string enumerator_list::pattern()const {return "enumerator_list,',',enumerator";}

/*construct from elements*/
enumerator_list::enumerator_list
	(
		std::string _arg_s_matchedPattern,
		enumerator *_arg__p_enumerator
	 )
{
	LOG("\033[32mCREATING\033[0m enumerator_list");
	enumerator_list_item item(_arg_s_matchedPattern,_arg__p_enumerator);
	_items.push_back(item);
}

/*enumerator_list::append() appends an item to the list of items*/
void enumerator_list::append
	(
		std::string _arg_s_matchedPattern,
		enumerator *_arg__p_enumerator	)
{
	enumerator_list_item item(_arg_s_matchedPattern, _arg__p_enumerator);
	_items.push_back(item);
		
}

/*enumerator_list::getPropertyList() returns the list of properties*/
PropertiesList enumerator_list::getPropertiesList()const
{
	PropertiesList pList("enumerator_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
enumerator_list::~enumerator_list()
{
	LOG("\033[32mDESTOYING\033[0m enumerator_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE labeled_statement1 CLASS                                                                                 
 	FOR PATTERN : [CASE,constant_expression,':',statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*labeled_statement1::name() returns the name of the class*/
std::string labeled_statement1::name()const {return "labeled_statement1";}

/*labeled_statement1::pattern returns the pattern matched*/
std::string labeled_statement1::pattern()const {return "CASE,constant_expression,':',statement";}

/*construct from elements*/
labeled_statement1::labeled_statement1
	(
		std::string _arg_s_matchedPattern,
		constant_expression *_arg__p_constant_expression,
		statement *_arg__p_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_constant_expression(_arg__p_constant_expression),
	_p_statement(_arg__p_statement)
{
	LOG("\033[32mCREATING\033[0m labeled_statement1");
}


/*labeled_statement1::getProperties returns a map of properties*/
Properties labeled_statement1::getProperties()const
{
	Properties props(name());
	props["constant_expression"]=_p_constant_expression;
	props["statement"]=_p_statement;
	return props;
}


/*the destructor*/
labeled_statement1::~labeled_statement1()
{
	LOG("\033[31mDELETING\033[0m labeled_statement1");
	if(_p_constant_expression)
	{
		delete _p_constant_expression;
		_p_constant_expression=0;
	}
	if(_p_statement)
	{
		delete _p_statement;
		_p_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE labeled_statement2 CLASS                                                                                 
 	FOR PATTERN : [IDENTIFIER,':',statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*labeled_statement2::name() returns the name of the class*/
std::string labeled_statement2::name()const {return "labeled_statement2";}

/*labeled_statement2::pattern returns the pattern matched*/
std::string labeled_statement2::pattern()const {return "IDENTIFIER,':',statement";}

/*construct from elements*/
labeled_statement2::labeled_statement2
	(
		std::string _arg_s_matchedPattern,
		Token *_arg__p_token1,
		statement *_arg__p_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_token1(_arg__p_token1),
	_p_statement(_arg__p_statement)
{
	LOG("\033[32mCREATING\033[0m labeled_statement2");
}


/*labeled_statement2::getProperties returns a map of properties*/
Properties labeled_statement2::getProperties()const
{
	Properties props(name());
	props["token1"]=_p_token1;
	props["statement"]=_p_statement;
	return props;
}


/*the destructor*/
labeled_statement2::~labeled_statement2()
{
	LOG("\033[31mDELETING\033[0m labeled_statement2");
	if(_p_token1)
	{
		delete _p_token1;
		_p_token1=0;
	}
	if(_p_statement)
	{
		delete _p_statement;
		_p_statement=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE declaration_list CLASS                                                                                 
 	FOR PATTERN : [declaration_list,declaration]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class declaration_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
declaration_list_item::declaration_list_item
	(
		std::string _arg_s_matchedPattern,
		declaration *_arg__p_declaration
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_declaration(_arg__p_declaration)
{
	LOG("\033[32mCREATING\033[0m declaration_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
declaration_list_item::declaration_list_item(const declaration_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_declaration(other._p_declaration)
{
	LOG("\033[32mCOPYING\033[0m declaration_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*declaration_list_item::getProperties returns a map of properties for the item*/
Properties declaration_list_item::getProperties()const
{
	Properties props("declaration_list_items");
	props["declaration"]=_p_declaration;
	return props;
}


/*the destructor*/
declaration_list_item::~declaration_list_item()
{
	LOG("\033[31mDELETING?\033[0m declaration_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_declaration)
	{
		delete _p_declaration;
		_p_declaration=0;
	}
	LOG("\033[31mDELETED\033[0m declaration_list");
}
/*------------------------------------------------------------*\
 							        
  main class declaration_list                         
                                                                
\*------------------------------------------------------------*/
/*declaration_list::name() returns the name of the class*/
std::string declaration_list::name()const {return "declaration_list";}

/*declaration_list::pattern returns the pattern matched*/
std::string declaration_list::pattern()const {return "declaration_list,declaration";}

/*construct from elements*/
declaration_list::declaration_list
	(
		std::string _arg_s_matchedPattern,
		declaration *_arg__p_declaration
	 )
{
	LOG("\033[32mCREATING\033[0m declaration_list");
	declaration_list_item item(_arg_s_matchedPattern,_arg__p_declaration);
	_items.push_back(item);
}

/*declaration_list::append() appends an item to the list of items*/
void declaration_list::append
	(
		std::string _arg_s_matchedPattern,
		declaration *_arg__p_declaration	)
{
	declaration_list_item item(_arg_s_matchedPattern, _arg__p_declaration);
	_items.push_back(item);
		
}

/*declaration_list::getPropertyList() returns the list of properties*/
PropertiesList declaration_list::getPropertiesList()const
{
	PropertiesList pList("declaration_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
declaration_list::~declaration_list()
{
	LOG("\033[32mDESTOYING\033[0m declaration_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE specifier_qualifier_list1 CLASS                                                                                 
 	FOR PATTERN : [type_specifier,specifier_qualifier_list]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class specifier_qualifier_list1_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
specifier_qualifier_list1_item::specifier_qualifier_list1_item
	(
		std::string _arg_s_matchedPattern,
		type_specifier *_arg__p_type_specifier
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_type_specifier(_arg__p_type_specifier)
{
	LOG("\033[32mCREATING\033[0m specifier_qualifier_list1");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
specifier_qualifier_list1_item::specifier_qualifier_list1_item(const specifier_qualifier_list1_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_type_specifier(other._p_type_specifier)
{
	LOG("\033[32mCOPYING\033[0m specifier_qualifier_list1_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*specifier_qualifier_list1_item::getProperties returns a map of properties for the item*/
Properties specifier_qualifier_list1_item::getProperties()const
{
	Properties props("specifier_qualifier_list1_items");
	props["type_specifier"]=_p_type_specifier;
	return props;
}


/*the destructor*/
specifier_qualifier_list1_item::~specifier_qualifier_list1_item()
{
	LOG("\033[31mDELETING?\033[0m specifier_qualifier_list1_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_type_specifier)
	{
		delete _p_type_specifier;
		_p_type_specifier=0;
	}
	LOG("\033[31mDELETED\033[0m specifier_qualifier_list1");
}
/*------------------------------------------------------------*\
 							        
  main class specifier_qualifier_list1                         
                                                                
\*------------------------------------------------------------*/
/*specifier_qualifier_list1::name() returns the name of the class*/
std::string specifier_qualifier_list1::name()const {return "specifier_qualifier_list1";}

/*specifier_qualifier_list1::pattern returns the pattern matched*/
std::string specifier_qualifier_list1::pattern()const {return "type_specifier,specifier_qualifier_list";}

/*construct from elements*/
specifier_qualifier_list1::specifier_qualifier_list1
	(
		std::string _arg_s_matchedPattern,
		type_specifier *_arg__p_type_specifier
	 )
{
	LOG("\033[32mCREATING\033[0m specifier_qualifier_list1");
	specifier_qualifier_list1_item item(_arg_s_matchedPattern,_arg__p_type_specifier);
	_items.push_back(item);
}

/*specifier_qualifier_list1::append() appends an item to the list of items*/
void specifier_qualifier_list1::append
	(
		std::string _arg_s_matchedPattern,
		type_specifier *_arg__p_type_specifier	)
{
	specifier_qualifier_list1_item item(_arg_s_matchedPattern, _arg__p_type_specifier);
	_items.push_back(item);
		
}

/*specifier_qualifier_list1::getPropertyList() returns the list of properties*/
PropertiesList specifier_qualifier_list1::getPropertiesList()const
{
	PropertiesList pList("specifier_qualifier_list1");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
specifier_qualifier_list1::~specifier_qualifier_list1()
{
	LOG("\033[32mDESTOYING\033[0m specifier_qualifier_list1");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE specifier_qualifier_list2 CLASS                                                                                 
 	FOR PATTERN : [type_qualifier,specifier_qualifier_list]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class specifier_qualifier_list2_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
specifier_qualifier_list2_item::specifier_qualifier_list2_item
	(
		std::string _arg_s_matchedPattern,
		type_qualifier *_arg__p_type_qualifier
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_type_qualifier(_arg__p_type_qualifier)
{
	LOG("\033[32mCREATING\033[0m specifier_qualifier_list2");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
specifier_qualifier_list2_item::specifier_qualifier_list2_item(const specifier_qualifier_list2_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_type_qualifier(other._p_type_qualifier)
{
	LOG("\033[32mCOPYING\033[0m specifier_qualifier_list2_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*specifier_qualifier_list2_item::getProperties returns a map of properties for the item*/
Properties specifier_qualifier_list2_item::getProperties()const
{
	Properties props("specifier_qualifier_list2_items");
	props["type_qualifier"]=_p_type_qualifier;
	return props;
}


/*the destructor*/
specifier_qualifier_list2_item::~specifier_qualifier_list2_item()
{
	LOG("\033[31mDELETING?\033[0m specifier_qualifier_list2_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_type_qualifier)
	{
		delete _p_type_qualifier;
		_p_type_qualifier=0;
	}
	LOG("\033[31mDELETED\033[0m specifier_qualifier_list2");
}
/*------------------------------------------------------------*\
 							        
  main class specifier_qualifier_list2                         
                                                                
\*------------------------------------------------------------*/
/*specifier_qualifier_list2::name() returns the name of the class*/
std::string specifier_qualifier_list2::name()const {return "specifier_qualifier_list2";}

/*specifier_qualifier_list2::pattern returns the pattern matched*/
std::string specifier_qualifier_list2::pattern()const {return "type_qualifier,specifier_qualifier_list";}

/*construct from elements*/
specifier_qualifier_list2::specifier_qualifier_list2
	(
		std::string _arg_s_matchedPattern,
		type_qualifier *_arg__p_type_qualifier
	 )
{
	LOG("\033[32mCREATING\033[0m specifier_qualifier_list2");
	specifier_qualifier_list2_item item(_arg_s_matchedPattern,_arg__p_type_qualifier);
	_items.push_back(item);
}

/*specifier_qualifier_list2::append() appends an item to the list of items*/
void specifier_qualifier_list2::append
	(
		std::string _arg_s_matchedPattern,
		type_qualifier *_arg__p_type_qualifier	)
{
	specifier_qualifier_list2_item item(_arg_s_matchedPattern, _arg__p_type_qualifier);
	_items.push_back(item);
		
}

/*specifier_qualifier_list2::getPropertyList() returns the list of properties*/
PropertiesList specifier_qualifier_list2::getPropertiesList()const
{
	PropertiesList pList("specifier_qualifier_list2");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
specifier_qualifier_list2::~specifier_qualifier_list2()
{
	LOG("\033[32mDESTOYING\033[0m specifier_qualifier_list2");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE translation_unit CLASS                                                                                 
 	FOR PATTERN : [translation_unit,external_declaration]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class translation_unit_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
translation_unit_item::translation_unit_item
	(
		std::string _arg_s_matchedPattern,
		external_declaration *_arg__p_external_declaration
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_external_declaration(_arg__p_external_declaration)
{
	LOG("\033[32mCREATING\033[0m translation_unit");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
translation_unit_item::translation_unit_item(const translation_unit_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_external_declaration(other._p_external_declaration)
{
	LOG("\033[32mCOPYING\033[0m translation_unit_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*translation_unit_item::getProperties returns a map of properties for the item*/
Properties translation_unit_item::getProperties()const
{
	Properties props("translation_unit_items");
	props["external_declaration"]=_p_external_declaration;
	return props;
}


/*the destructor*/
translation_unit_item::~translation_unit_item()
{
	LOG("\033[31mDELETING?\033[0m translation_unit_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_external_declaration)
	{
		delete _p_external_declaration;
		_p_external_declaration=0;
	}
	LOG("\033[31mDELETED\033[0m translation_unit");
}
/*------------------------------------------------------------*\
 							        
  main class translation_unit                         
                                                                
\*------------------------------------------------------------*/
/*translation_unit::name() returns the name of the class*/
std::string translation_unit::name()const {return "translation_unit";}

/*translation_unit::pattern returns the pattern matched*/
std::string translation_unit::pattern()const {return "translation_unit,external_declaration";}

/*construct from elements*/
translation_unit::translation_unit
	(
		std::string _arg_s_matchedPattern,
		external_declaration *_arg__p_external_declaration
	 )
{
	LOG("\033[32mCREATING\033[0m translation_unit");
	translation_unit_item item(_arg_s_matchedPattern,_arg__p_external_declaration);
	_items.push_back(item);
}

/*translation_unit::append() appends an item to the list of items*/
void translation_unit::append
	(
		std::string _arg_s_matchedPattern,
		external_declaration *_arg__p_external_declaration	)
{
	translation_unit_item item(_arg_s_matchedPattern, _arg__p_external_declaration);
	_items.push_back(item);
		
}

/*translation_unit::getPropertyList() returns the list of properties*/
PropertiesList translation_unit::getPropertiesList()const
{
	PropertiesList pList("translation_unit");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
translation_unit::~translation_unit()
{
	LOG("\033[32mDESTOYING\033[0m translation_unit");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE constant_expression CLASS                                                                                 
 	FOR PATTERN : [conditional_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*constant_expression::name() returns the name of the class*/
std::string constant_expression::name()const {return "constant_expression";}

/*constant_expression::pattern returns the pattern matched*/
std::string constant_expression::pattern()const {return "conditional_expression";}

/*construct from elements*/
constant_expression::constant_expression
	(
		std::string _arg_s_matchedPattern,
		conditional_expression *_arg__p_conditional_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_conditional_expression(_arg__p_conditional_expression)
{
	LOG("\033[32mCREATING\033[0m constant_expression");
}


/*constant_expression::getProperties returns a map of properties*/
Properties constant_expression::getProperties()const
{
	Properties props(name());
	props["conditional_expression"]=_p_conditional_expression;
	return props;
}


/*the destructor*/
constant_expression::~constant_expression()
{
	LOG("\033[31mDELETING\033[0m constant_expression");
	if(_p_conditional_expression)
	{
		delete _p_conditional_expression;
		_p_conditional_expression=0;
	}

}


			
/*=============================================================================================================*\
                                                                                                                 
 	THE initializer_list CLASS                                                                                 
 	FOR PATTERN : [initializer_list,',',initializer]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class initializer_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
initializer_list_item::initializer_list_item
	(
		std::string _arg_s_matchedPattern,
		initializer *_arg__p_initializer
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_initializer(_arg__p_initializer)
{
	LOG("\033[32mCREATING\033[0m initializer_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
initializer_list_item::initializer_list_item(const initializer_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_initializer(other._p_initializer)
{
	LOG("\033[32mCOPYING\033[0m initializer_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*initializer_list_item::getProperties returns a map of properties for the item*/
Properties initializer_list_item::getProperties()const
{
	Properties props("initializer_list_items");
	props["initializer"]=_p_initializer;
	return props;
}


/*the destructor*/
initializer_list_item::~initializer_list_item()
{
	LOG("\033[31mDELETING?\033[0m initializer_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_initializer)
	{
		delete _p_initializer;
		_p_initializer=0;
	}
	LOG("\033[31mDELETED\033[0m initializer_list");
}
/*------------------------------------------------------------*\
 							        
  main class initializer_list                         
                                                                
\*------------------------------------------------------------*/
/*initializer_list::name() returns the name of the class*/
std::string initializer_list::name()const {return "initializer_list";}

/*initializer_list::pattern returns the pattern matched*/
std::string initializer_list::pattern()const {return "initializer_list,',',initializer";}

/*construct from elements*/
initializer_list::initializer_list
	(
		std::string _arg_s_matchedPattern,
		initializer *_arg__p_initializer
	 )
{
	LOG("\033[32mCREATING\033[0m initializer_list");
	initializer_list_item item(_arg_s_matchedPattern,_arg__p_initializer);
	_items.push_back(item);
}

/*initializer_list::append() appends an item to the list of items*/
void initializer_list::append
	(
		std::string _arg_s_matchedPattern,
		initializer *_arg__p_initializer	)
{
	initializer_list_item item(_arg_s_matchedPattern, _arg__p_initializer);
	_items.push_back(item);
		
}

/*initializer_list::getPropertyList() returns the list of properties*/
PropertiesList initializer_list::getPropertiesList()const
{
	PropertiesList pList("initializer_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
initializer_list::~initializer_list()
{
	LOG("\033[32mDESTOYING\033[0m initializer_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE statement_list CLASS                                                                                 
 	FOR PATTERN : [statement_list,statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class statement_list_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
statement_list_item::statement_list_item
	(
		std::string _arg_s_matchedPattern,
		statement *_arg__p_statement
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_statement(_arg__p_statement)
{
	LOG("\033[32mCREATING\033[0m statement_list");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
statement_list_item::statement_list_item(const statement_list_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_statement(other._p_statement)
{
	LOG("\033[32mCOPYING\033[0m statement_list_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*statement_list_item::getProperties returns a map of properties for the item*/
Properties statement_list_item::getProperties()const
{
	Properties props("statement_list_items");
	props["statement"]=_p_statement;
	return props;
}


/*the destructor*/
statement_list_item::~statement_list_item()
{
	LOG("\033[31mDELETING?\033[0m statement_list_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_statement)
	{
		delete _p_statement;
		_p_statement=0;
	}
	LOG("\033[31mDELETED\033[0m statement_list");
}
/*------------------------------------------------------------*\
 							        
  main class statement_list                         
                                                                
\*------------------------------------------------------------*/
/*statement_list::name() returns the name of the class*/
std::string statement_list::name()const {return "statement_list";}

/*statement_list::pattern returns the pattern matched*/
std::string statement_list::pattern()const {return "statement_list,statement";}

/*construct from elements*/
statement_list::statement_list
	(
		std::string _arg_s_matchedPattern,
		statement *_arg__p_statement
	 )
{
	LOG("\033[32mCREATING\033[0m statement_list");
	statement_list_item item(_arg_s_matchedPattern,_arg__p_statement);
	_items.push_back(item);
}

/*statement_list::append() appends an item to the list of items*/
void statement_list::append
	(
		std::string _arg_s_matchedPattern,
		statement *_arg__p_statement	)
{
	statement_list_item item(_arg_s_matchedPattern, _arg__p_statement);
	_items.push_back(item);
		
}

/*statement_list::getPropertyList() returns the list of properties*/
PropertiesList statement_list::getPropertiesList()const
{
	PropertiesList pList("statement_list");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
statement_list::~statement_list()
{
	LOG("\033[32mDESTOYING\033[0m statement_list");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE expression CLASS                                                                                 
 	FOR PATTERN : [expression,',',assignment_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*------------------------------------------------------------*\
 							        
  item class expression_item                              
                                                                
\*------------------------------------------------------------*/
/*construct item from elements*/
expression_item::expression_item
	(
		std::string _arg_s_matchedPattern,
		assignment_expression *_arg__p_assignment_expression
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_refCount(new int(1)),
	_p_assignment_expression(_arg__p_assignment_expression)
{
	LOG("\033[32mCREATING\033[0m expression");
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after creation:"<<(*_refCount));//>>>>
}


/*copy constructor*/
expression_item::expression_item(const expression_item& other):
		_s_matchedPattern(other._s_matchedPattern),
		_refCount(other._refCount),
		_p_assignment_expression(other._p_assignment_expression)
{
	LOG("\033[32mCOPYING\033[0m expression_item");
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after increement:"<<(*_refCount));//>>>>

}


/*expression_item::getProperties returns a map of properties for the item*/
Properties expression_item::getProperties()const
{
	Properties props("expression_items");
	props["assignment_expression"]=_p_assignment_expression;
	return props;
}


/*the destructor*/
expression_item::~expression_item()
{
	LOG("\033[31mDELETING?\033[0m expression_item");
	(*_refCount)--;
	if((*_refCount)>0)return;
	LOG("[ "<<_refCount<<" ]\t"<<"refCount after decrement:"<<(*_refCount));//>>>>
	if(_p_assignment_expression)
	{
		delete _p_assignment_expression;
		_p_assignment_expression=0;
	}
	LOG("\033[31mDELETED\033[0m expression");
}
/*------------------------------------------------------------*\
 							        
  main class expression                         
                                                                
\*------------------------------------------------------------*/
/*expression::name() returns the name of the class*/
std::string expression::name()const {return "expression";}

/*expression::pattern returns the pattern matched*/
std::string expression::pattern()const {return "expression,',',assignment_expression";}

/*construct from elements*/
expression::expression
	(
		std::string _arg_s_matchedPattern,
		assignment_expression *_arg__p_assignment_expression
	 )
{
	LOG("\033[32mCREATING\033[0m expression");
	expression_item item(_arg_s_matchedPattern,_arg__p_assignment_expression);
	_items.push_back(item);
}

/*expression::append() appends an item to the list of items*/
void expression::append
	(
		std::string _arg_s_matchedPattern,
		assignment_expression *_arg__p_assignment_expression	)
{
	expression_item item(_arg_s_matchedPattern, _arg__p_assignment_expression);
	_items.push_back(item);
		
}

/*expression::getPropertyList() returns the list of properties*/
PropertiesList expression::getPropertiesList()const
{
	PropertiesList pList("expression");
	for (CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
	
}

/*the destructor*/
expression::~expression()
{
	LOG("\033[32mDESTOYING\033[0m expression");
	_items.clear();
}


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE declarator CLASS                                                                                 
 	FOR PATTERN : [pointer,direct_declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  

/*declarator::name() returns the name of the class*/
std::string declarator::name()const {return "declarator";}

/*declarator::pattern returns the pattern matched*/
std::string declarator::pattern()const {return "pointer,direct_declarator";}

/*construct from elements*/
declarator::declarator
	(
		std::string _arg_s_matchedPattern,
		pointer *_arg__p_pointer,
		direct_declarator *_arg__p_direct_declarator
	):
	_s_matchedPattern(_arg_s_matchedPattern),
	_p_pointer(_arg__p_pointer),
	_p_direct_declarator(_arg__p_direct_declarator)
{
	LOG("\033[32mCREATING\033[0m declarator");
}


/*declarator::getProperties returns a map of properties*/
Properties declarator::getProperties()const
{
	Properties props(name());
	props["pointer"]=_p_pointer;
	props["direct_declarator"]=_p_direct_declarator;
	return props;
}


/*the destructor*/
declarator::~declarator()
{
	LOG("\033[31mDELETING\033[0m declarator");
	if(_p_pointer)
	{
		delete _p_pointer;
		_p_pointer=0;
	}
	if(_p_direct_declarator)
	{
		delete _p_direct_declarator;
		_p_direct_declarator=0;
	}

}





}//namespace CAst
