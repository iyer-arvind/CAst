









#ifndef CAST_HEADER_INCLUDED
#define CAST_HEADER_INCLUDED

#define RULE_MARKER(txt) std::cerr<<"\033[36m"<<__FILE__<<":"<<__LINE__<<"\033[0m"<<txt;
#define CAST_PTR(TYPE,PTR) dynamic_cast<CAst::TYPE*>(PTR)
#include <string>
#include <cstring>
#include <stdio.h>
#include <list>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <map>
#define LOG(txt) std::cerr<<"[\033[33m"<<std::setw(20)<<std::left<<this<<"\033[0m\t]"<<txt<<"\n";


extern "C"
{
    int yylex(void);
    int yyerror(const char *s);
}
namespace CAst
{


class CAst;



/*=============================================================================================================*\

	THE PROPERTIES CLASS

\*=============================================================================================================*/  



class Properties:public std::map<std::string,CAst*> 
{
private:
	std::string __className;
	std::string __tokValue;
public:
	Properties(std::string className):
		std::map<std::string,CAst*>(),
		__className(className)
	{}
	void setTokValue(std::string v){__tokValue=v;}
	
	std::ostream& toStream(std::ostream& stream,int indent=0)const;
	std::string str()const
	{
		std::stringstream stream;
		toStream(stream);
		return stream.str();
	}
};
inline std::ostream& operator<<(std::ostream &stream,const Properties &p)
{
	return p.toStream(stream);
}

/*=============================================================================================================*\

	THE PROPERTY LIST CLASS

\*=============================================================================================================*/  




class PropertiesList:public std::list<Properties>
{
private:
	std::string __className;
public:
	PropertiesList(std::string className):
			std::list<Properties>(),
			__className(className)
	{}
			
	std::ostream& toStream(std::ostream& stream,int indent=0)const;
	std::string str()const
	{
		std::stringstream stream;
		toStream(stream);
		return stream.str();
	}
};

inline std::ostream& operator<<(std::ostream &stream,const PropertiesList &p){return p.toStream(stream);}



/*=============================================================================================================*\

	THE CAst CLASS

\*=============================================================================================================*/  

class CAst
{
	public:
		virtual std::string name()const=0;
		virtual bool isList()const=0;
		virtual PropertiesList getPropertiesList()const=0;
		virtual Properties getProperties()const=0;
};



/*=============================================================================================================*\

	THE Token CLASS

\*=============================================================================================================*/  
class Token: public CAst
{
	public:
		virtual std::string name()const=0;
		virtual bool isList()const			=0;
		virtual Properties getProperties()const		=0;
		virtual PropertiesList getPropertiesList()const	=0;
		Token()
		{
			LOG("\033[32mCREATING\033[0m Token")
		}
		virtual ~Token()
		{
			LOG("\033[31mDELETING\033[0m Token")
		}
};


/*=============================================================================================================*\

	THE GenericToken CLASS

\*=============================================================================================================*/  


class GenericToken:public Token
{
	std::string _txt;
public:
	
	virtual std::string name()const{return "token";}
	GenericToken(std::string txt):
		Token(),
		_txt(txt)
	{
	}
	
