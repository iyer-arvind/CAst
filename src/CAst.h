









#ifndef CAST_HEADER_INCLUDED
#define CAST_HEADER_INCLUDED

#define RULE_MARKER(txt) std::cerr<<"\033[36m"<<__FILE__<<":"<<__LINE__<<"\033[0m\t"<<txt<<"\n";
#define CAST_PTR(TYPE,PTR) assert(PTR);CAst::TYPE* __p__;__p__=dynamic_cast<CAst::TYPE*>(PTR);assert(__p__);__p__
#include <string>
#include <cstring>
#include <stdio.h>
#include <deque>
#include <list>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <map>
#include <assert.h>
#define LOG(txt) std::cerr<<"[\033[33m"<<std::setw(20)<<std::left<<this<<"\033[0m\t]"<<txt<<"\n";


extern "C"
{
    int yylex(void);
    int yyerror(const char *s);
}
namespace CAst
{


class CAst;

enum CAstType { CAST_TYPE_TOKEN, CAST_TYPE_STORAGE_CLASS_SPECIFIER, CAST_TYPE_EXPRESSION_STATEMENT, CAST_TYPE_TYPE_NAME, CAST_TYPE_UNARY_EXPRESSION1, CAST_TYPE_UNARY_EXPRESSION2, CAST_TYPE_UNARY_EXPRESSION3, CAST_TYPE_UNARY_EXPRESSION4, CAST_TYPE_CONDITIONAL_EXPRESSION, CAST_TYPE_STRUCT_OR_UNION_SPECIFIER, CAST_TYPE_EXCLUSIVE_OR_EXPRESSION, CAST_TYPE_INITIALIZER1, CAST_TYPE_INITIALIZER2, CAST_TYPE_STRUCT_DECLARATION_LIST, CAST_TYPE_ASSIGNMENT_OPERATOR, CAST_TYPE_STRUCT_DECLARATION, CAST_TYPE_ABSTRACT_DECLARATOR, CAST_TYPE_ITERATION_STATEMENT1, CAST_TYPE_ITERATION_STATEMENT2, CAST_TYPE_ITERATION_STATEMENT3, CAST_TYPE_ADDITIVE_EXPRESSION, CAST_TYPE_EXTERNAL_DECLARATION1, CAST_TYPE_EXTERNAL_DECLARATION2, CAST_TYPE_TYPE_SPECIFIER1, CAST_TYPE_TYPE_SPECIFIER2, CAST_TYPE_TYPE_SPECIFIER3, CAST_TYPE_COMPOUND_STATEMENT, CAST_TYPE_INCLUSIVE_OR_EXPRESSION, CAST_TYPE_POINTER, CAST_TYPE_SELECTION_STATEMENT1, CAST_TYPE_SELECTION_STATEMENT2, CAST_TYPE_POSTFIX_EXPRESSION1, CAST_TYPE_POSTFIX_EXPRESSION2, CAST_TYPE_POSTFIX_EXPRESSION3, CAST_TYPE_POSTFIX_EXPRESSION4, CAST_TYPE_POSTFIX_EXPRESSION5, CAST_TYPE_AND_EXPRESSION, CAST_TYPE_STATEMENT1, CAST_TYPE_STATEMENT2, CAST_TYPE_STATEMENT3, CAST_TYPE_STATEMENT4, CAST_TYPE_STATEMENT5, CAST_TYPE_STATEMENT6, CAST_TYPE_CAST_EXPRESSION1, CAST_TYPE_CAST_EXPRESSION2, CAST_TYPE_INIT_DECLARATOR, CAST_TYPE_STRUCT_DECLARATOR_LIST, CAST_TYPE_LOGICAL_OR_EXPRESSION, CAST_TYPE_UNARY_OPERATOR, CAST_TYPE_RELATIONAL_EXPRESSION, CAST_TYPE_STRUCT_OR_UNION, CAST_TYPE_ENUMERATOR, CAST_TYPE_ASSIGNMENT_EXPRESSION1, CAST_TYPE_ASSIGNMENT_EXPRESSION2, CAST_TYPE_PARAMETER_TYPE_LIST, CAST_TYPE_PARAMETER_DECLARATION1, CAST_TYPE_PARAMETER_DECLARATION2, CAST_TYPE_MULTIPLICATIVE_EXPRESSION, CAST_TYPE_TYPE_QUALIFIER_LIST, CAST_TYPE_ARGUMENT_EXPRESSION_LIST, CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR1, CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR2, CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR3, CAST_TYPE_EQUALITY_EXPRESSION, CAST_TYPE_PRIMARY_EXPRESSION1, CAST_TYPE_PRIMARY_EXPRESSION2, CAST_TYPE_DECLARATION_SPECIFIERS1, CAST_TYPE_DECLARATION_SPECIFIERS2, CAST_TYPE_DECLARATION_SPECIFIERS3, CAST_TYPE_DECLARATION, CAST_TYPE_DIRECT_DECLARATOR1, CAST_TYPE_DIRECT_DECLARATOR2, CAST_TYPE_DIRECT_DECLARATOR3, CAST_TYPE_DIRECT_DECLARATOR4, CAST_TYPE_DIRECT_DECLARATOR5, CAST_TYPE_LOGICAL_AND_EXPRESSION, CAST_TYPE_INIT_DECLARATOR_LIST, CAST_TYPE_SHIFT_EXPRESSION, CAST_TYPE_IDENTIFIER_LIST, CAST_TYPE_JUMP_STATEMENT1, CAST_TYPE_JUMP_STATEMENT2, CAST_TYPE_JUMP_STATEMENT3, CAST_TYPE_STRUCT_DECLARATOR, CAST_TYPE_FUNCTION_DEFINITION, CAST_TYPE_PARAMETER_LIST, CAST_TYPE_ENUM_SPECIFIER, CAST_TYPE_TYPE_QUALIFIER, CAST_TYPE_ENUMERATOR_LIST, CAST_TYPE_LABELED_STATEMENT1, CAST_TYPE_LABELED_STATEMENT2, CAST_TYPE_DECLARATION_LIST, CAST_TYPE_SPECIFIER_QUALIFIER_LIST1, CAST_TYPE_SPECIFIER_QUALIFIER_LIST2, CAST_TYPE_TRANSLATION_UNIT, CAST_TYPE_CONSTANT_EXPRESSION, CAST_TYPE_INITIALIZER_LIST, CAST_TYPE_STATEMENT_LIST, CAST_TYPE_EXPRESSION, CAST_TYPE_DECLARATOR};


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
		virtual std::ostream& codeStream(std::ostream&)const=0;
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
		virtual std::string name()const			=0;
		virtual std::ostream& codeStream(std::ostream&)const			=0;
	virtual std::string code()const				=0;
		virtual bool isList()const			=0;
		virtual Properties getProperties()const		=0;
		virtual std::string txt()const 			=0;
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
	GenericToken(const GenericToken& other):
		_txt(other._txt)
	{}
	virtual std::ostream& codeStream(std::ostream& stream)const			{return stream<<_txt<<" ";}
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual std::string txt()const {return _txt;}
	virtual bool isList()const							{return false;}
	virtual Properties getProperties()const						{Properties p(name());p.setTokValue(_txt);return p;}
	virtual PropertiesList getPropertiesList()const					{return PropertiesList(name());}
	virtual ~GenericToken()
	{}
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
	int *_refCount; 
	std::string _s_matchedPattern;
		Token *_p_token1;                                               // TYPEDEF
public:
	storage_class_specifier	                                     // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	storage_class_specifier(const storage_class_specifier& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "storage_class_specifier"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STORAGE_CLASS_SPECIFIER
	virtual std::string pattern()const;							//returns the pattern, here "[TYPEDEF]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	int *_refCount; 
	std::string _s_matchedPattern;
		expression *_p_expression;                                      // expression
public:
	expression_statement	                                        // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression *_arg__p_expression			
		);
	expression_statement(const expression_statement& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "expression_statement"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_EXPRESSION_STATEMENT
	virtual std::string pattern()const;							//returns the pattern, here "[expression,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const expression* get_p_expression()const{return _p_expression;}							//returns const pointer to _p_expression
	      expression* get_p_expression()     {return _p_expression;}							//returns       pointer to _p_expression
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
	int *_refCount; 
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
	type_name(const type_name& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "type_name"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_TYPE_NAME
	virtual std::string pattern()const;							//returns the pattern, here "[specifier_qualifier_list,abstract_declarator]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const specifier_qualifier_list* get_p_specifier_qualifier_list()const{return _p_specifier_qualifier_list;}							//returns const pointer to _p_specifier_qualifier_list
	      specifier_qualifier_list* get_p_specifier_qualifier_list()     {return _p_specifier_qualifier_list;}							//returns       pointer to _p_specifier_qualifier_list
	const abstract_declarator* get_p_abstract_declarator()const{return _p_abstract_declarator;}							//returns const pointer to _p_abstract_declarator
	      abstract_declarator* get_p_abstract_declarator()     {return _p_abstract_declarator;}							//returns       pointer to _p_abstract_declarator
	virtual ~type_name ();

	
		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE unary_expression BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class unary_expression :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
	std::string _s_matchedPattern;
		type_name *_p_type_name;                                        // type_name
public:
	unary_expression1	                                           // constructor
		( 
			std::string _arg_s_matchedPattern,
				type_name *_arg__p_type_name			
		);
	unary_expression1(const unary_expression1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "unary_expression1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_UNARY_EXPRESSION1
	virtual std::string pattern()const;							//returns the pattern, here "[SIZEOF,'(',type_name,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const type_name* get_p_type_name()const{return _p_type_name;}							//returns const pointer to _p_type_name
	      type_name* get_p_type_name()     {return _p_type_name;}							//returns       pointer to _p_type_name
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
	int *_refCount; 
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
	unary_expression2(const unary_expression2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "unary_expression2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_UNARY_EXPRESSION2
	virtual std::string pattern()const;							//returns the pattern, here "[INC_OP,unary_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	const unary_expression* get_p_unary_expression()const{return _p_unary_expression;}							//returns const pointer to _p_unary_expression
	      unary_expression* get_p_unary_expression()     {return _p_unary_expression;}							//returns       pointer to _p_unary_expression
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
	int *_refCount; 
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
	unary_expression3(const unary_expression3& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "unary_expression3"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_UNARY_EXPRESSION3
	virtual std::string pattern()const;							//returns the pattern, here "[unary_operator,cast_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const unary_operator* get_p_unary_operator()const{return _p_unary_operator;}							//returns const pointer to _p_unary_operator
	      unary_operator* get_p_unary_operator()     {return _p_unary_operator;}							//returns       pointer to _p_unary_operator
	const cast_expression* get_p_cast_expression()const{return _p_cast_expression;}							//returns const pointer to _p_cast_expression
	      cast_expression* get_p_cast_expression()     {return _p_cast_expression;}							//returns       pointer to _p_cast_expression
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
	int *_refCount; 
	std::string _s_matchedPattern;
		postfix_expression *_p_postfix_expression;                      // postfix_expression
public:
	unary_expression4	                                           // constructor
		( 
			std::string _arg_s_matchedPattern,
				postfix_expression *_arg__p_postfix_expression			
		);
	unary_expression4(const unary_expression4& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "unary_expression4"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_UNARY_EXPRESSION4
	virtual std::string pattern()const;							//returns the pattern, here "[postfix_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const postfix_expression* get_p_postfix_expression()const{return _p_postfix_expression;}							//returns const pointer to _p_postfix_expression
	      postfix_expression* get_p_postfix_expression()     {return _p_postfix_expression;}							//returns       pointer to _p_postfix_expression
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
	virtual std::string name()const{return "conditional_expression_item";}			//returns the class name, here "conditional_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const logical_or_expression* get_p_logical_or_expression()const{return _p_logical_or_expression;}							//returns const pointer to _p_logical_or_expression
	      logical_or_expression* get_p_logical_or_expression()     {return _p_logical_or_expression;}							//returns const pointer to _p_logical_or_expression
	const expression* get_p_expression()const{return _p_expression;}							//returns const pointer to _p_expression
	      expression* get_p_expression()     {return _p_expression;}							//returns const pointer to _p_expression
	virtual ~conditional_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class conditional_expression                         
                                                                
\*------------------------------------------------------------*/

class conditional_expression
	:public CAst 
{
private:
	typedef std::deque<conditional_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_CONDITIONAL_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[logical_or_expression,'?',expression,':',conditional_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual conditional_expression_item& operator[](int i){return _items[i];}
	virtual ~conditional_expression ();

};

typedef std::deque<conditional_expression_item>::iterator conditional_expression_iterator;
typedef std::deque<conditional_expression_item>::const_iterator conditional_expression_const_iterator;


			
			

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
	int *_refCount; 
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
	struct_or_union_specifier(const struct_or_union_specifier& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "struct_or_union_specifier"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STRUCT_OR_UNION_SPECIFIER
	virtual std::string pattern()const;							//returns the pattern, here "[struct_or_union,IDENTIFIER,'{',struct_declaration_list,'}']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const struct_or_union* get_p_struct_or_union()const{return _p_struct_or_union;}							//returns const pointer to _p_struct_or_union
	      struct_or_union* get_p_struct_or_union()     {return _p_struct_or_union;}							//returns       pointer to _p_struct_or_union
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	const Token* get_p_token2()const{return _p_token2;}							//returns const pointer to _p_token2
	      Token* get_p_token2()     {return _p_token2;}							//returns       pointer to _p_token2
	const struct_declaration_list* get_p_struct_declaration_list()const{return _p_struct_declaration_list;}							//returns const pointer to _p_struct_declaration_list
	      struct_declaration_list* get_p_struct_declaration_list()     {return _p_struct_declaration_list;}							//returns       pointer to _p_struct_declaration_list
	const Token* get_p_token3()const{return _p_token3;}							//returns const pointer to _p_token3
	      Token* get_p_token3()     {return _p_token3;}							//returns       pointer to _p_token3
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
	virtual std::string name()const{return "exclusive_or_expression_item";}			//returns the class name, here "exclusive_or_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const and_expression* get_p_and_expression()const{return _p_and_expression;}							//returns const pointer to _p_and_expression
	      and_expression* get_p_and_expression()     {return _p_and_expression;}							//returns const pointer to _p_and_expression
	virtual ~exclusive_or_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class exclusive_or_expression                         
                                                                
\*------------------------------------------------------------*/

class exclusive_or_expression
	:public CAst 
{
private:
	typedef std::deque<exclusive_or_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_EXCLUSIVE_OR_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[exclusive_or_expression,'^',and_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual exclusive_or_expression_item& operator[](int i){return _items[i];}
	virtual ~exclusive_or_expression ();

};

typedef std::deque<exclusive_or_expression_item>::iterator exclusive_or_expression_iterator;
typedef std::deque<exclusive_or_expression_item>::const_iterator exclusive_or_expression_const_iterator;


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE initializer BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class initializer :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
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
	initializer1(const initializer1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "initializer1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_INITIALIZER1
	virtual std::string pattern()const;							//returns the pattern, here "['{',initializer_list,',','}']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const initializer_list* get_p_initializer_list()const{return _p_initializer_list;}							//returns const pointer to _p_initializer_list
	      initializer_list* get_p_initializer_list()     {return _p_initializer_list;}							//returns       pointer to _p_initializer_list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	int *_refCount; 
	std::string _s_matchedPattern;
		assignment_expression *_p_assignment_expression;                // assignment_expression
public:
	initializer2	                                                // constructor
		( 
			std::string _arg_s_matchedPattern,
				assignment_expression *_arg__p_assignment_expression			
		);
	initializer2(const initializer2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "initializer2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_INITIALIZER2
	virtual std::string pattern()const;							//returns the pattern, here "[assignment_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const assignment_expression* get_p_assignment_expression()const{return _p_assignment_expression;}							//returns const pointer to _p_assignment_expression
	      assignment_expression* get_p_assignment_expression()     {return _p_assignment_expression;}							//returns       pointer to _p_assignment_expression
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
	virtual std::string name()const{return "struct_declaration_list_item";}			//returns the class name, here "struct_declaration_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const struct_declaration* get_p_struct_declaration()const{return _p_struct_declaration;}							//returns const pointer to _p_struct_declaration
	      struct_declaration* get_p_struct_declaration()     {return _p_struct_declaration;}							//returns const pointer to _p_struct_declaration
	virtual ~struct_declaration_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class struct_declaration_list                         
                                                                
\*------------------------------------------------------------*/

class struct_declaration_list
	:public CAst 
{
private:
	typedef std::deque<struct_declaration_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STRUCT_DECLARATION_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[struct_declaration_list,struct_declaration]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual struct_declaration_list_item& operator[](int i){return _items[i];}
	virtual ~struct_declaration_list ();

};

typedef std::deque<struct_declaration_list_item>::iterator struct_declaration_list_iterator;
typedef std::deque<struct_declaration_list_item>::const_iterator struct_declaration_list_const_iterator;


			
			

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
	int *_refCount; 
	std::string _s_matchedPattern;
		Token *_p_token1;                                               // '='
public:
	assignment_operator	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	assignment_operator(const assignment_operator& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "assignment_operator"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ASSIGNMENT_OPERATOR
	virtual std::string pattern()const;							//returns the pattern, here "['=']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	int *_refCount; 
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
	struct_declaration(const struct_declaration& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "struct_declaration"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STRUCT_DECLARATION
	virtual std::string pattern()const;							//returns the pattern, here "[specifier_qualifier_list,struct_declarator_list,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const specifier_qualifier_list* get_p_specifier_qualifier_list()const{return _p_specifier_qualifier_list;}							//returns const pointer to _p_specifier_qualifier_list
	      specifier_qualifier_list* get_p_specifier_qualifier_list()     {return _p_specifier_qualifier_list;}							//returns       pointer to _p_specifier_qualifier_list
	const struct_declarator_list* get_p_struct_declarator_list()const{return _p_struct_declarator_list;}							//returns const pointer to _p_struct_declarator_list
	      struct_declarator_list* get_p_struct_declarator_list()     {return _p_struct_declarator_list;}							//returns       pointer to _p_struct_declarator_list
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
	int *_refCount; 
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
	abstract_declarator(const abstract_declarator& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "abstract_declarator"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ABSTRACT_DECLARATOR
	virtual std::string pattern()const;							//returns the pattern, here "[pointer,direct_abstract_declarator]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const pointer* get_p_pointer()const{return _p_pointer;}							//returns const pointer to _p_pointer
	      pointer* get_p_pointer()     {return _p_pointer;}							//returns       pointer to _p_pointer
	const direct_abstract_declarator* get_p_direct_abstract_declarator()const{return _p_direct_abstract_declarator;}							//returns const pointer to _p_direct_abstract_declarator
	      direct_abstract_declarator* get_p_direct_abstract_declarator()     {return _p_direct_abstract_declarator;}							//returns       pointer to _p_direct_abstract_declarator
	virtual ~abstract_declarator ();

	
		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE iteration_statement BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class iteration_statement :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
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
	iteration_statement1(const iteration_statement1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "iteration_statement1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ITERATION_STATEMENT1
	virtual std::string pattern()const;							//returns the pattern, here "[DO,statement,WHILE,'(',expression,')',';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const statement* get_p_statement()const{return _p_statement;}							//returns const pointer to _p_statement
	      statement* get_p_statement()     {return _p_statement;}							//returns       pointer to _p_statement
	const expression* get_p_expression()const{return _p_expression;}							//returns const pointer to _p_expression
	      expression* get_p_expression()     {return _p_expression;}							//returns       pointer to _p_expression
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
	int *_refCount; 
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
	iteration_statement2(const iteration_statement2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "iteration_statement2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ITERATION_STATEMENT2
	virtual std::string pattern()const;							//returns the pattern, here "[FOR,'(',expression_statement,expression_statement,expression,')',statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const expression_statement* get_p_expression_statement()const{return _p_expression_statement;}							//returns const pointer to _p_expression_statement
	      expression_statement* get_p_expression_statement()     {return _p_expression_statement;}							//returns       pointer to _p_expression_statement
	const expression_statement* get_p_expression_statement1()const{return _p_expression_statement1;}							//returns const pointer to _p_expression_statement1
	      expression_statement* get_p_expression_statement1()     {return _p_expression_statement1;}							//returns       pointer to _p_expression_statement1
	const expression* get_p_expression()const{return _p_expression;}							//returns const pointer to _p_expression
	      expression* get_p_expression()     {return _p_expression;}							//returns       pointer to _p_expression
	const statement* get_p_statement()const{return _p_statement;}							//returns const pointer to _p_statement
	      statement* get_p_statement()     {return _p_statement;}							//returns       pointer to _p_statement
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
	int *_refCount; 
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
	iteration_statement3(const iteration_statement3& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "iteration_statement3"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ITERATION_STATEMENT3
	virtual std::string pattern()const;							//returns the pattern, here "[WHILE,'(',expression,')',statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const expression* get_p_expression()const{return _p_expression;}							//returns const pointer to _p_expression
	      expression* get_p_expression()     {return _p_expression;}							//returns       pointer to _p_expression
	const statement* get_p_statement()const{return _p_statement;}							//returns const pointer to _p_statement
	      statement* get_p_statement()     {return _p_statement;}							//returns       pointer to _p_statement
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
	virtual std::string name()const{return "additive_expression_item";}			//returns the class name, here "additive_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns const pointer to _p_token1
	const multiplicative_expression* get_p_multiplicative_expression()const{return _p_multiplicative_expression;}							//returns const pointer to _p_multiplicative_expression
	      multiplicative_expression* get_p_multiplicative_expression()     {return _p_multiplicative_expression;}							//returns const pointer to _p_multiplicative_expression
	virtual ~additive_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class additive_expression                         
                                                                
\*------------------------------------------------------------*/

class additive_expression
	:public CAst 
{
private:
	typedef std::deque<additive_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ADDITIVE_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[additive_expression,'+',multiplicative_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual additive_expression_item& operator[](int i){return _items[i];}
	virtual ~additive_expression ();

};

typedef std::deque<additive_expression_item>::iterator additive_expression_iterator;
typedef std::deque<additive_expression_item>::const_iterator additive_expression_const_iterator;


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE external_declaration BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class external_declaration :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
	std::string _s_matchedPattern;
		function_definition *_p_function_definition;                    // function_definition
public:
	external_declaration1	                                       // constructor
		( 
			std::string _arg_s_matchedPattern,
				function_definition *_arg__p_function_definition			
		);
	external_declaration1(const external_declaration1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "external_declaration1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_EXTERNAL_DECLARATION1
	virtual std::string pattern()const;							//returns the pattern, here "[function_definition]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const function_definition* get_p_function_definition()const{return _p_function_definition;}							//returns const pointer to _p_function_definition
	      function_definition* get_p_function_definition()     {return _p_function_definition;}							//returns       pointer to _p_function_definition
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
	int *_refCount; 
	std::string _s_matchedPattern;
		declaration *_p_declaration;                                    // declaration
public:
	external_declaration2	                                       // constructor
		( 
			std::string _arg_s_matchedPattern,
				declaration *_arg__p_declaration			
		);
	external_declaration2(const external_declaration2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "external_declaration2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_EXTERNAL_DECLARATION2
	virtual std::string pattern()const;							//returns the pattern, here "[declaration]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const declaration* get_p_declaration()const{return _p_declaration;}							//returns const pointer to _p_declaration
	      declaration* get_p_declaration()     {return _p_declaration;}							//returns       pointer to _p_declaration
	virtual ~external_declaration2 ();

	
		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE type_specifier BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class type_specifier :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
	std::string _s_matchedPattern;
		Token *_p_token1;                                               // VOID
public:
	type_specifier1	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	type_specifier1(const type_specifier1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "type_specifier1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_TYPE_SPECIFIER1
	virtual std::string pattern()const;							//returns the pattern, here "[VOID]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	int *_refCount; 
	std::string _s_matchedPattern;
		struct_or_union_specifier *_p_struct_or_union_specifier;        // struct_or_union_specifier
public:
	type_specifier2	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				struct_or_union_specifier *_arg__p_struct_or_union_specifier			
		);
	type_specifier2(const type_specifier2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "type_specifier2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_TYPE_SPECIFIER2
	virtual std::string pattern()const;							//returns the pattern, here "[struct_or_union_specifier]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const struct_or_union_specifier* get_p_struct_or_union_specifier()const{return _p_struct_or_union_specifier;}							//returns const pointer to _p_struct_or_union_specifier
	      struct_or_union_specifier* get_p_struct_or_union_specifier()     {return _p_struct_or_union_specifier;}							//returns       pointer to _p_struct_or_union_specifier
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
	int *_refCount; 
	std::string _s_matchedPattern;
		enum_specifier *_p_enum_specifier;                              // enum_specifier
public:
	type_specifier3	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				enum_specifier *_arg__p_enum_specifier			
		);
	type_specifier3(const type_specifier3& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "type_specifier3"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_TYPE_SPECIFIER3
	virtual std::string pattern()const;							//returns the pattern, here "[enum_specifier]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const enum_specifier* get_p_enum_specifier()const{return _p_enum_specifier;}							//returns const pointer to _p_enum_specifier
	      enum_specifier* get_p_enum_specifier()     {return _p_enum_specifier;}							//returns       pointer to _p_enum_specifier
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
	int *_refCount; 
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
	compound_statement(const compound_statement& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "compound_statement"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_COMPOUND_STATEMENT
	virtual std::string pattern()const;							//returns the pattern, here "['{',declaration_list,statement_list,'}']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const declaration_list* get_p_declaration_list()const{return _p_declaration_list;}							//returns const pointer to _p_declaration_list
	      declaration_list* get_p_declaration_list()     {return _p_declaration_list;}							//returns       pointer to _p_declaration_list
	const statement_list* get_p_statement_list()const{return _p_statement_list;}							//returns const pointer to _p_statement_list
	      statement_list* get_p_statement_list()     {return _p_statement_list;}							//returns       pointer to _p_statement_list
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
	virtual std::string name()const{return "inclusive_or_expression_item";}			//returns the class name, here "inclusive_or_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const exclusive_or_expression* get_p_exclusive_or_expression()const{return _p_exclusive_or_expression;}							//returns const pointer to _p_exclusive_or_expression
	      exclusive_or_expression* get_p_exclusive_or_expression()     {return _p_exclusive_or_expression;}							//returns const pointer to _p_exclusive_or_expression
	virtual ~inclusive_or_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class inclusive_or_expression                         
                                                                
\*------------------------------------------------------------*/

class inclusive_or_expression
	:public CAst 
{
private:
	typedef std::deque<inclusive_or_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_INCLUSIVE_OR_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[inclusive_or_expression,'|',exclusive_or_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual inclusive_or_expression_item& operator[](int i){return _items[i];}
	virtual ~inclusive_or_expression ();

};

typedef std::deque<inclusive_or_expression_item>::iterator inclusive_or_expression_iterator;
typedef std::deque<inclusive_or_expression_item>::const_iterator inclusive_or_expression_const_iterator;


			
			
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
	virtual std::string name()const{return "pointer_item";}			//returns the class name, here "pointer"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const type_qualifier_list* get_p_type_qualifier_list()const{return _p_type_qualifier_list;}							//returns const pointer to _p_type_qualifier_list
	      type_qualifier_list* get_p_type_qualifier_list()     {return _p_type_qualifier_list;}							//returns const pointer to _p_type_qualifier_list
	virtual ~pointer_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class pointer                         
                                                                
\*------------------------------------------------------------*/

class pointer
	:public CAst 
{
private:
	typedef std::deque<pointer_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_POINTER
	virtual std::string pattern()const;							//returns the pattern, here "['*',type_qualifier_list,pointer]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual pointer_item& operator[](int i){return _items[i];}
	virtual ~pointer ();

};

typedef std::deque<pointer_item>::iterator pointer_iterator;
typedef std::deque<pointer_item>::const_iterator pointer_const_iterator;


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE selection_statement BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class selection_statement :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
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
	selection_statement1(const selection_statement1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "selection_statement1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_SELECTION_STATEMENT1
	virtual std::string pattern()const;							//returns the pattern, here "[IF,'(',expression,')',statement,ELSE,statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const expression* get_p_expression()const{return _p_expression;}							//returns const pointer to _p_expression
	      expression* get_p_expression()     {return _p_expression;}							//returns       pointer to _p_expression
	const statement* get_p_statement()const{return _p_statement;}							//returns const pointer to _p_statement
	      statement* get_p_statement()     {return _p_statement;}							//returns       pointer to _p_statement
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	const statement* get_p_statement1()const{return _p_statement1;}							//returns const pointer to _p_statement1
	      statement* get_p_statement1()     {return _p_statement1;}							//returns       pointer to _p_statement1
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
	int *_refCount; 
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
	selection_statement2(const selection_statement2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "selection_statement2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_SELECTION_STATEMENT2
	virtual std::string pattern()const;							//returns the pattern, here "[SWITCH,'(',expression,')',statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const expression* get_p_expression()const{return _p_expression;}							//returns const pointer to _p_expression
	      expression* get_p_expression()     {return _p_expression;}							//returns       pointer to _p_expression
	const statement* get_p_statement()const{return _p_statement;}							//returns const pointer to _p_statement
	      statement* get_p_statement()     {return _p_statement;}							//returns       pointer to _p_statement
	virtual ~selection_statement2 ();

	
		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE postfix_expression BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class postfix_expression :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
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
	postfix_expression1(const postfix_expression1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "postfix_expression1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_POSTFIX_EXPRESSION1
	virtual std::string pattern()const;							//returns the pattern, here "[postfix_expression,'[',expression,']']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const postfix_expression* get_p_postfix_expression()const{return _p_postfix_expression;}							//returns const pointer to _p_postfix_expression
	      postfix_expression* get_p_postfix_expression()     {return _p_postfix_expression;}							//returns       pointer to _p_postfix_expression
	const expression* get_p_expression()const{return _p_expression;}							//returns const pointer to _p_expression
	      expression* get_p_expression()     {return _p_expression;}							//returns       pointer to _p_expression
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
	int *_refCount; 
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
	postfix_expression2(const postfix_expression2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "postfix_expression2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_POSTFIX_EXPRESSION2
	virtual std::string pattern()const;							//returns the pattern, here "[postfix_expression,'(',argument_expression_list,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const postfix_expression* get_p_postfix_expression()const{return _p_postfix_expression;}							//returns const pointer to _p_postfix_expression
	      postfix_expression* get_p_postfix_expression()     {return _p_postfix_expression;}							//returns       pointer to _p_postfix_expression
	const argument_expression_list* get_p_argument_expression_list()const{return _p_argument_expression_list;}							//returns const pointer to _p_argument_expression_list
	      argument_expression_list* get_p_argument_expression_list()     {return _p_argument_expression_list;}							//returns       pointer to _p_argument_expression_list
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
	int *_refCount; 
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
	postfix_expression3(const postfix_expression3& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "postfix_expression3"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_POSTFIX_EXPRESSION3
	virtual std::string pattern()const;							//returns the pattern, here "[postfix_expression,'.',IDENTIFIER]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const postfix_expression* get_p_postfix_expression()const{return _p_postfix_expression;}							//returns const pointer to _p_postfix_expression
	      postfix_expression* get_p_postfix_expression()     {return _p_postfix_expression;}							//returns       pointer to _p_postfix_expression
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	const Token* get_p_token2()const{return _p_token2;}							//returns const pointer to _p_token2
	      Token* get_p_token2()     {return _p_token2;}							//returns       pointer to _p_token2
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
	int *_refCount; 
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
	postfix_expression4(const postfix_expression4& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "postfix_expression4"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_POSTFIX_EXPRESSION4
	virtual std::string pattern()const;							//returns the pattern, here "[postfix_expression,INC_OP]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const postfix_expression* get_p_postfix_expression()const{return _p_postfix_expression;}							//returns const pointer to _p_postfix_expression
	      postfix_expression* get_p_postfix_expression()     {return _p_postfix_expression;}							//returns       pointer to _p_postfix_expression
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	int *_refCount; 
	std::string _s_matchedPattern;
		primary_expression *_p_primary_expression;                      // primary_expression
public:
	postfix_expression5	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				primary_expression *_arg__p_primary_expression			
		);
	postfix_expression5(const postfix_expression5& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "postfix_expression5"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_POSTFIX_EXPRESSION5
	virtual std::string pattern()const;							//returns the pattern, here "[primary_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const primary_expression* get_p_primary_expression()const{return _p_primary_expression;}							//returns const pointer to _p_primary_expression
	      primary_expression* get_p_primary_expression()     {return _p_primary_expression;}							//returns       pointer to _p_primary_expression
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
	virtual std::string name()const{return "and_expression_item";}			//returns the class name, here "and_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const equality_expression* get_p_equality_expression()const{return _p_equality_expression;}							//returns const pointer to _p_equality_expression
	      equality_expression* get_p_equality_expression()     {return _p_equality_expression;}							//returns const pointer to _p_equality_expression
	virtual ~and_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class and_expression                         
                                                                
\*------------------------------------------------------------*/

class and_expression
	:public CAst 
{
private:
	typedef std::deque<and_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_AND_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[and_expression,'&',equality_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual and_expression_item& operator[](int i){return _items[i];}
	virtual ~and_expression ();

};

typedef std::deque<and_expression_item>::iterator and_expression_iterator;
typedef std::deque<and_expression_item>::const_iterator and_expression_const_iterator;


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE statement BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class statement :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
	std::string _s_matchedPattern;
		labeled_statement *_p_labeled_statement;                        // labeled_statement
public:
	statement1	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				labeled_statement *_arg__p_labeled_statement			
		);
	statement1(const statement1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "statement1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STATEMENT1
	virtual std::string pattern()const;							//returns the pattern, here "[labeled_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const labeled_statement* get_p_labeled_statement()const{return _p_labeled_statement;}							//returns const pointer to _p_labeled_statement
	      labeled_statement* get_p_labeled_statement()     {return _p_labeled_statement;}							//returns       pointer to _p_labeled_statement
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
	int *_refCount; 
	std::string _s_matchedPattern;
		compound_statement *_p_compound_statement;                      // compound_statement
public:
	statement2	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				compound_statement *_arg__p_compound_statement			
		);
	statement2(const statement2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "statement2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STATEMENT2
	virtual std::string pattern()const;							//returns the pattern, here "[compound_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const compound_statement* get_p_compound_statement()const{return _p_compound_statement;}							//returns const pointer to _p_compound_statement
	      compound_statement* get_p_compound_statement()     {return _p_compound_statement;}							//returns       pointer to _p_compound_statement
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
	int *_refCount; 
	std::string _s_matchedPattern;
		expression_statement *_p_expression_statement;                  // expression_statement
public:
	statement3	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression_statement *_arg__p_expression_statement			
		);
	statement3(const statement3& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "statement3"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STATEMENT3
	virtual std::string pattern()const;							//returns the pattern, here "[expression_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const expression_statement* get_p_expression_statement()const{return _p_expression_statement;}							//returns const pointer to _p_expression_statement
	      expression_statement* get_p_expression_statement()     {return _p_expression_statement;}							//returns       pointer to _p_expression_statement
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
	int *_refCount; 
	std::string _s_matchedPattern;
		selection_statement *_p_selection_statement;                    // selection_statement
public:
	statement4	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				selection_statement *_arg__p_selection_statement			
		);
	statement4(const statement4& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "statement4"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STATEMENT4
	virtual std::string pattern()const;							//returns the pattern, here "[selection_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const selection_statement* get_p_selection_statement()const{return _p_selection_statement;}							//returns const pointer to _p_selection_statement
	      selection_statement* get_p_selection_statement()     {return _p_selection_statement;}							//returns       pointer to _p_selection_statement
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
	int *_refCount; 
	std::string _s_matchedPattern;
		iteration_statement *_p_iteration_statement;                    // iteration_statement
public:
	statement5	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				iteration_statement *_arg__p_iteration_statement			
		);
	statement5(const statement5& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "statement5"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STATEMENT5
	virtual std::string pattern()const;							//returns the pattern, here "[iteration_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const iteration_statement* get_p_iteration_statement()const{return _p_iteration_statement;}							//returns const pointer to _p_iteration_statement
	      iteration_statement* get_p_iteration_statement()     {return _p_iteration_statement;}							//returns       pointer to _p_iteration_statement
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
	int *_refCount; 
	std::string _s_matchedPattern;
		jump_statement *_p_jump_statement;                              // jump_statement
public:
	statement6	                                                  // constructor
		( 
			std::string _arg_s_matchedPattern,
				jump_statement *_arg__p_jump_statement			
		);
	statement6(const statement6& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "statement6"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STATEMENT6
	virtual std::string pattern()const;							//returns the pattern, here "[jump_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const jump_statement* get_p_jump_statement()const{return _p_jump_statement;}							//returns const pointer to _p_jump_statement
	      jump_statement* get_p_jump_statement()     {return _p_jump_statement;}							//returns       pointer to _p_jump_statement
	virtual ~statement6 ();

	
		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE cast_expression BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class cast_expression :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
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
	cast_expression1(const cast_expression1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "cast_expression1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_CAST_EXPRESSION1
	virtual std::string pattern()const;							//returns the pattern, here "['(',type_name,')',cast_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const type_name* get_p_type_name()const{return _p_type_name;}							//returns const pointer to _p_type_name
	      type_name* get_p_type_name()     {return _p_type_name;}							//returns       pointer to _p_type_name
	const cast_expression* get_p_cast_expression()const{return _p_cast_expression;}							//returns const pointer to _p_cast_expression
	      cast_expression* get_p_cast_expression()     {return _p_cast_expression;}							//returns       pointer to _p_cast_expression
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
	int *_refCount; 
	std::string _s_matchedPattern;
		unary_expression *_p_unary_expression;                          // unary_expression
public:
	cast_expression2	                                            // constructor
		( 
			std::string _arg_s_matchedPattern,
				unary_expression *_arg__p_unary_expression			
		);
	cast_expression2(const cast_expression2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "cast_expression2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_CAST_EXPRESSION2
	virtual std::string pattern()const;							//returns the pattern, here "[unary_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const unary_expression* get_p_unary_expression()const{return _p_unary_expression;}							//returns const pointer to _p_unary_expression
	      unary_expression* get_p_unary_expression()     {return _p_unary_expression;}							//returns       pointer to _p_unary_expression
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
	int *_refCount; 
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
	init_declarator(const init_declarator& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "init_declarator"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_INIT_DECLARATOR
	virtual std::string pattern()const;							//returns the pattern, here "[declarator,'=',initializer]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const declarator* get_p_declarator()const{return _p_declarator;}							//returns const pointer to _p_declarator
	      declarator* get_p_declarator()     {return _p_declarator;}							//returns       pointer to _p_declarator
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	const initializer* get_p_initializer()const{return _p_initializer;}							//returns const pointer to _p_initializer
	      initializer* get_p_initializer()     {return _p_initializer;}							//returns       pointer to _p_initializer
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
	virtual std::string name()const{return "struct_declarator_list_item";}			//returns the class name, here "struct_declarator_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const struct_declarator* get_p_struct_declarator()const{return _p_struct_declarator;}							//returns const pointer to _p_struct_declarator
	      struct_declarator* get_p_struct_declarator()     {return _p_struct_declarator;}							//returns const pointer to _p_struct_declarator
	virtual ~struct_declarator_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class struct_declarator_list                         
                                                                
\*------------------------------------------------------------*/

class struct_declarator_list
	:public CAst 
{
private:
	typedef std::deque<struct_declarator_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STRUCT_DECLARATOR_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[struct_declarator_list,',',struct_declarator]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual struct_declarator_list_item& operator[](int i){return _items[i];}
	virtual ~struct_declarator_list ();

};

typedef std::deque<struct_declarator_list_item>::iterator struct_declarator_list_iterator;
typedef std::deque<struct_declarator_list_item>::const_iterator struct_declarator_list_const_iterator;


			
			
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
	virtual std::string name()const{return "logical_or_expression_item";}			//returns the class name, here "logical_or_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const logical_and_expression* get_p_logical_and_expression()const{return _p_logical_and_expression;}							//returns const pointer to _p_logical_and_expression
	      logical_and_expression* get_p_logical_and_expression()     {return _p_logical_and_expression;}							//returns const pointer to _p_logical_and_expression
	virtual ~logical_or_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class logical_or_expression                         
                                                                
\*------------------------------------------------------------*/

class logical_or_expression
	:public CAst 
{
private:
	typedef std::deque<logical_or_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_LOGICAL_OR_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[logical_or_expression,OR_OP,logical_and_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual logical_or_expression_item& operator[](int i){return _items[i];}
	virtual ~logical_or_expression ();

};

typedef std::deque<logical_or_expression_item>::iterator logical_or_expression_iterator;
typedef std::deque<logical_or_expression_item>::const_iterator logical_or_expression_const_iterator;


			
			

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
	int *_refCount; 
	std::string _s_matchedPattern;
		Token *_p_token1;                                               // '&'
public:
	unary_operator	                                              // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	unary_operator(const unary_operator& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "unary_operator"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_UNARY_OPERATOR
	virtual std::string pattern()const;							//returns the pattern, here "['&']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	virtual std::string name()const{return "relational_expression_item";}			//returns the class name, here "relational_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns const pointer to _p_token1
	const shift_expression* get_p_shift_expression()const{return _p_shift_expression;}							//returns const pointer to _p_shift_expression
	      shift_expression* get_p_shift_expression()     {return _p_shift_expression;}							//returns const pointer to _p_shift_expression
	virtual ~relational_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class relational_expression                         
                                                                
\*------------------------------------------------------------*/

class relational_expression
	:public CAst 
{
private:
	typedef std::deque<relational_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_RELATIONAL_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[relational_expression,'<',shift_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual relational_expression_item& operator[](int i){return _items[i];}
	virtual ~relational_expression ();

};

typedef std::deque<relational_expression_item>::iterator relational_expression_iterator;
typedef std::deque<relational_expression_item>::const_iterator relational_expression_const_iterator;


			
			

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
	int *_refCount; 
	std::string _s_matchedPattern;
		Token *_p_token1;                                               // STRUCT
public:
	struct_or_union	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	struct_or_union(const struct_or_union& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "struct_or_union"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STRUCT_OR_UNION
	virtual std::string pattern()const;							//returns the pattern, here "[STRUCT]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	int *_refCount; 
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
	enumerator(const enumerator& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "enumerator"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ENUMERATOR
	virtual std::string pattern()const;							//returns the pattern, here "[IDENTIFIER,'=',constant_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	const Token* get_p_token2()const{return _p_token2;}							//returns const pointer to _p_token2
	      Token* get_p_token2()     {return _p_token2;}							//returns       pointer to _p_token2
	const constant_expression* get_p_constant_expression()const{return _p_constant_expression;}							//returns const pointer to _p_constant_expression
	      constant_expression* get_p_constant_expression()     {return _p_constant_expression;}							//returns       pointer to _p_constant_expression
	virtual ~enumerator ();

	
		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE assignment_expression BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class assignment_expression :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
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
	assignment_expression1(const assignment_expression1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "assignment_expression1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ASSIGNMENT_EXPRESSION1
	virtual std::string pattern()const;							//returns the pattern, here "[unary_expression,assignment_operator,assignment_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const unary_expression* get_p_unary_expression()const{return _p_unary_expression;}							//returns const pointer to _p_unary_expression
	      unary_expression* get_p_unary_expression()     {return _p_unary_expression;}							//returns       pointer to _p_unary_expression
	const assignment_operator* get_p_assignment_operator()const{return _p_assignment_operator;}							//returns const pointer to _p_assignment_operator
	      assignment_operator* get_p_assignment_operator()     {return _p_assignment_operator;}							//returns       pointer to _p_assignment_operator
	const assignment_expression* get_p_assignment_expression()const{return _p_assignment_expression;}							//returns const pointer to _p_assignment_expression
	      assignment_expression* get_p_assignment_expression()     {return _p_assignment_expression;}							//returns       pointer to _p_assignment_expression
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
	int *_refCount; 
	std::string _s_matchedPattern;
		conditional_expression *_p_conditional_expression;              // conditional_expression
public:
	assignment_expression2	                                      // constructor
		( 
			std::string _arg_s_matchedPattern,
				conditional_expression *_arg__p_conditional_expression			
		);
	assignment_expression2(const assignment_expression2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "assignment_expression2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ASSIGNMENT_EXPRESSION2
	virtual std::string pattern()const;							//returns the pattern, here "[conditional_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const conditional_expression* get_p_conditional_expression()const{return _p_conditional_expression;}							//returns const pointer to _p_conditional_expression
	      conditional_expression* get_p_conditional_expression()     {return _p_conditional_expression;}							//returns       pointer to _p_conditional_expression
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
	int *_refCount; 
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
	parameter_type_list(const parameter_type_list& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "parameter_type_list"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_PARAMETER_TYPE_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[parameter_list,',',ELLIPSIS]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const parameter_list* get_p_parameter_list()const{return _p_parameter_list;}							//returns const pointer to _p_parameter_list
	      parameter_list* get_p_parameter_list()     {return _p_parameter_list;}							//returns       pointer to _p_parameter_list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	const Token* get_p_token2()const{return _p_token2;}							//returns const pointer to _p_token2
	      Token* get_p_token2()     {return _p_token2;}							//returns       pointer to _p_token2
	virtual ~parameter_type_list ();

	
		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE parameter_declaration BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class parameter_declaration :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
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
	parameter_declaration1(const parameter_declaration1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "parameter_declaration1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_PARAMETER_DECLARATION1
	virtual std::string pattern()const;							//returns the pattern, here "[declaration_specifiers,declarator]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const declaration_specifiers* get_p_declaration_specifiers()const{return _p_declaration_specifiers;}							//returns const pointer to _p_declaration_specifiers
	      declaration_specifiers* get_p_declaration_specifiers()     {return _p_declaration_specifiers;}							//returns       pointer to _p_declaration_specifiers
	const declarator* get_p_declarator()const{return _p_declarator;}							//returns const pointer to _p_declarator
	      declarator* get_p_declarator()     {return _p_declarator;}							//returns       pointer to _p_declarator
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
	int *_refCount; 
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
	parameter_declaration2(const parameter_declaration2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "parameter_declaration2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_PARAMETER_DECLARATION2
	virtual std::string pattern()const;							//returns the pattern, here "[declaration_specifiers,abstract_declarator]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const declaration_specifiers* get_p_declaration_specifiers()const{return _p_declaration_specifiers;}							//returns const pointer to _p_declaration_specifiers
	      declaration_specifiers* get_p_declaration_specifiers()     {return _p_declaration_specifiers;}							//returns       pointer to _p_declaration_specifiers
	const abstract_declarator* get_p_abstract_declarator()const{return _p_abstract_declarator;}							//returns const pointer to _p_abstract_declarator
	      abstract_declarator* get_p_abstract_declarator()     {return _p_abstract_declarator;}							//returns       pointer to _p_abstract_declarator
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
	virtual std::string name()const{return "multiplicative_expression_item";}			//returns the class name, here "multiplicative_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns const pointer to _p_token1
	const cast_expression* get_p_cast_expression()const{return _p_cast_expression;}							//returns const pointer to _p_cast_expression
	      cast_expression* get_p_cast_expression()     {return _p_cast_expression;}							//returns const pointer to _p_cast_expression
	virtual ~multiplicative_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class multiplicative_expression                         
                                                                
\*------------------------------------------------------------*/

class multiplicative_expression
	:public CAst 
{
private:
	typedef std::deque<multiplicative_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_MULTIPLICATIVE_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[multiplicative_expression,'*',cast_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual multiplicative_expression_item& operator[](int i){return _items[i];}
	virtual ~multiplicative_expression ();

};

typedef std::deque<multiplicative_expression_item>::iterator multiplicative_expression_iterator;
typedef std::deque<multiplicative_expression_item>::const_iterator multiplicative_expression_const_iterator;


			
			
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
	virtual std::string name()const{return "type_qualifier_list_item";}			//returns the class name, here "type_qualifier_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const type_qualifier* get_p_type_qualifier()const{return _p_type_qualifier;}							//returns const pointer to _p_type_qualifier
	      type_qualifier* get_p_type_qualifier()     {return _p_type_qualifier;}							//returns const pointer to _p_type_qualifier
	virtual ~type_qualifier_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class type_qualifier_list                         
                                                                
\*------------------------------------------------------------*/

class type_qualifier_list
	:public CAst 
{
private:
	typedef std::deque<type_qualifier_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_TYPE_QUALIFIER_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[type_qualifier_list,type_qualifier]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual type_qualifier_list_item& operator[](int i){return _items[i];}
	virtual ~type_qualifier_list ();

};

typedef std::deque<type_qualifier_list_item>::iterator type_qualifier_list_iterator;
typedef std::deque<type_qualifier_list_item>::const_iterator type_qualifier_list_const_iterator;


			
			
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
	virtual std::string name()const{return "argument_expression_list_item";}			//returns the class name, here "argument_expression_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const assignment_expression* get_p_assignment_expression()const{return _p_assignment_expression;}							//returns const pointer to _p_assignment_expression
	      assignment_expression* get_p_assignment_expression()     {return _p_assignment_expression;}							//returns const pointer to _p_assignment_expression
	virtual ~argument_expression_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class argument_expression_list                         
                                                                
\*------------------------------------------------------------*/

class argument_expression_list
	:public CAst 
{
private:
	typedef std::deque<argument_expression_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ARGUMENT_EXPRESSION_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[argument_expression_list,',',assignment_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual argument_expression_list_item& operator[](int i){return _items[i];}
	virtual ~argument_expression_list ();

};

typedef std::deque<argument_expression_list_item>::iterator argument_expression_list_iterator;
typedef std::deque<argument_expression_list_item>::const_iterator argument_expression_list_const_iterator;


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE direct_abstract_declarator BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class direct_abstract_declarator :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
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
	direct_abstract_declarator1(const direct_abstract_declarator1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "direct_abstract_declarator1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR1
	virtual std::string pattern()const;							//returns the pattern, here "[direct_abstract_declarator,'[',constant_expression,']']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const direct_abstract_declarator* get_p_direct_abstract_declarator()const{return _p_direct_abstract_declarator;}							//returns const pointer to _p_direct_abstract_declarator
	      direct_abstract_declarator* get_p_direct_abstract_declarator()     {return _p_direct_abstract_declarator;}							//returns       pointer to _p_direct_abstract_declarator
	const constant_expression* get_p_constant_expression()const{return _p_constant_expression;}							//returns const pointer to _p_constant_expression
	      constant_expression* get_p_constant_expression()     {return _p_constant_expression;}							//returns       pointer to _p_constant_expression
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
	int *_refCount; 
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
	direct_abstract_declarator2(const direct_abstract_declarator2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "direct_abstract_declarator2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR2
	virtual std::string pattern()const;							//returns the pattern, here "[direct_abstract_declarator,'(',parameter_type_list,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const direct_abstract_declarator* get_p_direct_abstract_declarator()const{return _p_direct_abstract_declarator;}							//returns const pointer to _p_direct_abstract_declarator
	      direct_abstract_declarator* get_p_direct_abstract_declarator()     {return _p_direct_abstract_declarator;}							//returns       pointer to _p_direct_abstract_declarator
	const parameter_type_list* get_p_parameter_type_list()const{return _p_parameter_type_list;}							//returns const pointer to _p_parameter_type_list
	      parameter_type_list* get_p_parameter_type_list()     {return _p_parameter_type_list;}							//returns       pointer to _p_parameter_type_list
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
	int *_refCount; 
	std::string _s_matchedPattern;
		abstract_declarator *_p_abstract_declarator;                    // abstract_declarator
public:
	direct_abstract_declarator3	                                 // constructor
		( 
			std::string _arg_s_matchedPattern,
				abstract_declarator *_arg__p_abstract_declarator			
		);
	direct_abstract_declarator3(const direct_abstract_declarator3& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "direct_abstract_declarator3"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR3
	virtual std::string pattern()const;							//returns the pattern, here "['(',abstract_declarator,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const abstract_declarator* get_p_abstract_declarator()const{return _p_abstract_declarator;}							//returns const pointer to _p_abstract_declarator
	      abstract_declarator* get_p_abstract_declarator()     {return _p_abstract_declarator;}							//returns       pointer to _p_abstract_declarator
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
	virtual std::string name()const{return "equality_expression_item";}			//returns the class name, here "equality_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns const pointer to _p_token1
	const relational_expression* get_p_relational_expression()const{return _p_relational_expression;}							//returns const pointer to _p_relational_expression
	      relational_expression* get_p_relational_expression()     {return _p_relational_expression;}							//returns const pointer to _p_relational_expression
	virtual ~equality_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class equality_expression                         
                                                                
\*------------------------------------------------------------*/

class equality_expression
	:public CAst 
{
private:
	typedef std::deque<equality_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_EQUALITY_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[equality_expression,EQ_OP,relational_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual equality_expression_item& operator[](int i){return _items[i];}
	virtual ~equality_expression ();

};

typedef std::deque<equality_expression_item>::iterator equality_expression_iterator;
typedef std::deque<equality_expression_item>::const_iterator equality_expression_const_iterator;


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE primary_expression BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class primary_expression :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
	std::string _s_matchedPattern;
		expression *_p_expression;                                      // expression
public:
	primary_expression1	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression *_arg__p_expression			
		);
	primary_expression1(const primary_expression1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "primary_expression1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_PRIMARY_EXPRESSION1
	virtual std::string pattern()const;							//returns the pattern, here "['(',expression,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const expression* get_p_expression()const{return _p_expression;}							//returns const pointer to _p_expression
	      expression* get_p_expression()     {return _p_expression;}							//returns       pointer to _p_expression
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
	int *_refCount; 
	std::string _s_matchedPattern;
		Token *_p_token1;                                               // IDENTIFIER
public:
	primary_expression2	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	primary_expression2(const primary_expression2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "primary_expression2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_PRIMARY_EXPRESSION2
	virtual std::string pattern()const;							//returns the pattern, here "[IDENTIFIER]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	virtual ~primary_expression2 ();

	
		
};


			
/*=============================================================================================================*\
                                                                                                                 
 	THE declaration_specifiers BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class declaration_specifiers :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	virtual std::string name()const{return "declaration_specifiers1_item";}			//returns the class name, here "declaration_specifiers1"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const storage_class_specifier* get_p_storage_class_specifier()const{return _p_storage_class_specifier;}							//returns const pointer to _p_storage_class_specifier
	      storage_class_specifier* get_p_storage_class_specifier()     {return _p_storage_class_specifier;}							//returns const pointer to _p_storage_class_specifier
	virtual ~declaration_specifiers1_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class declaration_specifiers1                         
                                                                
\*------------------------------------------------------------*/

class declaration_specifiers1
	:public declaration_specifiers 
{
private:
	typedef std::deque<declaration_specifiers1_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DECLARATION_SPECIFIERS1
	virtual std::string pattern()const;							//returns the pattern, here "[storage_class_specifier,declaration_specifiers]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual declaration_specifiers1_item& operator[](int i){return _items[i];}
	virtual ~declaration_specifiers1 ();

};

typedef std::deque<declaration_specifiers1_item>::iterator declaration_specifiers1_iterator;
typedef std::deque<declaration_specifiers1_item>::const_iterator declaration_specifiers1_const_iterator;


			
			
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
	virtual std::string name()const{return "declaration_specifiers2_item";}			//returns the class name, here "declaration_specifiers2"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const type_specifier* get_p_type_specifier()const{return _p_type_specifier;}							//returns const pointer to _p_type_specifier
	      type_specifier* get_p_type_specifier()     {return _p_type_specifier;}							//returns const pointer to _p_type_specifier
	virtual ~declaration_specifiers2_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class declaration_specifiers2                         
                                                                
\*------------------------------------------------------------*/

class declaration_specifiers2
	:public declaration_specifiers 
{
private:
	typedef std::deque<declaration_specifiers2_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DECLARATION_SPECIFIERS2
	virtual std::string pattern()const;							//returns the pattern, here "[type_specifier,declaration_specifiers]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual declaration_specifiers2_item& operator[](int i){return _items[i];}
	virtual ~declaration_specifiers2 ();

};

typedef std::deque<declaration_specifiers2_item>::iterator declaration_specifiers2_iterator;
typedef std::deque<declaration_specifiers2_item>::const_iterator declaration_specifiers2_const_iterator;


			
			
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
	virtual std::string name()const{return "declaration_specifiers3_item";}			//returns the class name, here "declaration_specifiers3"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const type_qualifier* get_p_type_qualifier()const{return _p_type_qualifier;}							//returns const pointer to _p_type_qualifier
	      type_qualifier* get_p_type_qualifier()     {return _p_type_qualifier;}							//returns const pointer to _p_type_qualifier
	virtual ~declaration_specifiers3_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class declaration_specifiers3                         
                                                                
\*------------------------------------------------------------*/

class declaration_specifiers3
	:public declaration_specifiers 
{
private:
	typedef std::deque<declaration_specifiers3_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DECLARATION_SPECIFIERS3
	virtual std::string pattern()const;							//returns the pattern, here "[type_qualifier,declaration_specifiers]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual declaration_specifiers3_item& operator[](int i){return _items[i];}
	virtual ~declaration_specifiers3 ();

};

typedef std::deque<declaration_specifiers3_item>::iterator declaration_specifiers3_iterator;
typedef std::deque<declaration_specifiers3_item>::const_iterator declaration_specifiers3_const_iterator;


			
			

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
	int *_refCount; 
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
	declaration(const declaration& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "declaration"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DECLARATION
	virtual std::string pattern()const;							//returns the pattern, here "[declaration_specifiers,init_declarator_list,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const declaration_specifiers* get_p_declaration_specifiers()const{return _p_declaration_specifiers;}							//returns const pointer to _p_declaration_specifiers
	      declaration_specifiers* get_p_declaration_specifiers()     {return _p_declaration_specifiers;}							//returns       pointer to _p_declaration_specifiers
	const init_declarator_list* get_p_init_declarator_list()const{return _p_init_declarator_list;}							//returns const pointer to _p_init_declarator_list
	      init_declarator_list* get_p_init_declarator_list()     {return _p_init_declarator_list;}							//returns       pointer to _p_init_declarator_list
	virtual ~declaration ();

	
		
};


			

/*=============================================================================================================*\
                                                                                                                 
 	THE direct_declarator BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class direct_declarator :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
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
	direct_declarator1(const direct_declarator1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "direct_declarator1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DIRECT_DECLARATOR1
	virtual std::string pattern()const;							//returns the pattern, here "[direct_declarator,'[',constant_expression,']']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const direct_declarator* get_p_direct_declarator()const{return _p_direct_declarator;}							//returns const pointer to _p_direct_declarator
	      direct_declarator* get_p_direct_declarator()     {return _p_direct_declarator;}							//returns       pointer to _p_direct_declarator
	const constant_expression* get_p_constant_expression()const{return _p_constant_expression;}							//returns const pointer to _p_constant_expression
	      constant_expression* get_p_constant_expression()     {return _p_constant_expression;}							//returns       pointer to _p_constant_expression
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
	int *_refCount; 
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
	direct_declarator2(const direct_declarator2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "direct_declarator2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DIRECT_DECLARATOR2
	virtual std::string pattern()const;							//returns the pattern, here "[direct_declarator,'(',parameter_type_list,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const direct_declarator* get_p_direct_declarator()const{return _p_direct_declarator;}							//returns const pointer to _p_direct_declarator
	      direct_declarator* get_p_direct_declarator()     {return _p_direct_declarator;}							//returns       pointer to _p_direct_declarator
	const parameter_type_list* get_p_parameter_type_list()const{return _p_parameter_type_list;}							//returns const pointer to _p_parameter_type_list
	      parameter_type_list* get_p_parameter_type_list()     {return _p_parameter_type_list;}							//returns       pointer to _p_parameter_type_list
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
	int *_refCount; 
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
	direct_declarator3(const direct_declarator3& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "direct_declarator3"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DIRECT_DECLARATOR3
	virtual std::string pattern()const;							//returns the pattern, here "[direct_declarator,'(',identifier_list,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const direct_declarator* get_p_direct_declarator()const{return _p_direct_declarator;}							//returns const pointer to _p_direct_declarator
	      direct_declarator* get_p_direct_declarator()     {return _p_direct_declarator;}							//returns       pointer to _p_direct_declarator
	const identifier_list* get_p_identifier_list()const{return _p_identifier_list;}							//returns const pointer to _p_identifier_list
	      identifier_list* get_p_identifier_list()     {return _p_identifier_list;}							//returns       pointer to _p_identifier_list
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
	int *_refCount; 
	std::string _s_matchedPattern;
		declarator *_p_declarator;                                      // declarator
public:
	direct_declarator4	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				declarator *_arg__p_declarator			
		);
	direct_declarator4(const direct_declarator4& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "direct_declarator4"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DIRECT_DECLARATOR4
	virtual std::string pattern()const;							//returns the pattern, here "['(',declarator,')']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const declarator* get_p_declarator()const{return _p_declarator;}							//returns const pointer to _p_declarator
	      declarator* get_p_declarator()     {return _p_declarator;}							//returns       pointer to _p_declarator
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
	int *_refCount; 
	std::string _s_matchedPattern;
		Token *_p_token1;                                               // IDENTIFIER
public:
	direct_declarator5	                                          // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	direct_declarator5(const direct_declarator5& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "direct_declarator5"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DIRECT_DECLARATOR5
	virtual std::string pattern()const;							//returns the pattern, here "[IDENTIFIER]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	virtual std::string name()const{return "logical_and_expression_item";}			//returns the class name, here "logical_and_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const inclusive_or_expression* get_p_inclusive_or_expression()const{return _p_inclusive_or_expression;}							//returns const pointer to _p_inclusive_or_expression
	      inclusive_or_expression* get_p_inclusive_or_expression()     {return _p_inclusive_or_expression;}							//returns const pointer to _p_inclusive_or_expression
	virtual ~logical_and_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class logical_and_expression                         
                                                                
\*------------------------------------------------------------*/

class logical_and_expression
	:public CAst 
{
private:
	typedef std::deque<logical_and_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_LOGICAL_AND_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[logical_and_expression,AND_OP,inclusive_or_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual logical_and_expression_item& operator[](int i){return _items[i];}
	virtual ~logical_and_expression ();

};

typedef std::deque<logical_and_expression_item>::iterator logical_and_expression_iterator;
typedef std::deque<logical_and_expression_item>::const_iterator logical_and_expression_const_iterator;


			
			
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
	virtual std::string name()const{return "init_declarator_list_item";}			//returns the class name, here "init_declarator_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const init_declarator* get_p_init_declarator()const{return _p_init_declarator;}							//returns const pointer to _p_init_declarator
	      init_declarator* get_p_init_declarator()     {return _p_init_declarator;}							//returns const pointer to _p_init_declarator
	virtual ~init_declarator_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class init_declarator_list                         
                                                                
\*------------------------------------------------------------*/

class init_declarator_list
	:public CAst 
{
private:
	typedef std::deque<init_declarator_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_INIT_DECLARATOR_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[init_declarator_list,',',init_declarator]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual init_declarator_list_item& operator[](int i){return _items[i];}
	virtual ~init_declarator_list ();

};

typedef std::deque<init_declarator_list_item>::iterator init_declarator_list_iterator;
typedef std::deque<init_declarator_list_item>::const_iterator init_declarator_list_const_iterator;


			
			
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
	virtual std::string name()const{return "shift_expression_item";}			//returns the class name, here "shift_expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns const pointer to _p_token1
	const additive_expression* get_p_additive_expression()const{return _p_additive_expression;}							//returns const pointer to _p_additive_expression
	      additive_expression* get_p_additive_expression()     {return _p_additive_expression;}							//returns const pointer to _p_additive_expression
	virtual ~shift_expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class shift_expression                         
                                                                
\*------------------------------------------------------------*/

class shift_expression
	:public CAst 
{
private:
	typedef std::deque<shift_expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_SHIFT_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[shift_expression,LEFT_OP,additive_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual shift_expression_item& operator[](int i){return _items[i];}
	virtual ~shift_expression ();

};

typedef std::deque<shift_expression_item>::iterator shift_expression_iterator;
typedef std::deque<shift_expression_item>::const_iterator shift_expression_const_iterator;


			
			
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
	virtual std::string name()const{return "identifier_list_item";}			//returns the class name, here "identifier_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns const pointer to _p_token1
	virtual ~identifier_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class identifier_list                         
                                                                
\*------------------------------------------------------------*/

class identifier_list
	:public CAst 
{
private:
	typedef std::deque<identifier_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_IDENTIFIER_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[identifier_list,',',IDENTIFIER]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual identifier_list_item& operator[](int i){return _items[i];}
	virtual ~identifier_list ();

};

typedef std::deque<identifier_list_item>::iterator identifier_list_iterator;
typedef std::deque<identifier_list_item>::const_iterator identifier_list_const_iterator;


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE jump_statement BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class jump_statement :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
	std::string _s_matchedPattern;
		Token *_p_token1;                                               // IDENTIFIER
public:
	jump_statement1	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	jump_statement1(const jump_statement1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "jump_statement1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_JUMP_STATEMENT1
	virtual std::string pattern()const;							//returns the pattern, here "[GOTO,IDENTIFIER,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	int *_refCount; 
	std::string _s_matchedPattern;
		expression *_p_expression;                                      // expression
public:
	jump_statement2	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				expression *_arg__p_expression			
		);
	jump_statement2(const jump_statement2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "jump_statement2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_JUMP_STATEMENT2
	virtual std::string pattern()const;							//returns the pattern, here "[RETURN,expression,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const expression* get_p_expression()const{return _p_expression;}							//returns const pointer to _p_expression
	      expression* get_p_expression()     {return _p_expression;}							//returns       pointer to _p_expression
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
	int *_refCount; 
	std::string _s_matchedPattern;
		Token *_p_token1;                                               // CONTINUE
public:
	jump_statement3	                                             // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	jump_statement3(const jump_statement3& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "jump_statement3"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_JUMP_STATEMENT3
	virtual std::string pattern()const;							//returns the pattern, here "[CONTINUE,';']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	int *_refCount; 
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
	struct_declarator(const struct_declarator& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "struct_declarator"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STRUCT_DECLARATOR
	virtual std::string pattern()const;							//returns the pattern, here "[declarator,':',constant_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const declarator* get_p_declarator()const{return _p_declarator;}							//returns const pointer to _p_declarator
	      declarator* get_p_declarator()     {return _p_declarator;}							//returns       pointer to _p_declarator
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	const constant_expression* get_p_constant_expression()const{return _p_constant_expression;}							//returns const pointer to _p_constant_expression
	      constant_expression* get_p_constant_expression()     {return _p_constant_expression;}							//returns       pointer to _p_constant_expression
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
	int *_refCount; 
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
	function_definition(const function_definition& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "function_definition"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_FUNCTION_DEFINITION
	virtual std::string pattern()const;							//returns the pattern, here "[declaration_specifiers,declarator,declaration_list,compound_statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const declaration_specifiers* get_p_declaration_specifiers()const{return _p_declaration_specifiers;}							//returns const pointer to _p_declaration_specifiers
	      declaration_specifiers* get_p_declaration_specifiers()     {return _p_declaration_specifiers;}							//returns       pointer to _p_declaration_specifiers
	const declarator* get_p_declarator()const{return _p_declarator;}							//returns const pointer to _p_declarator
	      declarator* get_p_declarator()     {return _p_declarator;}							//returns       pointer to _p_declarator
	const declaration_list* get_p_declaration_list()const{return _p_declaration_list;}							//returns const pointer to _p_declaration_list
	      declaration_list* get_p_declaration_list()     {return _p_declaration_list;}							//returns       pointer to _p_declaration_list
	const compound_statement* get_p_compound_statement()const{return _p_compound_statement;}							//returns const pointer to _p_compound_statement
	      compound_statement* get_p_compound_statement()     {return _p_compound_statement;}							//returns       pointer to _p_compound_statement
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
	virtual std::string name()const{return "parameter_list_item";}			//returns the class name, here "parameter_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const parameter_declaration* get_p_parameter_declaration()const{return _p_parameter_declaration;}							//returns const pointer to _p_parameter_declaration
	      parameter_declaration* get_p_parameter_declaration()     {return _p_parameter_declaration;}							//returns const pointer to _p_parameter_declaration
	virtual ~parameter_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class parameter_list                         
                                                                
\*------------------------------------------------------------*/

class parameter_list
	:public CAst 
{
private:
	typedef std::deque<parameter_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_PARAMETER_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[parameter_list,',',parameter_declaration]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual parameter_list_item& operator[](int i){return _items[i];}
	virtual ~parameter_list ();

};

typedef std::deque<parameter_list_item>::iterator parameter_list_iterator;
typedef std::deque<parameter_list_item>::const_iterator parameter_list_const_iterator;


			
			

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
	int *_refCount; 
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
	enum_specifier(const enum_specifier& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "enum_specifier"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ENUM_SPECIFIER
	virtual std::string pattern()const;							//returns the pattern, here "[ENUM,IDENTIFIER,'{',enumerator_list,'}']"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	const Token* get_p_token2()const{return _p_token2;}							//returns const pointer to _p_token2
	      Token* get_p_token2()     {return _p_token2;}							//returns       pointer to _p_token2
	const enumerator_list* get_p_enumerator_list()const{return _p_enumerator_list;}							//returns const pointer to _p_enumerator_list
	      enumerator_list* get_p_enumerator_list()     {return _p_enumerator_list;}							//returns       pointer to _p_enumerator_list
	const Token* get_p_token3()const{return _p_token3;}							//returns const pointer to _p_token3
	      Token* get_p_token3()     {return _p_token3;}							//returns       pointer to _p_token3
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
	int *_refCount; 
	std::string _s_matchedPattern;
		Token *_p_token1;                                               // CONST
public:
	type_qualifier	                                              // constructor
		( 
			std::string _arg_s_matchedPattern,
				Token *_arg__p_token1			
		);
	type_qualifier(const type_qualifier& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "type_qualifier"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_TYPE_QUALIFIER
	virtual std::string pattern()const;							//returns the pattern, here "[CONST]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
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
	virtual std::string name()const{return "enumerator_list_item";}			//returns the class name, here "enumerator_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const enumerator* get_p_enumerator()const{return _p_enumerator;}							//returns const pointer to _p_enumerator
	      enumerator* get_p_enumerator()     {return _p_enumerator;}							//returns const pointer to _p_enumerator
	virtual ~enumerator_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class enumerator_list                         
                                                                
\*------------------------------------------------------------*/

class enumerator_list
	:public CAst 
{
private:
	typedef std::deque<enumerator_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_ENUMERATOR_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[enumerator_list,',',enumerator]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual enumerator_list_item& operator[](int i){return _items[i];}
	virtual ~enumerator_list ();

};

typedef std::deque<enumerator_list_item>::iterator enumerator_list_iterator;
typedef std::deque<enumerator_list_item>::const_iterator enumerator_list_const_iterator;


			
			

/*=============================================================================================================*\
                                                                                                                 
 	THE labeled_statement BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class labeled_statement :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	int *_refCount; 
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
	labeled_statement1(const labeled_statement1& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "labeled_statement1"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_LABELED_STATEMENT1
	virtual std::string pattern()const;							//returns the pattern, here "[CASE,constant_expression,':',statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const constant_expression* get_p_constant_expression()const{return _p_constant_expression;}							//returns const pointer to _p_constant_expression
	      constant_expression* get_p_constant_expression()     {return _p_constant_expression;}							//returns       pointer to _p_constant_expression
	const statement* get_p_statement()const{return _p_statement;}							//returns const pointer to _p_statement
	      statement* get_p_statement()     {return _p_statement;}							//returns       pointer to _p_statement
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
	int *_refCount; 
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
	labeled_statement2(const labeled_statement2& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "labeled_statement2"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_LABELED_STATEMENT2
	virtual std::string pattern()const;							//returns the pattern, here "[IDENTIFIER,':',statement]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const Token* get_p_token1()const{return _p_token1;}							//returns const pointer to _p_token1
	      Token* get_p_token1()     {return _p_token1;}							//returns       pointer to _p_token1
	const statement* get_p_statement()const{return _p_statement;}							//returns const pointer to _p_statement
	      statement* get_p_statement()     {return _p_statement;}							//returns       pointer to _p_statement
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
	virtual std::string name()const{return "declaration_list_item";}			//returns the class name, here "declaration_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const declaration* get_p_declaration()const{return _p_declaration;}							//returns const pointer to _p_declaration
	      declaration* get_p_declaration()     {return _p_declaration;}							//returns const pointer to _p_declaration
	virtual ~declaration_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class declaration_list                         
                                                                
\*------------------------------------------------------------*/

class declaration_list
	:public CAst 
{
private:
	typedef std::deque<declaration_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DECLARATION_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[declaration_list,declaration]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual declaration_list_item& operator[](int i){return _items[i];}
	virtual ~declaration_list ();

};

typedef std::deque<declaration_list_item>::iterator declaration_list_iterator;
typedef std::deque<declaration_list_item>::const_iterator declaration_list_const_iterator;


			
			
/*=============================================================================================================*\
                                                                                                                 
 	THE specifier_qualifier_list BASE CLASS                                                                    
                                                                                                                 
\*=============================================================================================================*/  


class specifier_qualifier_list :public CAst
{
public:
	virtual std::string name()const=0;
	virtual std::ostream& codeStream(std::ostream&)const=0;
	virtual CAstType typeId()const=0;
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
	virtual std::string name()const{return "specifier_qualifier_list1_item";}			//returns the class name, here "specifier_qualifier_list1"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const type_specifier* get_p_type_specifier()const{return _p_type_specifier;}							//returns const pointer to _p_type_specifier
	      type_specifier* get_p_type_specifier()     {return _p_type_specifier;}							//returns const pointer to _p_type_specifier
	virtual ~specifier_qualifier_list1_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class specifier_qualifier_list1                         
                                                                
\*------------------------------------------------------------*/

class specifier_qualifier_list1
	:public specifier_qualifier_list 
{
private:
	typedef std::deque<specifier_qualifier_list1_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_SPECIFIER_QUALIFIER_LIST1
	virtual std::string pattern()const;							//returns the pattern, here "[type_specifier,specifier_qualifier_list]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual specifier_qualifier_list1_item& operator[](int i){return _items[i];}
	virtual ~specifier_qualifier_list1 ();

};

typedef std::deque<specifier_qualifier_list1_item>::iterator specifier_qualifier_list1_iterator;
typedef std::deque<specifier_qualifier_list1_item>::const_iterator specifier_qualifier_list1_const_iterator;


			
			
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
	virtual std::string name()const{return "specifier_qualifier_list2_item";}			//returns the class name, here "specifier_qualifier_list2"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const type_qualifier* get_p_type_qualifier()const{return _p_type_qualifier;}							//returns const pointer to _p_type_qualifier
	      type_qualifier* get_p_type_qualifier()     {return _p_type_qualifier;}							//returns const pointer to _p_type_qualifier
	virtual ~specifier_qualifier_list2_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class specifier_qualifier_list2                         
                                                                
\*------------------------------------------------------------*/

class specifier_qualifier_list2
	:public specifier_qualifier_list 
{
private:
	typedef std::deque<specifier_qualifier_list2_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_SPECIFIER_QUALIFIER_LIST2
	virtual std::string pattern()const;							//returns the pattern, here "[type_qualifier,specifier_qualifier_list]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual specifier_qualifier_list2_item& operator[](int i){return _items[i];}
	virtual ~specifier_qualifier_list2 ();

};

typedef std::deque<specifier_qualifier_list2_item>::iterator specifier_qualifier_list2_iterator;
typedef std::deque<specifier_qualifier_list2_item>::const_iterator specifier_qualifier_list2_const_iterator;


			
			
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
	virtual std::string name()const{return "translation_unit_item";}			//returns the class name, here "translation_unit"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const external_declaration* get_p_external_declaration()const{return _p_external_declaration;}							//returns const pointer to _p_external_declaration
	      external_declaration* get_p_external_declaration()     {return _p_external_declaration;}							//returns const pointer to _p_external_declaration
	virtual ~translation_unit_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class translation_unit                         
                                                                
\*------------------------------------------------------------*/

class translation_unit
	:public CAst 
{
private:
	typedef std::deque<translation_unit_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_TRANSLATION_UNIT
	virtual std::string pattern()const;							//returns the pattern, here "[translation_unit,external_declaration]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual translation_unit_item& operator[](int i){return _items[i];}
	virtual ~translation_unit ();

};

typedef std::deque<translation_unit_item>::iterator translation_unit_iterator;
typedef std::deque<translation_unit_item>::const_iterator translation_unit_const_iterator;


			
			

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
	int *_refCount; 
	std::string _s_matchedPattern;
		conditional_expression *_p_conditional_expression;              // conditional_expression
public:
	constant_expression	                                         // constructor
		( 
			std::string _arg_s_matchedPattern,
				conditional_expression *_arg__p_conditional_expression			
		);
	constant_expression(const constant_expression& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "constant_expression"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_CONSTANT_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[conditional_expression]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const conditional_expression* get_p_conditional_expression()const{return _p_conditional_expression;}							//returns const pointer to _p_conditional_expression
	      conditional_expression* get_p_conditional_expression()     {return _p_conditional_expression;}							//returns       pointer to _p_conditional_expression
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
	virtual std::string name()const{return "initializer_list_item";}			//returns the class name, here "initializer_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const initializer* get_p_initializer()const{return _p_initializer;}							//returns const pointer to _p_initializer
	      initializer* get_p_initializer()     {return _p_initializer;}							//returns const pointer to _p_initializer
	virtual ~initializer_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class initializer_list                         
                                                                
\*------------------------------------------------------------*/

class initializer_list
	:public CAst 
{
private:
	typedef std::deque<initializer_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_INITIALIZER_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[initializer_list,',',initializer]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual initializer_list_item& operator[](int i){return _items[i];}
	virtual ~initializer_list ();

};

typedef std::deque<initializer_list_item>::iterator initializer_list_iterator;
typedef std::deque<initializer_list_item>::const_iterator initializer_list_const_iterator;


			
			
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
	virtual std::string name()const{return "statement_list_item";}			//returns the class name, here "statement_list"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const statement* get_p_statement()const{return _p_statement;}							//returns const pointer to _p_statement
	      statement* get_p_statement()     {return _p_statement;}							//returns const pointer to _p_statement
	virtual ~statement_list_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class statement_list                         
                                                                
\*------------------------------------------------------------*/

class statement_list
	:public CAst 
{
private:
	typedef std::deque<statement_list_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_STATEMENT_LIST
	virtual std::string pattern()const;							//returns the pattern, here "[statement_list,statement]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual statement_list_item& operator[](int i){return _items[i];}
	virtual ~statement_list ();

};

typedef std::deque<statement_list_item>::iterator statement_list_iterator;
typedef std::deque<statement_list_item>::const_iterator statement_list_const_iterator;


			
			
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
	virtual std::string name()const{return "expression_item";}			//returns the class name, here "expression"
	virtual std::ostream& codeStream(std::ostream&,bool initFlag=false)const;		//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual Properties getProperties()const;
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const assignment_expression* get_p_assignment_expression()const{return _p_assignment_expression;}							//returns const pointer to _p_assignment_expression
	      assignment_expression* get_p_assignment_expression()     {return _p_assignment_expression;}							//returns const pointer to _p_assignment_expression
	virtual ~expression_item();
	
	
};
/*------------------------------------------------------------*\
 							        
  main class expression                         
                                                                
\*------------------------------------------------------------*/

class expression
	:public CAst 
{
private:
	typedef std::deque<expression_item> ItemsListType;
	typedef ItemsListType::iterator ItemsListIter;
	typedef ItemsListType::const_iterator CItemsListIter;
	ItemsListType _items;
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
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_EXPRESSION
	virtual std::string pattern()const;							//returns the pattern, here "[expression,',',assignment_expression]"
	virtual bool isList()const {return true;}						//returns if this is a list based class, which it is hence here it returns "true"
	virtual Properties getProperties()const {return Properties(name());}			//returns empty properties map
	virtual PropertiesList getPropertiesList()const;					//returns a properties list		
	virtual ItemsListIter begin(){return _items.begin();}					//returns the being iterator
	virtual ItemsListIter end(){return _items.end();}					//returns the being iterator
	virtual int size()const{return _items.size();}						//returns the size of the container
	virtual expression_item& operator[](int i){return _items[i];}
	virtual ~expression ();

};

typedef std::deque<expression_item>::iterator expression_iterator;
typedef std::deque<expression_item>::const_iterator expression_const_iterator;


			
			

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
	int *_refCount; 
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
	declarator(const declarator& other);						//copy constructor
	virtual std::string name()const;							//returns the class name, here "declarator"
	virtual std::ostream& codeStream(std::ostream&)const;					//returns the code for the AST-node
	virtual std::string code()const{std::stringstream stream;codeStream(stream);return stream.str();}
	virtual CAstType typeId()const;								//here returns CAST_TYPE_DECLARATOR
	virtual std::string pattern()const;							//returns the pattern, here "[pointer,direct_declarator]"
	virtual bool isList()const {return false;}						//returns if this is a list based class, which it is not hence here it returns "false"
	virtual Properties getProperties()const;						//returns the properties map
	virtual PropertiesList getPropertiesList()const {return PropertiesList(name());}	//returns a null list
	const pointer* get_p_pointer()const{return _p_pointer;}							//returns const pointer to _p_pointer
	      pointer* get_p_pointer()     {return _p_pointer;}							//returns       pointer to _p_pointer
	const direct_declarator* get_p_direct_declarator()const{return _p_direct_declarator;}							//returns const pointer to _p_direct_declarator
	      direct_declarator* get_p_direct_declarator()     {return _p_direct_declarator;}							//returns       pointer to _p_direct_declarator
	virtual ~declarator ();

	
		
};



translation_unit* parseFile(const char *fileName);

}//namespace CAST		

#include "cYacc.hpp"
extern CAst::translation_unit* root;
#endif //CAST_HEADER_INCLUDED
