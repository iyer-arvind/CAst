#include "CAst.h"
namespace CAst
{


std::ostream& Properties::toStream(std::ostream& stream)const
{

	stream<<"{";
	bool flag=false;
	for(std::map<std::string,CAst*>::const_iterator i=begin();i!=end();i++)
	{
		if(i->second)
		{
			if(flag)
				stream<<",";
			stream<<"\""<<i->first<<"\":";
			stream<<"("<<i->second->name()<<",";
			if(i->second->isList())
			{
				i->second->getPropertiesList().toStream(stream);
			}
			else
			{
				i->second->getProperties().toStream(stream);
			}
			stream<<")";
			flag=true;
		}
		else
		{
			//stream<<"NULL";
		}
	}
	stream<<"}";
	return stream;
}/*----------------------------------------------------------------------------------------------------*\
                    storage_class_specifier
\*----------------------------------------------------------------------------------------------------*/
std::string storage_class_specifier::name()const
{
	return std::string("storage_class_specifier");
}

std::string storage_class_specifier::pattern()const
{
	return std::string("TYPEDEF");
}

storage_class_specifier::storage_class_specifier(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m storage_class_specifier")
}
Properties storage_class_specifier::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;
}
storage_class_specifier::~storage_class_specifier()
{

	LOG("\033[31mDELETING\033[0m storage_class_specifier")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    expression_statement
\*----------------------------------------------------------------------------------------------------*/
std::string expression_statement::name()const
{
	return std::string("expression_statement");
}

std::string expression_statement::pattern()const
{
	return std::string("expression,';'");
}

expression_statement::expression_statement(std::string _arg__s_matchedPattern, expression *_arg__p_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_expression(_arg__p_expression)
{

	LOG("\033[32mCREATING\033[0m expression_statement")
}
Properties expression_statement::getProperties()const
{
	Properties props;
	props["expression"]=_p_expression;
	return props;
}
expression_statement::~expression_statement()
{

	LOG("\033[31mDELETING\033[0m expression_statement")
	if (_p_expression)                 {delete(_p_expression);_p_expression=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    type_name
\*----------------------------------------------------------------------------------------------------*/
std::string type_name::name()const
{
	return std::string("type_name");
}

std::string type_name::pattern()const
{
	return std::string("specifier_qualifier_list,abstract_declarator");
}

type_name::type_name(std::string _arg__s_matchedPattern, specifier_qualifier_list *_arg__p_specifier_qualifier_list, abstract_declarator *_arg__p_abstract_declarator):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_specifier_qualifier_list(_arg__p_specifier_qualifier_list),
					_p_abstract_declarator(_arg__p_abstract_declarator)
{

	LOG("\033[32mCREATING\033[0m type_name")
}
Properties type_name::getProperties()const
{
	Properties props;
	props["specifier_qualifier_list"]=_p_specifier_qualifier_list;
	props["abstract_declarator"]=_p_abstract_declarator;
	return props;
}
type_name::~type_name()
{

	LOG("\033[31mDELETING\033[0m type_name")
	if (_p_specifier_qualifier_list)   {delete(_p_specifier_qualifier_list);_p_specifier_qualifier_list=0;}
	if (_p_abstract_declarator)        {delete(_p_abstract_declarator);_p_abstract_declarator=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    unary_expression
\*----------------------------------------------------------------------------------------------------*/
std::string unary_expression1::name()const
{
	return std::string("unary_expression1");
}

std::string unary_expression1::pattern()const
{
	return std::string("SIZEOF,'(',type_name,')'");
}

unary_expression1::unary_expression1(std::string _arg__s_matchedPattern, type_name *_arg__p_type_name):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_type_name(_arg__p_type_name)
{

	LOG("\033[32mCREATING\033[0m unary_expression1")
}
Properties unary_expression1::getProperties()const
{
	Properties props;
	props["type_name"]=_p_type_name;
	return props;
}
unary_expression1::~unary_expression1()
{

	LOG("\033[31mDELETING\033[0m unary_expression1")
	if (_p_type_name)                  {delete(_p_type_name);_p_type_name=0;}
}
std::string unary_expression2::name()const
{
	return std::string("unary_expression2");
}

std::string unary_expression2::pattern()const
{
	return std::string("INC_OP,unary_expression");
}

unary_expression2::unary_expression2(std::string _arg__s_matchedPattern, Token *_arg__p_token1, unary_expression *_arg__p_unary_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1),
					_p_unary_expression(_arg__p_unary_expression)
{

	LOG("\033[32mCREATING\033[0m unary_expression2")
}
Properties unary_expression2::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	props["unary_expression"]=_p_unary_expression;
	return props;
}
unary_expression2::~unary_expression2()
{

	LOG("\033[31mDELETING\033[0m unary_expression2")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
	if (_p_unary_expression)           {delete(_p_unary_expression);_p_unary_expression=0;}
}
std::string unary_expression3::name()const
{
	return std::string("unary_expression3");
}

std::string unary_expression3::pattern()const
{
	return std::string("unary_operator,cast_expression");
}

unary_expression3::unary_expression3(std::string _arg__s_matchedPattern, unary_operator *_arg__p_unary_operator, cast_expression *_arg__p_cast_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_unary_operator(_arg__p_unary_operator),
					_p_cast_expression(_arg__p_cast_expression)
{

	LOG("\033[32mCREATING\033[0m unary_expression3")
}
Properties unary_expression3::getProperties()const
{
	Properties props;
	props["unary_operator"]=_p_unary_operator;
	props["cast_expression"]=_p_cast_expression;
	return props;
}
unary_expression3::~unary_expression3()
{

	LOG("\033[31mDELETING\033[0m unary_expression3")
	if (_p_unary_operator)             {delete(_p_unary_operator);_p_unary_operator=0;}
	if (_p_cast_expression)            {delete(_p_cast_expression);_p_cast_expression=0;}
}
std::string unary_expression4::name()const
{
	return std::string("unary_expression4");
}

std::string unary_expression4::pattern()const
{
	return std::string("postfix_expression");
}

unary_expression4::unary_expression4(std::string _arg__s_matchedPattern, postfix_expression *_arg__p_postfix_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_postfix_expression(_arg__p_postfix_expression)
{

	LOG("\033[32mCREATING\033[0m unary_expression4")
}
Properties unary_expression4::getProperties()const
{
	Properties props;
	props["postfix_expression"]=_p_postfix_expression;
	return props;
}
unary_expression4::~unary_expression4()
{

	LOG("\033[31mDELETING\033[0m unary_expression4")
	if (_p_postfix_expression)         {delete(_p_postfix_expression);_p_postfix_expression=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    conditional_expression
\*----------------------------------------------------------------------------------------------------*/
conditional_expression_item::conditional_expression_item(std::string _arg__s_matchedPattern, logical_or_expression *_arg__p_logical_or_expression, expression *_arg__p_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_logical_or_expression(_arg__p_logical_or_expression),
					_p_expression(_arg__p_expression)
{

	LOG("\033[32mCREATING[0m conditional_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	conditional_expression_item::conditional_expression_item(const conditional_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_logical_or_expression(other._p_logical_or_expression),
					_p_expression(other._p_expression)
{

	LOG("COPYING conditional_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties conditional_expression_item::getProperties()const
{
	Properties props;
	props["logical_or_expression"]=_p_logical_or_expression;
	props["expression"]=_p_expression;
	return props;

}

conditional_expression_item::~conditional_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) conditional_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m conditional_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_logical_or_expression)      
	{
		delete(_p_logical_or_expression);
		_p_logical_or_expression=0;
	}
	if (_p_expression)                 
	{
		delete(_p_expression);
		_p_expression=0;
	}
	LOG("\033[31mDELETED\033[0m conditional_expression_item")

}
std::string conditional_expression::name()const
{
	return std::string("conditional_expression");
}

std::string conditional_expression::pattern()const
{
	return std::string("logical_or_expression,'?',expression,':',conditional_expression");
}

conditional_expression::conditional_expression(std::string _arg__s_matchedPattern, logical_or_expression *_arg__p_logical_or_expression)
{

	LOG("CREATING conditional_expression")
	conditional_expression_item item(_arg__s_matchedPattern, _arg__p_logical_or_expression, NULL);

	LOG("APPENDING to conditional_expression")
	_items.push_back(item);
}
void conditional_expression::append(std::string _arg__s_matchedPattern, logical_or_expression *_arg__p_logical_or_expression, expression *_arg__p_expression)
{
	conditional_expression_item item(_arg__s_matchedPattern, _arg__p_logical_or_expression, _arg__p_expression);
	_items.push_back(item);
}
PropertiesList conditional_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

conditional_expression::~conditional_expression()
{

	LOG("DELETING conditional_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    struct_or_union_specifier
\*----------------------------------------------------------------------------------------------------*/
std::string struct_or_union_specifier::name()const
{
	return std::string("struct_or_union_specifier");
}

std::string struct_or_union_specifier::pattern()const
{
	return std::string("struct_or_union,IDENTIFIER,'{',struct_declaration_list,'}'");
}

struct_or_union_specifier::struct_or_union_specifier(std::string _arg__s_matchedPattern, struct_or_union *_arg__p_struct_or_union, Token *_arg__p_token1, Token *_arg__p_token2, struct_declaration_list *_arg__p_struct_declaration_list, Token *_arg__p_token3):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_struct_or_union(_arg__p_struct_or_union),
					_p_token1(_arg__p_token1),
					_p_token2(_arg__p_token2),
					_p_struct_declaration_list(_arg__p_struct_declaration_list),
					_p_token3(_arg__p_token3)
{

	LOG("\033[32mCREATING\033[0m struct_or_union_specifier")
}
Properties struct_or_union_specifier::getProperties()const
{
	Properties props;
	props["struct_or_union"]=_p_struct_or_union;
	props["token1"]=_p_token1;
	props["token2"]=_p_token2;
	props["struct_declaration_list"]=_p_struct_declaration_list;
	props["token3"]=_p_token3;
	return props;
}
struct_or_union_specifier::~struct_or_union_specifier()
{

	LOG("\033[31mDELETING\033[0m struct_or_union_specifier")
	if (_p_struct_or_union)            {delete(_p_struct_or_union);_p_struct_or_union=0;}
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
	if (_p_token2)                     {delete(_p_token2);_p_token2=0;}
	if (_p_struct_declaration_list)    {delete(_p_struct_declaration_list);_p_struct_declaration_list=0;}
	if (_p_token3)                     {delete(_p_token3);_p_token3=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    exclusive_or_expression
\*----------------------------------------------------------------------------------------------------*/
exclusive_or_expression_item::exclusive_or_expression_item(std::string _arg__s_matchedPattern, and_expression *_arg__p_and_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_and_expression(_arg__p_and_expression)
{

	LOG("\033[32mCREATING[0m exclusive_or_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	exclusive_or_expression_item::exclusive_or_expression_item(const exclusive_or_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_and_expression(other._p_and_expression)
{

	LOG("COPYING exclusive_or_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties exclusive_or_expression_item::getProperties()const
{
	Properties props;
	props["and_expression"]=_p_and_expression;
	return props;

}

exclusive_or_expression_item::~exclusive_or_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) exclusive_or_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m exclusive_or_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_and_expression)             
	{
		delete(_p_and_expression);
		_p_and_expression=0;
	}
	LOG("\033[31mDELETED\033[0m exclusive_or_expression_item")

}
std::string exclusive_or_expression::name()const
{
	return std::string("exclusive_or_expression");
}

std::string exclusive_or_expression::pattern()const
{
	return std::string("exclusive_or_expression,'^',and_expression");
}

exclusive_or_expression::exclusive_or_expression(std::string _arg__s_matchedPattern, and_expression *_arg__p_and_expression)
{

	LOG("CREATING exclusive_or_expression")
	exclusive_or_expression_item item(_arg__s_matchedPattern, _arg__p_and_expression);

	LOG("APPENDING to exclusive_or_expression")
	_items.push_back(item);
}
void exclusive_or_expression::append(std::string _arg__s_matchedPattern, and_expression *_arg__p_and_expression)
{
	exclusive_or_expression_item item(_arg__s_matchedPattern, _arg__p_and_expression);
	_items.push_back(item);
}
PropertiesList exclusive_or_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

exclusive_or_expression::~exclusive_or_expression()
{

	LOG("DELETING exclusive_or_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    initializer
\*----------------------------------------------------------------------------------------------------*/
std::string initializer1::name()const
{
	return std::string("initializer1");
}

std::string initializer1::pattern()const
{
	return std::string("'{',initializer_list,',','}'");
}

initializer1::initializer1(std::string _arg__s_matchedPattern, initializer_list *_arg__p_initializer_list, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_initializer_list(_arg__p_initializer_list),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m initializer1")
}
Properties initializer1::getProperties()const
{
	Properties props;
	props["initializer_list"]=_p_initializer_list;
	props["token1"]=_p_token1;
	return props;
}
initializer1::~initializer1()
{

	LOG("\033[31mDELETING\033[0m initializer1")
	if (_p_initializer_list)           {delete(_p_initializer_list);_p_initializer_list=0;}
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}
std::string initializer2::name()const
{
	return std::string("initializer2");
}

std::string initializer2::pattern()const
{
	return std::string("assignment_expression");
}

initializer2::initializer2(std::string _arg__s_matchedPattern, assignment_expression *_arg__p_assignment_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_assignment_expression(_arg__p_assignment_expression)
{

	LOG("\033[32mCREATING\033[0m initializer2")
}
Properties initializer2::getProperties()const
{
	Properties props;
	props["assignment_expression"]=_p_assignment_expression;
	return props;
}
initializer2::~initializer2()
{

	LOG("\033[31mDELETING\033[0m initializer2")
	if (_p_assignment_expression)      {delete(_p_assignment_expression);_p_assignment_expression=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    struct_declaration_list
\*----------------------------------------------------------------------------------------------------*/
struct_declaration_list_item::struct_declaration_list_item(std::string _arg__s_matchedPattern, struct_declaration *_arg__p_struct_declaration):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_struct_declaration(_arg__p_struct_declaration)
{

	LOG("\033[32mCREATING[0m struct_declaration_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	struct_declaration_list_item::struct_declaration_list_item(const struct_declaration_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_struct_declaration(other._p_struct_declaration)
{

	LOG("COPYING struct_declaration_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties struct_declaration_list_item::getProperties()const
{
	Properties props;
	props["struct_declaration"]=_p_struct_declaration;
	return props;

}

struct_declaration_list_item::~struct_declaration_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) struct_declaration_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m struct_declaration_list_item")

	delete(_refCount);_refCount=0;
	if (_p_struct_declaration)         
	{
		delete(_p_struct_declaration);
		_p_struct_declaration=0;
	}
	LOG("\033[31mDELETED\033[0m struct_declaration_list_item")

}
std::string struct_declaration_list::name()const
{
	return std::string("struct_declaration_list");
}

std::string struct_declaration_list::pattern()const
{
	return std::string("struct_declaration_list,struct_declaration");
}

struct_declaration_list::struct_declaration_list(std::string _arg__s_matchedPattern, struct_declaration *_arg__p_struct_declaration)
{

	LOG("CREATING struct_declaration_list")
	struct_declaration_list_item item(_arg__s_matchedPattern, _arg__p_struct_declaration);

	LOG("APPENDING to struct_declaration_list")
	_items.push_back(item);
}
void struct_declaration_list::append(std::string _arg__s_matchedPattern, struct_declaration *_arg__p_struct_declaration)
{
	struct_declaration_list_item item(_arg__s_matchedPattern, _arg__p_struct_declaration);
	_items.push_back(item);
}
PropertiesList struct_declaration_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

struct_declaration_list::~struct_declaration_list()
{

	LOG("DELETING struct_declaration_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    assignment_operator
\*----------------------------------------------------------------------------------------------------*/
std::string assignment_operator::name()const
{
	return std::string("assignment_operator");
}

std::string assignment_operator::pattern()const
{
	return std::string("'='");
}

assignment_operator::assignment_operator(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m assignment_operator")
}
Properties assignment_operator::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;
}
assignment_operator::~assignment_operator()
{

	LOG("\033[31mDELETING\033[0m assignment_operator")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    struct_declaration
\*----------------------------------------------------------------------------------------------------*/
std::string struct_declaration::name()const
{
	return std::string("struct_declaration");
}

std::string struct_declaration::pattern()const
{
	return std::string("specifier_qualifier_list,struct_declarator_list,';'");
}

struct_declaration::struct_declaration(std::string _arg__s_matchedPattern, specifier_qualifier_list *_arg__p_specifier_qualifier_list, struct_declarator_list *_arg__p_struct_declarator_list):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_specifier_qualifier_list(_arg__p_specifier_qualifier_list),
					_p_struct_declarator_list(_arg__p_struct_declarator_list)
{

	LOG("\033[32mCREATING\033[0m struct_declaration")
}
Properties struct_declaration::getProperties()const
{
	Properties props;
	props["specifier_qualifier_list"]=_p_specifier_qualifier_list;
	props["struct_declarator_list"]=_p_struct_declarator_list;
	return props;
}
struct_declaration::~struct_declaration()
{

	LOG("\033[31mDELETING\033[0m struct_declaration")
	if (_p_specifier_qualifier_list)   {delete(_p_specifier_qualifier_list);_p_specifier_qualifier_list=0;}
	if (_p_struct_declarator_list)     {delete(_p_struct_declarator_list);_p_struct_declarator_list=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    abstract_declarator
\*----------------------------------------------------------------------------------------------------*/
std::string abstract_declarator::name()const
{
	return std::string("abstract_declarator");
}

std::string abstract_declarator::pattern()const
{
	return std::string("pointer,direct_abstract_declarator");
}

abstract_declarator::abstract_declarator(std::string _arg__s_matchedPattern, pointer *_arg__p_pointer, direct_abstract_declarator *_arg__p_direct_abstract_declarator):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_pointer(_arg__p_pointer),
					_p_direct_abstract_declarator(_arg__p_direct_abstract_declarator)
{

	LOG("\033[32mCREATING\033[0m abstract_declarator")
}
Properties abstract_declarator::getProperties()const
{
	Properties props;
	props["pointer"]=_p_pointer;
	props["direct_abstract_declarator"]=_p_direct_abstract_declarator;
	return props;
}
abstract_declarator::~abstract_declarator()
{

	LOG("\033[31mDELETING\033[0m abstract_declarator")
	if (_p_pointer)                    {delete(_p_pointer);_p_pointer=0;}
	if (_p_direct_abstract_declarator) {delete(_p_direct_abstract_declarator);_p_direct_abstract_declarator=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    iteration_statement
\*----------------------------------------------------------------------------------------------------*/
std::string iteration_statement1::name()const
{
	return std::string("iteration_statement1");
}

std::string iteration_statement1::pattern()const
{
	return std::string("DO,statement,WHILE,'(',expression,')',';'");
}

iteration_statement1::iteration_statement1(std::string _arg__s_matchedPattern, statement *_arg__p_statement, expression *_arg__p_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_statement(_arg__p_statement),
					_p_expression(_arg__p_expression)
{

	LOG("\033[32mCREATING\033[0m iteration_statement1")
}
Properties iteration_statement1::getProperties()const
{
	Properties props;
	props["statement"]=_p_statement;
	props["expression"]=_p_expression;
	return props;
}
iteration_statement1::~iteration_statement1()
{

	LOG("\033[31mDELETING\033[0m iteration_statement1")
	if (_p_statement)                  {delete(_p_statement);_p_statement=0;}
	if (_p_expression)                 {delete(_p_expression);_p_expression=0;}
}
std::string iteration_statement2::name()const
{
	return std::string("iteration_statement2");
}

std::string iteration_statement2::pattern()const
{
	return std::string("FOR,'(',expression_statement,expression_statement,expression,')',statement");
}

iteration_statement2::iteration_statement2(std::string _arg__s_matchedPattern, expression_statement *_arg__p_expression_statement, expression_statement *_arg__p_expression_statement1, expression *_arg__p_expression, statement *_arg__p_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_expression_statement(_arg__p_expression_statement),
					_p_expression_statement1(_arg__p_expression_statement1),
					_p_expression(_arg__p_expression),
					_p_statement(_arg__p_statement)
{

	LOG("\033[32mCREATING\033[0m iteration_statement2")
}
Properties iteration_statement2::getProperties()const
{
	Properties props;
	props["expression_statement"]=_p_expression_statement;
	props["expression_statement1"]=_p_expression_statement1;
	props["expression"]=_p_expression;
	props["statement"]=_p_statement;
	return props;
}
iteration_statement2::~iteration_statement2()
{

	LOG("\033[31mDELETING\033[0m iteration_statement2")
	if (_p_expression_statement)       {delete(_p_expression_statement);_p_expression_statement=0;}
	if (_p_expression_statement1)      {delete(_p_expression_statement1);_p_expression_statement1=0;}
	if (_p_expression)                 {delete(_p_expression);_p_expression=0;}
	if (_p_statement)                  {delete(_p_statement);_p_statement=0;}
}
std::string iteration_statement3::name()const
{
	return std::string("iteration_statement3");
}

std::string iteration_statement3::pattern()const
{
	return std::string("WHILE,'(',expression,')',statement");
}

iteration_statement3::iteration_statement3(std::string _arg__s_matchedPattern, expression *_arg__p_expression, statement *_arg__p_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_expression(_arg__p_expression),
					_p_statement(_arg__p_statement)
{

	LOG("\033[32mCREATING\033[0m iteration_statement3")
}
Properties iteration_statement3::getProperties()const
{
	Properties props;
	props["expression"]=_p_expression;
	props["statement"]=_p_statement;
	return props;
}
iteration_statement3::~iteration_statement3()
{

	LOG("\033[31mDELETING\033[0m iteration_statement3")
	if (_p_expression)                 {delete(_p_expression);_p_expression=0;}
	if (_p_statement)                  {delete(_p_statement);_p_statement=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    additive_expression
\*----------------------------------------------------------------------------------------------------*/
additive_expression_item::additive_expression_item(std::string _arg__s_matchedPattern, Token *_arg__p_token1, multiplicative_expression *_arg__p_multiplicative_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1),
					_p_multiplicative_expression(_arg__p_multiplicative_expression)
{

	LOG("\033[32mCREATING[0m additive_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	additive_expression_item::additive_expression_item(const additive_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_token1(other._p_token1),
					_p_multiplicative_expression(other._p_multiplicative_expression)
{

	LOG("COPYING additive_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties additive_expression_item::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	props["multiplicative_expression"]=_p_multiplicative_expression;
	return props;

}

additive_expression_item::~additive_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) additive_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m additive_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_token1)                     
	{
		delete(_p_token1);
		_p_token1=0;
	}
	if (_p_multiplicative_expression)  
	{
		delete(_p_multiplicative_expression);
		_p_multiplicative_expression=0;
	}
	LOG("\033[31mDELETED\033[0m additive_expression_item")

}
std::string additive_expression::name()const
{
	return std::string("additive_expression");
}

std::string additive_expression::pattern()const
{
	return std::string("additive_expression,'+',multiplicative_expression");
}

additive_expression::additive_expression(std::string _arg__s_matchedPattern, multiplicative_expression *_arg__p_multiplicative_expression)
{

	LOG("CREATING additive_expression")
	additive_expression_item item(_arg__s_matchedPattern, NULL, _arg__p_multiplicative_expression);

	LOG("APPENDING to additive_expression")
	_items.push_back(item);
}
void additive_expression::append(std::string _arg__s_matchedPattern, Token *_arg__p_token1, multiplicative_expression *_arg__p_multiplicative_expression)
{
	additive_expression_item item(_arg__s_matchedPattern, _arg__p_token1, _arg__p_multiplicative_expression);
	_items.push_back(item);
}
PropertiesList additive_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

additive_expression::~additive_expression()
{

	LOG("DELETING additive_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    external_declaration
\*----------------------------------------------------------------------------------------------------*/
std::string external_declaration1::name()const
{
	return std::string("external_declaration1");
}

std::string external_declaration1::pattern()const
{
	return std::string("function_definition");
}

external_declaration1::external_declaration1(std::string _arg__s_matchedPattern, function_definition *_arg__p_function_definition):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_function_definition(_arg__p_function_definition)
{

	LOG("\033[32mCREATING\033[0m external_declaration1")
}
Properties external_declaration1::getProperties()const
{
	Properties props;
	props["function_definition"]=_p_function_definition;
	return props;
}
external_declaration1::~external_declaration1()
{

	LOG("\033[31mDELETING\033[0m external_declaration1")
	if (_p_function_definition)        {delete(_p_function_definition);_p_function_definition=0;}
}
std::string external_declaration2::name()const
{
	return std::string("external_declaration2");
}

std::string external_declaration2::pattern()const
{
	return std::string("declaration");
}

external_declaration2::external_declaration2(std::string _arg__s_matchedPattern, declaration *_arg__p_declaration):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_declaration(_arg__p_declaration)
{

	LOG("\033[32mCREATING\033[0m external_declaration2")
}
Properties external_declaration2::getProperties()const
{
	Properties props;
	props["declaration"]=_p_declaration;
	return props;
}
external_declaration2::~external_declaration2()
{

	LOG("\033[31mDELETING\033[0m external_declaration2")
	if (_p_declaration)                {delete(_p_declaration);_p_declaration=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    type_specifier
\*----------------------------------------------------------------------------------------------------*/
std::string type_specifier1::name()const
{
	return std::string("type_specifier1");
}

std::string type_specifier1::pattern()const
{
	return std::string("VOID");
}

type_specifier1::type_specifier1(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m type_specifier1")
}
Properties type_specifier1::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;
}
type_specifier1::~type_specifier1()
{

	LOG("\033[31mDELETING\033[0m type_specifier1")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}
std::string type_specifier2::name()const
{
	return std::string("type_specifier2");
}

std::string type_specifier2::pattern()const
{
	return std::string("struct_or_union_specifier");
}

type_specifier2::type_specifier2(std::string _arg__s_matchedPattern, struct_or_union_specifier *_arg__p_struct_or_union_specifier):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_struct_or_union_specifier(_arg__p_struct_or_union_specifier)
{

	LOG("\033[32mCREATING\033[0m type_specifier2")
}
Properties type_specifier2::getProperties()const
{
	Properties props;
	props["struct_or_union_specifier"]=_p_struct_or_union_specifier;
	return props;
}
type_specifier2::~type_specifier2()
{

	LOG("\033[31mDELETING\033[0m type_specifier2")
	if (_p_struct_or_union_specifier)  {delete(_p_struct_or_union_specifier);_p_struct_or_union_specifier=0;}
}
std::string type_specifier3::name()const
{
	return std::string("type_specifier3");
}

std::string type_specifier3::pattern()const
{
	return std::string("enum_specifier");
}

type_specifier3::type_specifier3(std::string _arg__s_matchedPattern, enum_specifier *_arg__p_enum_specifier):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_enum_specifier(_arg__p_enum_specifier)
{

	LOG("\033[32mCREATING\033[0m type_specifier3")
}
Properties type_specifier3::getProperties()const
{
	Properties props;
	props["enum_specifier"]=_p_enum_specifier;
	return props;
}
type_specifier3::~type_specifier3()
{

	LOG("\033[31mDELETING\033[0m type_specifier3")
	if (_p_enum_specifier)             {delete(_p_enum_specifier);_p_enum_specifier=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    compound_statement
\*----------------------------------------------------------------------------------------------------*/
std::string compound_statement::name()const
{
	return std::string("compound_statement");
}

std::string compound_statement::pattern()const
{
	return std::string("'{',declaration_list,statement_list,'}'");
}

compound_statement::compound_statement(std::string _arg__s_matchedPattern, declaration_list *_arg__p_declaration_list, statement_list *_arg__p_statement_list):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_declaration_list(_arg__p_declaration_list),
					_p_statement_list(_arg__p_statement_list)
{

	LOG("\033[32mCREATING\033[0m compound_statement")
}
Properties compound_statement::getProperties()const
{
	Properties props;
	props["declaration_list"]=_p_declaration_list;
	props["statement_list"]=_p_statement_list;
	return props;
}
compound_statement::~compound_statement()
{

	LOG("\033[31mDELETING\033[0m compound_statement")
	if (_p_declaration_list)           {delete(_p_declaration_list);_p_declaration_list=0;}
	if (_p_statement_list)             {delete(_p_statement_list);_p_statement_list=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    inclusive_or_expression
\*----------------------------------------------------------------------------------------------------*/
inclusive_or_expression_item::inclusive_or_expression_item(std::string _arg__s_matchedPattern, exclusive_or_expression *_arg__p_exclusive_or_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_exclusive_or_expression(_arg__p_exclusive_or_expression)
{

	LOG("\033[32mCREATING[0m inclusive_or_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	inclusive_or_expression_item::inclusive_or_expression_item(const inclusive_or_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_exclusive_or_expression(other._p_exclusive_or_expression)
{

	LOG("COPYING inclusive_or_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties inclusive_or_expression_item::getProperties()const
{
	Properties props;
	props["exclusive_or_expression"]=_p_exclusive_or_expression;
	return props;

}

inclusive_or_expression_item::~inclusive_or_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) inclusive_or_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m inclusive_or_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_exclusive_or_expression)    
	{
		delete(_p_exclusive_or_expression);
		_p_exclusive_or_expression=0;
	}
	LOG("\033[31mDELETED\033[0m inclusive_or_expression_item")

}
std::string inclusive_or_expression::name()const
{
	return std::string("inclusive_or_expression");
}

std::string inclusive_or_expression::pattern()const
{
	return std::string("inclusive_or_expression,'|',exclusive_or_expression");
}

inclusive_or_expression::inclusive_or_expression(std::string _arg__s_matchedPattern, exclusive_or_expression *_arg__p_exclusive_or_expression)
{

	LOG("CREATING inclusive_or_expression")
	inclusive_or_expression_item item(_arg__s_matchedPattern, _arg__p_exclusive_or_expression);

	LOG("APPENDING to inclusive_or_expression")
	_items.push_back(item);
}
void inclusive_or_expression::append(std::string _arg__s_matchedPattern, exclusive_or_expression *_arg__p_exclusive_or_expression)
{
	inclusive_or_expression_item item(_arg__s_matchedPattern, _arg__p_exclusive_or_expression);
	_items.push_back(item);
}
PropertiesList inclusive_or_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

inclusive_or_expression::~inclusive_or_expression()
{

	LOG("DELETING inclusive_or_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    pointer
\*----------------------------------------------------------------------------------------------------*/
pointer_item::pointer_item(std::string _arg__s_matchedPattern, type_qualifier_list *_arg__p_type_qualifier_list):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_type_qualifier_list(_arg__p_type_qualifier_list)
{

	LOG("\033[32mCREATING[0m pointer_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	pointer_item::pointer_item(const pointer_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_type_qualifier_list(other._p_type_qualifier_list)
{

	LOG("COPYING pointer_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties pointer_item::getProperties()const
{
	Properties props;
	props["type_qualifier_list"]=_p_type_qualifier_list;
	return props;

}

pointer_item::~pointer_item()
{

	LOG("\033[31mDELETING\033[0m(?) pointer_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m pointer_item")

	delete(_refCount);_refCount=0;
	if (_p_type_qualifier_list)        
	{
		delete(_p_type_qualifier_list);
		_p_type_qualifier_list=0;
	}
	LOG("\033[31mDELETED\033[0m pointer_item")

}
std::string pointer::name()const
{
	return std::string("pointer");
}

std::string pointer::pattern()const
{
	return std::string("'*',type_qualifier_list,pointer");
}

pointer::pointer(std::string _arg__s_matchedPattern, type_qualifier_list *_arg__p_type_qualifier_list)
{

	LOG("CREATING pointer")
	pointer_item item(_arg__s_matchedPattern, _arg__p_type_qualifier_list);

	LOG("APPENDING to pointer")
	_items.push_back(item);
}
void pointer::append(std::string _arg__s_matchedPattern, type_qualifier_list *_arg__p_type_qualifier_list)
{
	pointer_item item(_arg__s_matchedPattern, _arg__p_type_qualifier_list);
	_items.push_back(item);
}
PropertiesList pointer::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

pointer::~pointer()
{

	LOG("DELETING pointer")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    selection_statement
\*----------------------------------------------------------------------------------------------------*/
std::string selection_statement1::name()const
{
	return std::string("selection_statement1");
}

std::string selection_statement1::pattern()const
{
	return std::string("IF,'(',expression,')',statement,ELSE,statement");
}

selection_statement1::selection_statement1(std::string _arg__s_matchedPattern, expression *_arg__p_expression, statement *_arg__p_statement, Token *_arg__p_token1, statement *_arg__p_statement1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_expression(_arg__p_expression),
					_p_statement(_arg__p_statement),
					_p_token1(_arg__p_token1),
					_p_statement1(_arg__p_statement1)
{

	LOG("\033[32mCREATING\033[0m selection_statement1")
}
Properties selection_statement1::getProperties()const
{
	Properties props;
	props["expression"]=_p_expression;
	props["statement"]=_p_statement;
	props["token1"]=_p_token1;
	props["statement1"]=_p_statement1;
	return props;
}
selection_statement1::~selection_statement1()
{

	LOG("\033[31mDELETING\033[0m selection_statement1")
	if (_p_expression)                 {delete(_p_expression);_p_expression=0;}
	if (_p_statement)                  {delete(_p_statement);_p_statement=0;}
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
	if (_p_statement1)                 {delete(_p_statement1);_p_statement1=0;}
}
std::string selection_statement2::name()const
{
	return std::string("selection_statement2");
}

std::string selection_statement2::pattern()const
{
	return std::string("SWITCH,'(',expression,')',statement");
}

selection_statement2::selection_statement2(std::string _arg__s_matchedPattern, expression *_arg__p_expression, statement *_arg__p_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_expression(_arg__p_expression),
					_p_statement(_arg__p_statement)
{

	LOG("\033[32mCREATING\033[0m selection_statement2")
}
Properties selection_statement2::getProperties()const
{
	Properties props;
	props["expression"]=_p_expression;
	props["statement"]=_p_statement;
	return props;
}
selection_statement2::~selection_statement2()
{

	LOG("\033[31mDELETING\033[0m selection_statement2")
	if (_p_expression)                 {delete(_p_expression);_p_expression=0;}
	if (_p_statement)                  {delete(_p_statement);_p_statement=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    postfix_expression
\*----------------------------------------------------------------------------------------------------*/
std::string postfix_expression1::name()const
{
	return std::string("postfix_expression1");
}

std::string postfix_expression1::pattern()const
{
	return std::string("postfix_expression,'[',expression,']'");
}

postfix_expression1::postfix_expression1(std::string _arg__s_matchedPattern, postfix_expression *_arg__p_postfix_expression, expression *_arg__p_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_postfix_expression(_arg__p_postfix_expression),
					_p_expression(_arg__p_expression)
{

	LOG("\033[32mCREATING\033[0m postfix_expression1")
}
Properties postfix_expression1::getProperties()const
{
	Properties props;
	props["postfix_expression"]=_p_postfix_expression;
	props["expression"]=_p_expression;
	return props;
}
postfix_expression1::~postfix_expression1()
{

	LOG("\033[31mDELETING\033[0m postfix_expression1")
	if (_p_postfix_expression)         {delete(_p_postfix_expression);_p_postfix_expression=0;}
	if (_p_expression)                 {delete(_p_expression);_p_expression=0;}
}
std::string postfix_expression2::name()const
{
	return std::string("postfix_expression2");
}

std::string postfix_expression2::pattern()const
{
	return std::string("postfix_expression,'(',argument_expression_list,')'");
}

postfix_expression2::postfix_expression2(std::string _arg__s_matchedPattern, postfix_expression *_arg__p_postfix_expression, argument_expression_list *_arg__p_argument_expression_list):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_postfix_expression(_arg__p_postfix_expression),
					_p_argument_expression_list(_arg__p_argument_expression_list)
{

	LOG("\033[32mCREATING\033[0m postfix_expression2")
}
Properties postfix_expression2::getProperties()const
{
	Properties props;
	props["postfix_expression"]=_p_postfix_expression;
	props["argument_expression_list"]=_p_argument_expression_list;
	return props;
}
postfix_expression2::~postfix_expression2()
{

	LOG("\033[31mDELETING\033[0m postfix_expression2")
	if (_p_postfix_expression)         {delete(_p_postfix_expression);_p_postfix_expression=0;}
	if (_p_argument_expression_list)   {delete(_p_argument_expression_list);_p_argument_expression_list=0;}
}
std::string postfix_expression3::name()const
{
	return std::string("postfix_expression3");
}

std::string postfix_expression3::pattern()const
{
	return std::string("postfix_expression,'.',IDENTIFIER");
}

postfix_expression3::postfix_expression3(std::string _arg__s_matchedPattern, postfix_expression *_arg__p_postfix_expression, Token *_arg__p_token1, Token *_arg__p_token2):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_postfix_expression(_arg__p_postfix_expression),
					_p_token1(_arg__p_token1),
					_p_token2(_arg__p_token2)
{

	LOG("\033[32mCREATING\033[0m postfix_expression3")
}
Properties postfix_expression3::getProperties()const
{
	Properties props;
	props["postfix_expression"]=_p_postfix_expression;
	props["token1"]=_p_token1;
	props["token2"]=_p_token2;
	return props;
}
postfix_expression3::~postfix_expression3()
{

	LOG("\033[31mDELETING\033[0m postfix_expression3")
	if (_p_postfix_expression)         {delete(_p_postfix_expression);_p_postfix_expression=0;}
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
	if (_p_token2)                     {delete(_p_token2);_p_token2=0;}
}
std::string postfix_expression4::name()const
{
	return std::string("postfix_expression4");
}

std::string postfix_expression4::pattern()const
{
	return std::string("postfix_expression,INC_OP");
}

postfix_expression4::postfix_expression4(std::string _arg__s_matchedPattern, postfix_expression *_arg__p_postfix_expression, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_postfix_expression(_arg__p_postfix_expression),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m postfix_expression4")
}
Properties postfix_expression4::getProperties()const
{
	Properties props;
	props["postfix_expression"]=_p_postfix_expression;
	props["token1"]=_p_token1;
	return props;
}
postfix_expression4::~postfix_expression4()
{

	LOG("\033[31mDELETING\033[0m postfix_expression4")
	if (_p_postfix_expression)         {delete(_p_postfix_expression);_p_postfix_expression=0;}
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}
std::string postfix_expression5::name()const
{
	return std::string("postfix_expression5");
}

std::string postfix_expression5::pattern()const
{
	return std::string("primary_expression");
}

postfix_expression5::postfix_expression5(std::string _arg__s_matchedPattern, primary_expression *_arg__p_primary_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_primary_expression(_arg__p_primary_expression)
{

	LOG("\033[32mCREATING\033[0m postfix_expression5")
}
Properties postfix_expression5::getProperties()const
{
	Properties props;
	props["primary_expression"]=_p_primary_expression;
	return props;
}
postfix_expression5::~postfix_expression5()
{

	LOG("\033[31mDELETING\033[0m postfix_expression5")
	if (_p_primary_expression)         {delete(_p_primary_expression);_p_primary_expression=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    and_expression
\*----------------------------------------------------------------------------------------------------*/
and_expression_item::and_expression_item(std::string _arg__s_matchedPattern, equality_expression *_arg__p_equality_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_equality_expression(_arg__p_equality_expression)
{

	LOG("\033[32mCREATING[0m and_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	and_expression_item::and_expression_item(const and_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_equality_expression(other._p_equality_expression)
{

	LOG("COPYING and_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties and_expression_item::getProperties()const
{
	Properties props;
	props["equality_expression"]=_p_equality_expression;
	return props;

}

and_expression_item::~and_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) and_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m and_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_equality_expression)        
	{
		delete(_p_equality_expression);
		_p_equality_expression=0;
	}
	LOG("\033[31mDELETED\033[0m and_expression_item")

}
std::string and_expression::name()const
{
	return std::string("and_expression");
}

std::string and_expression::pattern()const
{
	return std::string("and_expression,'&',equality_expression");
}

and_expression::and_expression(std::string _arg__s_matchedPattern, equality_expression *_arg__p_equality_expression)
{

	LOG("CREATING and_expression")
	and_expression_item item(_arg__s_matchedPattern, _arg__p_equality_expression);

	LOG("APPENDING to and_expression")
	_items.push_back(item);
}
void and_expression::append(std::string _arg__s_matchedPattern, equality_expression *_arg__p_equality_expression)
{
	and_expression_item item(_arg__s_matchedPattern, _arg__p_equality_expression);
	_items.push_back(item);
}
PropertiesList and_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

and_expression::~and_expression()
{

	LOG("DELETING and_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    statement
\*----------------------------------------------------------------------------------------------------*/
std::string statement1::name()const
{
	return std::string("statement1");
}

std::string statement1::pattern()const
{
	return std::string("labeled_statement");
}

statement1::statement1(std::string _arg__s_matchedPattern, labeled_statement *_arg__p_labeled_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_labeled_statement(_arg__p_labeled_statement)
{

	LOG("\033[32mCREATING\033[0m statement1")
}
Properties statement1::getProperties()const
{
	Properties props;
	props["labeled_statement"]=_p_labeled_statement;
	return props;
}
statement1::~statement1()
{

	LOG("\033[31mDELETING\033[0m statement1")
	if (_p_labeled_statement)          {delete(_p_labeled_statement);_p_labeled_statement=0;}
}
std::string statement2::name()const
{
	return std::string("statement2");
}

std::string statement2::pattern()const
{
	return std::string("compound_statement");
}

statement2::statement2(std::string _arg__s_matchedPattern, compound_statement *_arg__p_compound_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_compound_statement(_arg__p_compound_statement)
{

	LOG("\033[32mCREATING\033[0m statement2")
}
Properties statement2::getProperties()const
{
	Properties props;
	props["compound_statement"]=_p_compound_statement;
	return props;
}
statement2::~statement2()
{

	LOG("\033[31mDELETING\033[0m statement2")
	if (_p_compound_statement)         {delete(_p_compound_statement);_p_compound_statement=0;}
}
std::string statement3::name()const
{
	return std::string("statement3");
}

std::string statement3::pattern()const
{
	return std::string("expression_statement");
}

statement3::statement3(std::string _arg__s_matchedPattern, expression_statement *_arg__p_expression_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_expression_statement(_arg__p_expression_statement)
{

	LOG("\033[32mCREATING\033[0m statement3")
}
Properties statement3::getProperties()const
{
	Properties props;
	props["expression_statement"]=_p_expression_statement;
	return props;
}
statement3::~statement3()
{

	LOG("\033[31mDELETING\033[0m statement3")
	if (_p_expression_statement)       {delete(_p_expression_statement);_p_expression_statement=0;}
}
std::string statement4::name()const
{
	return std::string("statement4");
}

std::string statement4::pattern()const
{
	return std::string("selection_statement");
}

statement4::statement4(std::string _arg__s_matchedPattern, selection_statement *_arg__p_selection_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_selection_statement(_arg__p_selection_statement)
{

	LOG("\033[32mCREATING\033[0m statement4")
}
Properties statement4::getProperties()const
{
	Properties props;
	props["selection_statement"]=_p_selection_statement;
	return props;
}
statement4::~statement4()
{

	LOG("\033[31mDELETING\033[0m statement4")
	if (_p_selection_statement)        {delete(_p_selection_statement);_p_selection_statement=0;}
}
std::string statement5::name()const
{
	return std::string("statement5");
}

std::string statement5::pattern()const
{
	return std::string("iteration_statement");
}

statement5::statement5(std::string _arg__s_matchedPattern, iteration_statement *_arg__p_iteration_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_iteration_statement(_arg__p_iteration_statement)
{

	LOG("\033[32mCREATING\033[0m statement5")
}
Properties statement5::getProperties()const
{
	Properties props;
	props["iteration_statement"]=_p_iteration_statement;
	return props;
}
statement5::~statement5()
{

	LOG("\033[31mDELETING\033[0m statement5")
	if (_p_iteration_statement)        {delete(_p_iteration_statement);_p_iteration_statement=0;}
}
std::string statement6::name()const
{
	return std::string("statement6");
}

std::string statement6::pattern()const
{
	return std::string("jump_statement");
}

statement6::statement6(std::string _arg__s_matchedPattern, jump_statement *_arg__p_jump_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_jump_statement(_arg__p_jump_statement)
{

	LOG("\033[32mCREATING\033[0m statement6")
}
Properties statement6::getProperties()const
{
	Properties props;
	props["jump_statement"]=_p_jump_statement;
	return props;
}
statement6::~statement6()
{

	LOG("\033[31mDELETING\033[0m statement6")
	if (_p_jump_statement)             {delete(_p_jump_statement);_p_jump_statement=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    cast_expression
\*----------------------------------------------------------------------------------------------------*/
std::string cast_expression1::name()const
{
	return std::string("cast_expression1");
}

std::string cast_expression1::pattern()const
{
	return std::string("'(',type_name,')',cast_expression");
}

cast_expression1::cast_expression1(std::string _arg__s_matchedPattern, type_name *_arg__p_type_name, cast_expression *_arg__p_cast_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_type_name(_arg__p_type_name),
					_p_cast_expression(_arg__p_cast_expression)
{

	LOG("\033[32mCREATING\033[0m cast_expression1")
}
Properties cast_expression1::getProperties()const
{
	Properties props;
	props["type_name"]=_p_type_name;
	props["cast_expression"]=_p_cast_expression;
	return props;
}
cast_expression1::~cast_expression1()
{

	LOG("\033[31mDELETING\033[0m cast_expression1")
	if (_p_type_name)                  {delete(_p_type_name);_p_type_name=0;}
	if (_p_cast_expression)            {delete(_p_cast_expression);_p_cast_expression=0;}
}
std::string cast_expression2::name()const
{
	return std::string("cast_expression2");
}

std::string cast_expression2::pattern()const
{
	return std::string("unary_expression");
}

cast_expression2::cast_expression2(std::string _arg__s_matchedPattern, unary_expression *_arg__p_unary_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_unary_expression(_arg__p_unary_expression)
{

	LOG("\033[32mCREATING\033[0m cast_expression2")
}
Properties cast_expression2::getProperties()const
{
	Properties props;
	props["unary_expression"]=_p_unary_expression;
	return props;
}
cast_expression2::~cast_expression2()
{

	LOG("\033[31mDELETING\033[0m cast_expression2")
	if (_p_unary_expression)           {delete(_p_unary_expression);_p_unary_expression=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    init_declarator
\*----------------------------------------------------------------------------------------------------*/
std::string init_declarator::name()const
{
	return std::string("init_declarator");
}

std::string init_declarator::pattern()const
{
	return std::string("declarator,'=',initializer");
}

init_declarator::init_declarator(std::string _arg__s_matchedPattern, declarator *_arg__p_declarator, Token *_arg__p_token1, initializer *_arg__p_initializer):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_declarator(_arg__p_declarator),
					_p_token1(_arg__p_token1),
					_p_initializer(_arg__p_initializer)
{

	LOG("\033[32mCREATING\033[0m init_declarator")
}
Properties init_declarator::getProperties()const
{
	Properties props;
	props["declarator"]=_p_declarator;
	props["token1"]=_p_token1;
	props["initializer"]=_p_initializer;
	return props;
}
init_declarator::~init_declarator()
{

	LOG("\033[31mDELETING\033[0m init_declarator")
	if (_p_declarator)                 {delete(_p_declarator);_p_declarator=0;}
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
	if (_p_initializer)                {delete(_p_initializer);_p_initializer=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    struct_declarator_list
\*----------------------------------------------------------------------------------------------------*/
struct_declarator_list_item::struct_declarator_list_item(std::string _arg__s_matchedPattern, struct_declarator *_arg__p_struct_declarator):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_struct_declarator(_arg__p_struct_declarator)
{

	LOG("\033[32mCREATING[0m struct_declarator_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	struct_declarator_list_item::struct_declarator_list_item(const struct_declarator_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_struct_declarator(other._p_struct_declarator)
{

	LOG("COPYING struct_declarator_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties struct_declarator_list_item::getProperties()const
{
	Properties props;
	props["struct_declarator"]=_p_struct_declarator;
	return props;

}

struct_declarator_list_item::~struct_declarator_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) struct_declarator_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m struct_declarator_list_item")

	delete(_refCount);_refCount=0;
	if (_p_struct_declarator)          
	{
		delete(_p_struct_declarator);
		_p_struct_declarator=0;
	}
	LOG("\033[31mDELETED\033[0m struct_declarator_list_item")

}
std::string struct_declarator_list::name()const
{
	return std::string("struct_declarator_list");
}

std::string struct_declarator_list::pattern()const
{
	return std::string("struct_declarator_list,',',struct_declarator");
}

struct_declarator_list::struct_declarator_list(std::string _arg__s_matchedPattern, struct_declarator *_arg__p_struct_declarator)
{

	LOG("CREATING struct_declarator_list")
	struct_declarator_list_item item(_arg__s_matchedPattern, _arg__p_struct_declarator);

	LOG("APPENDING to struct_declarator_list")
	_items.push_back(item);
}
void struct_declarator_list::append(std::string _arg__s_matchedPattern, struct_declarator *_arg__p_struct_declarator)
{
	struct_declarator_list_item item(_arg__s_matchedPattern, _arg__p_struct_declarator);
	_items.push_back(item);
}
PropertiesList struct_declarator_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

struct_declarator_list::~struct_declarator_list()
{

	LOG("DELETING struct_declarator_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    logical_or_expression
\*----------------------------------------------------------------------------------------------------*/
logical_or_expression_item::logical_or_expression_item(std::string _arg__s_matchedPattern, logical_and_expression *_arg__p_logical_and_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_logical_and_expression(_arg__p_logical_and_expression)
{

	LOG("\033[32mCREATING[0m logical_or_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	logical_or_expression_item::logical_or_expression_item(const logical_or_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_logical_and_expression(other._p_logical_and_expression)
{

	LOG("COPYING logical_or_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties logical_or_expression_item::getProperties()const
{
	Properties props;
	props["logical_and_expression"]=_p_logical_and_expression;
	return props;

}

logical_or_expression_item::~logical_or_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) logical_or_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m logical_or_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_logical_and_expression)     
	{
		delete(_p_logical_and_expression);
		_p_logical_and_expression=0;
	}
	LOG("\033[31mDELETED\033[0m logical_or_expression_item")

}
std::string logical_or_expression::name()const
{
	return std::string("logical_or_expression");
}

std::string logical_or_expression::pattern()const
{
	return std::string("logical_or_expression,OR_OP,logical_and_expression");
}

logical_or_expression::logical_or_expression(std::string _arg__s_matchedPattern, logical_and_expression *_arg__p_logical_and_expression)
{

	LOG("CREATING logical_or_expression")
	logical_or_expression_item item(_arg__s_matchedPattern, _arg__p_logical_and_expression);

	LOG("APPENDING to logical_or_expression")
	_items.push_back(item);
}
void logical_or_expression::append(std::string _arg__s_matchedPattern, logical_and_expression *_arg__p_logical_and_expression)
{
	logical_or_expression_item item(_arg__s_matchedPattern, _arg__p_logical_and_expression);
	_items.push_back(item);
}
PropertiesList logical_or_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

logical_or_expression::~logical_or_expression()
{

	LOG("DELETING logical_or_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    unary_operator
\*----------------------------------------------------------------------------------------------------*/
std::string unary_operator::name()const
{
	return std::string("unary_operator");
}

std::string unary_operator::pattern()const
{
	return std::string("'&'");
}

unary_operator::unary_operator(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m unary_operator")
}
Properties unary_operator::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;
}
unary_operator::~unary_operator()
{

	LOG("\033[31mDELETING\033[0m unary_operator")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    relational_expression
\*----------------------------------------------------------------------------------------------------*/
relational_expression_item::relational_expression_item(std::string _arg__s_matchedPattern, Token *_arg__p_token1, shift_expression *_arg__p_shift_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1),
					_p_shift_expression(_arg__p_shift_expression)
{

	LOG("\033[32mCREATING[0m relational_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	relational_expression_item::relational_expression_item(const relational_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_token1(other._p_token1),
					_p_shift_expression(other._p_shift_expression)
{

	LOG("COPYING relational_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties relational_expression_item::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	props["shift_expression"]=_p_shift_expression;
	return props;

}

relational_expression_item::~relational_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) relational_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m relational_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_token1)                     
	{
		delete(_p_token1);
		_p_token1=0;
	}
	if (_p_shift_expression)           
	{
		delete(_p_shift_expression);
		_p_shift_expression=0;
	}
	LOG("\033[31mDELETED\033[0m relational_expression_item")

}
std::string relational_expression::name()const
{
	return std::string("relational_expression");
}

std::string relational_expression::pattern()const
{
	return std::string("relational_expression,'<',shift_expression");
}

relational_expression::relational_expression(std::string _arg__s_matchedPattern, shift_expression *_arg__p_shift_expression)
{

	LOG("CREATING relational_expression")
	relational_expression_item item(_arg__s_matchedPattern, NULL, _arg__p_shift_expression);

	LOG("APPENDING to relational_expression")
	_items.push_back(item);
}
void relational_expression::append(std::string _arg__s_matchedPattern, Token *_arg__p_token1, shift_expression *_arg__p_shift_expression)
{
	relational_expression_item item(_arg__s_matchedPattern, _arg__p_token1, _arg__p_shift_expression);
	_items.push_back(item);
}
PropertiesList relational_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

relational_expression::~relational_expression()
{

	LOG("DELETING relational_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    struct_or_union
\*----------------------------------------------------------------------------------------------------*/
std::string struct_or_union::name()const
{
	return std::string("struct_or_union");
}

std::string struct_or_union::pattern()const
{
	return std::string("STRUCT");
}

struct_or_union::struct_or_union(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m struct_or_union")
}
Properties struct_or_union::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;
}
struct_or_union::~struct_or_union()
{

	LOG("\033[31mDELETING\033[0m struct_or_union")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    enumerator
\*----------------------------------------------------------------------------------------------------*/
std::string enumerator::name()const
{
	return std::string("enumerator");
}

std::string enumerator::pattern()const
{
	return std::string("IDENTIFIER,'=',constant_expression");
}

enumerator::enumerator(std::string _arg__s_matchedPattern, Token *_arg__p_token1, Token *_arg__p_token2, constant_expression *_arg__p_constant_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1),
					_p_token2(_arg__p_token2),
					_p_constant_expression(_arg__p_constant_expression)
{

	LOG("\033[32mCREATING\033[0m enumerator")
}
Properties enumerator::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	props["token2"]=_p_token2;
	props["constant_expression"]=_p_constant_expression;
	return props;
}
enumerator::~enumerator()
{

	LOG("\033[31mDELETING\033[0m enumerator")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
	if (_p_token2)                     {delete(_p_token2);_p_token2=0;}
	if (_p_constant_expression)        {delete(_p_constant_expression);_p_constant_expression=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    assignment_expression
\*----------------------------------------------------------------------------------------------------*/
std::string assignment_expression1::name()const
{
	return std::string("assignment_expression1");
}

std::string assignment_expression1::pattern()const
{
	return std::string("unary_expression,assignment_operator,assignment_expression");
}

assignment_expression1::assignment_expression1(std::string _arg__s_matchedPattern, unary_expression *_arg__p_unary_expression, assignment_operator *_arg__p_assignment_operator, assignment_expression *_arg__p_assignment_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_unary_expression(_arg__p_unary_expression),
					_p_assignment_operator(_arg__p_assignment_operator),
					_p_assignment_expression(_arg__p_assignment_expression)
{

	LOG("\033[32mCREATING\033[0m assignment_expression1")
}
Properties assignment_expression1::getProperties()const
{
	Properties props;
	props["unary_expression"]=_p_unary_expression;
	props["assignment_operator"]=_p_assignment_operator;
	props["assignment_expression"]=_p_assignment_expression;
	return props;
}
assignment_expression1::~assignment_expression1()
{

	LOG("\033[31mDELETING\033[0m assignment_expression1")
	if (_p_unary_expression)           {delete(_p_unary_expression);_p_unary_expression=0;}
	if (_p_assignment_operator)        {delete(_p_assignment_operator);_p_assignment_operator=0;}
	if (_p_assignment_expression)      {delete(_p_assignment_expression);_p_assignment_expression=0;}
}
std::string assignment_expression2::name()const
{
	return std::string("assignment_expression2");
}

std::string assignment_expression2::pattern()const
{
	return std::string("conditional_expression");
}

assignment_expression2::assignment_expression2(std::string _arg__s_matchedPattern, conditional_expression *_arg__p_conditional_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_conditional_expression(_arg__p_conditional_expression)
{

	LOG("\033[32mCREATING\033[0m assignment_expression2")
}
Properties assignment_expression2::getProperties()const
{
	Properties props;
	props["conditional_expression"]=_p_conditional_expression;
	return props;
}
assignment_expression2::~assignment_expression2()
{

	LOG("\033[31mDELETING\033[0m assignment_expression2")
	if (_p_conditional_expression)     {delete(_p_conditional_expression);_p_conditional_expression=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    parameter_type_list
\*----------------------------------------------------------------------------------------------------*/
std::string parameter_type_list::name()const
{
	return std::string("parameter_type_list");
}

std::string parameter_type_list::pattern()const
{
	return std::string("parameter_list,',',ELLIPSIS");
}

parameter_type_list::parameter_type_list(std::string _arg__s_matchedPattern, parameter_list *_arg__p_parameter_list, Token *_arg__p_token1, Token *_arg__p_token2):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_parameter_list(_arg__p_parameter_list),
					_p_token1(_arg__p_token1),
					_p_token2(_arg__p_token2)
{

	LOG("\033[32mCREATING\033[0m parameter_type_list")
}
Properties parameter_type_list::getProperties()const
{
	Properties props;
	props["parameter_list"]=_p_parameter_list;
	props["token1"]=_p_token1;
	props["token2"]=_p_token2;
	return props;
}
parameter_type_list::~parameter_type_list()
{

	LOG("\033[31mDELETING\033[0m parameter_type_list")
	if (_p_parameter_list)             {delete(_p_parameter_list);_p_parameter_list=0;}
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
	if (_p_token2)                     {delete(_p_token2);_p_token2=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    parameter_declaration
\*----------------------------------------------------------------------------------------------------*/
std::string parameter_declaration1::name()const
{
	return std::string("parameter_declaration1");
}

std::string parameter_declaration1::pattern()const
{
	return std::string("declaration_specifiers,declarator");
}

parameter_declaration1::parameter_declaration1(std::string _arg__s_matchedPattern, declaration_specifiers *_arg__p_declaration_specifiers, declarator *_arg__p_declarator):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_declaration_specifiers(_arg__p_declaration_specifiers),
					_p_declarator(_arg__p_declarator)
{

	LOG("\033[32mCREATING\033[0m parameter_declaration1")
}
Properties parameter_declaration1::getProperties()const
{
	Properties props;
	props["declaration_specifiers"]=_p_declaration_specifiers;
	props["declarator"]=_p_declarator;
	return props;
}
parameter_declaration1::~parameter_declaration1()
{

	LOG("\033[31mDELETING\033[0m parameter_declaration1")
	if (_p_declaration_specifiers)     {delete(_p_declaration_specifiers);_p_declaration_specifiers=0;}
	if (_p_declarator)                 {delete(_p_declarator);_p_declarator=0;}
}
std::string parameter_declaration2::name()const
{
	return std::string("parameter_declaration2");
}

std::string parameter_declaration2::pattern()const
{
	return std::string("declaration_specifiers,abstract_declarator");
}

parameter_declaration2::parameter_declaration2(std::string _arg__s_matchedPattern, declaration_specifiers *_arg__p_declaration_specifiers, abstract_declarator *_arg__p_abstract_declarator):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_declaration_specifiers(_arg__p_declaration_specifiers),
					_p_abstract_declarator(_arg__p_abstract_declarator)
{

	LOG("\033[32mCREATING\033[0m parameter_declaration2")
}
Properties parameter_declaration2::getProperties()const
{
	Properties props;
	props["declaration_specifiers"]=_p_declaration_specifiers;
	props["abstract_declarator"]=_p_abstract_declarator;
	return props;
}
parameter_declaration2::~parameter_declaration2()
{

	LOG("\033[31mDELETING\033[0m parameter_declaration2")
	if (_p_declaration_specifiers)     {delete(_p_declaration_specifiers);_p_declaration_specifiers=0;}
	if (_p_abstract_declarator)        {delete(_p_abstract_declarator);_p_abstract_declarator=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    multiplicative_expression
\*----------------------------------------------------------------------------------------------------*/
multiplicative_expression_item::multiplicative_expression_item(std::string _arg__s_matchedPattern, Token *_arg__p_token1, cast_expression *_arg__p_cast_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1),
					_p_cast_expression(_arg__p_cast_expression)
{

	LOG("\033[32mCREATING[0m multiplicative_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	multiplicative_expression_item::multiplicative_expression_item(const multiplicative_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_token1(other._p_token1),
					_p_cast_expression(other._p_cast_expression)
{

	LOG("COPYING multiplicative_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties multiplicative_expression_item::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	props["cast_expression"]=_p_cast_expression;
	return props;

}

multiplicative_expression_item::~multiplicative_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) multiplicative_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m multiplicative_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_token1)                     
	{
		delete(_p_token1);
		_p_token1=0;
	}
	if (_p_cast_expression)            
	{
		delete(_p_cast_expression);
		_p_cast_expression=0;
	}
	LOG("\033[31mDELETED\033[0m multiplicative_expression_item")

}
std::string multiplicative_expression::name()const
{
	return std::string("multiplicative_expression");
}

std::string multiplicative_expression::pattern()const
{
	return std::string("multiplicative_expression,'*',cast_expression");
}

multiplicative_expression::multiplicative_expression(std::string _arg__s_matchedPattern, cast_expression *_arg__p_cast_expression)
{

	LOG("CREATING multiplicative_expression")
	multiplicative_expression_item item(_arg__s_matchedPattern, NULL, _arg__p_cast_expression);

	LOG("APPENDING to multiplicative_expression")
	_items.push_back(item);
}
void multiplicative_expression::append(std::string _arg__s_matchedPattern, Token *_arg__p_token1, cast_expression *_arg__p_cast_expression)
{
	multiplicative_expression_item item(_arg__s_matchedPattern, _arg__p_token1, _arg__p_cast_expression);
	_items.push_back(item);
}
PropertiesList multiplicative_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

multiplicative_expression::~multiplicative_expression()
{

	LOG("DELETING multiplicative_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    type_qualifier_list
\*----------------------------------------------------------------------------------------------------*/
type_qualifier_list_item::type_qualifier_list_item(std::string _arg__s_matchedPattern, type_qualifier *_arg__p_type_qualifier):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_type_qualifier(_arg__p_type_qualifier)
{

	LOG("\033[32mCREATING[0m type_qualifier_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	type_qualifier_list_item::type_qualifier_list_item(const type_qualifier_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_type_qualifier(other._p_type_qualifier)
{

	LOG("COPYING type_qualifier_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties type_qualifier_list_item::getProperties()const
{
	Properties props;
	props["type_qualifier"]=_p_type_qualifier;
	return props;

}

type_qualifier_list_item::~type_qualifier_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) type_qualifier_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m type_qualifier_list_item")

	delete(_refCount);_refCount=0;
	if (_p_type_qualifier)             
	{
		delete(_p_type_qualifier);
		_p_type_qualifier=0;
	}
	LOG("\033[31mDELETED\033[0m type_qualifier_list_item")

}
std::string type_qualifier_list::name()const
{
	return std::string("type_qualifier_list");
}

std::string type_qualifier_list::pattern()const
{
	return std::string("type_qualifier_list,type_qualifier");
}

type_qualifier_list::type_qualifier_list(std::string _arg__s_matchedPattern, type_qualifier *_arg__p_type_qualifier)
{

	LOG("CREATING type_qualifier_list")
	type_qualifier_list_item item(_arg__s_matchedPattern, _arg__p_type_qualifier);

	LOG("APPENDING to type_qualifier_list")
	_items.push_back(item);
}
void type_qualifier_list::append(std::string _arg__s_matchedPattern, type_qualifier *_arg__p_type_qualifier)
{
	type_qualifier_list_item item(_arg__s_matchedPattern, _arg__p_type_qualifier);
	_items.push_back(item);
}
PropertiesList type_qualifier_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

type_qualifier_list::~type_qualifier_list()
{

	LOG("DELETING type_qualifier_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    argument_expression_list
\*----------------------------------------------------------------------------------------------------*/
argument_expression_list_item::argument_expression_list_item(std::string _arg__s_matchedPattern, assignment_expression *_arg__p_assignment_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_assignment_expression(_arg__p_assignment_expression)
{

	LOG("\033[32mCREATING[0m argument_expression_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	argument_expression_list_item::argument_expression_list_item(const argument_expression_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_assignment_expression(other._p_assignment_expression)
{

	LOG("COPYING argument_expression_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties argument_expression_list_item::getProperties()const
{
	Properties props;
	props["assignment_expression"]=_p_assignment_expression;
	return props;

}

argument_expression_list_item::~argument_expression_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) argument_expression_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m argument_expression_list_item")

	delete(_refCount);_refCount=0;
	if (_p_assignment_expression)      
	{
		delete(_p_assignment_expression);
		_p_assignment_expression=0;
	}
	LOG("\033[31mDELETED\033[0m argument_expression_list_item")

}
std::string argument_expression_list::name()const
{
	return std::string("argument_expression_list");
}

std::string argument_expression_list::pattern()const
{
	return std::string("argument_expression_list,',',assignment_expression");
}

argument_expression_list::argument_expression_list(std::string _arg__s_matchedPattern, assignment_expression *_arg__p_assignment_expression)
{

	LOG("CREATING argument_expression_list")
	argument_expression_list_item item(_arg__s_matchedPattern, _arg__p_assignment_expression);

	LOG("APPENDING to argument_expression_list")
	_items.push_back(item);
}
void argument_expression_list::append(std::string _arg__s_matchedPattern, assignment_expression *_arg__p_assignment_expression)
{
	argument_expression_list_item item(_arg__s_matchedPattern, _arg__p_assignment_expression);
	_items.push_back(item);
}
PropertiesList argument_expression_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

argument_expression_list::~argument_expression_list()
{

	LOG("DELETING argument_expression_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    direct_abstract_declarator
\*----------------------------------------------------------------------------------------------------*/
std::string direct_abstract_declarator1::name()const
{
	return std::string("direct_abstract_declarator1");
}

std::string direct_abstract_declarator1::pattern()const
{
	return std::string("direct_abstract_declarator,'[',constant_expression,']'");
}

direct_abstract_declarator1::direct_abstract_declarator1(std::string _arg__s_matchedPattern, direct_abstract_declarator *_arg__p_direct_abstract_declarator, constant_expression *_arg__p_constant_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_direct_abstract_declarator(_arg__p_direct_abstract_declarator),
					_p_constant_expression(_arg__p_constant_expression)
{

	LOG("\033[32mCREATING\033[0m direct_abstract_declarator1")
}
Properties direct_abstract_declarator1::getProperties()const
{
	Properties props;
	props["direct_abstract_declarator"]=_p_direct_abstract_declarator;
	props["constant_expression"]=_p_constant_expression;
	return props;
}
direct_abstract_declarator1::~direct_abstract_declarator1()
{

	LOG("\033[31mDELETING\033[0m direct_abstract_declarator1")
	if (_p_direct_abstract_declarator) {delete(_p_direct_abstract_declarator);_p_direct_abstract_declarator=0;}
	if (_p_constant_expression)        {delete(_p_constant_expression);_p_constant_expression=0;}
}
std::string direct_abstract_declarator2::name()const
{
	return std::string("direct_abstract_declarator2");
}

std::string direct_abstract_declarator2::pattern()const
{
	return std::string("direct_abstract_declarator,'(',parameter_type_list,')'");
}

direct_abstract_declarator2::direct_abstract_declarator2(std::string _arg__s_matchedPattern, direct_abstract_declarator *_arg__p_direct_abstract_declarator, parameter_type_list *_arg__p_parameter_type_list):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_direct_abstract_declarator(_arg__p_direct_abstract_declarator),
					_p_parameter_type_list(_arg__p_parameter_type_list)
{

	LOG("\033[32mCREATING\033[0m direct_abstract_declarator2")
}
Properties direct_abstract_declarator2::getProperties()const
{
	Properties props;
	props["direct_abstract_declarator"]=_p_direct_abstract_declarator;
	props["parameter_type_list"]=_p_parameter_type_list;
	return props;
}
direct_abstract_declarator2::~direct_abstract_declarator2()
{

	LOG("\033[31mDELETING\033[0m direct_abstract_declarator2")
	if (_p_direct_abstract_declarator) {delete(_p_direct_abstract_declarator);_p_direct_abstract_declarator=0;}
	if (_p_parameter_type_list)        {delete(_p_parameter_type_list);_p_parameter_type_list=0;}
}
std::string direct_abstract_declarator3::name()const
{
	return std::string("direct_abstract_declarator3");
}

std::string direct_abstract_declarator3::pattern()const
{
	return std::string("'(',abstract_declarator,')'");
}

direct_abstract_declarator3::direct_abstract_declarator3(std::string _arg__s_matchedPattern, abstract_declarator *_arg__p_abstract_declarator):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_abstract_declarator(_arg__p_abstract_declarator)
{

	LOG("\033[32mCREATING\033[0m direct_abstract_declarator3")
}
Properties direct_abstract_declarator3::getProperties()const
{
	Properties props;
	props["abstract_declarator"]=_p_abstract_declarator;
	return props;
}
direct_abstract_declarator3::~direct_abstract_declarator3()
{

	LOG("\033[31mDELETING\033[0m direct_abstract_declarator3")
	if (_p_abstract_declarator)        {delete(_p_abstract_declarator);_p_abstract_declarator=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    equality_expression
\*----------------------------------------------------------------------------------------------------*/
equality_expression_item::equality_expression_item(std::string _arg__s_matchedPattern, Token *_arg__p_token1, relational_expression *_arg__p_relational_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1),
					_p_relational_expression(_arg__p_relational_expression)
{

	LOG("\033[32mCREATING[0m equality_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	equality_expression_item::equality_expression_item(const equality_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_token1(other._p_token1),
					_p_relational_expression(other._p_relational_expression)
{

	LOG("COPYING equality_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties equality_expression_item::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	props["relational_expression"]=_p_relational_expression;
	return props;

}

equality_expression_item::~equality_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) equality_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m equality_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_token1)                     
	{
		delete(_p_token1);
		_p_token1=0;
	}
	if (_p_relational_expression)      
	{
		delete(_p_relational_expression);
		_p_relational_expression=0;
	}
	LOG("\033[31mDELETED\033[0m equality_expression_item")

}
std::string equality_expression::name()const
{
	return std::string("equality_expression");
}

std::string equality_expression::pattern()const
{
	return std::string("equality_expression,EQ_OP,relational_expression");
}

equality_expression::equality_expression(std::string _arg__s_matchedPattern, relational_expression *_arg__p_relational_expression)
{

	LOG("CREATING equality_expression")
	equality_expression_item item(_arg__s_matchedPattern, NULL, _arg__p_relational_expression);

	LOG("APPENDING to equality_expression")
	_items.push_back(item);
}
void equality_expression::append(std::string _arg__s_matchedPattern, Token *_arg__p_token1, relational_expression *_arg__p_relational_expression)
{
	equality_expression_item item(_arg__s_matchedPattern, _arg__p_token1, _arg__p_relational_expression);
	_items.push_back(item);
}
PropertiesList equality_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

equality_expression::~equality_expression()
{

	LOG("DELETING equality_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    primary_expression
\*----------------------------------------------------------------------------------------------------*/
std::string primary_expression1::name()const
{
	return std::string("primary_expression1");
}

std::string primary_expression1::pattern()const
{
	return std::string("'(',expression,')'");
}

primary_expression1::primary_expression1(std::string _arg__s_matchedPattern, expression *_arg__p_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_expression(_arg__p_expression)
{

	LOG("\033[32mCREATING\033[0m primary_expression1")
}
Properties primary_expression1::getProperties()const
{
	Properties props;
	props["expression"]=_p_expression;
	return props;
}
primary_expression1::~primary_expression1()
{

	LOG("\033[31mDELETING\033[0m primary_expression1")
	if (_p_expression)                 {delete(_p_expression);_p_expression=0;}
}
std::string primary_expression2::name()const
{
	return std::string("primary_expression2");
}

std::string primary_expression2::pattern()const
{
	return std::string("IDENTIFIER");
}

primary_expression2::primary_expression2(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m primary_expression2")
}
Properties primary_expression2::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;
}
primary_expression2::~primary_expression2()
{

	LOG("\033[31mDELETING\033[0m primary_expression2")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    declaration_specifiers
\*----------------------------------------------------------------------------------------------------*/
declaration_specifiers1_item::declaration_specifiers1_item(std::string _arg__s_matchedPattern, storage_class_specifier *_arg__p_storage_class_specifier):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_storage_class_specifier(_arg__p_storage_class_specifier)
{

	LOG("\033[32mCREATING[0m declaration_specifiers1_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	declaration_specifiers1_item::declaration_specifiers1_item(const declaration_specifiers1_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_storage_class_specifier(other._p_storage_class_specifier)
{

	LOG("COPYING declaration_specifiers1_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties declaration_specifiers1_item::getProperties()const
{
	Properties props;
	props["storage_class_specifier"]=_p_storage_class_specifier;
	return props;

}

declaration_specifiers1_item::~declaration_specifiers1_item()
{

	LOG("\033[31mDELETING\033[0m(?) declaration_specifiers1_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m declaration_specifiers1_item")

	delete(_refCount);_refCount=0;
	if (_p_storage_class_specifier)    
	{
		delete(_p_storage_class_specifier);
		_p_storage_class_specifier=0;
	}
	LOG("\033[31mDELETED\033[0m declaration_specifiers1_item")

}
std::string declaration_specifiers1::name()const
{
	return std::string("declaration_specifiers1");
}

std::string declaration_specifiers1::pattern()const
{
	return std::string("storage_class_specifier,declaration_specifiers");
}

declaration_specifiers1::declaration_specifiers1(std::string _arg__s_matchedPattern, storage_class_specifier *_arg__p_storage_class_specifier)
{

	LOG("CREATING declaration_specifiers1")
	declaration_specifiers1_item item(_arg__s_matchedPattern, _arg__p_storage_class_specifier);

	LOG("APPENDING to declaration_specifiers1")
	_items.push_back(item);
}
void declaration_specifiers1::append(std::string _arg__s_matchedPattern, storage_class_specifier *_arg__p_storage_class_specifier)
{
	declaration_specifiers1_item item(_arg__s_matchedPattern, _arg__p_storage_class_specifier);
	_items.push_back(item);
}
PropertiesList declaration_specifiers1::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

declaration_specifiers1::~declaration_specifiers1()
{

	LOG("DELETING declaration_specifiers1")
	_items.clear();
}

declaration_specifiers2_item::declaration_specifiers2_item(std::string _arg__s_matchedPattern, type_specifier *_arg__p_type_specifier):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_type_specifier(_arg__p_type_specifier)
{

	LOG("\033[32mCREATING[0m declaration_specifiers2_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	declaration_specifiers2_item::declaration_specifiers2_item(const declaration_specifiers2_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_type_specifier(other._p_type_specifier)
{

	LOG("COPYING declaration_specifiers2_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties declaration_specifiers2_item::getProperties()const
{
	Properties props;
	props["type_specifier"]=_p_type_specifier;
	return props;

}

declaration_specifiers2_item::~declaration_specifiers2_item()
{

	LOG("\033[31mDELETING\033[0m(?) declaration_specifiers2_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m declaration_specifiers2_item")

	delete(_refCount);_refCount=0;
	if (_p_type_specifier)             
	{
		delete(_p_type_specifier);
		_p_type_specifier=0;
	}
	LOG("\033[31mDELETED\033[0m declaration_specifiers2_item")

}
std::string declaration_specifiers2::name()const
{
	return std::string("declaration_specifiers2");
}

std::string declaration_specifiers2::pattern()const
{
	return std::string("type_specifier,declaration_specifiers");
}

declaration_specifiers2::declaration_specifiers2(std::string _arg__s_matchedPattern, type_specifier *_arg__p_type_specifier)
{

	LOG("CREATING declaration_specifiers2")
	declaration_specifiers2_item item(_arg__s_matchedPattern, _arg__p_type_specifier);

	LOG("APPENDING to declaration_specifiers2")
	_items.push_back(item);
}
void declaration_specifiers2::append(std::string _arg__s_matchedPattern, type_specifier *_arg__p_type_specifier)
{
	declaration_specifiers2_item item(_arg__s_matchedPattern, _arg__p_type_specifier);
	_items.push_back(item);
}
PropertiesList declaration_specifiers2::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

declaration_specifiers2::~declaration_specifiers2()
{

	LOG("DELETING declaration_specifiers2")
	_items.clear();
}

declaration_specifiers3_item::declaration_specifiers3_item(std::string _arg__s_matchedPattern, type_qualifier *_arg__p_type_qualifier):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_type_qualifier(_arg__p_type_qualifier)
{

	LOG("\033[32mCREATING[0m declaration_specifiers3_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	declaration_specifiers3_item::declaration_specifiers3_item(const declaration_specifiers3_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_type_qualifier(other._p_type_qualifier)
{

	LOG("COPYING declaration_specifiers3_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties declaration_specifiers3_item::getProperties()const
{
	Properties props;
	props["type_qualifier"]=_p_type_qualifier;
	return props;

}

declaration_specifiers3_item::~declaration_specifiers3_item()
{

	LOG("\033[31mDELETING\033[0m(?) declaration_specifiers3_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m declaration_specifiers3_item")

	delete(_refCount);_refCount=0;
	if (_p_type_qualifier)             
	{
		delete(_p_type_qualifier);
		_p_type_qualifier=0;
	}
	LOG("\033[31mDELETED\033[0m declaration_specifiers3_item")

}
std::string declaration_specifiers3::name()const
{
	return std::string("declaration_specifiers3");
}

std::string declaration_specifiers3::pattern()const
{
	return std::string("type_qualifier,declaration_specifiers");
}

declaration_specifiers3::declaration_specifiers3(std::string _arg__s_matchedPattern, type_qualifier *_arg__p_type_qualifier)
{

	LOG("CREATING declaration_specifiers3")
	declaration_specifiers3_item item(_arg__s_matchedPattern, _arg__p_type_qualifier);

	LOG("APPENDING to declaration_specifiers3")
	_items.push_back(item);
}
void declaration_specifiers3::append(std::string _arg__s_matchedPattern, type_qualifier *_arg__p_type_qualifier)
{
	declaration_specifiers3_item item(_arg__s_matchedPattern, _arg__p_type_qualifier);
	_items.push_back(item);
}
PropertiesList declaration_specifiers3::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

declaration_specifiers3::~declaration_specifiers3()
{

	LOG("DELETING declaration_specifiers3")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    declaration
\*----------------------------------------------------------------------------------------------------*/
std::string declaration::name()const
{
	return std::string("declaration");
}

std::string declaration::pattern()const
{
	return std::string("declaration_specifiers,init_declarator_list,';'");
}

declaration::declaration(std::string _arg__s_matchedPattern, declaration_specifiers *_arg__p_declaration_specifiers, init_declarator_list *_arg__p_init_declarator_list):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_declaration_specifiers(_arg__p_declaration_specifiers),
					_p_init_declarator_list(_arg__p_init_declarator_list)
{

	LOG("\033[32mCREATING\033[0m declaration")
}
Properties declaration::getProperties()const
{
	Properties props;
	props["declaration_specifiers"]=_p_declaration_specifiers;
	props["init_declarator_list"]=_p_init_declarator_list;
	return props;
}
declaration::~declaration()
{

	LOG("\033[31mDELETING\033[0m declaration")
	if (_p_declaration_specifiers)     {delete(_p_declaration_specifiers);_p_declaration_specifiers=0;}
	if (_p_init_declarator_list)       {delete(_p_init_declarator_list);_p_init_declarator_list=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    direct_declarator
\*----------------------------------------------------------------------------------------------------*/
std::string direct_declarator1::name()const
{
	return std::string("direct_declarator1");
}

std::string direct_declarator1::pattern()const
{
	return std::string("direct_declarator,'[',constant_expression,']'");
}

direct_declarator1::direct_declarator1(std::string _arg__s_matchedPattern, direct_declarator *_arg__p_direct_declarator, constant_expression *_arg__p_constant_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_direct_declarator(_arg__p_direct_declarator),
					_p_constant_expression(_arg__p_constant_expression)
{

	LOG("\033[32mCREATING\033[0m direct_declarator1")
}
Properties direct_declarator1::getProperties()const
{
	Properties props;
	props["direct_declarator"]=_p_direct_declarator;
	props["constant_expression"]=_p_constant_expression;
	return props;
}
direct_declarator1::~direct_declarator1()
{

	LOG("\033[31mDELETING\033[0m direct_declarator1")
	if (_p_direct_declarator)          {delete(_p_direct_declarator);_p_direct_declarator=0;}
	if (_p_constant_expression)        {delete(_p_constant_expression);_p_constant_expression=0;}
}
std::string direct_declarator2::name()const
{
	return std::string("direct_declarator2");
}

std::string direct_declarator2::pattern()const
{
	return std::string("direct_declarator,'(',parameter_type_list,')'");
}

direct_declarator2::direct_declarator2(std::string _arg__s_matchedPattern, direct_declarator *_arg__p_direct_declarator, parameter_type_list *_arg__p_parameter_type_list):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_direct_declarator(_arg__p_direct_declarator),
					_p_parameter_type_list(_arg__p_parameter_type_list)
{

	LOG("\033[32mCREATING\033[0m direct_declarator2")
}
Properties direct_declarator2::getProperties()const
{
	Properties props;
	props["direct_declarator"]=_p_direct_declarator;
	props["parameter_type_list"]=_p_parameter_type_list;
	return props;
}
direct_declarator2::~direct_declarator2()
{

	LOG("\033[31mDELETING\033[0m direct_declarator2")
	if (_p_direct_declarator)          {delete(_p_direct_declarator);_p_direct_declarator=0;}
	if (_p_parameter_type_list)        {delete(_p_parameter_type_list);_p_parameter_type_list=0;}
}
std::string direct_declarator3::name()const
{
	return std::string("direct_declarator3");
}

std::string direct_declarator3::pattern()const
{
	return std::string("direct_declarator,'(',identifier_list,')'");
}

direct_declarator3::direct_declarator3(std::string _arg__s_matchedPattern, direct_declarator *_arg__p_direct_declarator, identifier_list *_arg__p_identifier_list):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_direct_declarator(_arg__p_direct_declarator),
					_p_identifier_list(_arg__p_identifier_list)
{

	LOG("\033[32mCREATING\033[0m direct_declarator3")
}
Properties direct_declarator3::getProperties()const
{
	Properties props;
	props["direct_declarator"]=_p_direct_declarator;
	props["identifier_list"]=_p_identifier_list;
	return props;
}
direct_declarator3::~direct_declarator3()
{

	LOG("\033[31mDELETING\033[0m direct_declarator3")
	if (_p_direct_declarator)          {delete(_p_direct_declarator);_p_direct_declarator=0;}
	if (_p_identifier_list)            {delete(_p_identifier_list);_p_identifier_list=0;}
}
std::string direct_declarator4::name()const
{
	return std::string("direct_declarator4");
}

std::string direct_declarator4::pattern()const
{
	return std::string("'(',declarator,')'");
}

direct_declarator4::direct_declarator4(std::string _arg__s_matchedPattern, declarator *_arg__p_declarator):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_declarator(_arg__p_declarator)
{

	LOG("\033[32mCREATING\033[0m direct_declarator4")
}
Properties direct_declarator4::getProperties()const
{
	Properties props;
	props["declarator"]=_p_declarator;
	return props;
}
direct_declarator4::~direct_declarator4()
{

	LOG("\033[31mDELETING\033[0m direct_declarator4")
	if (_p_declarator)                 {delete(_p_declarator);_p_declarator=0;}
}
std::string direct_declarator5::name()const
{
	return std::string("direct_declarator5");
}

std::string direct_declarator5::pattern()const
{
	return std::string("IDENTIFIER");
}

direct_declarator5::direct_declarator5(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m direct_declarator5")
}
Properties direct_declarator5::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;
}
direct_declarator5::~direct_declarator5()
{

	LOG("\033[31mDELETING\033[0m direct_declarator5")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    logical_and_expression
\*----------------------------------------------------------------------------------------------------*/
logical_and_expression_item::logical_and_expression_item(std::string _arg__s_matchedPattern, inclusive_or_expression *_arg__p_inclusive_or_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_inclusive_or_expression(_arg__p_inclusive_or_expression)
{

	LOG("\033[32mCREATING[0m logical_and_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	logical_and_expression_item::logical_and_expression_item(const logical_and_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_inclusive_or_expression(other._p_inclusive_or_expression)
{

	LOG("COPYING logical_and_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties logical_and_expression_item::getProperties()const
{
	Properties props;
	props["inclusive_or_expression"]=_p_inclusive_or_expression;
	return props;

}

logical_and_expression_item::~logical_and_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) logical_and_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m logical_and_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_inclusive_or_expression)    
	{
		delete(_p_inclusive_or_expression);
		_p_inclusive_or_expression=0;
	}
	LOG("\033[31mDELETED\033[0m logical_and_expression_item")

}
std::string logical_and_expression::name()const
{
	return std::string("logical_and_expression");
}

std::string logical_and_expression::pattern()const
{
	return std::string("logical_and_expression,AND_OP,inclusive_or_expression");
}

logical_and_expression::logical_and_expression(std::string _arg__s_matchedPattern, inclusive_or_expression *_arg__p_inclusive_or_expression)
{

	LOG("CREATING logical_and_expression")
	logical_and_expression_item item(_arg__s_matchedPattern, _arg__p_inclusive_or_expression);

	LOG("APPENDING to logical_and_expression")
	_items.push_back(item);
}
void logical_and_expression::append(std::string _arg__s_matchedPattern, inclusive_or_expression *_arg__p_inclusive_or_expression)
{
	logical_and_expression_item item(_arg__s_matchedPattern, _arg__p_inclusive_or_expression);
	_items.push_back(item);
}
PropertiesList logical_and_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

logical_and_expression::~logical_and_expression()
{

	LOG("DELETING logical_and_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    init_declarator_list
\*----------------------------------------------------------------------------------------------------*/
init_declarator_list_item::init_declarator_list_item(std::string _arg__s_matchedPattern, init_declarator *_arg__p_init_declarator):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_init_declarator(_arg__p_init_declarator)
{

	LOG("\033[32mCREATING[0m init_declarator_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	init_declarator_list_item::init_declarator_list_item(const init_declarator_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_init_declarator(other._p_init_declarator)
{

	LOG("COPYING init_declarator_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties init_declarator_list_item::getProperties()const
{
	Properties props;
	props["init_declarator"]=_p_init_declarator;
	return props;

}

init_declarator_list_item::~init_declarator_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) init_declarator_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m init_declarator_list_item")

	delete(_refCount);_refCount=0;
	if (_p_init_declarator)            
	{
		delete(_p_init_declarator);
		_p_init_declarator=0;
	}
	LOG("\033[31mDELETED\033[0m init_declarator_list_item")

}
std::string init_declarator_list::name()const
{
	return std::string("init_declarator_list");
}

std::string init_declarator_list::pattern()const
{
	return std::string("init_declarator_list,',',init_declarator");
}

init_declarator_list::init_declarator_list(std::string _arg__s_matchedPattern, init_declarator *_arg__p_init_declarator)
{

	LOG("CREATING init_declarator_list")
	init_declarator_list_item item(_arg__s_matchedPattern, _arg__p_init_declarator);

	LOG("APPENDING to init_declarator_list")
	_items.push_back(item);
}
void init_declarator_list::append(std::string _arg__s_matchedPattern, init_declarator *_arg__p_init_declarator)
{
	init_declarator_list_item item(_arg__s_matchedPattern, _arg__p_init_declarator);
	_items.push_back(item);
}
PropertiesList init_declarator_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

init_declarator_list::~init_declarator_list()
{

	LOG("DELETING init_declarator_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    shift_expression
\*----------------------------------------------------------------------------------------------------*/
shift_expression_item::shift_expression_item(std::string _arg__s_matchedPattern, Token *_arg__p_token1, additive_expression *_arg__p_additive_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1),
					_p_additive_expression(_arg__p_additive_expression)
{

	LOG("\033[32mCREATING[0m shift_expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	shift_expression_item::shift_expression_item(const shift_expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_token1(other._p_token1),
					_p_additive_expression(other._p_additive_expression)
{

	LOG("COPYING shift_expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties shift_expression_item::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	props["additive_expression"]=_p_additive_expression;
	return props;

}

shift_expression_item::~shift_expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) shift_expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m shift_expression_item")

	delete(_refCount);_refCount=0;
	if (_p_token1)                     
	{
		delete(_p_token1);
		_p_token1=0;
	}
	if (_p_additive_expression)        
	{
		delete(_p_additive_expression);
		_p_additive_expression=0;
	}
	LOG("\033[31mDELETED\033[0m shift_expression_item")

}
std::string shift_expression::name()const
{
	return std::string("shift_expression");
}

std::string shift_expression::pattern()const
{
	return std::string("shift_expression,LEFT_OP,additive_expression");
}

shift_expression::shift_expression(std::string _arg__s_matchedPattern, additive_expression *_arg__p_additive_expression)
{

	LOG("CREATING shift_expression")
	shift_expression_item item(_arg__s_matchedPattern, NULL, _arg__p_additive_expression);

	LOG("APPENDING to shift_expression")
	_items.push_back(item);
}
void shift_expression::append(std::string _arg__s_matchedPattern, Token *_arg__p_token1, additive_expression *_arg__p_additive_expression)
{
	shift_expression_item item(_arg__s_matchedPattern, _arg__p_token1, _arg__p_additive_expression);
	_items.push_back(item);
}
PropertiesList shift_expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

shift_expression::~shift_expression()
{

	LOG("DELETING shift_expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    identifier_list
\*----------------------------------------------------------------------------------------------------*/
identifier_list_item::identifier_list_item(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING[0m identifier_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	identifier_list_item::identifier_list_item(const identifier_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_token1(other._p_token1)
{

	LOG("COPYING identifier_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties identifier_list_item::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;

}

identifier_list_item::~identifier_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) identifier_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m identifier_list_item")

	delete(_refCount);_refCount=0;
	if (_p_token1)                     
	{
		delete(_p_token1);
		_p_token1=0;
	}
	LOG("\033[31mDELETED\033[0m identifier_list_item")

}
std::string identifier_list::name()const
{
	return std::string("identifier_list");
}

std::string identifier_list::pattern()const
{
	return std::string("identifier_list,',',IDENTIFIER");
}

identifier_list::identifier_list(std::string _arg__s_matchedPattern, Token *_arg__p_token1)
{

	LOG("CREATING identifier_list")
	identifier_list_item item(_arg__s_matchedPattern, _arg__p_token1);

	LOG("APPENDING to identifier_list")
	_items.push_back(item);
}
void identifier_list::append(std::string _arg__s_matchedPattern, Token *_arg__p_token1)
{
	identifier_list_item item(_arg__s_matchedPattern, _arg__p_token1);
	_items.push_back(item);
}
PropertiesList identifier_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

identifier_list::~identifier_list()
{

	LOG("DELETING identifier_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    jump_statement
\*----------------------------------------------------------------------------------------------------*/
std::string jump_statement1::name()const
{
	return std::string("jump_statement1");
}

std::string jump_statement1::pattern()const
{
	return std::string("GOTO,IDENTIFIER,';'");
}

jump_statement1::jump_statement1(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m jump_statement1")
}
Properties jump_statement1::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;
}
jump_statement1::~jump_statement1()
{

	LOG("\033[31mDELETING\033[0m jump_statement1")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}
std::string jump_statement2::name()const
{
	return std::string("jump_statement2");
}

std::string jump_statement2::pattern()const
{
	return std::string("RETURN,expression,';'");
}

jump_statement2::jump_statement2(std::string _arg__s_matchedPattern, expression *_arg__p_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_expression(_arg__p_expression)
{

	LOG("\033[32mCREATING\033[0m jump_statement2")
}
Properties jump_statement2::getProperties()const
{
	Properties props;
	props["expression"]=_p_expression;
	return props;
}
jump_statement2::~jump_statement2()
{

	LOG("\033[31mDELETING\033[0m jump_statement2")
	if (_p_expression)                 {delete(_p_expression);_p_expression=0;}
}
std::string jump_statement3::name()const
{
	return std::string("jump_statement3");
}

std::string jump_statement3::pattern()const
{
	return std::string("CONTINUE,';'");
}

jump_statement3::jump_statement3(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m jump_statement3")
}
Properties jump_statement3::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;
}
jump_statement3::~jump_statement3()
{

	LOG("\033[31mDELETING\033[0m jump_statement3")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    struct_declarator
\*----------------------------------------------------------------------------------------------------*/
std::string struct_declarator::name()const
{
	return std::string("struct_declarator");
}

std::string struct_declarator::pattern()const
{
	return std::string("declarator,':',constant_expression");
}

struct_declarator::struct_declarator(std::string _arg__s_matchedPattern, declarator *_arg__p_declarator, Token *_arg__p_token1, constant_expression *_arg__p_constant_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_declarator(_arg__p_declarator),
					_p_token1(_arg__p_token1),
					_p_constant_expression(_arg__p_constant_expression)
{

	LOG("\033[32mCREATING\033[0m struct_declarator")
}
Properties struct_declarator::getProperties()const
{
	Properties props;
	props["declarator"]=_p_declarator;
	props["token1"]=_p_token1;
	props["constant_expression"]=_p_constant_expression;
	return props;
}
struct_declarator::~struct_declarator()
{

	LOG("\033[31mDELETING\033[0m struct_declarator")
	if (_p_declarator)                 {delete(_p_declarator);_p_declarator=0;}
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
	if (_p_constant_expression)        {delete(_p_constant_expression);_p_constant_expression=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    function_definition
\*----------------------------------------------------------------------------------------------------*/
std::string function_definition::name()const
{
	return std::string("function_definition");
}

std::string function_definition::pattern()const
{
	return std::string("declaration_specifiers,declarator,declaration_list,compound_statement");
}

function_definition::function_definition(std::string _arg__s_matchedPattern, declaration_specifiers *_arg__p_declaration_specifiers, declarator *_arg__p_declarator, declaration_list *_arg__p_declaration_list, compound_statement *_arg__p_compound_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_declaration_specifiers(_arg__p_declaration_specifiers),
					_p_declarator(_arg__p_declarator),
					_p_declaration_list(_arg__p_declaration_list),
					_p_compound_statement(_arg__p_compound_statement)
{

	LOG("\033[32mCREATING\033[0m function_definition")
}
Properties function_definition::getProperties()const
{
	Properties props;
	props["declaration_specifiers"]=_p_declaration_specifiers;
	props["declarator"]=_p_declarator;
	props["declaration_list"]=_p_declaration_list;
	props["compound_statement"]=_p_compound_statement;
	return props;
}
function_definition::~function_definition()
{

	LOG("\033[31mDELETING\033[0m function_definition")
	if (_p_declaration_specifiers)     {delete(_p_declaration_specifiers);_p_declaration_specifiers=0;}
	if (_p_declarator)                 {delete(_p_declarator);_p_declarator=0;}
	if (_p_declaration_list)           {delete(_p_declaration_list);_p_declaration_list=0;}
	if (_p_compound_statement)         {delete(_p_compound_statement);_p_compound_statement=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    parameter_list
\*----------------------------------------------------------------------------------------------------*/
parameter_list_item::parameter_list_item(std::string _arg__s_matchedPattern, parameter_declaration *_arg__p_parameter_declaration):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_parameter_declaration(_arg__p_parameter_declaration)
{

	LOG("\033[32mCREATING[0m parameter_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	parameter_list_item::parameter_list_item(const parameter_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_parameter_declaration(other._p_parameter_declaration)
{

	LOG("COPYING parameter_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties parameter_list_item::getProperties()const
{
	Properties props;
	props["parameter_declaration"]=_p_parameter_declaration;
	return props;

}

parameter_list_item::~parameter_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) parameter_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m parameter_list_item")

	delete(_refCount);_refCount=0;
	if (_p_parameter_declaration)      
	{
		delete(_p_parameter_declaration);
		_p_parameter_declaration=0;
	}
	LOG("\033[31mDELETED\033[0m parameter_list_item")

}
std::string parameter_list::name()const
{
	return std::string("parameter_list");
}

std::string parameter_list::pattern()const
{
	return std::string("parameter_list,',',parameter_declaration");
}

parameter_list::parameter_list(std::string _arg__s_matchedPattern, parameter_declaration *_arg__p_parameter_declaration)
{

	LOG("CREATING parameter_list")
	parameter_list_item item(_arg__s_matchedPattern, _arg__p_parameter_declaration);

	LOG("APPENDING to parameter_list")
	_items.push_back(item);
}
void parameter_list::append(std::string _arg__s_matchedPattern, parameter_declaration *_arg__p_parameter_declaration)
{
	parameter_list_item item(_arg__s_matchedPattern, _arg__p_parameter_declaration);
	_items.push_back(item);
}
PropertiesList parameter_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

parameter_list::~parameter_list()
{

	LOG("DELETING parameter_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    enum_specifier
\*----------------------------------------------------------------------------------------------------*/
std::string enum_specifier::name()const
{
	return std::string("enum_specifier");
}

std::string enum_specifier::pattern()const
{
	return std::string("ENUM,IDENTIFIER,'{',enumerator_list,'}'");
}

enum_specifier::enum_specifier(std::string _arg__s_matchedPattern, Token *_arg__p_token1, Token *_arg__p_token2, enumerator_list *_arg__p_enumerator_list, Token *_arg__p_token3):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1),
					_p_token2(_arg__p_token2),
					_p_enumerator_list(_arg__p_enumerator_list),
					_p_token3(_arg__p_token3)
{

	LOG("\033[32mCREATING\033[0m enum_specifier")
}
Properties enum_specifier::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	props["token2"]=_p_token2;
	props["enumerator_list"]=_p_enumerator_list;
	props["token3"]=_p_token3;
	return props;
}
enum_specifier::~enum_specifier()
{

	LOG("\033[31mDELETING\033[0m enum_specifier")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
	if (_p_token2)                     {delete(_p_token2);_p_token2=0;}
	if (_p_enumerator_list)            {delete(_p_enumerator_list);_p_enumerator_list=0;}
	if (_p_token3)                     {delete(_p_token3);_p_token3=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    type_qualifier
\*----------------------------------------------------------------------------------------------------*/
std::string type_qualifier::name()const
{
	return std::string("type_qualifier");
}

std::string type_qualifier::pattern()const
{
	return std::string("CONST");
}

type_qualifier::type_qualifier(std::string _arg__s_matchedPattern, Token *_arg__p_token1):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1)
{

	LOG("\033[32mCREATING\033[0m type_qualifier")
}
Properties type_qualifier::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	return props;
}
type_qualifier::~type_qualifier()
{

	LOG("\033[31mDELETING\033[0m type_qualifier")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    enumerator_list
\*----------------------------------------------------------------------------------------------------*/
enumerator_list_item::enumerator_list_item(std::string _arg__s_matchedPattern, enumerator *_arg__p_enumerator):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_enumerator(_arg__p_enumerator)
{

	LOG("\033[32mCREATING[0m enumerator_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	enumerator_list_item::enumerator_list_item(const enumerator_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_enumerator(other._p_enumerator)
{

	LOG("COPYING enumerator_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties enumerator_list_item::getProperties()const
{
	Properties props;
	props["enumerator"]=_p_enumerator;
	return props;

}

enumerator_list_item::~enumerator_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) enumerator_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m enumerator_list_item")

	delete(_refCount);_refCount=0;
	if (_p_enumerator)                 
	{
		delete(_p_enumerator);
		_p_enumerator=0;
	}
	LOG("\033[31mDELETED\033[0m enumerator_list_item")

}
std::string enumerator_list::name()const
{
	return std::string("enumerator_list");
}

std::string enumerator_list::pattern()const
{
	return std::string("enumerator_list,',',enumerator");
}

enumerator_list::enumerator_list(std::string _arg__s_matchedPattern, enumerator *_arg__p_enumerator)
{

	LOG("CREATING enumerator_list")
	enumerator_list_item item(_arg__s_matchedPattern, _arg__p_enumerator);

	LOG("APPENDING to enumerator_list")
	_items.push_back(item);
}
void enumerator_list::append(std::string _arg__s_matchedPattern, enumerator *_arg__p_enumerator)
{
	enumerator_list_item item(_arg__s_matchedPattern, _arg__p_enumerator);
	_items.push_back(item);
}
PropertiesList enumerator_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

enumerator_list::~enumerator_list()
{

	LOG("DELETING enumerator_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    labeled_statement
\*----------------------------------------------------------------------------------------------------*/
std::string labeled_statement1::name()const
{
	return std::string("labeled_statement1");
}

std::string labeled_statement1::pattern()const
{
	return std::string("CASE,constant_expression,':',statement");
}

labeled_statement1::labeled_statement1(std::string _arg__s_matchedPattern, constant_expression *_arg__p_constant_expression, statement *_arg__p_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_constant_expression(_arg__p_constant_expression),
					_p_statement(_arg__p_statement)
{

	LOG("\033[32mCREATING\033[0m labeled_statement1")
}
Properties labeled_statement1::getProperties()const
{
	Properties props;
	props["constant_expression"]=_p_constant_expression;
	props["statement"]=_p_statement;
	return props;
}
labeled_statement1::~labeled_statement1()
{

	LOG("\033[31mDELETING\033[0m labeled_statement1")
	if (_p_constant_expression)        {delete(_p_constant_expression);_p_constant_expression=0;}
	if (_p_statement)                  {delete(_p_statement);_p_statement=0;}
}
std::string labeled_statement2::name()const
{
	return std::string("labeled_statement2");
}

std::string labeled_statement2::pattern()const
{
	return std::string("IDENTIFIER,':',statement");
}

labeled_statement2::labeled_statement2(std::string _arg__s_matchedPattern, Token *_arg__p_token1, statement *_arg__p_statement):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_token1(_arg__p_token1),
					_p_statement(_arg__p_statement)
{

	LOG("\033[32mCREATING\033[0m labeled_statement2")
}
Properties labeled_statement2::getProperties()const
{
	Properties props;
	props["token1"]=_p_token1;
	props["statement"]=_p_statement;
	return props;
}
labeled_statement2::~labeled_statement2()
{

	LOG("\033[31mDELETING\033[0m labeled_statement2")
	if (_p_token1)                     {delete(_p_token1);_p_token1=0;}
	if (_p_statement)                  {delete(_p_statement);_p_statement=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    declaration_list
\*----------------------------------------------------------------------------------------------------*/
declaration_list_item::declaration_list_item(std::string _arg__s_matchedPattern, declaration *_arg__p_declaration):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_declaration(_arg__p_declaration)
{

	LOG("\033[32mCREATING[0m declaration_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	declaration_list_item::declaration_list_item(const declaration_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_declaration(other._p_declaration)
{

	LOG("COPYING declaration_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties declaration_list_item::getProperties()const
{
	Properties props;
	props["declaration"]=_p_declaration;
	return props;

}

declaration_list_item::~declaration_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) declaration_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m declaration_list_item")

	delete(_refCount);_refCount=0;
	if (_p_declaration)                
	{
		delete(_p_declaration);
		_p_declaration=0;
	}
	LOG("\033[31mDELETED\033[0m declaration_list_item")

}
std::string declaration_list::name()const
{
	return std::string("declaration_list");
}

std::string declaration_list::pattern()const
{
	return std::string("declaration_list,declaration");
}

declaration_list::declaration_list(std::string _arg__s_matchedPattern, declaration *_arg__p_declaration)
{

	LOG("CREATING declaration_list")
	declaration_list_item item(_arg__s_matchedPattern, _arg__p_declaration);

	LOG("APPENDING to declaration_list")
	_items.push_back(item);
}
void declaration_list::append(std::string _arg__s_matchedPattern, declaration *_arg__p_declaration)
{
	declaration_list_item item(_arg__s_matchedPattern, _arg__p_declaration);
	_items.push_back(item);
}
PropertiesList declaration_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

declaration_list::~declaration_list()
{

	LOG("DELETING declaration_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    specifier_qualifier_list
\*----------------------------------------------------------------------------------------------------*/
specifier_qualifier_list1_item::specifier_qualifier_list1_item(std::string _arg__s_matchedPattern, type_specifier *_arg__p_type_specifier):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_type_specifier(_arg__p_type_specifier)
{

	LOG("\033[32mCREATING[0m specifier_qualifier_list1_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	specifier_qualifier_list1_item::specifier_qualifier_list1_item(const specifier_qualifier_list1_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_type_specifier(other._p_type_specifier)
{

	LOG("COPYING specifier_qualifier_list1_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties specifier_qualifier_list1_item::getProperties()const
{
	Properties props;
	props["type_specifier"]=_p_type_specifier;
	return props;

}

specifier_qualifier_list1_item::~specifier_qualifier_list1_item()
{

	LOG("\033[31mDELETING\033[0m(?) specifier_qualifier_list1_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m specifier_qualifier_list1_item")

	delete(_refCount);_refCount=0;
	if (_p_type_specifier)             
	{
		delete(_p_type_specifier);
		_p_type_specifier=0;
	}
	LOG("\033[31mDELETED\033[0m specifier_qualifier_list1_item")

}
std::string specifier_qualifier_list1::name()const
{
	return std::string("specifier_qualifier_list1");
}

std::string specifier_qualifier_list1::pattern()const
{
	return std::string("type_specifier,specifier_qualifier_list");
}

specifier_qualifier_list1::specifier_qualifier_list1(std::string _arg__s_matchedPattern, type_specifier *_arg__p_type_specifier)
{

	LOG("CREATING specifier_qualifier_list1")
	specifier_qualifier_list1_item item(_arg__s_matchedPattern, _arg__p_type_specifier);

	LOG("APPENDING to specifier_qualifier_list1")
	_items.push_back(item);
}
void specifier_qualifier_list1::append(std::string _arg__s_matchedPattern, type_specifier *_arg__p_type_specifier)
{
	specifier_qualifier_list1_item item(_arg__s_matchedPattern, _arg__p_type_specifier);
	_items.push_back(item);
}
PropertiesList specifier_qualifier_list1::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

specifier_qualifier_list1::~specifier_qualifier_list1()
{

	LOG("DELETING specifier_qualifier_list1")
	_items.clear();
}

specifier_qualifier_list2_item::specifier_qualifier_list2_item(std::string _arg__s_matchedPattern, type_qualifier *_arg__p_type_qualifier):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_type_qualifier(_arg__p_type_qualifier)
{

	LOG("\033[32mCREATING[0m specifier_qualifier_list2_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	specifier_qualifier_list2_item::specifier_qualifier_list2_item(const specifier_qualifier_list2_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_type_qualifier(other._p_type_qualifier)
{

	LOG("COPYING specifier_qualifier_list2_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties specifier_qualifier_list2_item::getProperties()const
{
	Properties props;
	props["type_qualifier"]=_p_type_qualifier;
	return props;

}

specifier_qualifier_list2_item::~specifier_qualifier_list2_item()
{

	LOG("\033[31mDELETING\033[0m(?) specifier_qualifier_list2_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m specifier_qualifier_list2_item")

	delete(_refCount);_refCount=0;
	if (_p_type_qualifier)             
	{
		delete(_p_type_qualifier);
		_p_type_qualifier=0;
	}
	LOG("\033[31mDELETED\033[0m specifier_qualifier_list2_item")

}
std::string specifier_qualifier_list2::name()const
{
	return std::string("specifier_qualifier_list2");
}

std::string specifier_qualifier_list2::pattern()const
{
	return std::string("type_qualifier,specifier_qualifier_list");
}

specifier_qualifier_list2::specifier_qualifier_list2(std::string _arg__s_matchedPattern, type_qualifier *_arg__p_type_qualifier)
{

	LOG("CREATING specifier_qualifier_list2")
	specifier_qualifier_list2_item item(_arg__s_matchedPattern, _arg__p_type_qualifier);

	LOG("APPENDING to specifier_qualifier_list2")
	_items.push_back(item);
}
void specifier_qualifier_list2::append(std::string _arg__s_matchedPattern, type_qualifier *_arg__p_type_qualifier)
{
	specifier_qualifier_list2_item item(_arg__s_matchedPattern, _arg__p_type_qualifier);
	_items.push_back(item);
}
PropertiesList specifier_qualifier_list2::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

specifier_qualifier_list2::~specifier_qualifier_list2()
{

	LOG("DELETING specifier_qualifier_list2")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    translation_unit
\*----------------------------------------------------------------------------------------------------*/
translation_unit_item::translation_unit_item(std::string _arg__s_matchedPattern, external_declaration *_arg__p_external_declaration):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_external_declaration(_arg__p_external_declaration)
{

	LOG("\033[32mCREATING[0m translation_unit_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	translation_unit_item::translation_unit_item(const translation_unit_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_external_declaration(other._p_external_declaration)
{

	LOG("COPYING translation_unit_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties translation_unit_item::getProperties()const
{
	Properties props;
	props["external_declaration"]=_p_external_declaration;
	return props;

}

translation_unit_item::~translation_unit_item()
{

	LOG("\033[31mDELETING\033[0m(?) translation_unit_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m translation_unit_item")

	delete(_refCount);_refCount=0;
	if (_p_external_declaration)       
	{
		delete(_p_external_declaration);
		_p_external_declaration=0;
	}
	LOG("\033[31mDELETED\033[0m translation_unit_item")

}
std::string translation_unit::name()const
{
	return std::string("translation_unit");
}

std::string translation_unit::pattern()const
{
	return std::string("translation_unit,external_declaration");
}

translation_unit::translation_unit(std::string _arg__s_matchedPattern, external_declaration *_arg__p_external_declaration)
{

	LOG("CREATING translation_unit")
	translation_unit_item item(_arg__s_matchedPattern, _arg__p_external_declaration);

	LOG("APPENDING to translation_unit")
	_items.push_back(item);
}
void translation_unit::append(std::string _arg__s_matchedPattern, external_declaration *_arg__p_external_declaration)
{
	translation_unit_item item(_arg__s_matchedPattern, _arg__p_external_declaration);
	_items.push_back(item);
}
PropertiesList translation_unit::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

translation_unit::~translation_unit()
{

	LOG("DELETING translation_unit")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    constant_expression
\*----------------------------------------------------------------------------------------------------*/
std::string constant_expression::name()const
{
	return std::string("constant_expression");
}

std::string constant_expression::pattern()const
{
	return std::string("conditional_expression");
}

constant_expression::constant_expression(std::string _arg__s_matchedPattern, conditional_expression *_arg__p_conditional_expression):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_conditional_expression(_arg__p_conditional_expression)
{

	LOG("\033[32mCREATING\033[0m constant_expression")
}
Properties constant_expression::getProperties()const
{
	Properties props;
	props["conditional_expression"]=_p_conditional_expression;
	return props;
}
constant_expression::~constant_expression()
{

	LOG("\033[31mDELETING\033[0m constant_expression")
	if (_p_conditional_expression)     {delete(_p_conditional_expression);_p_conditional_expression=0;}
}




/*----------------------------------------------------------------------------------------------------*\
                    initializer_list
\*----------------------------------------------------------------------------------------------------*/
initializer_list_item::initializer_list_item(std::string _arg__s_matchedPattern, initializer *_arg__p_initializer):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_initializer(_arg__p_initializer)
{

	LOG("\033[32mCREATING[0m initializer_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	initializer_list_item::initializer_list_item(const initializer_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_initializer(other._p_initializer)
{

	LOG("COPYING initializer_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties initializer_list_item::getProperties()const
{
	Properties props;
	props["initializer"]=_p_initializer;
	return props;

}

initializer_list_item::~initializer_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) initializer_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m initializer_list_item")

	delete(_refCount);_refCount=0;
	if (_p_initializer)                
	{
		delete(_p_initializer);
		_p_initializer=0;
	}
	LOG("\033[31mDELETED\033[0m initializer_list_item")

}
std::string initializer_list::name()const
{
	return std::string("initializer_list");
}

std::string initializer_list::pattern()const
{
	return std::string("initializer_list,',',initializer");
}

initializer_list::initializer_list(std::string _arg__s_matchedPattern, initializer *_arg__p_initializer)
{

	LOG("CREATING initializer_list")
	initializer_list_item item(_arg__s_matchedPattern, _arg__p_initializer);

	LOG("APPENDING to initializer_list")
	_items.push_back(item);
}
void initializer_list::append(std::string _arg__s_matchedPattern, initializer *_arg__p_initializer)
{
	initializer_list_item item(_arg__s_matchedPattern, _arg__p_initializer);
	_items.push_back(item);
}
PropertiesList initializer_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

initializer_list::~initializer_list()
{

	LOG("DELETING initializer_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    statement_list
\*----------------------------------------------------------------------------------------------------*/
statement_list_item::statement_list_item(std::string _arg__s_matchedPattern, statement *_arg__p_statement):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_statement(_arg__p_statement)
{

	LOG("\033[32mCREATING[0m statement_list_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	statement_list_item::statement_list_item(const statement_list_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_statement(other._p_statement)
{

	LOG("COPYING statement_list_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties statement_list_item::getProperties()const
{
	Properties props;
	props["statement"]=_p_statement;
	return props;

}

statement_list_item::~statement_list_item()
{

	LOG("\033[31mDELETING\033[0m(?) statement_list_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m statement_list_item")

	delete(_refCount);_refCount=0;
	if (_p_statement)                  
	{
		delete(_p_statement);
		_p_statement=0;
	}
	LOG("\033[31mDELETED\033[0m statement_list_item")

}
std::string statement_list::name()const
{
	return std::string("statement_list");
}

std::string statement_list::pattern()const
{
	return std::string("statement_list,statement");
}

statement_list::statement_list(std::string _arg__s_matchedPattern, statement *_arg__p_statement)
{

	LOG("CREATING statement_list")
	statement_list_item item(_arg__s_matchedPattern, _arg__p_statement);

	LOG("APPENDING to statement_list")
	_items.push_back(item);
}
void statement_list::append(std::string _arg__s_matchedPattern, statement *_arg__p_statement)
{
	statement_list_item item(_arg__s_matchedPattern, _arg__p_statement);
	_items.push_back(item);
}
PropertiesList statement_list::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

statement_list::~statement_list()
{

	LOG("DELETING statement_list")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    expression
\*----------------------------------------------------------------------------------------------------*/
expression_item::expression_item(std::string _arg__s_matchedPattern, assignment_expression *_arg__p_assignment_expression):
					_refCount(new int(1)),
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_assignment_expression(_arg__p_assignment_expression)
{

	LOG("\033[32mCREATING[0m expression_item")
	LOG("[ "<<_refCount<<" ]	"<<"refCount after creation:"<<(*_refCount))
}
	expression_item::expression_item(const expression_item &other):
					_refCount(other._refCount),
					_s_matchedPattern(other._s_matchedPattern),
					_p_assignment_expression(other._p_assignment_expression)
{

	LOG("COPYING expression_item")
	(*_refCount)++;
	LOG("[ "<<_refCount<<" ]	"<<"refCount after increment:"<<(*_refCount))
}

	Properties expression_item::getProperties()const
{
	Properties props;
	props["assignment_expression"]=_p_assignment_expression;
	return props;

}

expression_item::~expression_item()
{

	LOG("\033[31mDELETING\033[0m(?) expression_item")

	(*_refCount)--;	LOG("[ "<<_refCount<<" ]	"<<"refCount after decrement:"<<(*_refCount))
	if((*_refCount)>0)return;
	LOG("\033[31mDELETING\033[0m expression_item")

	delete(_refCount);_refCount=0;
	if (_p_assignment_expression)      
	{
		delete(_p_assignment_expression);
		_p_assignment_expression=0;
	}
	LOG("\033[31mDELETED\033[0m expression_item")

}
std::string expression::name()const
{
	return std::string("expression");
}

std::string expression::pattern()const
{
	return std::string("expression,',',assignment_expression");
}

expression::expression(std::string _arg__s_matchedPattern, assignment_expression *_arg__p_assignment_expression)
{

	LOG("CREATING expression")
	expression_item item(_arg__s_matchedPattern, _arg__p_assignment_expression);

	LOG("APPENDING to expression")
	_items.push_back(item);
}
void expression::append(std::string _arg__s_matchedPattern, assignment_expression *_arg__p_assignment_expression)
{
	expression_item item(_arg__s_matchedPattern, _arg__p_assignment_expression);
	_items.push_back(item);
}
PropertiesList expression::getPropertiesList()const
{
	PropertiesList pList;
	for(CItemsListIter i=_items.begin();i!=_items.end();i++)
	{
		pList.push_back(i->getProperties());
	}
	return pList;
}

expression::~expression()
{

	LOG("DELETING expression")
	_items.clear();
}





/*----------------------------------------------------------------------------------------------------*\
                    declarator
\*----------------------------------------------------------------------------------------------------*/
std::string declarator::name()const
{
	return std::string("declarator");
}

std::string declarator::pattern()const
{
	return std::string("pointer,direct_declarator");
}

declarator::declarator(std::string _arg__s_matchedPattern, pointer *_arg__p_pointer, direct_declarator *_arg__p_direct_declarator):
					_s_matchedPattern(_arg__s_matchedPattern),
					_p_pointer(_arg__p_pointer),
					_p_direct_declarator(_arg__p_direct_declarator)
{

	LOG("\033[32mCREATING\033[0m declarator")
}
Properties declarator::getProperties()const
{
	Properties props;
	props["pointer"]=_p_pointer;
	props["direct_declarator"]=_p_direct_declarator;
	return props;
}
declarator::~declarator()
{

	LOG("\033[31mDELETING\033[0m declarator")
	if (_p_pointer)                    {delete(_p_pointer);_p_pointer=0;}
	if (_p_direct_declarator)          {delete(_p_direct_declarator);_p_direct_declarator=0;}
}




}//namespace CAst