	virtual bool isList()const			{return false;}
	virtual Properties getProperties()const		{Properties p(name());p.setTokValue(_txt);return p;}
	virtual PropertiesList getPropertiesList()const	{return PropertiesList(name());}
	virtual ~GenericToken()
	{
	}
};
inline Token* GetToken(int i,std::string txt)
{
	std::cerr<<"\033[34m GENERATING TOKEN \033[0m"<<"i"<<i<<" txt:"<<txt;
	return new GenericToken(txt);
}


			

/*=============================================================================================================*\
                                                                                                                 
 	THE storage_class_specifier CLASS                                                                                 
 	FOR PATTERN : [TYPEDEF]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;


class storage_class_specifier 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // TYPEDEF
public:
	storage_class_specifier	                                     // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "storage_class_specifier"
	virtual std::string pattern()const;							//returns the pattern, here "[TYPEDEF]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~storage_class_specifier ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE expression_statement CLASS                                                                                 
 	FOR PATTERN : [expression,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class expression;


class expression_statement 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		expression *_p_expression;                                      // expression
public:
	expression_statement	                                        // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression *_arg__p_expression			
		);
	virtual std::string name()const;							//returns the class name, here "expression_statement"
	virtual std::string pattern()const;							//returns the pattern, here "[expression,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~expression_statement ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE type_name CLASS                                                                                 
 	FOR PATTERN : [specifier_qualifier_list,abstract_declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class specifier_qualifier_list;
class abstract_declarator;


class type_name 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		specifier_qualifier_list *_p_specifier_qualifier_list;          // specifier_qualifier_list
		abstract_declarator *_p_abstract_declarator;                    // abstract_declarator
public:
	type_name	                                                   // constructor
		( 
			std::string _arg_s_matchedPattern,
				specifier_qualifier_list *_arg__p_specifier_qualifier_list,
				abstract_declarator *_arg__p_abstract_declarator			
		);
	virtual std::string name()const;							//returns the class name, here "type_name"
	virtual std::string pattern()const;							//returns the pattern, here "[specifier_qualifier_list,abstract_declarator]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~type_name ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE unary_expression BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class unary_expression :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~unary_expression (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE unary_expression1 CLASS                                                                                 
 	FOR PATTERN : [SIZEOF,'(',type_name,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class type_name;


class unary_expression1 
	:public unary_expression 
{
	private:
		std::string _s_matchedPattern;
		type_name *_p_type_name;                                        // type_name
public:
	unary_expression1	                                           // constructor
		( 
			std::string _arg_s_matchedPattern,
				type_name *_arg__p_type_name			
		);
	virtual std::string name()const;							//returns the class name, here "unary_expression1"
	virtual std::string pattern()const;							//returns the pattern, here "[SIZEOF,'(',type_name,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~unary_expression1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE unary_expression2 CLASS                                                                                 
 	FOR PATTERN : [INC_OP,unary_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;
class unary_expression;


class unary_expression2 
	:public unary_expression 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // INC_OP
		unary_expression *_p_unary_expression;                          // unary_expression
public:
	unary_expression2	                                           // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1,
				unary_expression *_arg__p_unary_expression			
		);
	virtual std::string name()const;							//returns the class name, here "unary_expression2"
	virtual std::string pattern()const;							//returns the pattern, here "[INC_OP,unary_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~unary_expression2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE unary_expression3 CLASS                                                                                 
 	FOR PATTERN : [unary_operator,cast_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class unary_operator;
class cast_expression;


class unary_expression3 
	:public unary_expression 
{
	private:
		std::string _s_matchedPattern;
		unary_operator *_p_unary_operator;                              // unary_operator
		cast_expression *_p_cast_expression;                            // cast_expression
public:
	unary_expression3	                                           // constructor
		( 
			std::string _arg_s_matchedPattern,
				unary_operator *_arg__p_unary_operator,
				cast_expression *_arg__p_cast_expression			
		);
	virtual std::string name()const;							//returns the class name, here "unary_expression3"
	virtual std::string pattern()const;							//returns the pattern, here "[unary_operator,cast_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~unary_expression3 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE unary_expression4 CLASS                                                                                 
 	FOR PATTERN : [postfix_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class postfix_expression;


class unary_expression4 
	:public unary_expression 
{
	private:
		std::string _s_matchedPattern;
		postfix_expression *_p_postfix_expression;                      // postfix_expression
public:
	unary_expression4	                                           // constructor
		( 
			std::string _arg_s_matchedPattern,
				postfix_expression *_arg__p_postfix_expression			
		);
	virtual std::string name()const;							//returns the class name, here "unary_expression4"
	virtual std::string pattern()const;							//returns the pattern, here "[postfix_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~unary_expression4 ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE conditional_expression CLASS                                                                                 
        FOR PATTERN : [logical_or_expression,'?',expression,':',conditional_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class logical_or_expression;
class expression;
/*------------------------------------------------------------*\
 							        
  item class conditional_expression_item                              
                                                                
\*------------------------------------------------------------*/
class conditional_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	logical_or_expression *_p_logical_or_expression;                // logical_or_expression
	expression *_p_expression;                                      // expression
public:
	conditional_expression_item
		(
			std::string _arg_s_matchedPattern,
			logical_or_expression *_arg__p_logical_or_expression,
			expression *_arg__p_expression
		);
	conditional_expression_item(const conditional_expression_item &);
	virtual Properties getProperties()const;
	virtual ~conditional_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class conditional_expression                         
                                                                
\*------------------------------------------------------------*/

class conditional_expression
	:public CAst 
{
private:
	typedef std::list<conditional_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<conditional_expression_item> _items;
public:
	conditional_expression
		(
			std::string _arg_s_matchedPattern,
			logical_or_expression *_arg__p_logical_or_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			logical_or_expression *_arg__p_logical_or_expression,
			expression *_arg__p_expression
		);

	virtual std::string name()const;							//returns the class name, here "conditional_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[logical_or_expression,'?',expression,':',conditional_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~conditional_expression ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE struct_or_union_specifier CLASS                                                                                 
 	FOR PATTERN : [struct_or_union,IDENTIFIER,'{',struct_declaration_list,'}']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class struct_or_union;
class Token;
class Token;
class struct_declaration_list;
class Token;


class struct_or_union_specifier 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		struct_or_union *_p_struct_or_union;                            // struct_or_union
		Token *_p_token1;                                               // IDENTIFIER
		Token *_p_token2;                                               // '{'
		struct_declaration_list *_p_struct_declaration_list;            // struct_declaration_list
		Token *_p_token3;                                               // '}'
public:
	struct_or_union_specifier	                                   // constructor
		( 
			std::string _arg_s_matchedPattern,
				struct_or_union *_arg__p_struct_or_union,
				Token *_arg__p_token1,
				Token *_arg__p_token2,
				struct_declaration_list *_arg__p_struct_declaration_list,
				Token *_arg__p_token3			
		);
	virtual std::string name()const;							//returns the class name, here "struct_or_union_specifier"
	virtual std::string pattern()const;							//returns the pattern, here "[struct_or_union,IDENTIFIER,'{',struct_declaration_list,'}']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~struct_or_union_specifier ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE exclusive_or_expression CLASS                                                                                 
        FOR PATTERN : [exclusive_or_expression,'^',and_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class and_expression;
/*------------------------------------------------------------*\
 							        
  item class exclusive_or_expression_item                              
                                                                
\*------------------------------------------------------------*/
class exclusive_or_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	and_expression *_p_and_expression;                              // and_expression
public:
	exclusive_or_expression_item
		(
			std::string _arg_s_matchedPattern,
			and_expression *_arg__p_and_expression
		);
	exclusive_or_expression_item(const exclusive_or_expression_item &);
	virtual Properties getProperties()const;
	virtual ~exclusive_or_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class exclusive_or_expression                         
                                                                
\*------------------------------------------------------------*/

class exclusive_or_expression
	:public CAst 
{
private:
	typedef std::list<exclusive_or_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<exclusive_or_expression_item> _items;
public:
	exclusive_or_expression
		(
			std::string _arg_s_matchedPattern,
			and_expression *_arg__p_and_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			and_expression *_arg__p_and_expression
		);

	virtual std::string name()const;							//returns the class name, here "exclusive_or_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[exclusive_or_expression,'^',and_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~exclusive_or_expression ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE initializer BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class initializer :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~initializer (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE initializer1 CLASS                                                                                 
 	FOR PATTERN : ['{',initializer_list,',','}']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class initializer_list;
class Token;


class initializer1 
	:public initializer 
{
	private:
		std::string _s_matchedPattern;
		initializer_list *_p_initializer_list;                          // initializer_list
		Token *_p_token1;                                               // ','
public:
	initializer1	                                                // constructor
		( 
			std::string _arg_s_matchedPattern,
				initializer_list *_arg__p_initializer_list,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "initializer1"
	virtual std::string pattern()const;							//returns the pattern, here "['{',initializer_list,',','}']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~initializer1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE initializer2 CLASS                                                                                 
 	FOR PATTERN : [assignment_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class assignment_expression;


class initializer2 
	:public initializer 
{
	private:
		std::string _s_matchedPattern;
		assignment_expression *_p_assignment_expression;                // assignment_expression
public:
	initializer2	                                                // constructor
		( 
			std::string _arg_s_matchedPattern,
				assignment_expression *_arg__p_assignment_expression			
		);
	virtual std::string name()const;							//returns the class name, here "initializer2"
	virtual std::string pattern()const;							//returns the pattern, here "[assignment_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~initializer2 ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE struct_declaration_list CLASS                                                                                 
        FOR PATTERN : [struct_declaration_list,struct_declaration]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class struct_declaration;
/*------------------------------------------------------------*\
 							        
  item class struct_declaration_list_item                              
                                                                
\*------------------------------------------------------------*/
class struct_declaration_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	struct_declaration *_p_struct_declaration;                      // struct_declaration
public:
	struct_declaration_list_item
		(
			std::string _arg_s_matchedPattern,
			struct_declaration *_arg__p_struct_declaration
		);
	struct_declaration_list_item(const struct_declaration_list_item &);
	virtual Properties getProperties()const;
	virtual ~struct_declaration_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class struct_declaration_list                         
                                                                
\*------------------------------------------------------------*/

class struct_declaration_list
	:public CAst 
{
private:
	typedef std::list<struct_declaration_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<struct_declaration_list_item> _items;
public:
	struct_declaration_list
		(
			std::string _arg_s_matchedPattern,
			struct_declaration *_arg__p_struct_declaration
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			struct_declaration *_arg__p_struct_declaration
		);

	virtual std::string name()const;							//returns the class name, here "struct_declaration_list"
	virtual std::string pattern()const;							//returns the pattern, here "[struct_declaration_list,struct_declaration]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~struct_declaration_list ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE assignment_operator CLASS                                                                                 
 	FOR PATTERN : ['=']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;


class assignment_operator 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // '='
public:
	assignment_operator	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "assignment_operator"
	virtual std::string pattern()const;							//returns the pattern, here "['=']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~assignment_operator ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE struct_declaration CLASS                                                                                 
 	FOR PATTERN : [specifier_qualifier_list,struct_declarator_list,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class specifier_qualifier_list;
class struct_declarator_list;


class struct_declaration 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		specifier_qualifier_list *_p_specifier_qualifier_list;          // specifier_qualifier_list
		struct_declarator_list *_p_struct_declarator_list;              // struct_declarator_list
public:
	struct_declaration	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				specifier_qualifier_list *_arg__p_specifier_qualifier_list,
				struct_declarator_list *_arg__p_struct_declarator_list			
		);
	virtual std::string name()const;							//returns the class name, here "struct_declaration"
	virtual std::string pattern()const;							//returns the pattern, here "[specifier_qualifier_list,struct_declarator_list,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~struct_declaration ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE abstract_declarator CLASS                                                                                 
 	FOR PATTERN : [pointer,direct_abstract_declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class pointer;
class direct_abstract_declarator;


class abstract_declarator 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		pointer *_p_pointer;                                            // pointer
		direct_abstract_declarator *_p_direct_abstract_declarator;      // direct_abstract_declarator
public:
	abstract_declarator	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				pointer *_arg__p_pointer,
				direct_abstract_declarator *_arg__p_direct_abstract_declarator			
		);
	virtual std::string name()const;							//returns the class name, here "abstract_declarator"
	virtual std::string pattern()const;							//returns the pattern, here "[pointer,direct_abstract_declarator]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~abstract_declarator ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE iteration_statement BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class iteration_statement :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~iteration_statement (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE iteration_statement1 CLASS                                                                                 
 	FOR PATTERN : [DO,statement,WHILE,'(',expression,')',';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class statement;
class expression;


class iteration_statement1 
	:public iteration_statement 
{
	private:
		std::string _s_matchedPattern;
		statement *_p_statement;                                        // statement
		expression *_p_expression;                                      // expression
public:
	iteration_statement1	                                        // constructor
		( 
			std::string _arg_s_matchedPattern,
				statement *_arg__p_statement,
				expression *_arg__p_expression			
		);
	virtual std::string name()const;							//returns the class name, here "iteration_statement1"
	virtual std::string pattern()const;							//returns the pattern, here "[DO,statement,WHILE,'(',expression,')',';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~iteration_statement1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE iteration_statement2 CLASS                                                                                 
 	FOR PATTERN : [FOR,'(',expression_statement,expression_statement,expression,')',statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class expression_statement;
class expression_statement;
class expression;
class statement;


class iteration_statement2 
	:public iteration_statement 
{
	private:
		std::string _s_matchedPattern;
		expression_statement *_p_expression_statement;                  // expression_statement
		expression_statement *_p_expression_statement1;                 // expression_statement
		expression *_p_expression;                                      // expression
		statement *_p_statement;                                        // statement
public:
	iteration_statement2	                                        // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression_statement *_arg__p_expression_statement,
				expression_statement *_arg__p_expression_statement1,
				expression *_arg__p_expression,
				statement *_arg__p_statement			
		);
	virtual std::string name()const;							//returns the class name, here "iteration_statement2"
	virtual std::string pattern()const;							//returns the pattern, here "[FOR,'(',expression_statement,expression_statement,expression,')',statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~iteration_statement2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE iteration_statement3 CLASS                                                                                 
 	FOR PATTERN : [WHILE,'(',expression,')',statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class expression;
class statement;


class iteration_statement3 
	:public iteration_statement 
{
	private:
		std::string _s_matchedPattern;
		expression *_p_expression;                                      // expression
		statement *_p_statement;                                        // statement
public:
	iteration_statement3	                                        // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression *_arg__p_expression,
				statement *_arg__p_statement			
		);
	virtual std::string name()const;							//returns the class name, here "iteration_statement3"
	virtual std::string pattern()const;							//returns the pattern, here "[WHILE,'(',expression,')',statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~iteration_statement3 ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE additive_expression CLASS                                                                                 
        FOR PATTERN : [additive_expression,'+',multiplicative_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;
class multiplicative_expression;
/*------------------------------------------------------------*\
 							        
  item class additive_expression_item                              
                                                                
\*------------------------------------------------------------*/
class additive_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	Token *_p_token1;                                               // '+'
	multiplicative_expression *_p_multiplicative_expression;        // multiplicative_expression
public:
	additive_expression_item
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1,
			multiplicative_expression *_arg__p_multiplicative_expression
		);
	additive_expression_item(const additive_expression_item &);
	virtual Properties getProperties()const;
	virtual ~additive_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class additive_expression                         
                                                                
\*------------------------------------------------------------*/

class additive_expression
	:public CAst 
{
private:
	typedef std::list<additive_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<additive_expression_item> _items;
public:
	additive_expression
		(
			std::string _arg_s_matchedPattern,
			multiplicative_expression *_arg__p_multiplicative_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1,
			multiplicative_expression *_arg__p_multiplicative_expression
		);

	virtual std::string name()const;							//returns the class name, here "additive_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[additive_expression,'+',multiplicative_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~additive_expression ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE external_declaration BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class external_declaration :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~external_declaration (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE external_declaration1 CLASS                                                                                 
 	FOR PATTERN : [function_definition]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class function_definition;


class external_declaration1 
	:public external_declaration 
{
	private:
		std::string _s_matchedPattern;
		function_definition *_p_function_definition;                    // function_definition
public:
	external_declaration1	                                       // constructor
		( 
			std::string _arg_s_matchedPattern,
				function_definition *_arg__p_function_definition			
		);
	virtual std::string name()const;							//returns the class name, here "external_declaration1"
	virtual std::string pattern()const;							//returns the pattern, here "[function_definition]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~external_declaration1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE external_declaration2 CLASS                                                                                 
 	FOR PATTERN : [declaration]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class declaration;


class external_declaration2 
	:public external_declaration 
{
	private:
		std::string _s_matchedPattern;
		declaration *_p_declaration;                                    // declaration
public:
	external_declaration2	                                       // constructor
		( 
			std::string _arg_s_matchedPattern,
				declaration *_arg__p_declaration			
		);
	virtual std::string name()const;							//returns the class name, here "external_declaration2"
	virtual std::string pattern()const;							//returns the pattern, here "[declaration]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~external_declaration2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE type_specifier BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class type_specifier :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~type_specifier (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE type_specifier1 CLASS                                                                                 
 	FOR PATTERN : [VOID]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;


class type_specifier1 
	:public type_specifier 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // VOID
public:
	type_specifier1	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "type_specifier1"
	virtual std::string pattern()const;							//returns the pattern, here "[VOID]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~type_specifier1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE type_specifier2 CLASS                                                                                 
 	FOR PATTERN : [struct_or_union_specifier]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class struct_or_union_specifier;


class type_specifier2 
	:public type_specifier 
{
	private:
		std::string _s_matchedPattern;
		struct_or_union_specifier *_p_struct_or_union_specifier;        // struct_or_union_specifier
public:
	type_specifier2	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				struct_or_union_specifier *_arg__p_struct_or_union_specifier			
		);
	virtual std::string name()const;							//returns the class name, here "type_specifier2"
	virtual std::string pattern()const;							//returns the pattern, here "[struct_or_union_specifier]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~type_specifier2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE type_specifier3 CLASS                                                                                 
 	FOR PATTERN : [enum_specifier]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class enum_specifier;


class type_specifier3 
	:public type_specifier 
{
	private:
		std::string _s_matchedPattern;
		enum_specifier *_p_enum_specifier;                              // enum_specifier
public:
	type_specifier3	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				enum_specifier *_arg__p_enum_specifier			
		);
	virtual std::string name()const;							//returns the class name, here "type_specifier3"
	virtual std::string pattern()const;							//returns the pattern, here "[enum_specifier]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~type_specifier3 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE compound_statement CLASS                                                                                 
 	FOR PATTERN : ['{',declaration_list,statement_list,'}']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class declaration_list;
class statement_list;


class compound_statement 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		declaration_list *_p_declaration_list;                          // declaration_list
		statement_list *_p_statement_list;                              // statement_list
public:
	compound_statement	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				declaration_list *_arg__p_declaration_list,
				statement_list *_arg__p_statement_list			
		);
	virtual std::string name()const;							//returns the class name, here "compound_statement"
	virtual std::string pattern()const;							//returns the pattern, here "['{',declaration_list,statement_list,'}']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~compound_statement ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE inclusive_or_expression CLASS                                                                                 
        FOR PATTERN : [inclusive_or_expression,'|',exclusive_or_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class exclusive_or_expression;
/*------------------------------------------------------------*\
 							        
  item class inclusive_or_expression_item                              
                                                                
\*------------------------------------------------------------*/
class inclusive_or_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	exclusive_or_expression *_p_exclusive_or_expression;            // exclusive_or_expression
public:
	inclusive_or_expression_item
		(
			std::string _arg_s_matchedPattern,
			exclusive_or_expression *_arg__p_exclusive_or_expression
		);
	inclusive_or_expression_item(const inclusive_or_expression_item &);
	virtual Properties getProperties()const;
	virtual ~inclusive_or_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class inclusive_or_expression                         
                                                                
\*------------------------------------------------------------*/

class inclusive_or_expression
	:public CAst 
{
private:
	typedef std::list<inclusive_or_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<inclusive_or_expression_item> _items;
public:
	inclusive_or_expression
		(
			std::string _arg_s_matchedPattern,
			exclusive_or_expression *_arg__p_exclusive_or_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			exclusive_or_expression *_arg__p_exclusive_or_expression
		);

	virtual std::string name()const;							//returns the class name, here "inclusive_or_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[inclusive_or_expression,'|',exclusive_or_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~inclusive_or_expression ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE pointer CLASS                                                                                 
        FOR PATTERN : ['*',type_qualifier_list,pointer]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class type_qualifier_list;
/*------------------------------------------------------------*\
 							        
  item class pointer_item                              
                                                                
\*------------------------------------------------------------*/
class pointer_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	type_qualifier_list *_p_type_qualifier_list;                    // type_qualifier_list
public:
	pointer_item
		(
			std::string _arg_s_matchedPattern,
			type_qualifier_list *_arg__p_type_qualifier_list
		);
	pointer_item(const pointer_item &);
	virtual Properties getProperties()const;
	virtual ~pointer_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class pointer                         
                                                                
\*------------------------------------------------------------*/

class pointer
	:public CAst 
{
private:
	typedef std::list<pointer_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<pointer_item> _items;
public:
	pointer
		(
			std::string _arg_s_matchedPattern,
			type_qualifier_list *_arg__p_type_qualifier_list
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			type_qualifier_list *_arg__p_type_qualifier_list
		);

	virtual std::string name()const;							//returns the class name, here "pointer"
	virtual std::string pattern()const;							//returns the pattern, here "['*',type_qualifier_list,pointer]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~pointer ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE selection_statement BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class selection_statement :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~selection_statement (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE selection_statement1 CLASS                                                                                 
 	FOR PATTERN : [IF,'(',expression,')',statement,ELSE,statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class expression;
class statement;
class Token;
class statement;


class selection_statement1 
	:public selection_statement 
{
	private:
		std::string _s_matchedPattern;
		expression *_p_expression;                                      // expression
		statement *_p_statement;                                        // statement
		Token *_p_token1;                                               // ELSE
		statement *_p_statement1;                                       // statement
public:
	selection_statement1	                                        // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression *_arg__p_expression,
				statement *_arg__p_statement,
				Token *_arg__p_token1,
				statement *_arg__p_statement1			
		);
	virtual std::string name()const;							//returns the class name, here "selection_statement1"
	virtual std::string pattern()const;							//returns the pattern, here "[IF,'(',expression,')',statement,ELSE,statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~selection_statement1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE selection_statement2 CLASS                                                                                 
 	FOR PATTERN : [SWITCH,'(',expression,')',statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class expression;
class statement;


class selection_statement2 
	:public selection_statement 
{
	private:
		std::string _s_matchedPattern;
		expression *_p_expression;                                      // expression
		statement *_p_statement;                                        // statement
public:
	selection_statement2	                                        // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression *_arg__p_expression,
				statement *_arg__p_statement			
		);
	virtual std::string name()const;							//returns the class name, here "selection_statement2"
	virtual std::string pattern()const;							//returns the pattern, here "[SWITCH,'(',expression,')',statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~selection_statement2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class postfix_expression :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~postfix_expression (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression1 CLASS                                                                                 
 	FOR PATTERN : [postfix_expression,'[',expression,']']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class postfix_expression;
class expression;


class postfix_expression1 
	:public postfix_expression 
{
	private:
		std::string _s_matchedPattern;
		postfix_expression *_p_postfix_expression;                      // postfix_expression
		expression *_p_expression;                                      // expression
public:
	postfix_expression1	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				postfix_expression *_arg__p_postfix_expression,
				expression *_arg__p_expression			
		);
	virtual std::string name()const;							//returns the class name, here "postfix_expression1"
	virtual std::string pattern()const;							//returns the pattern, here "[postfix_expression,'[',expression,']']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~postfix_expression1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression2 CLASS                                                                                 
 	FOR PATTERN : [postfix_expression,'(',argument_expression_list,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class postfix_expression;
class argument_expression_list;


class postfix_expression2 
	:public postfix_expression 
{
	private:
		std::string _s_matchedPattern;
		postfix_expression *_p_postfix_expression;                      // postfix_expression
		argument_expression_list *_p_argument_expression_list;          // argument_expression_list
public:
	postfix_expression2	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				postfix_expression *_arg__p_postfix_expression,
				argument_expression_list *_arg__p_argument_expression_list			
		);
	virtual std::string name()const;							//returns the class name, here "postfix_expression2"
	virtual std::string pattern()const;							//returns the pattern, here "[postfix_expression,'(',argument_expression_list,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~postfix_expression2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression3 CLASS                                                                                 
 	FOR PATTERN : [postfix_expression,'.',IDENTIFIER]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class postfix_expression;
class Token;
class Token;


class postfix_expression3 
	:public postfix_expression 
{
	private:
		std::string _s_matchedPattern;
		postfix_expression *_p_postfix_expression;                      // postfix_expression
		Token *_p_token1;                                               // '.'
		Token *_p_token2;                                               // IDENTIFIER
public:
	postfix_expression3	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				postfix_expression *_arg__p_postfix_expression,
				Token *_arg__p_token1,
				Token *_arg__p_token2			
		);
	virtual std::string name()const;							//returns the class name, here "postfix_expression3"
	virtual std::string pattern()const;							//returns the pattern, here "[postfix_expression,'.',IDENTIFIER]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~postfix_expression3 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression4 CLASS                                                                                 
 	FOR PATTERN : [postfix_expression,INC_OP]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class postfix_expression;
class Token;


class postfix_expression4 
	:public postfix_expression 
{
	private:
		std::string _s_matchedPattern;
		postfix_expression *_p_postfix_expression;                      // postfix_expression
		Token *_p_token1;                                               // INC_OP
public:
	postfix_expression4	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				postfix_expression *_arg__p_postfix_expression,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "postfix_expression4"
	virtual std::string pattern()const;							//returns the pattern, here "[postfix_expression,INC_OP]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~postfix_expression4 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression5 CLASS                                                                                 
 	FOR PATTERN : [primary_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class primary_expression;


class postfix_expression5 
	:public postfix_expression 
{
	private:
		std::string _s_matchedPattern;
		primary_expression *_p_primary_expression;                      // primary_expression
public:
	postfix_expression5	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				primary_expression *_arg__p_primary_expression			
		);
	virtual std::string name()const;							//returns the class name, here "postfix_expression5"
	virtual std::string pattern()const;							//returns the pattern, here "[primary_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~postfix_expression5 ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE and_expression CLASS                                                                                 
        FOR PATTERN : [and_expression,'&',equality_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class equality_expression;
/*------------------------------------------------------------*\
 							        
  item class and_expression_item                              
                                                                
\*------------------------------------------------------------*/
class and_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	equality_expression *_p_equality_expression;                    // equality_expression
public:
	and_expression_item
		(
			std::string _arg_s_matchedPattern,
			equality_expression *_arg__p_equality_expression
		);
	and_expression_item(const and_expression_item &);
	virtual Properties getProperties()const;
	virtual ~and_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class and_expression                         
                                                                
\*------------------------------------------------------------*/

class and_expression
	:public CAst 
{
private:
	typedef std::list<and_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<and_expression_item> _items;
public:
	and_expression
		(
			std::string _arg_s_matchedPattern,
			equality_expression *_arg__p_equality_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			equality_expression *_arg__p_equality_expression
		);

	virtual std::string name()const;							//returns the class name, here "and_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[and_expression,'&',equality_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~and_expression ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE statement BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class statement :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~statement (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE statement1 CLASS                                                                                 
 	FOR PATTERN : [labeled_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class labeled_statement;


class statement1 
	:public statement 
{
	private:
		std::string _s_matchedPattern;
		labeled_statement *_p_labeled_statement;                        // labeled_statement
public:
	statement1	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				labeled_statement *_arg__p_labeled_statement			
		);
	virtual std::string name()const;							//returns the class name, here "statement1"
	virtual std::string pattern()const;							//returns the pattern, here "[labeled_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~statement1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE statement2 CLASS                                                                                 
 	FOR PATTERN : [compound_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class compound_statement;


class statement2 
	:public statement 
{
	private:
		std::string _s_matchedPattern;
		compound_statement *_p_compound_statement;                      // compound_statement
public:
	statement2	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				compound_statement *_arg__p_compound_statement			
		);
	virtual std::string name()const;							//returns the class name, here "statement2"
	virtual std::string pattern()const;							//returns the pattern, here "[compound_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~statement2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE statement3 CLASS                                                                                 
 	FOR PATTERN : [expression_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class expression_statement;


class statement3 
	:public statement 
{
	private:
		std::string _s_matchedPattern;
		expression_statement *_p_expression_statement;                  // expression_statement
public:
	statement3	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression_statement *_arg__p_expression_statement			
		);
	virtual std::string name()const;							//returns the class name, here "statement3"
	virtual std::string pattern()const;							//returns the pattern, here "[expression_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~statement3 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE statement4 CLASS                                                                                 
 	FOR PATTERN : [selection_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class selection_statement;


class statement4 
	:public statement 
{
	private:
		std::string _s_matchedPattern;
		selection_statement *_p_selection_statement;                    // selection_statement
public:
	statement4	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				selection_statement *_arg__p_selection_statement			
		);
	virtual std::string name()const;							//returns the class name, here "statement4"
	virtual std::string pattern()const;							//returns the pattern, here "[selection_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~statement4 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE statement5 CLASS                                                                                 
 	FOR PATTERN : [iteration_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class iteration_statement;


class statement5 
	:public statement 
{
	private:
		std::string _s_matchedPattern;
		iteration_statement *_p_iteration_statement;                    // iteration_statement
public:
	statement5	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				iteration_statement *_arg__p_iteration_statement			
		);
	virtual std::string name()const;							//returns the class name, here "statement5"
	virtual std::string pattern()const;							//returns the pattern, here "[iteration_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~statement5 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE statement6 CLASS                                                                                 
 	FOR PATTERN : [jump_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class jump_statement;


class statement6 
	:public statement 
{
	private:
		std::string _s_matchedPattern;
		jump_statement *_p_jump_statement;                              // jump_statement
public:
	statement6	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				jump_statement *_arg__p_jump_statement			
		);
	virtual std::string name()const;							//returns the class name, here "statement6"
	virtual std::string pattern()const;							//returns the pattern, here "[jump_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~statement6 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE cast_expression BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class cast_expression :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~cast_expression (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE cast_expression1 CLASS                                                                                 
 	FOR PATTERN : ['(',type_name,')',cast_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class type_name;
class cast_expression;


class cast_expression1 
	:public cast_expression 
{
	private:
		std::string _s_matchedPattern;
		type_name *_p_type_name;                                        // type_name
		cast_expression *_p_cast_expression;                            // cast_expression
public:
	cast_expression1	                                            // constructor
		( 
			std::string _arg_s_matchedPattern,
				type_name *_arg__p_type_name,
				cast_expression *_arg__p_cast_expression			
		);
	virtual std::string name()const;							//returns the class name, here "cast_expression1"
	virtual std::string pattern()const;							//returns the pattern, here "['(',type_name,')',cast_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~cast_expression1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE cast_expression2 CLASS                                                                                 
 	FOR PATTERN : [unary_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class unary_expression;


class cast_expression2 
	:public cast_expression 
{
	private:
		std::string _s_matchedPattern;
		unary_expression *_p_unary_expression;                          // unary_expression
public:
	cast_expression2	                                            // constructor
		( 
			std::string _arg_s_matchedPattern,
				unary_expression *_arg__p_unary_expression			
		);
	virtual std::string name()const;							//returns the class name, here "cast_expression2"
	virtual std::string pattern()const;							//returns the pattern, here "[unary_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~cast_expression2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE init_declarator CLASS                                                                                 
 	FOR PATTERN : [declarator,'=',initializer]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class declarator;
class Token;
class initializer;


class init_declarator 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		declarator *_p_declarator;                                      // declarator
		Token *_p_token1;                                               // '='
		initializer *_p_initializer;                                    // initializer
public:
	init_declarator	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				declarator *_arg__p_declarator,
				Token *_arg__p_token1,
				initializer *_arg__p_initializer			
		);
	virtual std::string name()const;							//returns the class name, here "init_declarator"
	virtual std::string pattern()const;							//returns the pattern, here "[declarator,'=',initializer]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~init_declarator ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE struct_declarator_list CLASS                                                                                 
        FOR PATTERN : [struct_declarator_list,',',struct_declarator]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class struct_declarator;
/*------------------------------------------------------------*\
 							        
  item class struct_declarator_list_item                              
                                                                
\*------------------------------------------------------------*/
class struct_declarator_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	struct_declarator *_p_struct_declarator;                        // struct_declarator
public:
	struct_declarator_list_item
		(
			std::string _arg_s_matchedPattern,
			struct_declarator *_arg__p_struct_declarator
		);
	struct_declarator_list_item(const struct_declarator_list_item &);
	virtual Properties getProperties()const;
	virtual ~struct_declarator_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class struct_declarator_list                         
                                                                
\*------------------------------------------------------------*/

class struct_declarator_list
	:public CAst 
{
private:
	typedef std::list<struct_declarator_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<struct_declarator_list_item> _items;
public:
	struct_declarator_list
		(
			std::string _arg_s_matchedPattern,
			struct_declarator *_arg__p_struct_declarator
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			struct_declarator *_arg__p_struct_declarator
		);

	virtual std::string name()const;							//returns the class name, here "struct_declarator_list"
	virtual std::string pattern()const;							//returns the pattern, here "[struct_declarator_list,',',struct_declarator]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~struct_declarator_list ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE logical_or_expression CLASS                                                                                 
        FOR PATTERN : [logical_or_expression,OR_OP,logical_and_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class logical_and_expression;
/*------------------------------------------------------------*\
 							        
  item class logical_or_expression_item                              
                                                                
\*------------------------------------------------------------*/
class logical_or_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	logical_and_expression *_p_logical_and_expression;              // logical_and_expression
public:
	logical_or_expression_item
		(
			std::string _arg_s_matchedPattern,
			logical_and_expression *_arg__p_logical_and_expression
		);
	logical_or_expression_item(const logical_or_expression_item &);
	virtual Properties getProperties()const;
	virtual ~logical_or_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class logical_or_expression                         
                                                                
\*------------------------------------------------------------*/

class logical_or_expression
	:public CAst 
{
private:
	typedef std::list<logical_or_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<logical_or_expression_item> _items;
public:
	logical_or_expression
		(
			std::string _arg_s_matchedPattern,
			logical_and_expression *_arg__p_logical_and_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			logical_and_expression *_arg__p_logical_and_expression
		);

	virtual std::string name()const;							//returns the class name, here "logical_or_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[logical_or_expression,OR_OP,logical_and_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~logical_or_expression ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE unary_operator CLASS                                                                                 
 	FOR PATTERN : ['&']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;


class unary_operator 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // '&'
public:
	unary_operator	                                              // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "unary_operator"
	virtual std::string pattern()const;							//returns the pattern, here "['&']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~unary_operator ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE relational_expression CLASS                                                                                 
        FOR PATTERN : [relational_expression,'<',shift_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;
class shift_expression;
/*------------------------------------------------------------*\
 							        
  item class relational_expression_item                              
                                                                
\*------------------------------------------------------------*/
class relational_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	Token *_p_token1;                                               // '<'
	shift_expression *_p_shift_expression;                          // shift_expression
public:
	relational_expression_item
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1,
			shift_expression *_arg__p_shift_expression
		);
	relational_expression_item(const relational_expression_item &);
	virtual Properties getProperties()const;
	virtual ~relational_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class relational_expression                         
                                                                
\*------------------------------------------------------------*/

class relational_expression
	:public CAst 
{
private:
	typedef std::list<relational_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<relational_expression_item> _items;
public:
	relational_expression
		(
			std::string _arg_s_matchedPattern,
			shift_expression *_arg__p_shift_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1,
			shift_expression *_arg__p_shift_expression
		);

	virtual std::string name()const;							//returns the class name, here "relational_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[relational_expression,'<',shift_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~relational_expression ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE struct_or_union CLASS                                                                                 
 	FOR PATTERN : [STRUCT]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;


class struct_or_union 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // STRUCT
public:
	struct_or_union	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "struct_or_union"
	virtual std::string pattern()const;							//returns the pattern, here "[STRUCT]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~struct_or_union ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE enumerator CLASS                                                                                 
 	FOR PATTERN : [IDENTIFIER,'=',constant_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;
class Token;
class constant_expression;


class enumerator 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // IDENTIFIER
		Token *_p_token2;                                               // '='
		constant_expression *_p_constant_expression;                    // constant_expression
public:
	enumerator	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1,
				Token *_arg__p_token2,
				constant_expression *_arg__p_constant_expression			
		);
	virtual std::string name()const;							//returns the class name, here "enumerator"
	virtual std::string pattern()const;							//returns the pattern, here "[IDENTIFIER,'=',constant_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~enumerator ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE assignment_expression BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class assignment_expression :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~assignment_expression (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE assignment_expression1 CLASS                                                                                 
 	FOR PATTERN : [unary_expression,assignment_operator,assignment_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class unary_expression;
class assignment_operator;
class assignment_expression;


class assignment_expression1 
	:public assignment_expression 
{
	private:
		std::string _s_matchedPattern;
		unary_expression *_p_unary_expression;                          // unary_expression
		assignment_operator *_p_assignment_operator;                    // assignment_operator
		assignment_expression *_p_assignment_expression;                // assignment_expression
public:
	assignment_expression1	                                      // constructor
		( 
			std::string _arg_s_matchedPattern,
				unary_expression *_arg__p_unary_expression,
				assignment_operator *_arg__p_assignment_operator,
				assignment_expression *_arg__p_assignment_expression			
		);
	virtual std::string name()const;							//returns the class name, here "assignment_expression1"
	virtual std::string pattern()const;							//returns the pattern, here "[unary_expression,assignment_operator,assignment_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~assignment_expression1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE assignment_expression2 CLASS                                                                                 
 	FOR PATTERN : [conditional_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class conditional_expression;


class assignment_expression2 
	:public assignment_expression 
{
	private:
		std::string _s_matchedPattern;
		conditional_expression *_p_conditional_expression;              // conditional_expression
public:
	assignment_expression2	                                      // constructor
		( 
			std::string _arg_s_matchedPattern,
				conditional_expression *_arg__p_conditional_expression			
		);
	virtual std::string name()const;							//returns the class name, here "assignment_expression2"
	virtual std::string pattern()const;							//returns the pattern, here "[conditional_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~assignment_expression2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE parameter_type_list CLASS                                                                                 
 	FOR PATTERN : [parameter_list,',',ELLIPSIS]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class parameter_list;
class Token;
class Token;


class parameter_type_list 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		parameter_list *_p_parameter_list;                              // parameter_list
		Token *_p_token1;                                               // ','
		Token *_p_token2;                                               // ELLIPSIS
public:
	parameter_type_list	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				parameter_list *_arg__p_parameter_list,
				Token *_arg__p_token1,
				Token *_arg__p_token2			
		);
	virtual std::string name()const;							//returns the class name, here "parameter_type_list"
	virtual std::string pattern()const;							//returns the pattern, here "[parameter_list,',',ELLIPSIS]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~parameter_type_list ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE parameter_declaration BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class parameter_declaration :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~parameter_declaration (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE parameter_declaration1 CLASS                                                                                 
 	FOR PATTERN : [declaration_specifiers,declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class declaration_specifiers;
class declarator;


class parameter_declaration1 
	:public parameter_declaration 
{
	private:
		std::string _s_matchedPattern;
		declaration_specifiers *_p_declaration_specifiers;              // declaration_specifiers
		declarator *_p_declarator;                                      // declarator
public:
	parameter_declaration1	                                      // constructor
		( 
			std::string _arg_s_matchedPattern,
				declaration_specifiers *_arg__p_declaration_specifiers,
				declarator *_arg__p_declarator			
		);
	virtual std::string name()const;							//returns the class name, here "parameter_declaration1"
	virtual std::string pattern()const;							//returns the pattern, here "[declaration_specifiers,declarator]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~parameter_declaration1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE parameter_declaration2 CLASS                                                                                 
 	FOR PATTERN : [declaration_specifiers,abstract_declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class declaration_specifiers;
class abstract_declarator;


class parameter_declaration2 
	:public parameter_declaration 
{
	private:
		std::string _s_matchedPattern;
		declaration_specifiers *_p_declaration_specifiers;              // declaration_specifiers
		abstract_declarator *_p_abstract_declarator;                    // abstract_declarator
public:
	parameter_declaration2	                                      // constructor
		( 
			std::string _arg_s_matchedPattern,
				declaration_specifiers *_arg__p_declaration_specifiers,
				abstract_declarator *_arg__p_abstract_declarator			
		);
	virtual std::string name()const;							//returns the class name, here "parameter_declaration2"
	virtual std::string pattern()const;							//returns the pattern, here "[declaration_specifiers,abstract_declarator]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~parameter_declaration2 ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE multiplicative_expression CLASS                                                                                 
        FOR PATTERN : [multiplicative_expression,'*',cast_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;
class cast_expression;
/*------------------------------------------------------------*\
 							        
  item class multiplicative_expression_item                              
                                                                
\*------------------------------------------------------------*/
class multiplicative_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	Token *_p_token1;                                               // '*'
	cast_expression *_p_cast_expression;                            // cast_expression
public:
	multiplicative_expression_item
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1,
			cast_expression *_arg__p_cast_expression
		);
	multiplicative_expression_item(const multiplicative_expression_item &);
	virtual Properties getProperties()const;
	virtual ~multiplicative_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class multiplicative_expression                         
                                                                
\*------------------------------------------------------------*/

class multiplicative_expression
	:public CAst 
{
private:
	typedef std::list<multiplicative_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<multiplicative_expression_item> _items;
public:
	multiplicative_expression
		(
			std::string _arg_s_matchedPattern,
			cast_expression *_arg__p_cast_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1,
			cast_expression *_arg__p_cast_expression
		);

	virtual std::string name()const;							//returns the class name, here "multiplicative_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[multiplicative_expression,'*',cast_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~multiplicative_expression ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE type_qualifier_list CLASS                                                                                 
        FOR PATTERN : [type_qualifier_list,type_qualifier]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class type_qualifier;
/*------------------------------------------------------------*\
 							        
  item class type_qualifier_list_item                              
                                                                
\*------------------------------------------------------------*/
class type_qualifier_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	type_qualifier *_p_type_qualifier;                              // type_qualifier
public:
	type_qualifier_list_item
		(
			std::string _arg_s_matchedPattern,
			type_qualifier *_arg__p_type_qualifier
		);
	type_qualifier_list_item(const type_qualifier_list_item &);
	virtual Properties getProperties()const;
	virtual ~type_qualifier_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class type_qualifier_list                         
                                                                
\*------------------------------------------------------------*/

class type_qualifier_list
	:public CAst 
{
private:
	typedef std::list<type_qualifier_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<type_qualifier_list_item> _items;
public:
	type_qualifier_list
		(
			std::string _arg_s_matchedPattern,
			type_qualifier *_arg__p_type_qualifier
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			type_qualifier *_arg__p_type_qualifier
		);

	virtual std::string name()const;							//returns the class name, here "type_qualifier_list"
	virtual std::string pattern()const;							//returns the pattern, here "[type_qualifier_list,type_qualifier]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~type_qualifier_list ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE argument_expression_list CLASS                                                                                 
        FOR PATTERN : [argument_expression_list,',',assignment_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class assignment_expression;
/*------------------------------------------------------------*\
 							        
  item class argument_expression_list_item                              
                                                                
\*------------------------------------------------------------*/
class argument_expression_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	assignment_expression *_p_assignment_expression;                // assignment_expression
public:
	argument_expression_list_item
		(
			std::string _arg_s_matchedPattern,
			assignment_expression *_arg__p_assignment_expression
		);
	argument_expression_list_item(const argument_expression_list_item &);
	virtual Properties getProperties()const;
	virtual ~argument_expression_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class argument_expression_list                         
                                                                
\*------------------------------------------------------------*/

class argument_expression_list
	:public CAst 
{
private:
	typedef std::list<argument_expression_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<argument_expression_list_item> _items;
public:
	argument_expression_list
		(
			std::string _arg_s_matchedPattern,
			assignment_expression *_arg__p_assignment_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			assignment_expression *_arg__p_assignment_expression
		);

	virtual std::string name()const;							//returns the class name, here "argument_expression_list"
	virtual std::string pattern()const;							//returns the pattern, here "[argument_expression_list,',',assignment_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~argument_expression_list ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE direct_abstract_declarator BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class direct_abstract_declarator :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~direct_abstract_declarator (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE direct_abstract_declarator1 CLASS                                                                                 
 	FOR PATTERN : [direct_abstract_declarator,'[',constant_expression,']']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class direct_abstract_declarator;
class constant_expression;


class direct_abstract_declarator1 
	:public direct_abstract_declarator 
{
	private:
		std::string _s_matchedPattern;
		direct_abstract_declarator *_p_direct_abstract_declarator;      // direct_abstract_declarator
		constant_expression *_p_constant_expression;                    // constant_expression
public:
	direct_abstract_declarator1	                                 // constructor
		( 
			std::string _arg_s_matchedPattern,
				direct_abstract_declarator *_arg__p_direct_abstract_declarator,
				constant_expression *_arg__p_constant_expression			
		);
	virtual std::string name()const;							//returns the class name, here "direct_abstract_declarator1"
	virtual std::string pattern()const;							//returns the pattern, here "[direct_abstract_declarator,'[',constant_expression,']']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~direct_abstract_declarator1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE direct_abstract_declarator2 CLASS                                                                                 
 	FOR PATTERN : [direct_abstract_declarator,'(',parameter_type_list,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class direct_abstract_declarator;
class parameter_type_list;


class direct_abstract_declarator2 
	:public direct_abstract_declarator 
{
	private:
		std::string _s_matchedPattern;
		direct_abstract_declarator *_p_direct_abstract_declarator;      // direct_abstract_declarator
		parameter_type_list *_p_parameter_type_list;                    // parameter_type_list
public:
	direct_abstract_declarator2	                                 // constructor
		( 
			std::string _arg_s_matchedPattern,
				direct_abstract_declarator *_arg__p_direct_abstract_declarator,
				parameter_type_list *_arg__p_parameter_type_list			
		);
	virtual std::string name()const;							//returns the class name, here "direct_abstract_declarator2"
	virtual std::string pattern()const;							//returns the pattern, here "[direct_abstract_declarator,'(',parameter_type_list,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~direct_abstract_declarator2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE direct_abstract_declarator3 CLASS                                                                                 
 	FOR PATTERN : ['(',abstract_declarator,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class abstract_declarator;


class direct_abstract_declarator3 
	:public direct_abstract_declarator 
{
	private:
		std::string _s_matchedPattern;
		abstract_declarator *_p_abstract_declarator;                    // abstract_declarator
public:
	direct_abstract_declarator3	                                 // constructor
		( 
			std::string _arg_s_matchedPattern,
				abstract_declarator *_arg__p_abstract_declarator			
		);
	virtual std::string name()const;							//returns the class name, here "direct_abstract_declarator3"
	virtual std::string pattern()const;							//returns the pattern, here "['(',abstract_declarator,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~direct_abstract_declarator3 ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE equality_expression CLASS                                                                                 
        FOR PATTERN : [equality_expression,EQ_OP,relational_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;
class relational_expression;
/*------------------------------------------------------------*\
 							        
  item class equality_expression_item                              
                                                                
\*------------------------------------------------------------*/
class equality_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	Token *_p_token1;                                               // EQ_OP
	relational_expression *_p_relational_expression;                // relational_expression
public:
	equality_expression_item
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1,
			relational_expression *_arg__p_relational_expression
		);
	equality_expression_item(const equality_expression_item &);
	virtual Properties getProperties()const;
	virtual ~equality_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class equality_expression                         
                                                                
\*------------------------------------------------------------*/

class equality_expression
	:public CAst 
{
private:
	typedef std::list<equality_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<equality_expression_item> _items;
public:
	equality_expression
		(
			std::string _arg_s_matchedPattern,
			relational_expression *_arg__p_relational_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1,
			relational_expression *_arg__p_relational_expression
		);

	virtual std::string name()const;							//returns the class name, here "equality_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[equality_expression,EQ_OP,relational_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~equality_expression ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE primary_expression BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class primary_expression :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~primary_expression (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE primary_expression1 CLASS                                                                                 
 	FOR PATTERN : ['(',expression,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class expression;


class primary_expression1 
	:public primary_expression 
{
	private:
		std::string _s_matchedPattern;
		expression *_p_expression;                                      // expression
public:
	primary_expression1	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression *_arg__p_expression			
		);
	virtual std::string name()const;							//returns the class name, here "primary_expression1"
	virtual std::string pattern()const;							//returns the pattern, here "['(',expression,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~primary_expression1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE primary_expression2 CLASS                                                                                 
 	FOR PATTERN : [IDENTIFIER]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;


class primary_expression2 
	:public primary_expression 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // IDENTIFIER
public:
	primary_expression2	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "primary_expression2"
	virtual std::string pattern()const;							//returns the pattern, here "[IDENTIFIER]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~primary_expression2 ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
 	THE declaration_specifiers BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class declaration_specifiers :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~declaration_specifiers (){};
};




/*=============================================================================================================*\
                                                                                                                 
        THE declaration_specifiers1 CLASS                                                                                 
        FOR PATTERN : [storage_class_specifier,declaration_specifiers]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class storage_class_specifier;
/*------------------------------------------------------------*\
 							        
  item class declaration_specifiers1_item                              
                                                                
\*------------------------------------------------------------*/
class declaration_specifiers1_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	storage_class_specifier *_p_storage_class_specifier;            // storage_class_specifier
public:
	declaration_specifiers1_item
		(
			std::string _arg_s_matchedPattern,
			storage_class_specifier *_arg__p_storage_class_specifier
		);
	declaration_specifiers1_item(const declaration_specifiers1_item &);
	virtual Properties getProperties()const;
	virtual ~declaration_specifiers1_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class declaration_specifiers1                         
                                                                
\*------------------------------------------------------------*/

class declaration_specifiers1
	:public declaration_specifiers 
{
private:
	typedef std::list<declaration_specifiers1_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<declaration_specifiers1_item> _items;
public:
	declaration_specifiers1
		(
			std::string _arg_s_matchedPattern,
			storage_class_specifier *_arg__p_storage_class_specifier
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			storage_class_specifier *_arg__p_storage_class_specifier
		);

	virtual std::string name()const;							//returns the class name, here "declaration_specifiers1"
	virtual std::string pattern()const;							//returns the pattern, here "[storage_class_specifier,declaration_specifiers]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~declaration_specifiers1 ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE declaration_specifiers2 CLASS                                                                                 
        FOR PATTERN : [type_specifier,declaration_specifiers]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class type_specifier;
/*------------------------------------------------------------*\
 							        
  item class declaration_specifiers2_item                              
                                                                
\*------------------------------------------------------------*/
class declaration_specifiers2_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	type_specifier *_p_type_specifier;                              // type_specifier
public:
	declaration_specifiers2_item
		(
			std::string _arg_s_matchedPattern,
			type_specifier *_arg__p_type_specifier
		);
	declaration_specifiers2_item(const declaration_specifiers2_item &);
	virtual Properties getProperties()const;
	virtual ~declaration_specifiers2_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class declaration_specifiers2                         
                                                                
\*------------------------------------------------------------*/

class declaration_specifiers2
	:public declaration_specifiers 
{
private:
	typedef std::list<declaration_specifiers2_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<declaration_specifiers2_item> _items;
public:
	declaration_specifiers2
		(
			std::string _arg_s_matchedPattern,
			type_specifier *_arg__p_type_specifier
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			type_specifier *_arg__p_type_specifier
		);

	virtual std::string name()const;							//returns the class name, here "declaration_specifiers2"
	virtual std::string pattern()const;							//returns the pattern, here "[type_specifier,declaration_specifiers]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~declaration_specifiers2 ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE declaration_specifiers3 CLASS                                                                                 
        FOR PATTERN : [type_qualifier,declaration_specifiers]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class type_qualifier;
/*------------------------------------------------------------*\
 							        
  item class declaration_specifiers3_item                              
                                                                
\*------------------------------------------------------------*/
class declaration_specifiers3_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	type_qualifier *_p_type_qualifier;                              // type_qualifier
public:
	declaration_specifiers3_item
		(
			std::string _arg_s_matchedPattern,
			type_qualifier *_arg__p_type_qualifier
		);
	declaration_specifiers3_item(const declaration_specifiers3_item &);
	virtual Properties getProperties()const;
	virtual ~declaration_specifiers3_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class declaration_specifiers3                         
                                                                
\*------------------------------------------------------------*/

class declaration_specifiers3
	:public declaration_specifiers 
{
private:
	typedef std::list<declaration_specifiers3_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<declaration_specifiers3_item> _items;
public:
	declaration_specifiers3
		(
			std::string _arg_s_matchedPattern,
			type_qualifier *_arg__p_type_qualifier
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			type_qualifier *_arg__p_type_qualifier
		);

	virtual std::string name()const;							//returns the class name, here "declaration_specifiers3"
	virtual std::string pattern()const;							//returns the pattern, here "[type_qualifier,declaration_specifiers]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~declaration_specifiers3 ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE declaration CLASS                                                                                 
 	FOR PATTERN : [declaration_specifiers,init_declarator_list,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class declaration_specifiers;
class init_declarator_list;


class declaration 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		declaration_specifiers *_p_declaration_specifiers;              // declaration_specifiers
		init_declarator_list *_p_init_declarator_list;                  // init_declarator_list
public:
	declaration	                                                 // constructor
		( 
			std::string _arg_s_matchedPattern,
				declaration_specifiers *_arg__p_declaration_specifiers,
				init_declarator_list *_arg__p_init_declarator_list			
		);
	virtual std::string name()const;							//returns the class name, here "declaration"
	virtual std::string pattern()const;							//returns the pattern, here "[declaration_specifiers,init_declarator_list,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~declaration ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class direct_declarator :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~direct_declarator (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator1 CLASS                                                                                 
 	FOR PATTERN : [direct_declarator,'[',constant_expression,']']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class direct_declarator;
class constant_expression;


class direct_declarator1 
	:public direct_declarator 
{
	private:
		std::string _s_matchedPattern;
		direct_declarator *_p_direct_declarator;                        // direct_declarator
		constant_expression *_p_constant_expression;                    // constant_expression
public:
	direct_declarator1	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				direct_declarator *_arg__p_direct_declarator,
				constant_expression *_arg__p_constant_expression			
		);
	virtual std::string name()const;							//returns the class name, here "direct_declarator1"
	virtual std::string pattern()const;							//returns the pattern, here "[direct_declarator,'[',constant_expression,']']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~direct_declarator1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator2 CLASS                                                                                 
 	FOR PATTERN : [direct_declarator,'(',parameter_type_list,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class direct_declarator;
class parameter_type_list;


class direct_declarator2 
	:public direct_declarator 
{
	private:
		std::string _s_matchedPattern;
		direct_declarator *_p_direct_declarator;                        // direct_declarator
		parameter_type_list *_p_parameter_type_list;                    // parameter_type_list
public:
	direct_declarator2	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				direct_declarator *_arg__p_direct_declarator,
				parameter_type_list *_arg__p_parameter_type_list			
		);
	virtual std::string name()const;							//returns the class name, here "direct_declarator2"
	virtual std::string pattern()const;							//returns the pattern, here "[direct_declarator,'(',parameter_type_list,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~direct_declarator2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator3 CLASS                                                                                 
 	FOR PATTERN : [direct_declarator,'(',identifier_list,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class direct_declarator;
class identifier_list;


class direct_declarator3 
	:public direct_declarator 
{
	private:
		std::string _s_matchedPattern;
		direct_declarator *_p_direct_declarator;                        // direct_declarator
		identifier_list *_p_identifier_list;                            // identifier_list
public:
	direct_declarator3	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				direct_declarator *_arg__p_direct_declarator,
				identifier_list *_arg__p_identifier_list			
		);
	virtual std::string name()const;							//returns the class name, here "direct_declarator3"
	virtual std::string pattern()const;							//returns the pattern, here "[direct_declarator,'(',identifier_list,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~direct_declarator3 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator4 CLASS                                                                                 
 	FOR PATTERN : ['(',declarator,')']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class declarator;


class direct_declarator4 
	:public direct_declarator 
{
	private:
		std::string _s_matchedPattern;
		declarator *_p_declarator;                                      // declarator
public:
	direct_declarator4	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				declarator *_arg__p_declarator			
		);
	virtual std::string name()const;							//returns the class name, here "direct_declarator4"
	virtual std::string pattern()const;							//returns the pattern, here "['(',declarator,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~direct_declarator4 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator5 CLASS                                                                                 
 	FOR PATTERN : [IDENTIFIER]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;


class direct_declarator5 
	:public direct_declarator 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // IDENTIFIER
public:
	direct_declarator5	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "direct_declarator5"
	virtual std::string pattern()const;							//returns the pattern, here "[IDENTIFIER]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~direct_declarator5 ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE logical_and_expression CLASS                                                                                 
        FOR PATTERN : [logical_and_expression,AND_OP,inclusive_or_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class inclusive_or_expression;
/*------------------------------------------------------------*\
 							        
  item class logical_and_expression_item                              
                                                                
\*------------------------------------------------------------*/
class logical_and_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	inclusive_or_expression *_p_inclusive_or_expression;            // inclusive_or_expression
public:
	logical_and_expression_item
		(
			std::string _arg_s_matchedPattern,
			inclusive_or_expression *_arg__p_inclusive_or_expression
		);
	logical_and_expression_item(const logical_and_expression_item &);
	virtual Properties getProperties()const;
	virtual ~logical_and_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class logical_and_expression                         
                                                                
\*------------------------------------------------------------*/

class logical_and_expression
	:public CAst 
{
private:
	typedef std::list<logical_and_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<logical_and_expression_item> _items;
public:
	logical_and_expression
		(
			std::string _arg_s_matchedPattern,
			inclusive_or_expression *_arg__p_inclusive_or_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			inclusive_or_expression *_arg__p_inclusive_or_expression
		);

	virtual std::string name()const;							//returns the class name, here "logical_and_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[logical_and_expression,AND_OP,inclusive_or_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~logical_and_expression ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE init_declarator_list CLASS                                                                                 
        FOR PATTERN : [init_declarator_list,',',init_declarator]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class init_declarator;
/*------------------------------------------------------------*\
 							        
  item class init_declarator_list_item                              
                                                                
\*------------------------------------------------------------*/
class init_declarator_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	init_declarator *_p_init_declarator;                            // init_declarator
public:
	init_declarator_list_item
		(
			std::string _arg_s_matchedPattern,
			init_declarator *_arg__p_init_declarator
		);
	init_declarator_list_item(const init_declarator_list_item &);
	virtual Properties getProperties()const;
	virtual ~init_declarator_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class init_declarator_list                         
                                                                
\*------------------------------------------------------------*/

class init_declarator_list
	:public CAst 
{
private:
	typedef std::list<init_declarator_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<init_declarator_list_item> _items;
public:
	init_declarator_list
		(
			std::string _arg_s_matchedPattern,
			init_declarator *_arg__p_init_declarator
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			init_declarator *_arg__p_init_declarator
		);

	virtual std::string name()const;							//returns the class name, here "init_declarator_list"
	virtual std::string pattern()const;							//returns the pattern, here "[init_declarator_list,',',init_declarator]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~init_declarator_list ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE shift_expression CLASS                                                                                 
        FOR PATTERN : [shift_expression,LEFT_OP,additive_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;
class additive_expression;
/*------------------------------------------------------------*\
 							        
  item class shift_expression_item                              
                                                                
\*------------------------------------------------------------*/
class shift_expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	Token *_p_token1;                                               // LEFT_OP
	additive_expression *_p_additive_expression;                    // additive_expression
public:
	shift_expression_item
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1,
			additive_expression *_arg__p_additive_expression
		);
	shift_expression_item(const shift_expression_item &);
	virtual Properties getProperties()const;
	virtual ~shift_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class shift_expression                         
                                                                
\*------------------------------------------------------------*/

class shift_expression
	:public CAst 
{
private:
	typedef std::list<shift_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<shift_expression_item> _items;
public:
	shift_expression
		(
			std::string _arg_s_matchedPattern,
			additive_expression *_arg__p_additive_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1,
			additive_expression *_arg__p_additive_expression
		);

	virtual std::string name()const;							//returns the class name, here "shift_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[shift_expression,LEFT_OP,additive_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~shift_expression ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE identifier_list CLASS                                                                                 
        FOR PATTERN : [identifier_list,',',IDENTIFIER]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;
/*------------------------------------------------------------*\
 							        
  item class identifier_list_item                              
                                                                
\*------------------------------------------------------------*/
class identifier_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	Token *_p_token1;                                               // IDENTIFIER
public:
	identifier_list_item
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1
		);
	identifier_list_item(const identifier_list_item &);
	virtual Properties getProperties()const;
	virtual ~identifier_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class identifier_list                         
                                                                
\*------------------------------------------------------------*/

class identifier_list
	:public CAst 
{
private:
	typedef std::list<identifier_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<identifier_list_item> _items;
public:
	identifier_list
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			Token *_arg__p_token1
		);

	virtual std::string name()const;							//returns the class name, here "identifier_list"
	virtual std::string pattern()const;							//returns the pattern, here "[identifier_list,',',IDENTIFIER]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~identifier_list ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE jump_statement BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class jump_statement :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~jump_statement (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE jump_statement1 CLASS                                                                                 
 	FOR PATTERN : [GOTO,IDENTIFIER,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;


class jump_statement1 
	:public jump_statement 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // IDENTIFIER
public:
	jump_statement1	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "jump_statement1"
	virtual std::string pattern()const;							//returns the pattern, here "[GOTO,IDENTIFIER,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~jump_statement1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE jump_statement2 CLASS                                                                                 
 	FOR PATTERN : [RETURN,expression,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class expression;


class jump_statement2 
	:public jump_statement 
{
	private:
		std::string _s_matchedPattern;
		expression *_p_expression;                                      // expression
public:
	jump_statement2	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression *_arg__p_expression			
		);
	virtual std::string name()const;							//returns the class name, here "jump_statement2"
	virtual std::string pattern()const;							//returns the pattern, here "[RETURN,expression,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~jump_statement2 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE jump_statement3 CLASS                                                                                 
 	FOR PATTERN : [CONTINUE,';']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;


class jump_statement3 
	:public jump_statement 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // CONTINUE
public:
	jump_statement3	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "jump_statement3"
	virtual std::string pattern()const;							//returns the pattern, here "[CONTINUE,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~jump_statement3 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE struct_declarator CLASS                                                                                 
 	FOR PATTERN : [declarator,':',constant_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class declarator;
class Token;
class constant_expression;


class struct_declarator 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		declarator *_p_declarator;                                      // declarator
		Token *_p_token1;                                               // ':'
		constant_expression *_p_constant_expression;                    // constant_expression
public:
	struct_declarator	                                           // constructor
		( 
			std::string _arg_s_matchedPattern,
				declarator *_arg__p_declarator,
				Token *_arg__p_token1,
				constant_expression *_arg__p_constant_expression			
		);
	virtual std::string name()const;							//returns the class name, here "struct_declarator"
	virtual std::string pattern()const;							//returns the pattern, here "[declarator,':',constant_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~struct_declarator ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE function_definition CLASS                                                                                 
 	FOR PATTERN : [declaration_specifiers,declarator,declaration_list,compound_statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class declaration_specifiers;
class declarator;
class declaration_list;
class compound_statement;


class function_definition 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		declaration_specifiers *_p_declaration_specifiers;              // declaration_specifiers
		declarator *_p_declarator;                                      // declarator
		declaration_list *_p_declaration_list;                          // declaration_list
		compound_statement *_p_compound_statement;                      // compound_statement
public:
	function_definition	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				declaration_specifiers *_arg__p_declaration_specifiers,
				declarator *_arg__p_declarator,
				declaration_list *_arg__p_declaration_list,
				compound_statement *_arg__p_compound_statement			
		);
	virtual std::string name()const;							//returns the class name, here "function_definition"
	virtual std::string pattern()const;							//returns the pattern, here "[declaration_specifiers,declarator,declaration_list,compound_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~function_definition ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE parameter_list CLASS                                                                                 
        FOR PATTERN : [parameter_list,',',parameter_declaration]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class parameter_declaration;
/*------------------------------------------------------------*\
 							        
  item class parameter_list_item                              
                                                                
\*------------------------------------------------------------*/
class parameter_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	parameter_declaration *_p_parameter_declaration;                // parameter_declaration
public:
	parameter_list_item
		(
			std::string _arg_s_matchedPattern,
			parameter_declaration *_arg__p_parameter_declaration
		);
	parameter_list_item(const parameter_list_item &);
	virtual Properties getProperties()const;
	virtual ~parameter_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class parameter_list                         
                                                                
\*------------------------------------------------------------*/

class parameter_list
	:public CAst 
{
private:
	typedef std::list<parameter_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<parameter_list_item> _items;
public:
	parameter_list
		(
			std::string _arg_s_matchedPattern,
			parameter_declaration *_arg__p_parameter_declaration
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			parameter_declaration *_arg__p_parameter_declaration
		);

	virtual std::string name()const;							//returns the class name, here "parameter_list"
	virtual std::string pattern()const;							//returns the pattern, here "[parameter_list,',',parameter_declaration]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~parameter_list ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE enum_specifier CLASS                                                                                 
 	FOR PATTERN : [ENUM,IDENTIFIER,'{',enumerator_list,'}']		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;
class Token;
class enumerator_list;
class Token;


class enum_specifier 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // IDENTIFIER
		Token *_p_token2;                                               // '{'
		enumerator_list *_p_enumerator_list;                            // enumerator_list
		Token *_p_token3;                                               // '}'
public:
	enum_specifier	                                              // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1,
				Token *_arg__p_token2,
				enumerator_list *_arg__p_enumerator_list,
				Token *_arg__p_token3			
		);
	virtual std::string name()const;							//returns the class name, here "enum_specifier"
	virtual std::string pattern()const;							//returns the pattern, here "[ENUM,IDENTIFIER,'{',enumerator_list,'}']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~enum_specifier ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE type_qualifier CLASS                                                                                 
 	FOR PATTERN : [CONST]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;


class type_qualifier 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // CONST
public:
	type_qualifier	                                              // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	virtual std::string name()const;							//returns the class name, here "type_qualifier"
	virtual std::string pattern()const;							//returns the pattern, here "[CONST]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~type_qualifier ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE enumerator_list CLASS                                                                                 
        FOR PATTERN : [enumerator_list,',',enumerator]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class enumerator;
/*------------------------------------------------------------*\
 							        
  item class enumerator_list_item                              
                                                                
\*------------------------------------------------------------*/
class enumerator_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	enumerator *_p_enumerator;                                      // enumerator
public:
	enumerator_list_item
		(
			std::string _arg_s_matchedPattern,
			enumerator *_arg__p_enumerator
		);
	enumerator_list_item(const enumerator_list_item &);
	virtual Properties getProperties()const;
	virtual ~enumerator_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class enumerator_list                         
                                                                
\*------------------------------------------------------------*/

class enumerator_list
	:public CAst 
{
private:
	typedef std::list<enumerator_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<enumerator_list_item> _items;
public:
	enumerator_list
		(
			std::string _arg_s_matchedPattern,
			enumerator *_arg__p_enumerator
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			enumerator *_arg__p_enumerator
		);

	virtual std::string name()const;							//returns the class name, here "enumerator_list"
	virtual std::string pattern()const;							//returns the pattern, here "[enumerator_list,',',enumerator]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~enumerator_list ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE labeled_statement BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class labeled_statement :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~labeled_statement (){};
};




/*=============================================================================================================*\
                                                                                                                 
 	THE labeled_statement1 CLASS                                                                                 
 	FOR PATTERN : [CASE,constant_expression,':',statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class constant_expression;
class statement;


class labeled_statement1 
	:public labeled_statement 
{
	private:
		std::string _s_matchedPattern;
		constant_expression *_p_constant_expression;                    // constant_expression
		statement *_p_statement;                                        // statement
public:
	labeled_statement1	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				constant_expression *_arg__p_constant_expression,
				statement *_arg__p_statement			
		);
	virtual std::string name()const;							//returns the class name, here "labeled_statement1"
	virtual std::string pattern()const;							//returns the pattern, here "[CASE,constant_expression,':',statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~labeled_statement1 ();

		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE labeled_statement2 CLASS                                                                                 
 	FOR PATTERN : [IDENTIFIER,':',statement]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class Token;
class statement;


class labeled_statement2 
	:public labeled_statement 
{
	private:
		std::string _s_matchedPattern;
		Token *_p_token1;                                               // IDENTIFIER
		statement *_p_statement;                                        // statement
public:
	labeled_statement2	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1,
				statement *_arg__p_statement			
		);
	virtual std::string name()const;							//returns the class name, here "labeled_statement2"
	virtual std::string pattern()const;							//returns the pattern, here "[IDENTIFIER,':',statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~labeled_statement2 ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE declaration_list CLASS                                                                                 
        FOR PATTERN : [declaration_list,declaration]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class declaration;
/*------------------------------------------------------------*\
 							        
  item class declaration_list_item                              
                                                                
\*------------------------------------------------------------*/
class declaration_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	declaration *_p_declaration;                                    // declaration
public:
	declaration_list_item
		(
			std::string _arg_s_matchedPattern,
			declaration *_arg__p_declaration
		);
	declaration_list_item(const declaration_list_item &);
	virtual Properties getProperties()const;
	virtual ~declaration_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class declaration_list                         
                                                                
\*------------------------------------------------------------*/

class declaration_list
	:public CAst 
{
private:
	typedef std::list<declaration_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<declaration_list_item> _items;
public:
	declaration_list
		(
			std::string _arg_s_matchedPattern,
			declaration *_arg__p_declaration
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			declaration *_arg__p_declaration
		);

	virtual std::string name()const;							//returns the class name, here "declaration_list"
	virtual std::string pattern()const;							//returns the pattern, here "[declaration_list,declaration]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~declaration_list ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE specifier_qualifier_list BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class specifier_qualifier_list :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::string pattern()const=0;
	virtual bool isList()const=0;
	virtual Properties getProperties()const=0;
	virtual PropertiesList getPropertiesList()const=0;
	virtual ~specifier_qualifier_list (){};
};




/*=============================================================================================================*\
                                                                                                                 
        THE specifier_qualifier_list1 CLASS                                                                                 
        FOR PATTERN : [type_specifier,specifier_qualifier_list]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class type_specifier;
/*------------------------------------------------------------*\
 							        
  item class specifier_qualifier_list1_item                              
                                                                
\*------------------------------------------------------------*/
class specifier_qualifier_list1_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	type_specifier *_p_type_specifier;                              // type_specifier
public:
	specifier_qualifier_list1_item
		(
			std::string _arg_s_matchedPattern,
			type_specifier *_arg__p_type_specifier
		);
	specifier_qualifier_list1_item(const specifier_qualifier_list1_item &);
	virtual Properties getProperties()const;
	virtual ~specifier_qualifier_list1_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class specifier_qualifier_list1                         
                                                                
\*------------------------------------------------------------*/

class specifier_qualifier_list1
	:public specifier_qualifier_list 
{
private:
	typedef std::list<specifier_qualifier_list1_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<specifier_qualifier_list1_item> _items;
public:
	specifier_qualifier_list1
		(
			std::string _arg_s_matchedPattern,
			type_specifier *_arg__p_type_specifier
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			type_specifier *_arg__p_type_specifier
		);

	virtual std::string name()const;							//returns the class name, here "specifier_qualifier_list1"
	virtual std::string pattern()const;							//returns the pattern, here "[type_specifier,specifier_qualifier_list]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~specifier_qualifier_list1 ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE specifier_qualifier_list2 CLASS                                                                                 
        FOR PATTERN : [type_qualifier,specifier_qualifier_list]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class type_qualifier;
/*------------------------------------------------------------*\
 							        
  item class specifier_qualifier_list2_item                              
                                                                
\*------------------------------------------------------------*/
class specifier_qualifier_list2_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	type_qualifier *_p_type_qualifier;                              // type_qualifier
public:
	specifier_qualifier_list2_item
		(
			std::string _arg_s_matchedPattern,
			type_qualifier *_arg__p_type_qualifier
		);
	specifier_qualifier_list2_item(const specifier_qualifier_list2_item &);
	virtual Properties getProperties()const;
	virtual ~specifier_qualifier_list2_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class specifier_qualifier_list2                         
                                                                
\*------------------------------------------------------------*/

class specifier_qualifier_list2
	:public specifier_qualifier_list 
{
private:
	typedef std::list<specifier_qualifier_list2_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<specifier_qualifier_list2_item> _items;
public:
	specifier_qualifier_list2
		(
			std::string _arg_s_matchedPattern,
			type_qualifier *_arg__p_type_qualifier
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			type_qualifier *_arg__p_type_qualifier
		);

	virtual std::string name()const;							//returns the class name, here "specifier_qualifier_list2"
	virtual std::string pattern()const;							//returns the pattern, here "[type_qualifier,specifier_qualifier_list]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~specifier_qualifier_list2 ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE translation_unit CLASS                                                                                 
        FOR PATTERN : [translation_unit,external_declaration]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class external_declaration;
/*------------------------------------------------------------*\
 							        
  item class translation_unit_item                              
                                                                
\*------------------------------------------------------------*/
class translation_unit_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	external_declaration *_p_external_declaration;                  // external_declaration
public:
	translation_unit_item
		(
			std::string _arg_s_matchedPattern,
			external_declaration *_arg__p_external_declaration
		);
	translation_unit_item(const translation_unit_item &);
	virtual Properties getProperties()const;
	virtual ~translation_unit_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class translation_unit                         
                                                                
\*------------------------------------------------------------*/

class translation_unit
	:public CAst 
{
private:
	typedef std::list<translation_unit_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<translation_unit_item> _items;
public:
	translation_unit
		(
			std::string _arg_s_matchedPattern,
			external_declaration *_arg__p_external_declaration
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			external_declaration *_arg__p_external_declaration
		);

	virtual std::string name()const;							//returns the class name, here "translation_unit"
	virtual std::string pattern()const;							//returns the pattern, here "[translation_unit,external_declaration]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~translation_unit ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE constant_expression CLASS                                                                                 
 	FOR PATTERN : [conditional_expression]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class conditional_expression;


class constant_expression 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		conditional_expression *_p_conditional_expression;              // conditional_expression
public:
	constant_expression	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				conditional_expression *_arg__p_conditional_expression			
		);
	virtual std::string name()const;							//returns the class name, here "constant_expression"
	virtual std::string pattern()const;							//returns the pattern, here "[conditional_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~constant_expression ();

		
};


			
/*=============================================================================================================*\
                                                                                                                 
        THE initializer_list CLASS                                                                                 
        FOR PATTERN : [initializer_list,',',initializer]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class initializer;
/*------------------------------------------------------------*\
 							        
  item class initializer_list_item                              
                                                                
\*------------------------------------------------------------*/
class initializer_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	initializer *_p_initializer;                                    // initializer
public:
	initializer_list_item
		(
			std::string _arg_s_matchedPattern,
			initializer *_arg__p_initializer
		);
	initializer_list_item(const initializer_list_item &);
	virtual Properties getProperties()const;
	virtual ~initializer_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class initializer_list                         
                                                                
\*------------------------------------------------------------*/

class initializer_list
	:public CAst 
{
private:
	typedef std::list<initializer_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<initializer_list_item> _items;
public:
	initializer_list
		(
			std::string _arg_s_matchedPattern,
			initializer *_arg__p_initializer
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			initializer *_arg__p_initializer
		);

	virtual std::string name()const;							//returns the class name, here "initializer_list"
	virtual std::string pattern()const;							//returns the pattern, here "[initializer_list,',',initializer]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~initializer_list ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE statement_list CLASS                                                                                 
        FOR PATTERN : [statement_list,statement]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class statement;
/*------------------------------------------------------------*\
 							        
  item class statement_list_item                              
                                                                
\*------------------------------------------------------------*/
class statement_list_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	statement *_p_statement;                                        // statement
public:
	statement_list_item
		(
			std::string _arg_s_matchedPattern,
			statement *_arg__p_statement
		);
	statement_list_item(const statement_list_item &);
	virtual Properties getProperties()const;
	virtual ~statement_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class statement_list                         
                                                                
\*------------------------------------------------------------*/

class statement_list
	:public CAst 
{
private:
	typedef std::list<statement_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<statement_list_item> _items;
public:
	statement_list
		(
			std::string _arg_s_matchedPattern,
			statement *_arg__p_statement
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			statement *_arg__p_statement
		);

	virtual std::string name()const;							//returns the class name, here "statement_list"
	virtual std::string pattern()const;							//returns the pattern, here "[statement_list,statement]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~statement_list ();

};


			
			
/*=============================================================================================================*\
                                                                                                                 
        THE expression CLASS                                                                                 
        FOR PATTERN : [expression,',',assignment_expression]		                                                                 
 														 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class assignment_expression;
/*------------------------------------------------------------*\
 							        
  item class expression_item                              
                                                                
\*------------------------------------------------------------*/
class expression_item
{
private:
	int *_refCount; 
	std::string _s_matchedPattern;
	assignment_expression *_p_assignment_expression;                // assignment_expression
public:
	expression_item
		(
			std::string _arg_s_matchedPattern,
			assignment_expression *_arg__p_assignment_expression
		);
	expression_item(const expression_item &);
	virtual Properties getProperties()const;
	virtual ~expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class expression                         
                                                                
\*------------------------------------------------------------*/

class expression
	:public CAst 
{
private:
	typedef std::list<expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	std::list<expression_item> _items;
public:
	expression
		(
			std::string _arg_s_matchedPattern,
			assignment_expression *_arg__p_assignment_expression
		);

	void append
		(
			std::string _arg_s_matchedPattern,
			assignment_expression *_arg__p_assignment_expression
		);

	virtual std::string name()const;							//returns the class name, here "expression"
	virtual std::string pattern()const;							//returns the pattern, here "[expression,',',assignment_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a propertirs list		
	virtual ~expression ();

};


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE declarator CLASS                                                                                 
 	FOR PATTERN : [pointer,direct_declarator]		                                                                 
                                                                                                                 
\*=============================================================================================================*/  



// FORWARD DECLARATION
class pointer;
class direct_declarator;


class declarator 
	:public CAst 
{
	private:
		std::string _s_matchedPattern;
		pointer *_p_pointer;                                            // pointer
		direct_declarator *_p_direct_declarator;                        // direct_declarator
public:
	declarator	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				pointer *_arg__p_pointer,
				direct_declarator *_arg__p_direct_declarator			
		);
	virtual std::string name()const;							//returns the class name, here "declarator"
	virtual std::string pattern()const;							//returns the pattern, here "[pointer,direct_declarator]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	virtual ~declarator ();

		
};



translation_unit* parseFile(const char *fileName);

}//namespace CAST		

#include "cYacc.hpp"
extern CAst::translation_unit* root;
#endif //CAST_HEADER_INCLUDED
