#ifndef CAST_HEADER_INCLUDED
#define CAST_HEADER_INCLUDED
#include <string>
#include <vector>
#include <exception>
#include <assert.h>
#include <iostream>
#include <sstream>

#define COL_CLEAR 	"\033[0m"
#define COL_FG_RED 	"\033[31m"
#define COL_FG_GREEN 	"\033[32m"
#define COL_FG_YELLOW 	"\033[33m"
#define COL_FG_BLUE 	"\033[34m"
#define COL_FG_MAGENTA "\033[35m"
#define COL_FG_CYAN	"\033[36m"
#define COL_FG_WHITE 	"\033[37m"



#define LOG(TXT) {std::cerr<<__FILE__<<" "<<__LINE__<<" :"<<TXT<<COL_CLEAR<<"\n";std::cerr.flush();}

namespace CAst
{

class IndexError: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Index out of range";
  }
};


//! This is the enumeration of the class ids 

enum CAST_CLASS_ID
{
	                                 ID_CAST = 0,
	                                ID_TOKEN = 1,
	              ID_STORAGE_CLASS_SPECIFIER = 16,
	                 ID_EXPRESSION_STATEMENT = 32,
	                  ID_SELECTION_STATEMENT = 48,
	                ID_SELECTION_STATEMENT_1 = 49,
	                ID_SELECTION_STATEMENT_2 = 50,
	                     ID_UNARY_EXPRESSION = 64,
	                   ID_UNARY_EXPRESSION_1 = 65,
	                   ID_UNARY_EXPRESSION_2 = 66,
	                   ID_UNARY_EXPRESSION_3 = 67,
	                   ID_UNARY_EXPRESSION_4 = 68,
	                          ID_INITIALIZER = 80,
	                        ID_INITIALIZER_1 = 81,
	                        ID_INITIALIZER_2 = 82,
	            ID_STRUCT_OR_UNION_SPECIFIER = 96,
	              ID_EXCLUSIVE_OR_EXPRESSION = 112,
	         ID_EXCLUSIVE_OR_EXPRESSION_ITEM = 113,
	                      ID_IDENTIFIER_LIST = 128,
	                 ID_IDENTIFIER_LIST_ITEM = 129,
	                 ID_INIT_DECLARATOR_LIST = 144,
	            ID_INIT_DECLARATOR_LIST_ITEM = 145,
	              ID_STRUCT_DECLARATION_LIST = 160,
	         ID_STRUCT_DECLARATION_LIST_ITEM = 161,
	                           ID_ENUMERATOR = 176,
	                     ID_DECLARATION_LIST = 192,
	                ID_DECLARATION_LIST_ITEM = 193,
	                              ID_POINTER = 208,
	                         ID_POINTER_ITEM = 209,
	                       ID_POINTER_ITEM_1 = 210,
	                       ID_POINTER_ITEM_2 = 211,
	                       ID_AND_EXPRESSION = 224,
	                  ID_AND_EXPRESSION_ITEM = 225,
	                 ID_EXTERNAL_DECLARATION = 240,
	               ID_EXTERNAL_DECLARATION_1 = 241,
	               ID_EXTERNAL_DECLARATION_2 = 242,
	                       ID_TYPE_SPECIFIER = 256,
	                     ID_TYPE_SPECIFIER_1 = 257,
	                     ID_TYPE_SPECIFIER_2 = 258,
	                     ID_TYPE_SPECIFIER_3 = 259,
	                   ID_COMPOUND_STATEMENT = 272,
	              ID_INCLUSIVE_OR_EXPRESSION = 288,
	         ID_INCLUSIVE_OR_EXPRESSION_ITEM = 289,
	                  ID_ITERATION_STATEMENT = 304,
	                ID_ITERATION_STATEMENT_1 = 305,
	                ID_ITERATION_STATEMENT_2 = 306,
	                ID_ITERATION_STATEMENT_3 = 307,
	                            ID_TYPE_NAME = 320,
	                   ID_POSTFIX_EXPRESSION = 336,
	                 ID_POSTFIX_EXPRESSION_1 = 337,
	                 ID_POSTFIX_EXPRESSION_2 = 338,
	                 ID_POSTFIX_EXPRESSION_3 = 339,
	                 ID_POSTFIX_EXPRESSION_4 = 340,
	                 ID_POSTFIX_EXPRESSION_5 = 341,
	                  ID_ADDITIVE_EXPRESSION = 352,
	             ID_ADDITIVE_EXPRESSION_ITEM = 353,
	                            ID_STATEMENT = 368,
	                          ID_STATEMENT_1 = 369,
	                          ID_STATEMENT_2 = 370,
	                          ID_STATEMENT_3 = 371,
	                          ID_STATEMENT_4 = 372,
	                          ID_STATEMENT_5 = 373,
	                          ID_STATEMENT_6 = 374,
	                       ID_UNARY_OPERATOR = 384,
	                      ID_CAST_EXPRESSION = 400,
	                    ID_CAST_EXPRESSION_1 = 401,
	                    ID_CAST_EXPRESSION_2 = 402,
	                     ID_INITIALIZER_LIST = 416,
	                ID_INITIALIZER_LIST_ITEM = 417,
	               ID_STRUCT_DECLARATOR_LIST = 432,
	          ID_STRUCT_DECLARATOR_LIST_ITEM = 433,
	                ID_LOGICAL_OR_EXPRESSION = 448,
	           ID_LOGICAL_OR_EXPRESSION_ITEM = 449,
	                  ID_CONSTANT_EXPRESSION = 464,
	                ID_RELATIONAL_EXPRESSION = 480,
	           ID_RELATIONAL_EXPRESSION_ITEM = 481,
	                      ID_STRUCT_OR_UNION = 496,
	                  ID_TYPE_QUALIFIER_LIST = 512,
	             ID_TYPE_QUALIFIER_LIST_ITEM = 513,
	                   ID_STRUCT_DECLARATION = 528,
	                ID_ASSIGNMENT_EXPRESSION = 544,
	              ID_ASSIGNMENT_EXPRESSION_1 = 545,
	              ID_ASSIGNMENT_EXPRESSION_2 = 546,
	                  ID_PARAMETER_TYPE_LIST = 560,
	                ID_PARAMETER_DECLARATION = 576,
	              ID_PARAMETER_DECLARATION_1 = 577,
	              ID_PARAMETER_DECLARATION_2 = 578,
	            ID_MULTIPLICATIVE_EXPRESSION = 592,
	       ID_MULTIPLICATIVE_EXPRESSION_ITEM = 593,
	                      ID_INIT_DECLARATOR = 608,
	             ID_ARGUMENT_EXPRESSION_LIST = 624,
	        ID_ARGUMENT_EXPRESSION_LIST_ITEM = 625,
	                       ID_STATEMENT_LIST = 640,
	                  ID_STATEMENT_LIST_ITEM = 641,
	                   ID_PRIMARY_EXPRESSION = 656,
	                 ID_PRIMARY_EXPRESSION_1 = 657,
	                 ID_PRIMARY_EXPRESSION_2 = 658,
	               ID_DECLARATION_SPECIFIERS = 672,
	          ID_DECLARATION_SPECIFIERS_ITEM = 673,
	        ID_DECLARATION_SPECIFIERS_ITEM_1 = 674,
	        ID_DECLARATION_SPECIFIERS_ITEM_2 = 675,
	        ID_DECLARATION_SPECIFIERS_ITEM_3 = 676,
	                          ID_DECLARATION = 688,
	                    ID_DIRECT_DECLARATOR = 704,
	                  ID_DIRECT_DECLARATOR_1 = 705,
	                  ID_DIRECT_DECLARATOR_2 = 706,
	                  ID_DIRECT_DECLARATOR_3 = 707,
	                  ID_DIRECT_DECLARATOR_4 = 708,
	                  ID_DIRECT_DECLARATOR_5 = 709,
	               ID_LOGICAL_AND_EXPRESSION = 720,
	          ID_LOGICAL_AND_EXPRESSION_ITEM = 721,
	                           ID_DECLARATOR = 736,
	                     ID_SHIFT_EXPRESSION = 752,
	                ID_SHIFT_EXPRESSION_ITEM = 753,
	                  ID_EQUALITY_EXPRESSION = 768,
	             ID_EQUALITY_EXPRESSION_ITEM = 769,
	                       ID_JUMP_STATEMENT = 784,
	                     ID_JUMP_STATEMENT_1 = 785,
	                     ID_JUMP_STATEMENT_2 = 786,
	                     ID_JUMP_STATEMENT_3 = 787,
	                    ID_STRUCT_DECLARATOR = 800,
	                  ID_FUNCTION_DEFINITION = 816,
	                       ID_PARAMETER_LIST = 832,
	                  ID_PARAMETER_LIST_ITEM = 833,
	                       ID_ENUM_SPECIFIER = 848,
	                       ID_TYPE_QUALIFIER = 864,
	                      ID_ENUMERATOR_LIST = 880,
	                 ID_ENUMERATOR_LIST_ITEM = 881,
	                    ID_LABELED_STATEMENT = 896,
	                  ID_LABELED_STATEMENT_1 = 897,
	                  ID_LABELED_STATEMENT_2 = 898,
	                  ID_ABSTRACT_DECLARATOR = 912,
	             ID_SPECIFIER_QUALIFIER_LIST = 928,
	        ID_SPECIFIER_QUALIFIER_LIST_ITEM = 929,
	      ID_SPECIFIER_QUALIFIER_LIST_ITEM_1 = 930,
	      ID_SPECIFIER_QUALIFIER_LIST_ITEM_2 = 931,
	                     ID_TRANSLATION_UNIT = 944,
	                ID_TRANSLATION_UNIT_ITEM = 945,
	                  ID_ASSIGNMENT_OPERATOR = 960,
	               ID_CONDITIONAL_EXPRESSION = 976,
	          ID_CONDITIONAL_EXPRESSION_ITEM = 977,
	           ID_DIRECT_ABSTRACT_DECLARATOR = 992,
	         ID_DIRECT_ABSTRACT_DECLARATOR_1 = 993,
	         ID_DIRECT_ABSTRACT_DECLARATOR_2 = 994,
	         ID_DIRECT_ABSTRACT_DECLARATOR_3 = 995,
	                           ID_EXPRESSION = 1008,
	                      ID_EXPRESSION_ITEM = 1009,
};








/**
 *  \brief Simple Reference Counting class
 *
 *  This class is to be inherited by the CAst classes. This is a simple reference counting class
 */
template <typename DataType>
class ReferenceCountedAutoPointer
{
	private:
		int *__refCount;					///< The reference count
		DataType *__data;

		
		/**
		 * \brief Clears the reference count
		 *
		 * This first decrements the reference count, next, checks if this is the sole refernce. If so, clear() is called
		 */
		void __clear()
		{
			if(!__refCount)return;
			__refCountDown();
			LOG(COL_FG_RED<<"Deleting "<<__data<<"("<<__data->name()<<")"<<"? refCount:"<<*__refCount)
			if((*__refCount)==0)
			{
				std::string name=__data->name();
				DataType *add=__data;
				LOG(COL_FG_YELLOW<<"Deleting "<<"("<<name<<") "<<__data)
				delete __refCount;
				delete __data;
				LOG(COL_FG_RED<<"Deleted "<<"("<<name<<") "<<add)
			}
			__refCount=0;
			__data=0;
		}
		/**
		 * \brief Increments the reference count
		 */
		void __refCountUp(){if(__refCount)(*__refCount)++;}

		
		/**
		 * \brief Decrements the reference count
		 */
		void __refCountDown(){if(__refCount)(*__refCount)--;}
	public:
		static CAST_CLASS_ID DATA_ID;
	public:
		/**
		 * \brief Default constructor
		 * 
		 *  Initializes the reference count and data to 0
		 */
			
		ReferenceCountedAutoPointer():
				__data(0),
				__refCount(0)
		{
			LOG(COL_FG_RED<<"NULL DATA")
		}

		/** 
		 * \brief Constructor with data
                 *
                 * Initializes the reference count and data to 0 if data is void, else sets the data
                 */
		
		ReferenceCountedAutoPointer(DataType *data)
		{
			if(data)
			{
				LOG(COL_FG_YELLOW<<"ADOPTING "<<data<<"("<<data->name()<<")")
				__data=data;
				__refCount=new int(1);
			}
			else
			{
				LOG("NULL DATA "<<data)
				__data=0;
				__refCount=0;
			}
		}
		
		/**
		 * \brief Copy constructor
		 * 
		 * Adopts the other's reference count and increments the reference count
                 *
                 */
		ReferenceCountedAutoPointer(const ReferenceCountedAutoPointer&other ):				
				__refCount(other.__refCount),
				__data(other.__data)
		{
			__refCountUp();

			if(__data)
				LOG(COL_FG_YELLOW<<"SHARING "<<__data<<" refcount:"<<*__refCount<<"("<<__data->name()<<")")
			else
				LOG(COL_FG_RED<<"NULL AP ")
		
		}

		template<typename Y>
		friend class ReferenceCountedAutoPointer;

		template<typename Y>
		ReferenceCountedAutoPointer(const ReferenceCountedAutoPointer<Y>&other ):
				__data(0),
				__refCount(0)
		{
			__data=dynamic_cast<DataType*>(other.__data);
			__refCount=other.__refCount;
			__refCountUp();
		}

		/**
		 * \brief Assignment operator
                 *
                 * Decrements the current reference count, and adopts the other's reference count and increments it
                 */
		ReferenceCountedAutoPointer& operator=(const ReferenceCountedAutoPointer&other)
		{
			__clear();
			__refCount=other.__refCount;
			__data=other.__data;
			__refCountUp();
		}
		template<typename Y>
		ReferenceCountedAutoPointer& operator=(const ReferenceCountedAutoPointer<Y>&other)
		{
			__clear();
			__refCount=other.__refCount;
			__data=dynamic_cast<DataType*>(other.__data);
			__refCountUp();
		}
		/**
		 * \brief Returns the reference count
		 */
		const int refCount()const{return *__refCount;}

		/**
		 * \brief returns if the data is null
		 */		
		const bool isNull()const{return __data==0;}


		
		DataType* operator->()
		{
			return __data;
		}

		const DataType* operator->()const
		{
			return __data;
		}

		DataType& operator*()
		{
			return *__data;
		}
		const DataType& operator*()const
		{
			return *__data;
		}
		void clear()
		{
			__clear();
		}
		/**
		 * \brief Calls __clear();
		 */
		virtual ~ReferenceCountedAutoPointer()
		{
			__clear();
		}
			
};


template<typename DataType>
CAST_CLASS_ID ReferenceCountedAutoPointer<DataType>::DATA_ID=DataType::ID;


/**
 *
 * \brief The main base class of all CAst classes
 * 
 */
class CAst
{
	public:
		/** Returns the name of the class */
		virtual std::string name()const=0;

		/** Returns the class ID of the class */
		virtual CAST_CLASS_ID classId()const=0;

		/** The destructor */
		virtual ~CAst()
		{}

		virtual std::ostream& codeStream(std::ostream& stream)const=0;

		std::string code()const
		{
			std::stringstream stream;
			codeStream(stream);
			return stream.str();
		}

};

class token:public CAst
{
	private:
		std::string _text;
	public:
		static CAST_CLASS_ID ID;
	public:
		/** The constructor takes the string*/
		token(std::string text):
			_text(text)
		{}


		const std::string& text()const {return _text;}
		/** Returns the name of the class */
		virtual std::string name()const{return "token";};

		/** Returns the class ID of the class */
		virtual CAST_CLASS_ID classId()const{return ID_TOKEN;};

	
		std::ostream& codeStream(std::ostream& stream)const{return stream<<_text<<" ";}
		/** The destructor */
		virtual ~token()
		{}
};

#define AssertNotNullRule(rule) assert(!rule.isNull());
#define AssertTokenType(expr) assert(expr);


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:storage_class_specifier
//////////////////////////////////////////





class token;




/**
 * \brief storage_class_specifier implements the pattern: <b>(TYPEDEF,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_storage_class_specifier [ label="storage_class_specifier", URL="\ref storage_class_specifier", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_storage_class_specifier ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class storage_class_specifier:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>STATIC</b>, <b>REGISTER</b>, <b>AUTO</b>, <b>TYPEDEF</b>, <b>EXTERN</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of storage_class_specifier
		 *
		 * This function handles the storage_class_specifier
                 */
		storage_class_specifier	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>STATIC</b>, <b>REGISTER</b>, <b>AUTO</b>, <b>TYPEDEF</b>, <b>EXTERN</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"storage_class_specifier"</b>
		 * \returns <b>"storage_class_specifier"</b>
                 */
		virtual std::string name()const			{return std::string("storage_class_specifier");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STORAGE_CLASS_SPECIFIER
		 * \returns  ID_STORAGE_CLASS_SPECIFIER
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STORAGE_CLASS_SPECIFIER;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~storage_class_specifier()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:expression_statement
//////////////////////////////////////////





class expression;



/**
 * \brief expression_statement implements the pattern: <b>(expression, ';')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_expression_statement [ label="expression_statement", URL="\ref expression_statement", color="#00AAAA" ];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_expression_statement ->  node_expression [label="_p_expression" style=dotted];
 * }
 * \enddot
 */
class expression_statement:public CAst
{
	private:
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of expression_statement
		 *
		 * This function handles the expression_statement
                 */
		expression_statement	
				(
					ReferenceCountedAutoPointer<expression> _arg_expression  ///< A pointer to expression. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"expression_statement"</b>
		 * \returns <b>"expression_statement"</b>
                 */
		virtual std::string name()const			{return std::string("expression_statement");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_EXPRESSION_STATEMENT
		 * \returns  ID_EXPRESSION_STATEMENT
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_EXPRESSION_STATEMENT;}



		ReferenceCountedAutoPointer<expression>& p_expression()
		{
			return _p_expression;
		}

		const ReferenceCountedAutoPointer<expression>& p_expression()const
		{
			return _p_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~expression_statement()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_name
//////////////////////////////////////////





class specifier_qualifier_list;
class abstract_declarator;




/**
 * \brief type_name implements the pattern: <b>(specifier_qualifier_list, abstract_declarator)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_type_name [ label="type_name", URL="\ref type_name", color="#00AAAA" ];
 *     node_specifier_qualifier_list [ label="specifier_qualifier_list", URL="\ref specifier_qualifier_list", color="#00AAAA"];
 *     node_abstract_declarator [ label="abstract_declarator", URL="\ref abstract_declarator", color="#00AAAA"];
 *     node_type_name ->  node_specifier_qualifier_list [label="_p_specifier_qualifier_list" style=solid];
 *     node_type_name ->  node_abstract_declarator [label="_p_abstract_declarator" style=dotted];
 * }
 * \enddot
 */
class type_name:public CAst
{
	private:
		ReferenceCountedAutoPointer<specifier_qualifier_list> _p_specifier_qualifier_list;	  ///< A pointer to specifier_qualifier_list.
		ReferenceCountedAutoPointer<abstract_declarator> _p_abstract_declarator;	  ///< A pointer to abstract_declarator. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of type_name
		 *
		 * This function handles the type_name
                 */
		type_name	
				(
					ReferenceCountedAutoPointer<specifier_qualifier_list> _arg_specifier_qualifier_list,   ///< A pointer to specifier_qualifier_list.
					ReferenceCountedAutoPointer<abstract_declarator> _arg_abstract_declarator  ///< A pointer to abstract_declarator. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"type_name"</b>
		 * \returns <b>"type_name"</b>
                 */
		virtual std::string name()const			{return std::string("type_name");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TYPE_NAME
		 * \returns  ID_TYPE_NAME
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TYPE_NAME;}



		ReferenceCountedAutoPointer<specifier_qualifier_list>& p_specifier_qualifier_list()
		{
			return _p_specifier_qualifier_list;
		}

		const ReferenceCountedAutoPointer<specifier_qualifier_list>& p_specifier_qualifier_list()const
		{
			return _p_specifier_qualifier_list;
		}
		ReferenceCountedAutoPointer<abstract_declarator>& p_abstract_declarator()
		{
			return _p_abstract_declarator;
		}

		const ReferenceCountedAutoPointer<abstract_declarator>& p_abstract_declarator()const
		{
			return _p_abstract_declarator;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~type_name()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:unary_expression
//////////////////////////////////////////


/**
 * \brief Implements unary_expression
 * 
 * This is the interface class. This implements the patterns
 *  - (postfix_expression,)
 *  - (INC_OP, unary_expression)
 *  - (DEC_OP, unary_expression)
 *  - (unary_operator, cast_expression)
 *  - (SIZEOF, unary_expression)
 *  - (SIZEOF, '(', type_name, ')')
 * 
 **/
class unary_expression:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~unary_expression(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class token;
class unary_expression;





/**
 * \brief unary_expression_1 implements the pattern: <b>(INC_OP, unary_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_unary_expression_1 [ label="unary_expression_1", URL="\ref unary_expression_1", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_unary_expression [ label="unary_expression", URL="\ref unary_expression", color="#00AAAA"];
 *     node_unary_expression_1 ->  node_token [label="_p_token" style=solid];
 *     node_unary_expression_1 ->  node_unary_expression [label="_p_unary_expression" style=solid];
 * }
 * \enddot
 */
class unary_expression_1:public unary_expression
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>INC_OP</b>, <b>DEC_OP</b>, <b>SIZEOF</b>
		ReferenceCountedAutoPointer<unary_expression> _p_unary_expression;	  ///< A pointer to unary_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of unary_expression_1
		 *
		 * This function handles the unary_expression_1
                 */
		unary_expression_1	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>INC_OP</b>, <b>DEC_OP</b>, <b>SIZEOF</b>
					ReferenceCountedAutoPointer<unary_expression> _arg_unary_expression  ///< A pointer to unary_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"unary_expression_1"</b>
		 * \returns <b>"unary_expression_1"</b>
                 */
		virtual std::string name()const			{return std::string("unary_expression_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_UNARY_EXPRESSION_1
		 * \returns  ID_UNARY_EXPRESSION_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_UNARY_EXPRESSION_1;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<unary_expression>& p_unary_expression()
		{
			return _p_unary_expression;
		}

		const ReferenceCountedAutoPointer<unary_expression>& p_unary_expression()const
		{
			return _p_unary_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~unary_expression_1()
		{}
};





class postfix_expression;



/**
 * \brief unary_expression_2 implements the pattern: <b>(postfix_expression,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_unary_expression_2 [ label="unary_expression_2", URL="\ref unary_expression_2", color="#00AAAA" ];
 *     node_postfix_expression [ label="postfix_expression", URL="\ref postfix_expression", color="#00AAAA"];
 *     node_unary_expression_2 ->  node_postfix_expression [label="_p_postfix_expression" style=solid];
 * }
 * \enddot
 */
class unary_expression_2:public unary_expression
{
	private:
		ReferenceCountedAutoPointer<postfix_expression> _p_postfix_expression;	  ///< A pointer to postfix_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of unary_expression_2
		 *
		 * This function handles the unary_expression_2
                 */
		unary_expression_2	
				(
					ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression  ///< A pointer to postfix_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"unary_expression_2"</b>
		 * \returns <b>"unary_expression_2"</b>
                 */
		virtual std::string name()const			{return std::string("unary_expression_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_UNARY_EXPRESSION_2
		 * \returns  ID_UNARY_EXPRESSION_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_UNARY_EXPRESSION_2;}



		ReferenceCountedAutoPointer<postfix_expression>& p_postfix_expression()
		{
			return _p_postfix_expression;
		}

		const ReferenceCountedAutoPointer<postfix_expression>& p_postfix_expression()const
		{
			return _p_postfix_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~unary_expression_2()
		{}
};





class cast_expression;
class unary_operator;




/**
 * \brief unary_expression_3 implements the pattern: <b>(unary_operator, cast_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_unary_expression_3 [ label="unary_expression_3", URL="\ref unary_expression_3", color="#00AAAA" ];
 *     node_unary_operator [ label="unary_operator", URL="\ref unary_operator", color="#00AAAA"];
 *     node_cast_expression [ label="cast_expression", URL="\ref cast_expression", color="#00AAAA"];
 *     node_unary_expression_3 ->  node_unary_operator [label="_p_unary_operator" style=solid];
 *     node_unary_expression_3 ->  node_cast_expression [label="_p_cast_expression" style=solid];
 * }
 * \enddot
 */
class unary_expression_3:public unary_expression
{
	private:
		ReferenceCountedAutoPointer<unary_operator> _p_unary_operator;	  ///< A pointer to unary_operator.
		ReferenceCountedAutoPointer<cast_expression> _p_cast_expression;	  ///< A pointer to cast_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of unary_expression_3
		 *
		 * This function handles the unary_expression_3
                 */
		unary_expression_3	
				(
					ReferenceCountedAutoPointer<unary_operator> _arg_unary_operator,   ///< A pointer to unary_operator.
					ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression  ///< A pointer to cast_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"unary_expression_3"</b>
		 * \returns <b>"unary_expression_3"</b>
                 */
		virtual std::string name()const			{return std::string("unary_expression_3");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_UNARY_EXPRESSION_3
		 * \returns  ID_UNARY_EXPRESSION_3
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_UNARY_EXPRESSION_3;}



		ReferenceCountedAutoPointer<unary_operator>& p_unary_operator()
		{
			return _p_unary_operator;
		}

		const ReferenceCountedAutoPointer<unary_operator>& p_unary_operator()const
		{
			return _p_unary_operator;
		}
		ReferenceCountedAutoPointer<cast_expression>& p_cast_expression()
		{
			return _p_cast_expression;
		}

		const ReferenceCountedAutoPointer<cast_expression>& p_cast_expression()const
		{
			return _p_cast_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~unary_expression_3()
		{}
};





class type_name;



/**
 * \brief unary_expression_4 implements the pattern: <b>(SIZEOF, '(', type_name, ')')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_unary_expression_4 [ label="unary_expression_4", URL="\ref unary_expression_4", color="#00AAAA" ];
 *     node_type_name [ label="type_name", URL="\ref type_name", color="#00AAAA"];
 *     node_unary_expression_4 ->  node_type_name [label="_p_type_name" style=solid];
 * }
 * \enddot
 */
class unary_expression_4:public unary_expression
{
	private:
		ReferenceCountedAutoPointer<type_name> _p_type_name;	  ///< A pointer to type_name.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of unary_expression_4
		 *
		 * This function handles the unary_expression_4
                 */
		unary_expression_4	
				(
					ReferenceCountedAutoPointer<type_name> _arg_type_name  ///< A pointer to type_name.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"unary_expression_4"</b>
		 * \returns <b>"unary_expression_4"</b>
                 */
		virtual std::string name()const			{return std::string("unary_expression_4");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_UNARY_EXPRESSION_4
		 * \returns  ID_UNARY_EXPRESSION_4
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_UNARY_EXPRESSION_4;}



		ReferenceCountedAutoPointer<type_name>& p_type_name()
		{
			return _p_type_name;
		}

		const ReferenceCountedAutoPointer<type_name>& p_type_name()const
		{
			return _p_type_name;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~unary_expression_4()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:conditional_expression
//////////////////////////////////////////





class token;
class expression;
class logical_or_expression;








/**
 * \brief conditional_expression_item implements the pattern: <b>(logical_or_expression, '?', expression, ':', conditional_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_conditional_expression_item [ label="conditional_expression_item", URL="\ref conditional_expression_item", color="#00AAAA" ];
 *     node_logical_or_expression [ label="logical_or_expression", URL="\ref logical_or_expression", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_conditional_expression_item ->  node_logical_or_expression [label="_p_logical_or_expression" style=solid];
 *     node_conditional_expression_item ->  node_token [label="_p_token1" style=dotted];
 *     node_conditional_expression_item ->  node_expression [label="_p_expression" style=dotted];
 *     node_conditional_expression_item ->  node_token [label="_p_token2" style=dotted];
 * }
 * \enddot
 */
class conditional_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<logical_or_expression> _p_logical_or_expression;	  ///< A pointer to logical_or_expression.
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>'?'</b>, <b>None</b>
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>':'</b>, <b>None</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of conditional_expression_item
		 *
		 * This function handles the conditional_expression_item
                 */
		conditional_expression_item	
				(
					ReferenceCountedAutoPointer<logical_or_expression> _arg_logical_or_expression,   ///< A pointer to logical_or_expression.
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>'?'</b>, <b>None</b>
					ReferenceCountedAutoPointer<expression> _arg_expression,   ///< A pointer to expression. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<token> _arg_token2  ///< A pointer to a token, accepts <b>':'</b>, <b>None</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"conditional_expression_item"</b>
		 * \returns <b>"conditional_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("conditional_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_CONDITIONAL_EXPRESSION_ITEM
		 * \returns  ID_CONDITIONAL_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_CONDITIONAL_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<logical_or_expression>& p_logical_or_expression()
		{
			return _p_logical_or_expression;
		}

		const ReferenceCountedAutoPointer<logical_or_expression>& p_logical_or_expression()const
		{
			return _p_logical_or_expression;
		}
		ReferenceCountedAutoPointer<token>& p_token1()
		{
			return _p_token1;
		}

		const ReferenceCountedAutoPointer<token>& p_token1()const
		{
			return _p_token1;
		}
		ReferenceCountedAutoPointer<expression>& p_expression()
		{
			return _p_expression;
		}

		const ReferenceCountedAutoPointer<expression>& p_expression()const
		{
			return _p_expression;
		}
		ReferenceCountedAutoPointer<token>& p_token2()
		{
			return _p_token2;
		}

		const ReferenceCountedAutoPointer<token>& p_token2()const
		{
			return _p_token2;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~conditional_expression_item()
		{}
};





/**
 * \brief The basic class to handle conditional_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class conditional_expression:public CAst
{
	public:
		typedef conditional_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > conditional_expressionListType;	///< This defines the list type which will store the conditional_expression_item
		typedef conditional_expressionListType::iterator conditional_expressionIterType;				///< This defines the iterator over conditional_expressionListType
		typedef conditional_expressionListType::const_iterator Cconditional_expressionIterType;				///< This defines the constant iterator over conditional_expressionListType

	private:
		conditional_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		conditional_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of conditional_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<conditional_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to conditional_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<conditional_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to conditional_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"conditional_expression"</b>
		 * \returns <b>"conditional_expression"</b>
                 */
		virtual std::string name()const {return "conditional_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_CONDITIONAL_EXPRESSION
		 * \returns  ID_CONDITIONAL_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_CONDITIONAL_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cconditional_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~conditional_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_or_union_specifier
//////////////////////////////////////////





class struct_or_union;
class token;
class struct_declaration_list;










/**
 * \brief struct_or_union_specifier implements the pattern: <b>(struct_or_union, IDENTIFIER, '{', struct_declaration_list, '}')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_struct_or_union_specifier [ label="struct_or_union_specifier", URL="\ref struct_or_union_specifier", color="#00AAAA" ];
 *     node_struct_or_union [ label="struct_or_union", URL="\ref struct_or_union", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_struct_declaration_list [ label="struct_declaration_list", URL="\ref struct_declaration_list", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_struct_or_union_specifier ->  node_struct_or_union [label="_p_struct_or_union" style=solid];
 *     node_struct_or_union_specifier ->  node_token [label="_p_token1" style=dotted];
 *     node_struct_or_union_specifier ->  node_token [label="_p_token2" style=dotted];
 *     node_struct_or_union_specifier ->  node_struct_declaration_list [label="_p_struct_declaration_list" style=dotted];
 *     node_struct_or_union_specifier ->  node_token [label="_p_token3" style=dotted];
 * }
 * \enddot
 */
class struct_or_union_specifier:public CAst
{
	private:
		ReferenceCountedAutoPointer<struct_or_union> _p_struct_or_union;	  ///< A pointer to struct_or_union.
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>IDENTIFIER</b>, <b>None</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>None</b>, <b>'{'</b>
		ReferenceCountedAutoPointer<struct_declaration_list> _p_struct_declaration_list;	  ///< A pointer to struct_declaration_list. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<token> _p_token3;	  ///< A pointer to a token, accepts <b>'}'</b>, <b>None</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of struct_or_union_specifier
		 *
		 * This function handles the struct_or_union_specifier
                 */
		struct_or_union_specifier	
				(
					ReferenceCountedAutoPointer<struct_or_union> _arg_struct_or_union,   ///< A pointer to struct_or_union.
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>IDENTIFIER</b>, <b>None</b>
					ReferenceCountedAutoPointer<token> _arg_token2,   ///< A pointer to a token, accepts <b>None</b>, <b>'{'</b>
					ReferenceCountedAutoPointer<struct_declaration_list> _arg_struct_declaration_list,   ///< A pointer to struct_declaration_list. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<token> _arg_token3  ///< A pointer to a token, accepts <b>'}'</b>, <b>None</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_or_union_specifier"</b>
		 * \returns <b>"struct_or_union_specifier"</b>
                 */
		virtual std::string name()const			{return std::string("struct_or_union_specifier");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_OR_UNION_SPECIFIER
		 * \returns  ID_STRUCT_OR_UNION_SPECIFIER
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_OR_UNION_SPECIFIER;}



		ReferenceCountedAutoPointer<struct_or_union>& p_struct_or_union()
		{
			return _p_struct_or_union;
		}

		const ReferenceCountedAutoPointer<struct_or_union>& p_struct_or_union()const
		{
			return _p_struct_or_union;
		}
		ReferenceCountedAutoPointer<token>& p_token1()
		{
			return _p_token1;
		}

		const ReferenceCountedAutoPointer<token>& p_token1()const
		{
			return _p_token1;
		}
		ReferenceCountedAutoPointer<token>& p_token2()
		{
			return _p_token2;
		}

		const ReferenceCountedAutoPointer<token>& p_token2()const
		{
			return _p_token2;
		}
		ReferenceCountedAutoPointer<struct_declaration_list>& p_struct_declaration_list()
		{
			return _p_struct_declaration_list;
		}

		const ReferenceCountedAutoPointer<struct_declaration_list>& p_struct_declaration_list()const
		{
			return _p_struct_declaration_list;
		}
		ReferenceCountedAutoPointer<token>& p_token3()
		{
			return _p_token3;
		}

		const ReferenceCountedAutoPointer<token>& p_token3()const
		{
			return _p_token3;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~struct_or_union_specifier()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:exclusive_or_expression
//////////////////////////////////////////





class token;
class and_expression;





/**
 * \brief exclusive_or_expression_item implements the pattern: <b>(exclusive_or_expression, '^', and_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_exclusive_or_expression_item [ label="exclusive_or_expression_item", URL="\ref exclusive_or_expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_and_expression [ label="and_expression", URL="\ref and_expression", color="#00AAAA"];
 *     node_exclusive_or_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_exclusive_or_expression_item ->  node_and_expression [label="_p_and_expression" style=solid];
 * }
 * \enddot
 */
class exclusive_or_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>'^'</b>, <b>None</b>
		ReferenceCountedAutoPointer<and_expression> _p_and_expression;	  ///< A pointer to and_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of exclusive_or_expression_item
		 *
		 * This function handles the exclusive_or_expression_item
                 */
		exclusive_or_expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>'^'</b>, <b>None</b>
					ReferenceCountedAutoPointer<and_expression> _arg_and_expression  ///< A pointer to and_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"exclusive_or_expression_item"</b>
		 * \returns <b>"exclusive_or_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("exclusive_or_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_EXCLUSIVE_OR_EXPRESSION_ITEM
		 * \returns  ID_EXCLUSIVE_OR_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_EXCLUSIVE_OR_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<and_expression>& p_and_expression()
		{
			return _p_and_expression;
		}

		const ReferenceCountedAutoPointer<and_expression>& p_and_expression()const
		{
			return _p_and_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~exclusive_or_expression_item()
		{}
};





/**
 * \brief The basic class to handle exclusive_or_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class exclusive_or_expression:public CAst
{
	public:
		typedef exclusive_or_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > exclusive_or_expressionListType;	///< This defines the list type which will store the exclusive_or_expression_item
		typedef exclusive_or_expressionListType::iterator exclusive_or_expressionIterType;				///< This defines the iterator over exclusive_or_expressionListType
		typedef exclusive_or_expressionListType::const_iterator Cexclusive_or_expressionIterType;				///< This defines the constant iterator over exclusive_or_expressionListType

	private:
		exclusive_or_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		exclusive_or_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of exclusive_or_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<exclusive_or_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to exclusive_or_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<exclusive_or_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to exclusive_or_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"exclusive_or_expression"</b>
		 * \returns <b>"exclusive_or_expression"</b>
                 */
		virtual std::string name()const {return "exclusive_or_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_EXCLUSIVE_OR_EXPRESSION
		 * \returns  ID_EXCLUSIVE_OR_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_EXCLUSIVE_OR_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cexclusive_or_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~exclusive_or_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:initializer
//////////////////////////////////////////


/**
 * \brief Implements initializer
 * 
 * This is the interface class. This implements the patterns
 *  - (assignment_expression,)
 *  - ('{', initializer_list, '}')
 *  - ('{', initializer_list, ',', '}')
 * 
 **/
class initializer:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~initializer(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class token;
class initializer_list;





/**
 * \brief initializer_1 implements the pattern: <b>('{', initializer_list, ',', '}')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_initializer_1 [ label="initializer_1", URL="\ref initializer_1", color="#00AAAA" ];
 *     node_initializer_list [ label="initializer_list", URL="\ref initializer_list", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_initializer_1 ->  node_initializer_list [label="_p_initializer_list" style=solid];
 *     node_initializer_1 ->  node_token [label="_p_token" style=dotted];
 * }
 * \enddot
 */
class initializer_1:public initializer
{
	private:
		ReferenceCountedAutoPointer<initializer_list> _p_initializer_list;	  ///< A pointer to initializer_list.
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of initializer_1
		 *
		 * This function handles the initializer_1
                 */
		initializer_1	
				(
					ReferenceCountedAutoPointer<initializer_list> _arg_initializer_list,   ///< A pointer to initializer_list.
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"initializer_1"</b>
		 * \returns <b>"initializer_1"</b>
                 */
		virtual std::string name()const			{return std::string("initializer_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_INITIALIZER_1
		 * \returns  ID_INITIALIZER_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_INITIALIZER_1;}



		ReferenceCountedAutoPointer<initializer_list>& p_initializer_list()
		{
			return _p_initializer_list;
		}

		const ReferenceCountedAutoPointer<initializer_list>& p_initializer_list()const
		{
			return _p_initializer_list;
		}
		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~initializer_1()
		{}
};





class assignment_expression;



/**
 * \brief initializer_2 implements the pattern: <b>(assignment_expression,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_initializer_2 [ label="initializer_2", URL="\ref initializer_2", color="#00AAAA" ];
 *     node_assignment_expression [ label="assignment_expression", URL="\ref assignment_expression", color="#00AAAA"];
 *     node_initializer_2 ->  node_assignment_expression [label="_p_assignment_expression" style=solid];
 * }
 * \enddot
 */
class initializer_2:public initializer
{
	private:
		ReferenceCountedAutoPointer<assignment_expression> _p_assignment_expression;	  ///< A pointer to assignment_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of initializer_2
		 *
		 * This function handles the initializer_2
                 */
		initializer_2	
				(
					ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression  ///< A pointer to assignment_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"initializer_2"</b>
		 * \returns <b>"initializer_2"</b>
                 */
		virtual std::string name()const			{return std::string("initializer_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_INITIALIZER_2
		 * \returns  ID_INITIALIZER_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_INITIALIZER_2;}



		ReferenceCountedAutoPointer<assignment_expression>& p_assignment_expression()
		{
			return _p_assignment_expression;
		}

		const ReferenceCountedAutoPointer<assignment_expression>& p_assignment_expression()const
		{
			return _p_assignment_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~initializer_2()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declaration_list
//////////////////////////////////////////





class struct_declaration;



/**
 * \brief struct_declaration_list_item implements the pattern: <b>(struct_declaration_list, struct_declaration)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_struct_declaration_list_item [ label="struct_declaration_list_item", URL="\ref struct_declaration_list_item", color="#00AAAA" ];
 *     node_struct_declaration [ label="struct_declaration", URL="\ref struct_declaration", color="#00AAAA"];
 *     node_struct_declaration_list_item ->  node_struct_declaration [label="_p_struct_declaration" style=solid];
 * }
 * \enddot
 */
class struct_declaration_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<struct_declaration> _p_struct_declaration;	  ///< A pointer to struct_declaration.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of struct_declaration_list_item
		 *
		 * This function handles the struct_declaration_list_item
                 */
		struct_declaration_list_item	
				(
					ReferenceCountedAutoPointer<struct_declaration> _arg_struct_declaration  ///< A pointer to struct_declaration.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_declaration_list_item"</b>
		 * \returns <b>"struct_declaration_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("struct_declaration_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_DECLARATION_LIST_ITEM
		 * \returns  ID_STRUCT_DECLARATION_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_DECLARATION_LIST_ITEM;}



		ReferenceCountedAutoPointer<struct_declaration>& p_struct_declaration()
		{
			return _p_struct_declaration;
		}

		const ReferenceCountedAutoPointer<struct_declaration>& p_struct_declaration()const
		{
			return _p_struct_declaration;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~struct_declaration_list_item()
		{}
};





/**
 * \brief The basic class to handle struct_declaration_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class struct_declaration_list:public CAst
{
	public:
		typedef struct_declaration_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > struct_declaration_listListType;	///< This defines the list type which will store the struct_declaration_list_item
		typedef struct_declaration_listListType::iterator struct_declaration_listIterType;				///< This defines the iterator over struct_declaration_listListType
		typedef struct_declaration_listListType::const_iterator Cstruct_declaration_listIterType;				///< This defines the constant iterator over struct_declaration_listListType

	private:
		struct_declaration_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		struct_declaration_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of struct_declaration_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<struct_declaration_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to struct_declaration_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<struct_declaration_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to struct_declaration_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_declaration_list"</b>
		 * \returns <b>"struct_declaration_list"</b>
                 */
		virtual std::string name()const {return "struct_declaration_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_DECLARATION_LIST
		 * \returns  ID_STRUCT_DECLARATION_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_DECLARATION_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cstruct_declaration_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~struct_declaration_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:assignment_operator
//////////////////////////////////////////





class token;




/**
 * \brief assignment_operator implements the pattern: <b>('=',)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_assignment_operator [ label="assignment_operator", URL="\ref assignment_operator", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_assignment_operator ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class assignment_operator:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>DIV_ASSIGN</b>, <b>MOD_ASSIGN</b>, <b>ADD_ASSIGN</b>, <b>SUB_ASSIGN</b>, <b>LEFT_ASSIGN</b>, <b>RIGHT_ASSIGN</b>, <b>AND_ASSIGN</b>, <b>XOR_ASSIGN</b>, <b>OR_ASSIGN</b>, <b>'='</b>, <b>MUL_ASSIGN</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of assignment_operator
		 *
		 * This function handles the assignment_operator
                 */
		assignment_operator	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>DIV_ASSIGN</b>, <b>MOD_ASSIGN</b>, <b>ADD_ASSIGN</b>, <b>SUB_ASSIGN</b>, <b>LEFT_ASSIGN</b>, <b>RIGHT_ASSIGN</b>, <b>AND_ASSIGN</b>, <b>XOR_ASSIGN</b>, <b>OR_ASSIGN</b>, <b>'='</b>, <b>MUL_ASSIGN</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"assignment_operator"</b>
		 * \returns <b>"assignment_operator"</b>
                 */
		virtual std::string name()const			{return std::string("assignment_operator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ASSIGNMENT_OPERATOR
		 * \returns  ID_ASSIGNMENT_OPERATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ASSIGNMENT_OPERATOR;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~assignment_operator()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declaration
//////////////////////////////////////////





class specifier_qualifier_list;
class struct_declarator_list;




/**
 * \brief struct_declaration implements the pattern: <b>(specifier_qualifier_list, struct_declarator_list, ';')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_struct_declaration [ label="struct_declaration", URL="\ref struct_declaration", color="#00AAAA" ];
 *     node_specifier_qualifier_list [ label="specifier_qualifier_list", URL="\ref specifier_qualifier_list", color="#00AAAA"];
 *     node_struct_declarator_list [ label="struct_declarator_list", URL="\ref struct_declarator_list", color="#00AAAA"];
 *     node_struct_declaration ->  node_specifier_qualifier_list [label="_p_specifier_qualifier_list" style=solid];
 *     node_struct_declaration ->  node_struct_declarator_list [label="_p_struct_declarator_list" style=solid];
 * }
 * \enddot
 */
class struct_declaration:public CAst
{
	private:
		ReferenceCountedAutoPointer<specifier_qualifier_list> _p_specifier_qualifier_list;	  ///< A pointer to specifier_qualifier_list.
		ReferenceCountedAutoPointer<struct_declarator_list> _p_struct_declarator_list;	  ///< A pointer to struct_declarator_list.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of struct_declaration
		 *
		 * This function handles the struct_declaration
                 */
		struct_declaration	
				(
					ReferenceCountedAutoPointer<specifier_qualifier_list> _arg_specifier_qualifier_list,   ///< A pointer to specifier_qualifier_list.
					ReferenceCountedAutoPointer<struct_declarator_list> _arg_struct_declarator_list  ///< A pointer to struct_declarator_list.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_declaration"</b>
		 * \returns <b>"struct_declaration"</b>
                 */
		virtual std::string name()const			{return std::string("struct_declaration");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_DECLARATION
		 * \returns  ID_STRUCT_DECLARATION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_DECLARATION;}



		ReferenceCountedAutoPointer<specifier_qualifier_list>& p_specifier_qualifier_list()
		{
			return _p_specifier_qualifier_list;
		}

		const ReferenceCountedAutoPointer<specifier_qualifier_list>& p_specifier_qualifier_list()const
		{
			return _p_specifier_qualifier_list;
		}
		ReferenceCountedAutoPointer<struct_declarator_list>& p_struct_declarator_list()
		{
			return _p_struct_declarator_list;
		}

		const ReferenceCountedAutoPointer<struct_declarator_list>& p_struct_declarator_list()const
		{
			return _p_struct_declarator_list;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~struct_declaration()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:abstract_declarator
//////////////////////////////////////////





class direct_abstract_declarator;
class pointer;




/**
 * \brief abstract_declarator implements the pattern: <b>(pointer, direct_abstract_declarator)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_abstract_declarator [ label="abstract_declarator", URL="\ref abstract_declarator", color="#00AAAA" ];
 *     node_pointer [ label="pointer", URL="\ref pointer", color="#00AAAA"];
 *     node_direct_abstract_declarator [ label="direct_abstract_declarator", URL="\ref direct_abstract_declarator", color="#00AAAA"];
 *     node_abstract_declarator ->  node_pointer [label="_p_pointer" style=dotted];
 *     node_abstract_declarator ->  node_direct_abstract_declarator [label="_p_direct_abstract_declarator" style=dotted];
 * }
 * \enddot
 */
class abstract_declarator:public CAst
{
	private:
		ReferenceCountedAutoPointer<pointer> _p_pointer;	  ///< A pointer to pointer. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<direct_abstract_declarator> _p_direct_abstract_declarator;	  ///< A pointer to direct_abstract_declarator. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of abstract_declarator
		 *
		 * This function handles the abstract_declarator
                 */
		abstract_declarator	
				(
					ReferenceCountedAutoPointer<pointer> _arg_pointer,   ///< A pointer to pointer. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<direct_abstract_declarator> _arg_direct_abstract_declarator  ///< A pointer to direct_abstract_declarator. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"abstract_declarator"</b>
		 * \returns <b>"abstract_declarator"</b>
                 */
		virtual std::string name()const			{return std::string("abstract_declarator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ABSTRACT_DECLARATOR
		 * \returns  ID_ABSTRACT_DECLARATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ABSTRACT_DECLARATOR;}



		ReferenceCountedAutoPointer<pointer>& p_pointer()
		{
			return _p_pointer;
		}

		const ReferenceCountedAutoPointer<pointer>& p_pointer()const
		{
			return _p_pointer;
		}
		ReferenceCountedAutoPointer<direct_abstract_declarator>& p_direct_abstract_declarator()
		{
			return _p_direct_abstract_declarator;
		}

		const ReferenceCountedAutoPointer<direct_abstract_declarator>& p_direct_abstract_declarator()const
		{
			return _p_direct_abstract_declarator;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~abstract_declarator()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:iteration_statement
//////////////////////////////////////////


/**
 * \brief Implements iteration_statement
 * 
 * This is the interface class. This implements the patterns
 *  - (WHILE, '(', expression, ')', statement)
 *  - (DO, statement, WHILE, '(', expression, ')', ';')
 *  - (FOR, '(', expression_statement, expression_statement, ')', statement)
 *  - (FOR, '(', expression_statement, expression_statement, expression, ')', statement)
 * 
 **/
class iteration_statement:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~iteration_statement(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class expression_statement;
class expression;
class statement;






/**
 * \brief iteration_statement_1 implements the pattern: <b>(FOR, '(', expression_statement, expression_statement, expression, ')', statement)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_iteration_statement_1 [ label="iteration_statement_1", URL="\ref iteration_statement_1", color="#00AAAA" ];
 *     node_expression_statement [ label="expression_statement", URL="\ref expression_statement", color="#00AAAA"];
 *     node_expression_statement [ label="expression_statement", URL="\ref expression_statement", color="#00AAAA"];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_iteration_statement_1 ->  node_expression_statement [label="_p_expression_statement1" style=solid];
 *     node_iteration_statement_1 ->  node_expression_statement [label="_p_expression_statement2" style=solid];
 *     node_iteration_statement_1 ->  node_expression [label="_p_expression" style=dotted];
 *     node_iteration_statement_1 ->  node_statement [label="_p_statement" style=solid];
 * }
 * \enddot
 */
class iteration_statement_1:public iteration_statement
{
	private:
		ReferenceCountedAutoPointer<expression_statement> _p_expression_statement1;	  ///< A pointer to expression_statement.
		ReferenceCountedAutoPointer<expression_statement> _p_expression_statement2;	  ///< A pointer to expression_statement.
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<statement> _p_statement;	  ///< A pointer to statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of iteration_statement_1
		 *
		 * This function handles the iteration_statement_1
                 */
		iteration_statement_1	
				(
					ReferenceCountedAutoPointer<expression_statement> _arg_expression_statement1,   ///< A pointer to expression_statement.
					ReferenceCountedAutoPointer<expression_statement> _arg_expression_statement2,   ///< A pointer to expression_statement.
					ReferenceCountedAutoPointer<expression> _arg_expression,   ///< A pointer to expression. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<statement> _arg_statement  ///< A pointer to statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"iteration_statement_1"</b>
		 * \returns <b>"iteration_statement_1"</b>
                 */
		virtual std::string name()const			{return std::string("iteration_statement_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ITERATION_STATEMENT_1
		 * \returns  ID_ITERATION_STATEMENT_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ITERATION_STATEMENT_1;}



		ReferenceCountedAutoPointer<expression_statement>& p_expression_statement1()
		{
			return _p_expression_statement1;
		}

		const ReferenceCountedAutoPointer<expression_statement>& p_expression_statement1()const
		{
			return _p_expression_statement1;
		}
		ReferenceCountedAutoPointer<expression_statement>& p_expression_statement2()
		{
			return _p_expression_statement2;
		}

		const ReferenceCountedAutoPointer<expression_statement>& p_expression_statement2()const
		{
			return _p_expression_statement2;
		}
		ReferenceCountedAutoPointer<expression>& p_expression()
		{
			return _p_expression;
		}

		const ReferenceCountedAutoPointer<expression>& p_expression()const
		{
			return _p_expression;
		}
		ReferenceCountedAutoPointer<statement>& p_statement()
		{
			return _p_statement;
		}

		const ReferenceCountedAutoPointer<statement>& p_statement()const
		{
			return _p_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~iteration_statement_1()
		{}
};





class expression;
class statement;




/**
 * \brief iteration_statement_2 implements the pattern: <b>(WHILE, '(', expression, ')', statement)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_iteration_statement_2 [ label="iteration_statement_2", URL="\ref iteration_statement_2", color="#00AAAA" ];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_iteration_statement_2 ->  node_expression [label="_p_expression" style=solid];
 *     node_iteration_statement_2 ->  node_statement [label="_p_statement" style=solid];
 * }
 * \enddot
 */
class iteration_statement_2:public iteration_statement
{
	private:
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression.
		ReferenceCountedAutoPointer<statement> _p_statement;	  ///< A pointer to statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of iteration_statement_2
		 *
		 * This function handles the iteration_statement_2
                 */
		iteration_statement_2	
				(
					ReferenceCountedAutoPointer<expression> _arg_expression,   ///< A pointer to expression.
					ReferenceCountedAutoPointer<statement> _arg_statement  ///< A pointer to statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"iteration_statement_2"</b>
		 * \returns <b>"iteration_statement_2"</b>
                 */
		virtual std::string name()const			{return std::string("iteration_statement_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ITERATION_STATEMENT_2
		 * \returns  ID_ITERATION_STATEMENT_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ITERATION_STATEMENT_2;}



		ReferenceCountedAutoPointer<expression>& p_expression()
		{
			return _p_expression;
		}

		const ReferenceCountedAutoPointer<expression>& p_expression()const
		{
			return _p_expression;
		}
		ReferenceCountedAutoPointer<statement>& p_statement()
		{
			return _p_statement;
		}

		const ReferenceCountedAutoPointer<statement>& p_statement()const
		{
			return _p_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~iteration_statement_2()
		{}
};





class expression;
class statement;




/**
 * \brief iteration_statement_3 implements the pattern: <b>(DO, statement, WHILE, '(', expression, ')', ';')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_iteration_statement_3 [ label="iteration_statement_3", URL="\ref iteration_statement_3", color="#00AAAA" ];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_iteration_statement_3 ->  node_statement [label="_p_statement" style=solid];
 *     node_iteration_statement_3 ->  node_expression [label="_p_expression" style=solid];
 * }
 * \enddot
 */
class iteration_statement_3:public iteration_statement
{
	private:
		ReferenceCountedAutoPointer<statement> _p_statement;	  ///< A pointer to statement.
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of iteration_statement_3
		 *
		 * This function handles the iteration_statement_3
                 */
		iteration_statement_3	
				(
					ReferenceCountedAutoPointer<statement> _arg_statement,   ///< A pointer to statement.
					ReferenceCountedAutoPointer<expression> _arg_expression  ///< A pointer to expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"iteration_statement_3"</b>
		 * \returns <b>"iteration_statement_3"</b>
                 */
		virtual std::string name()const			{return std::string("iteration_statement_3");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ITERATION_STATEMENT_3
		 * \returns  ID_ITERATION_STATEMENT_3
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ITERATION_STATEMENT_3;}



		ReferenceCountedAutoPointer<statement>& p_statement()
		{
			return _p_statement;
		}

		const ReferenceCountedAutoPointer<statement>& p_statement()const
		{
			return _p_statement;
		}
		ReferenceCountedAutoPointer<expression>& p_expression()
		{
			return _p_expression;
		}

		const ReferenceCountedAutoPointer<expression>& p_expression()const
		{
			return _p_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~iteration_statement_3()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:additive_expression
//////////////////////////////////////////





class token;
class multiplicative_expression;





/**
 * \brief additive_expression_item implements the pattern: <b>(additive_expression, '+', multiplicative_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_additive_expression_item [ label="additive_expression_item", URL="\ref additive_expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_multiplicative_expression [ label="multiplicative_expression", URL="\ref multiplicative_expression", color="#00AAAA"];
 *     node_additive_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_additive_expression_item ->  node_multiplicative_expression [label="_p_multiplicative_expression" style=solid];
 * }
 * \enddot
 */
class additive_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>'+'</b>, <b>'-'</b>, <b>None</b>
		ReferenceCountedAutoPointer<multiplicative_expression> _p_multiplicative_expression;	  ///< A pointer to multiplicative_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of additive_expression_item
		 *
		 * This function handles the additive_expression_item
                 */
		additive_expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>'+'</b>, <b>'-'</b>, <b>None</b>
					ReferenceCountedAutoPointer<multiplicative_expression> _arg_multiplicative_expression  ///< A pointer to multiplicative_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"additive_expression_item"</b>
		 * \returns <b>"additive_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("additive_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ADDITIVE_EXPRESSION_ITEM
		 * \returns  ID_ADDITIVE_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ADDITIVE_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<multiplicative_expression>& p_multiplicative_expression()
		{
			return _p_multiplicative_expression;
		}

		const ReferenceCountedAutoPointer<multiplicative_expression>& p_multiplicative_expression()const
		{
			return _p_multiplicative_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~additive_expression_item()
		{}
};





/**
 * \brief The basic class to handle additive_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class additive_expression:public CAst
{
	public:
		typedef additive_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > additive_expressionListType;	///< This defines the list type which will store the additive_expression_item
		typedef additive_expressionListType::iterator additive_expressionIterType;				///< This defines the iterator over additive_expressionListType
		typedef additive_expressionListType::const_iterator Cadditive_expressionIterType;				///< This defines the constant iterator over additive_expressionListType

	private:
		additive_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		additive_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of additive_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<additive_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to additive_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<additive_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to additive_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"additive_expression"</b>
		 * \returns <b>"additive_expression"</b>
                 */
		virtual std::string name()const {return "additive_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ADDITIVE_EXPRESSION
		 * \returns  ID_ADDITIVE_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ADDITIVE_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cadditive_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~additive_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:external_declaration
//////////////////////////////////////////


/**
 * \brief Implements external_declaration
 * 
 * This is the interface class. This implements the patterns
 *  - (function_definition,)
 *  - (declaration,)
 * 
 **/
class external_declaration:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~external_declaration(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class declaration;



/**
 * \brief external_declaration_1 implements the pattern: <b>(declaration,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_external_declaration_1 [ label="external_declaration_1", URL="\ref external_declaration_1", color="#00AAAA" ];
 *     node_declaration [ label="declaration", URL="\ref declaration", color="#00AAAA"];
 *     node_external_declaration_1 ->  node_declaration [label="_p_declaration" style=solid];
 * }
 * \enddot
 */
class external_declaration_1:public external_declaration
{
	private:
		ReferenceCountedAutoPointer<declaration> _p_declaration;	  ///< A pointer to declaration.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of external_declaration_1
		 *
		 * This function handles the external_declaration_1
                 */
		external_declaration_1	
				(
					ReferenceCountedAutoPointer<declaration> _arg_declaration  ///< A pointer to declaration.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"external_declaration_1"</b>
		 * \returns <b>"external_declaration_1"</b>
                 */
		virtual std::string name()const			{return std::string("external_declaration_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_EXTERNAL_DECLARATION_1
		 * \returns  ID_EXTERNAL_DECLARATION_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_EXTERNAL_DECLARATION_1;}



		ReferenceCountedAutoPointer<declaration>& p_declaration()
		{
			return _p_declaration;
		}

		const ReferenceCountedAutoPointer<declaration>& p_declaration()const
		{
			return _p_declaration;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~external_declaration_1()
		{}
};





class function_definition;



/**
 * \brief external_declaration_2 implements the pattern: <b>(function_definition,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_external_declaration_2 [ label="external_declaration_2", URL="\ref external_declaration_2", color="#00AAAA" ];
 *     node_function_definition [ label="function_definition", URL="\ref function_definition", color="#00AAAA"];
 *     node_external_declaration_2 ->  node_function_definition [label="_p_function_definition" style=solid];
 * }
 * \enddot
 */
class external_declaration_2:public external_declaration
{
	private:
		ReferenceCountedAutoPointer<function_definition> _p_function_definition;	  ///< A pointer to function_definition.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of external_declaration_2
		 *
		 * This function handles the external_declaration_2
                 */
		external_declaration_2	
				(
					ReferenceCountedAutoPointer<function_definition> _arg_function_definition  ///< A pointer to function_definition.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"external_declaration_2"</b>
		 * \returns <b>"external_declaration_2"</b>
                 */
		virtual std::string name()const			{return std::string("external_declaration_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_EXTERNAL_DECLARATION_2
		 * \returns  ID_EXTERNAL_DECLARATION_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_EXTERNAL_DECLARATION_2;}



		ReferenceCountedAutoPointer<function_definition>& p_function_definition()
		{
			return _p_function_definition;
		}

		const ReferenceCountedAutoPointer<function_definition>& p_function_definition()const
		{
			return _p_function_definition;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~external_declaration_2()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_specifier
//////////////////////////////////////////


/**
 * \brief Implements type_specifier
 * 
 * This is the interface class. This implements the patterns
 *  - (VOID,)
 *  - (CHAR,)
 *  - (SHORT,)
 *  - (INT,)
 *  - (LONG,)
 *  - (FLOAT,)
 *  - (DOUBLE,)
 *  - (SIGNED,)
 *  - (UNSIGNED,)
 *  - (struct_or_union_specifier,)
 *  - (enum_specifier,)
 * 
 **/
class type_specifier:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~type_specifier(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class enum_specifier;



/**
 * \brief type_specifier_1 implements the pattern: <b>(enum_specifier,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_type_specifier_1 [ label="type_specifier_1", URL="\ref type_specifier_1", color="#00AAAA" ];
 *     node_enum_specifier [ label="enum_specifier", URL="\ref enum_specifier", color="#00AAAA"];
 *     node_type_specifier_1 ->  node_enum_specifier [label="_p_enum_specifier" style=solid];
 * }
 * \enddot
 */
class type_specifier_1:public type_specifier
{
	private:
		ReferenceCountedAutoPointer<enum_specifier> _p_enum_specifier;	  ///< A pointer to enum_specifier.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of type_specifier_1
		 *
		 * This function handles the type_specifier_1
                 */
		type_specifier_1	
				(
					ReferenceCountedAutoPointer<enum_specifier> _arg_enum_specifier  ///< A pointer to enum_specifier.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"type_specifier_1"</b>
		 * \returns <b>"type_specifier_1"</b>
                 */
		virtual std::string name()const			{return std::string("type_specifier_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TYPE_SPECIFIER_1
		 * \returns  ID_TYPE_SPECIFIER_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TYPE_SPECIFIER_1;}



		ReferenceCountedAutoPointer<enum_specifier>& p_enum_specifier()
		{
			return _p_enum_specifier;
		}

		const ReferenceCountedAutoPointer<enum_specifier>& p_enum_specifier()const
		{
			return _p_enum_specifier;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~type_specifier_1()
		{}
};





class token;




/**
 * \brief type_specifier_2 implements the pattern: <b>(VOID,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_type_specifier_2 [ label="type_specifier_2", URL="\ref type_specifier_2", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_type_specifier_2 ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class type_specifier_2:public type_specifier
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>SHORT</b>, <b>INT</b>, <b>LONG</b>, <b>SIGNED</b>, <b>UNSIGNED</b>, <b>FLOAT</b>, <b>DOUBLE</b>, <b>VOID</b>, <b>CHAR</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of type_specifier_2
		 *
		 * This function handles the type_specifier_2
                 */
		type_specifier_2	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>SHORT</b>, <b>INT</b>, <b>LONG</b>, <b>SIGNED</b>, <b>UNSIGNED</b>, <b>FLOAT</b>, <b>DOUBLE</b>, <b>VOID</b>, <b>CHAR</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"type_specifier_2"</b>
		 * \returns <b>"type_specifier_2"</b>
                 */
		virtual std::string name()const			{return std::string("type_specifier_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TYPE_SPECIFIER_2
		 * \returns  ID_TYPE_SPECIFIER_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TYPE_SPECIFIER_2;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~type_specifier_2()
		{}
};





class struct_or_union_specifier;



/**
 * \brief type_specifier_3 implements the pattern: <b>(struct_or_union_specifier,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_type_specifier_3 [ label="type_specifier_3", URL="\ref type_specifier_3", color="#00AAAA" ];
 *     node_struct_or_union_specifier [ label="struct_or_union_specifier", URL="\ref struct_or_union_specifier", color="#00AAAA"];
 *     node_type_specifier_3 ->  node_struct_or_union_specifier [label="_p_struct_or_union_specifier" style=solid];
 * }
 * \enddot
 */
class type_specifier_3:public type_specifier
{
	private:
		ReferenceCountedAutoPointer<struct_or_union_specifier> _p_struct_or_union_specifier;	  ///< A pointer to struct_or_union_specifier.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of type_specifier_3
		 *
		 * This function handles the type_specifier_3
                 */
		type_specifier_3	
				(
					ReferenceCountedAutoPointer<struct_or_union_specifier> _arg_struct_or_union_specifier  ///< A pointer to struct_or_union_specifier.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"type_specifier_3"</b>
		 * \returns <b>"type_specifier_3"</b>
                 */
		virtual std::string name()const			{return std::string("type_specifier_3");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TYPE_SPECIFIER_3
		 * \returns  ID_TYPE_SPECIFIER_3
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TYPE_SPECIFIER_3;}



		ReferenceCountedAutoPointer<struct_or_union_specifier>& p_struct_or_union_specifier()
		{
			return _p_struct_or_union_specifier;
		}

		const ReferenceCountedAutoPointer<struct_or_union_specifier>& p_struct_or_union_specifier()const
		{
			return _p_struct_or_union_specifier;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~type_specifier_3()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:compound_statement
//////////////////////////////////////////





class statement_list;
class declaration_list;




/**
 * \brief compound_statement implements the pattern: <b>('{', declaration_list, statement_list, '}')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_compound_statement [ label="compound_statement", URL="\ref compound_statement", color="#00AAAA" ];
 *     node_declaration_list [ label="declaration_list", URL="\ref declaration_list", color="#00AAAA"];
 *     node_statement_list [ label="statement_list", URL="\ref statement_list", color="#00AAAA"];
 *     node_compound_statement ->  node_declaration_list [label="_p_declaration_list" style=dotted];
 *     node_compound_statement ->  node_statement_list [label="_p_statement_list" style=dotted];
 * }
 * \enddot
 */
class compound_statement:public CAst
{
	private:
		ReferenceCountedAutoPointer<declaration_list> _p_declaration_list;	  ///< A pointer to declaration_list. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<statement_list> _p_statement_list;	  ///< A pointer to statement_list. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of compound_statement
		 *
		 * This function handles the compound_statement
                 */
		compound_statement	
				(
					ReferenceCountedAutoPointer<declaration_list> _arg_declaration_list,   ///< A pointer to declaration_list. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<statement_list> _arg_statement_list  ///< A pointer to statement_list. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"compound_statement"</b>
		 * \returns <b>"compound_statement"</b>
                 */
		virtual std::string name()const			{return std::string("compound_statement");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_COMPOUND_STATEMENT
		 * \returns  ID_COMPOUND_STATEMENT
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_COMPOUND_STATEMENT;}



		ReferenceCountedAutoPointer<declaration_list>& p_declaration_list()
		{
			return _p_declaration_list;
		}

		const ReferenceCountedAutoPointer<declaration_list>& p_declaration_list()const
		{
			return _p_declaration_list;
		}
		ReferenceCountedAutoPointer<statement_list>& p_statement_list()
		{
			return _p_statement_list;
		}

		const ReferenceCountedAutoPointer<statement_list>& p_statement_list()const
		{
			return _p_statement_list;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~compound_statement()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:inclusive_or_expression
//////////////////////////////////////////





class token;
class exclusive_or_expression;





/**
 * \brief inclusive_or_expression_item implements the pattern: <b>(inclusive_or_expression, '|', exclusive_or_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_inclusive_or_expression_item [ label="inclusive_or_expression_item", URL="\ref inclusive_or_expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_exclusive_or_expression [ label="exclusive_or_expression", URL="\ref exclusive_or_expression", color="#00AAAA"];
 *     node_inclusive_or_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_inclusive_or_expression_item ->  node_exclusive_or_expression [label="_p_exclusive_or_expression" style=solid];
 * }
 * \enddot
 */
class inclusive_or_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>'|'</b>, <b>None</b>
		ReferenceCountedAutoPointer<exclusive_or_expression> _p_exclusive_or_expression;	  ///< A pointer to exclusive_or_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of inclusive_or_expression_item
		 *
		 * This function handles the inclusive_or_expression_item
                 */
		inclusive_or_expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>'|'</b>, <b>None</b>
					ReferenceCountedAutoPointer<exclusive_or_expression> _arg_exclusive_or_expression  ///< A pointer to exclusive_or_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"inclusive_or_expression_item"</b>
		 * \returns <b>"inclusive_or_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("inclusive_or_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_INCLUSIVE_OR_EXPRESSION_ITEM
		 * \returns  ID_INCLUSIVE_OR_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_INCLUSIVE_OR_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<exclusive_or_expression>& p_exclusive_or_expression()
		{
			return _p_exclusive_or_expression;
		}

		const ReferenceCountedAutoPointer<exclusive_or_expression>& p_exclusive_or_expression()const
		{
			return _p_exclusive_or_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~inclusive_or_expression_item()
		{}
};





/**
 * \brief The basic class to handle inclusive_or_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class inclusive_or_expression:public CAst
{
	public:
		typedef inclusive_or_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > inclusive_or_expressionListType;	///< This defines the list type which will store the inclusive_or_expression_item
		typedef inclusive_or_expressionListType::iterator inclusive_or_expressionIterType;				///< This defines the iterator over inclusive_or_expressionListType
		typedef inclusive_or_expressionListType::const_iterator Cinclusive_or_expressionIterType;				///< This defines the constant iterator over inclusive_or_expressionListType

	private:
		inclusive_or_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		inclusive_or_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of inclusive_or_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<inclusive_or_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to inclusive_or_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<inclusive_or_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to inclusive_or_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"inclusive_or_expression"</b>
		 * \returns <b>"inclusive_or_expression"</b>
                 */
		virtual std::string name()const {return "inclusive_or_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_INCLUSIVE_OR_EXPRESSION
		 * \returns  ID_INCLUSIVE_OR_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_INCLUSIVE_OR_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cinclusive_or_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~inclusive_or_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:pointer
//////////////////////////////////////////





class pointer_item:public CAst
{
	
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;

		virtual ~pointer_item(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;

		std::string code()const
		{
			std::stringstream stream;
			codeStream(stream);
			return stream.str();
		}

};



/**
 * \brief pointer_item_1 implements the pattern: <b>('*', pointer)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_pointer_item_1 [ label="pointer_item_1", URL="\ref pointer_item_1", color="#00AAAA" ];
 * }
 * \enddot
 */
class pointer_item_1:public pointer_item
{
	private:
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of pointer_item_1
		 *
		 * This function handles the pointer_item_1
                 */
		pointer_item_1	
				(
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"pointer_item_1"</b>
		 * \returns <b>"pointer_item_1"</b>
                 */
		virtual std::string name()const			{return std::string("pointer_item_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_POINTER_ITEM_1
		 * \returns  ID_POINTER_ITEM_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_POINTER_ITEM_1;}




		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~pointer_item_1()
		{}
};





class type_qualifier_list;



/**
 * \brief pointer_item_2 implements the pattern: <b>('*', type_qualifier_list, pointer)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_pointer_item_2 [ label="pointer_item_2", URL="\ref pointer_item_2", color="#00AAAA" ];
 *     node_type_qualifier_list [ label="type_qualifier_list", URL="\ref type_qualifier_list", color="#00AAAA"];
 *     node_pointer_item_2 ->  node_type_qualifier_list [label="_p_type_qualifier_list" style=dotted];
 * }
 * \enddot
 */
class pointer_item_2:public pointer_item
{
	private:
		ReferenceCountedAutoPointer<type_qualifier_list> _p_type_qualifier_list;	  ///< A pointer to type_qualifier_list. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of pointer_item_2
		 *
		 * This function handles the pointer_item_2
                 */
		pointer_item_2	
				(
					ReferenceCountedAutoPointer<type_qualifier_list> _arg_type_qualifier_list  ///< A pointer to type_qualifier_list. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"pointer_item_2"</b>
		 * \returns <b>"pointer_item_2"</b>
                 */
		virtual std::string name()const			{return std::string("pointer_item_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_POINTER_ITEM_2
		 * \returns  ID_POINTER_ITEM_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_POINTER_ITEM_2;}



		ReferenceCountedAutoPointer<type_qualifier_list>& p_type_qualifier_list()
		{
			return _p_type_qualifier_list;
		}

		const ReferenceCountedAutoPointer<type_qualifier_list>& p_type_qualifier_list()const
		{
			return _p_type_qualifier_list;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~pointer_item_2()
		{}
};





/**
 * \brief The basic class to handle pointer
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class pointer:public CAst
{
	public:
		typedef pointer_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > pointerListType;	///< This defines the list type which will store the pointer_item
		typedef pointerListType::iterator pointerIterType;				///< This defines the iterator over pointerListType
		typedef pointerListType::const_iterator CpointerIterType;				///< This defines the constant iterator over pointerListType

	private:
		pointerListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		pointer():
				CAst(),
				_itemList()
		{
			LOG("Created List object of pointer: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<pointer_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to pointer: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<pointer_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to pointer: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"pointer"</b>
		 * \returns <b>"pointer"</b>
                 */
		virtual std::string name()const {return "pointer";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_POINTER
		 * \returns  ID_POINTER
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_POINTER;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(CpointerIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~pointer(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:selection_statement
//////////////////////////////////////////


/**
 * \brief Implements selection_statement
 * 
 * This is the interface class. This implements the patterns
 *  - (IF, '(', expression, ')', statement)
 *  - (IF, '(', expression, ')', statement, ELSE, statement)
 *  - (SWITCH, '(', expression, ')', statement)
 * 
 **/
class selection_statement:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~selection_statement(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class expression;
class statement;




/**
 * \brief selection_statement_1 implements the pattern: <b>(SWITCH, '(', expression, ')', statement)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_selection_statement_1 [ label="selection_statement_1", URL="\ref selection_statement_1", color="#00AAAA" ];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_selection_statement_1 ->  node_expression [label="_p_expression" style=solid];
 *     node_selection_statement_1 ->  node_statement [label="_p_statement" style=solid];
 * }
 * \enddot
 */
class selection_statement_1:public selection_statement
{
	private:
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression.
		ReferenceCountedAutoPointer<statement> _p_statement;	  ///< A pointer to statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of selection_statement_1
		 *
		 * This function handles the selection_statement_1
                 */
		selection_statement_1	
				(
					ReferenceCountedAutoPointer<expression> _arg_expression,   ///< A pointer to expression.
					ReferenceCountedAutoPointer<statement> _arg_statement  ///< A pointer to statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"selection_statement_1"</b>
		 * \returns <b>"selection_statement_1"</b>
                 */
		virtual std::string name()const			{return std::string("selection_statement_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_SELECTION_STATEMENT_1
		 * \returns  ID_SELECTION_STATEMENT_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_SELECTION_STATEMENT_1;}



		ReferenceCountedAutoPointer<expression>& p_expression()
		{
			return _p_expression;
		}

		const ReferenceCountedAutoPointer<expression>& p_expression()const
		{
			return _p_expression;
		}
		ReferenceCountedAutoPointer<statement>& p_statement()
		{
			return _p_statement;
		}

		const ReferenceCountedAutoPointer<statement>& p_statement()const
		{
			return _p_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~selection_statement_1()
		{}
};





class token;
class expression;
class statement;







/**
 * \brief selection_statement_2 implements the pattern: <b>(IF, '(', expression, ')', statement, ELSE, statement)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_selection_statement_2 [ label="selection_statement_2", URL="\ref selection_statement_2", color="#00AAAA" ];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_selection_statement_2 ->  node_expression [label="_p_expression" style=solid];
 *     node_selection_statement_2 ->  node_statement [label="_p_statement1" style=solid];
 *     node_selection_statement_2 ->  node_token [label="_p_token" style=dotted];
 *     node_selection_statement_2 ->  node_statement [label="_p_statement2" style=dotted];
 * }
 * \enddot
 */
class selection_statement_2:public selection_statement
{
	private:
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression.
		ReferenceCountedAutoPointer<statement> _p_statement1;	  ///< A pointer to statement.
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>ELSE</b>, <b>None</b>
		ReferenceCountedAutoPointer<statement> _p_statement2;	  ///< A pointer to statement. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of selection_statement_2
		 *
		 * This function handles the selection_statement_2
                 */
		selection_statement_2	
				(
					ReferenceCountedAutoPointer<expression> _arg_expression,   ///< A pointer to expression.
					ReferenceCountedAutoPointer<statement> _arg_statement1,   ///< A pointer to statement.
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>ELSE</b>, <b>None</b>
					ReferenceCountedAutoPointer<statement> _arg_statement2  ///< A pointer to statement. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"selection_statement_2"</b>
		 * \returns <b>"selection_statement_2"</b>
                 */
		virtual std::string name()const			{return std::string("selection_statement_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_SELECTION_STATEMENT_2
		 * \returns  ID_SELECTION_STATEMENT_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_SELECTION_STATEMENT_2;}



		ReferenceCountedAutoPointer<expression>& p_expression()
		{
			return _p_expression;
		}

		const ReferenceCountedAutoPointer<expression>& p_expression()const
		{
			return _p_expression;
		}
		ReferenceCountedAutoPointer<statement>& p_statement1()
		{
			return _p_statement1;
		}

		const ReferenceCountedAutoPointer<statement>& p_statement1()const
		{
			return _p_statement1;
		}
		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<statement>& p_statement2()
		{
			return _p_statement2;
		}

		const ReferenceCountedAutoPointer<statement>& p_statement2()const
		{
			return _p_statement2;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~selection_statement_2()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:postfix_expression
//////////////////////////////////////////


/**
 * \brief Implements postfix_expression
 * 
 * This is the interface class. This implements the patterns
 *  - (primary_expression,)
 *  - (postfix_expression, '[', expression, ']')
 *  - (postfix_expression, '(', ')')
 *  - (postfix_expression, '(', argument_expression_list, ')')
 *  - (postfix_expression, '.', IDENTIFIER)
 *  - (postfix_expression, PTR_OP, IDENTIFIER)
 *  - (postfix_expression, INC_OP)
 *  - (postfix_expression, DEC_OP)
 * 
 **/
class postfix_expression:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~postfix_expression(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class argument_expression_list;
class postfix_expression;




/**
 * \brief postfix_expression_1 implements the pattern: <b>(postfix_expression, '(', argument_expression_list, ')')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_postfix_expression_1 [ label="postfix_expression_1", URL="\ref postfix_expression_1", color="#00AAAA" ];
 *     node_postfix_expression [ label="postfix_expression", URL="\ref postfix_expression", color="#00AAAA"];
 *     node_argument_expression_list [ label="argument_expression_list", URL="\ref argument_expression_list", color="#00AAAA"];
 *     node_postfix_expression_1 ->  node_postfix_expression [label="_p_postfix_expression" style=solid];
 *     node_postfix_expression_1 ->  node_argument_expression_list [label="_p_argument_expression_list" style=dotted];
 * }
 * \enddot
 */
class postfix_expression_1:public postfix_expression
{
	private:
		ReferenceCountedAutoPointer<postfix_expression> _p_postfix_expression;	  ///< A pointer to postfix_expression.
		ReferenceCountedAutoPointer<argument_expression_list> _p_argument_expression_list;	  ///< A pointer to argument_expression_list. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of postfix_expression_1
		 *
		 * This function handles the postfix_expression_1
                 */
		postfix_expression_1	
				(
					ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,   ///< A pointer to postfix_expression.
					ReferenceCountedAutoPointer<argument_expression_list> _arg_argument_expression_list  ///< A pointer to argument_expression_list. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"postfix_expression_1"</b>
		 * \returns <b>"postfix_expression_1"</b>
                 */
		virtual std::string name()const			{return std::string("postfix_expression_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_POSTFIX_EXPRESSION_1
		 * \returns  ID_POSTFIX_EXPRESSION_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_POSTFIX_EXPRESSION_1;}



		ReferenceCountedAutoPointer<postfix_expression>& p_postfix_expression()
		{
			return _p_postfix_expression;
		}

		const ReferenceCountedAutoPointer<postfix_expression>& p_postfix_expression()const
		{
			return _p_postfix_expression;
		}
		ReferenceCountedAutoPointer<argument_expression_list>& p_argument_expression_list()
		{
			return _p_argument_expression_list;
		}

		const ReferenceCountedAutoPointer<argument_expression_list>& p_argument_expression_list()const
		{
			return _p_argument_expression_list;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~postfix_expression_1()
		{}
};





class token;
class postfix_expression;







/**
 * \brief postfix_expression_2 implements the pattern: <b>(postfix_expression, '.', IDENTIFIER)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_postfix_expression_2 [ label="postfix_expression_2", URL="\ref postfix_expression_2", color="#00AAAA" ];
 *     node_postfix_expression [ label="postfix_expression", URL="\ref postfix_expression", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_postfix_expression_2 ->  node_postfix_expression [label="_p_postfix_expression" style=solid];
 *     node_postfix_expression_2 ->  node_token [label="_p_token1" style=solid];
 *     node_postfix_expression_2 ->  node_token [label="_p_token2" style=solid];
 * }
 * \enddot
 */
class postfix_expression_2:public postfix_expression
{
	private:
		ReferenceCountedAutoPointer<postfix_expression> _p_postfix_expression;	  ///< A pointer to postfix_expression.
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>PTR_OP</b>, <b>'.'</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>IDENTIFIER</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of postfix_expression_2
		 *
		 * This function handles the postfix_expression_2
                 */
		postfix_expression_2	
				(
					ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,   ///< A pointer to postfix_expression.
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>PTR_OP</b>, <b>'.'</b>
					ReferenceCountedAutoPointer<token> _arg_token2  ///< A pointer to a token, accepts <b>IDENTIFIER</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"postfix_expression_2"</b>
		 * \returns <b>"postfix_expression_2"</b>
                 */
		virtual std::string name()const			{return std::string("postfix_expression_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_POSTFIX_EXPRESSION_2
		 * \returns  ID_POSTFIX_EXPRESSION_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_POSTFIX_EXPRESSION_2;}



		ReferenceCountedAutoPointer<postfix_expression>& p_postfix_expression()
		{
			return _p_postfix_expression;
		}

		const ReferenceCountedAutoPointer<postfix_expression>& p_postfix_expression()const
		{
			return _p_postfix_expression;
		}
		ReferenceCountedAutoPointer<token>& p_token1()
		{
			return _p_token1;
		}

		const ReferenceCountedAutoPointer<token>& p_token1()const
		{
			return _p_token1;
		}
		ReferenceCountedAutoPointer<token>& p_token2()
		{
			return _p_token2;
		}

		const ReferenceCountedAutoPointer<token>& p_token2()const
		{
			return _p_token2;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~postfix_expression_2()
		{}
};





class primary_expression;



/**
 * \brief postfix_expression_3 implements the pattern: <b>(primary_expression,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_postfix_expression_3 [ label="postfix_expression_3", URL="\ref postfix_expression_3", color="#00AAAA" ];
 *     node_primary_expression [ label="primary_expression", URL="\ref primary_expression", color="#00AAAA"];
 *     node_postfix_expression_3 ->  node_primary_expression [label="_p_primary_expression" style=solid];
 * }
 * \enddot
 */
class postfix_expression_3:public postfix_expression
{
	private:
		ReferenceCountedAutoPointer<primary_expression> _p_primary_expression;	  ///< A pointer to primary_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of postfix_expression_3
		 *
		 * This function handles the postfix_expression_3
                 */
		postfix_expression_3	
				(
					ReferenceCountedAutoPointer<primary_expression> _arg_primary_expression  ///< A pointer to primary_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"postfix_expression_3"</b>
		 * \returns <b>"postfix_expression_3"</b>
                 */
		virtual std::string name()const			{return std::string("postfix_expression_3");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_POSTFIX_EXPRESSION_3
		 * \returns  ID_POSTFIX_EXPRESSION_3
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_POSTFIX_EXPRESSION_3;}



		ReferenceCountedAutoPointer<primary_expression>& p_primary_expression()
		{
			return _p_primary_expression;
		}

		const ReferenceCountedAutoPointer<primary_expression>& p_primary_expression()const
		{
			return _p_primary_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~postfix_expression_3()
		{}
};





class token;
class postfix_expression;





/**
 * \brief postfix_expression_4 implements the pattern: <b>(postfix_expression, INC_OP)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_postfix_expression_4 [ label="postfix_expression_4", URL="\ref postfix_expression_4", color="#00AAAA" ];
 *     node_postfix_expression [ label="postfix_expression", URL="\ref postfix_expression", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_postfix_expression_4 ->  node_postfix_expression [label="_p_postfix_expression" style=solid];
 *     node_postfix_expression_4 ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class postfix_expression_4:public postfix_expression
{
	private:
		ReferenceCountedAutoPointer<postfix_expression> _p_postfix_expression;	  ///< A pointer to postfix_expression.
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>INC_OP</b>, <b>DEC_OP</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of postfix_expression_4
		 *
		 * This function handles the postfix_expression_4
                 */
		postfix_expression_4	
				(
					ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,   ///< A pointer to postfix_expression.
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>INC_OP</b>, <b>DEC_OP</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"postfix_expression_4"</b>
		 * \returns <b>"postfix_expression_4"</b>
                 */
		virtual std::string name()const			{return std::string("postfix_expression_4");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_POSTFIX_EXPRESSION_4
		 * \returns  ID_POSTFIX_EXPRESSION_4
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_POSTFIX_EXPRESSION_4;}



		ReferenceCountedAutoPointer<postfix_expression>& p_postfix_expression()
		{
			return _p_postfix_expression;
		}

		const ReferenceCountedAutoPointer<postfix_expression>& p_postfix_expression()const
		{
			return _p_postfix_expression;
		}
		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~postfix_expression_4()
		{}
};





class expression;
class postfix_expression;




/**
 * \brief postfix_expression_5 implements the pattern: <b>(postfix_expression, '[', expression, ']')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_postfix_expression_5 [ label="postfix_expression_5", URL="\ref postfix_expression_5", color="#00AAAA" ];
 *     node_postfix_expression [ label="postfix_expression", URL="\ref postfix_expression", color="#00AAAA"];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_postfix_expression_5 ->  node_postfix_expression [label="_p_postfix_expression" style=solid];
 *     node_postfix_expression_5 ->  node_expression [label="_p_expression" style=solid];
 * }
 * \enddot
 */
class postfix_expression_5:public postfix_expression
{
	private:
		ReferenceCountedAutoPointer<postfix_expression> _p_postfix_expression;	  ///< A pointer to postfix_expression.
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of postfix_expression_5
		 *
		 * This function handles the postfix_expression_5
                 */
		postfix_expression_5	
				(
					ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,   ///< A pointer to postfix_expression.
					ReferenceCountedAutoPointer<expression> _arg_expression  ///< A pointer to expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"postfix_expression_5"</b>
		 * \returns <b>"postfix_expression_5"</b>
                 */
		virtual std::string name()const			{return std::string("postfix_expression_5");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_POSTFIX_EXPRESSION_5
		 * \returns  ID_POSTFIX_EXPRESSION_5
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_POSTFIX_EXPRESSION_5;}



		ReferenceCountedAutoPointer<postfix_expression>& p_postfix_expression()
		{
			return _p_postfix_expression;
		}

		const ReferenceCountedAutoPointer<postfix_expression>& p_postfix_expression()const
		{
			return _p_postfix_expression;
		}
		ReferenceCountedAutoPointer<expression>& p_expression()
		{
			return _p_expression;
		}

		const ReferenceCountedAutoPointer<expression>& p_expression()const
		{
			return _p_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~postfix_expression_5()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:and_expression
//////////////////////////////////////////





class token;
class equality_expression;





/**
 * \brief and_expression_item implements the pattern: <b>(and_expression, '&', equality_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_and_expression_item [ label="and_expression_item", URL="\ref and_expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_equality_expression [ label="equality_expression", URL="\ref equality_expression", color="#00AAAA"];
 *     node_and_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_and_expression_item ->  node_equality_expression [label="_p_equality_expression" style=solid];
 * }
 * \enddot
 */
class and_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>'&'</b>, <b>None</b>
		ReferenceCountedAutoPointer<equality_expression> _p_equality_expression;	  ///< A pointer to equality_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of and_expression_item
		 *
		 * This function handles the and_expression_item
                 */
		and_expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>'&'</b>, <b>None</b>
					ReferenceCountedAutoPointer<equality_expression> _arg_equality_expression  ///< A pointer to equality_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"and_expression_item"</b>
		 * \returns <b>"and_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("and_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_AND_EXPRESSION_ITEM
		 * \returns  ID_AND_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_AND_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<equality_expression>& p_equality_expression()
		{
			return _p_equality_expression;
		}

		const ReferenceCountedAutoPointer<equality_expression>& p_equality_expression()const
		{
			return _p_equality_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~and_expression_item()
		{}
};





/**
 * \brief The basic class to handle and_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class and_expression:public CAst
{
	public:
		typedef and_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > and_expressionListType;	///< This defines the list type which will store the and_expression_item
		typedef and_expressionListType::iterator and_expressionIterType;				///< This defines the iterator over and_expressionListType
		typedef and_expressionListType::const_iterator Cand_expressionIterType;				///< This defines the constant iterator over and_expressionListType

	private:
		and_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		and_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of and_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<and_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to and_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<and_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to and_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"and_expression"</b>
		 * \returns <b>"and_expression"</b>
                 */
		virtual std::string name()const {return "and_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_AND_EXPRESSION
		 * \returns  ID_AND_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_AND_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cand_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~and_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:statement
//////////////////////////////////////////


/**
 * \brief Implements statement
 * 
 * This is the interface class. This implements the patterns
 *  - (labeled_statement,)
 *  - (compound_statement,)
 *  - (expression_statement,)
 *  - (selection_statement,)
 *  - (iteration_statement,)
 *  - (jump_statement,)
 * 
 **/
class statement:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~statement(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class jump_statement;



/**
 * \brief statement_1 implements the pattern: <b>(jump_statement,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_statement_1 [ label="statement_1", URL="\ref statement_1", color="#00AAAA" ];
 *     node_jump_statement [ label="jump_statement", URL="\ref jump_statement", color="#00AAAA"];
 *     node_statement_1 ->  node_jump_statement [label="_p_jump_statement" style=solid];
 * }
 * \enddot
 */
class statement_1:public statement
{
	private:
		ReferenceCountedAutoPointer<jump_statement> _p_jump_statement;	  ///< A pointer to jump_statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of statement_1
		 *
		 * This function handles the statement_1
                 */
		statement_1	
				(
					ReferenceCountedAutoPointer<jump_statement> _arg_jump_statement  ///< A pointer to jump_statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"statement_1"</b>
		 * \returns <b>"statement_1"</b>
                 */
		virtual std::string name()const			{return std::string("statement_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STATEMENT_1
		 * \returns  ID_STATEMENT_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STATEMENT_1;}



		ReferenceCountedAutoPointer<jump_statement>& p_jump_statement()
		{
			return _p_jump_statement;
		}

		const ReferenceCountedAutoPointer<jump_statement>& p_jump_statement()const
		{
			return _p_jump_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~statement_1()
		{}
};





class labeled_statement;



/**
 * \brief statement_2 implements the pattern: <b>(labeled_statement,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_statement_2 [ label="statement_2", URL="\ref statement_2", color="#00AAAA" ];
 *     node_labeled_statement [ label="labeled_statement", URL="\ref labeled_statement", color="#00AAAA"];
 *     node_statement_2 ->  node_labeled_statement [label="_p_labeled_statement" style=solid];
 * }
 * \enddot
 */
class statement_2:public statement
{
	private:
		ReferenceCountedAutoPointer<labeled_statement> _p_labeled_statement;	  ///< A pointer to labeled_statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of statement_2
		 *
		 * This function handles the statement_2
                 */
		statement_2	
				(
					ReferenceCountedAutoPointer<labeled_statement> _arg_labeled_statement  ///< A pointer to labeled_statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"statement_2"</b>
		 * \returns <b>"statement_2"</b>
                 */
		virtual std::string name()const			{return std::string("statement_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STATEMENT_2
		 * \returns  ID_STATEMENT_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STATEMENT_2;}



		ReferenceCountedAutoPointer<labeled_statement>& p_labeled_statement()
		{
			return _p_labeled_statement;
		}

		const ReferenceCountedAutoPointer<labeled_statement>& p_labeled_statement()const
		{
			return _p_labeled_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~statement_2()
		{}
};





class compound_statement;



/**
 * \brief statement_3 implements the pattern: <b>(compound_statement,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_statement_3 [ label="statement_3", URL="\ref statement_3", color="#00AAAA" ];
 *     node_compound_statement [ label="compound_statement", URL="\ref compound_statement", color="#00AAAA"];
 *     node_statement_3 ->  node_compound_statement [label="_p_compound_statement" style=solid];
 * }
 * \enddot
 */
class statement_3:public statement
{
	private:
		ReferenceCountedAutoPointer<compound_statement> _p_compound_statement;	  ///< A pointer to compound_statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of statement_3
		 *
		 * This function handles the statement_3
                 */
		statement_3	
				(
					ReferenceCountedAutoPointer<compound_statement> _arg_compound_statement  ///< A pointer to compound_statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"statement_3"</b>
		 * \returns <b>"statement_3"</b>
                 */
		virtual std::string name()const			{return std::string("statement_3");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STATEMENT_3
		 * \returns  ID_STATEMENT_3
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STATEMENT_3;}



		ReferenceCountedAutoPointer<compound_statement>& p_compound_statement()
		{
			return _p_compound_statement;
		}

		const ReferenceCountedAutoPointer<compound_statement>& p_compound_statement()const
		{
			return _p_compound_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~statement_3()
		{}
};





class expression_statement;



/**
 * \brief statement_4 implements the pattern: <b>(expression_statement,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_statement_4 [ label="statement_4", URL="\ref statement_4", color="#00AAAA" ];
 *     node_expression_statement [ label="expression_statement", URL="\ref expression_statement", color="#00AAAA"];
 *     node_statement_4 ->  node_expression_statement [label="_p_expression_statement" style=solid];
 * }
 * \enddot
 */
class statement_4:public statement
{
	private:
		ReferenceCountedAutoPointer<expression_statement> _p_expression_statement;	  ///< A pointer to expression_statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of statement_4
		 *
		 * This function handles the statement_4
                 */
		statement_4	
				(
					ReferenceCountedAutoPointer<expression_statement> _arg_expression_statement  ///< A pointer to expression_statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"statement_4"</b>
		 * \returns <b>"statement_4"</b>
                 */
		virtual std::string name()const			{return std::string("statement_4");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STATEMENT_4
		 * \returns  ID_STATEMENT_4
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STATEMENT_4;}



		ReferenceCountedAutoPointer<expression_statement>& p_expression_statement()
		{
			return _p_expression_statement;
		}

		const ReferenceCountedAutoPointer<expression_statement>& p_expression_statement()const
		{
			return _p_expression_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~statement_4()
		{}
};





class selection_statement;



/**
 * \brief statement_5 implements the pattern: <b>(selection_statement,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_statement_5 [ label="statement_5", URL="\ref statement_5", color="#00AAAA" ];
 *     node_selection_statement [ label="selection_statement", URL="\ref selection_statement", color="#00AAAA"];
 *     node_statement_5 ->  node_selection_statement [label="_p_selection_statement" style=solid];
 * }
 * \enddot
 */
class statement_5:public statement
{
	private:
		ReferenceCountedAutoPointer<selection_statement> _p_selection_statement;	  ///< A pointer to selection_statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of statement_5
		 *
		 * This function handles the statement_5
                 */
		statement_5	
				(
					ReferenceCountedAutoPointer<selection_statement> _arg_selection_statement  ///< A pointer to selection_statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"statement_5"</b>
		 * \returns <b>"statement_5"</b>
                 */
		virtual std::string name()const			{return std::string("statement_5");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STATEMENT_5
		 * \returns  ID_STATEMENT_5
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STATEMENT_5;}



		ReferenceCountedAutoPointer<selection_statement>& p_selection_statement()
		{
			return _p_selection_statement;
		}

		const ReferenceCountedAutoPointer<selection_statement>& p_selection_statement()const
		{
			return _p_selection_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~statement_5()
		{}
};





class iteration_statement;



/**
 * \brief statement_6 implements the pattern: <b>(iteration_statement,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_statement_6 [ label="statement_6", URL="\ref statement_6", color="#00AAAA" ];
 *     node_iteration_statement [ label="iteration_statement", URL="\ref iteration_statement", color="#00AAAA"];
 *     node_statement_6 ->  node_iteration_statement [label="_p_iteration_statement" style=solid];
 * }
 * \enddot
 */
class statement_6:public statement
{
	private:
		ReferenceCountedAutoPointer<iteration_statement> _p_iteration_statement;	  ///< A pointer to iteration_statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of statement_6
		 *
		 * This function handles the statement_6
                 */
		statement_6	
				(
					ReferenceCountedAutoPointer<iteration_statement> _arg_iteration_statement  ///< A pointer to iteration_statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"statement_6"</b>
		 * \returns <b>"statement_6"</b>
                 */
		virtual std::string name()const			{return std::string("statement_6");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STATEMENT_6
		 * \returns  ID_STATEMENT_6
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STATEMENT_6;}



		ReferenceCountedAutoPointer<iteration_statement>& p_iteration_statement()
		{
			return _p_iteration_statement;
		}

		const ReferenceCountedAutoPointer<iteration_statement>& p_iteration_statement()const
		{
			return _p_iteration_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~statement_6()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:cast_expression
//////////////////////////////////////////


/**
 * \brief Implements cast_expression
 * 
 * This is the interface class. This implements the patterns
 *  - (unary_expression,)
 *  - ('(', type_name, ')', cast_expression)
 * 
 **/
class cast_expression:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~cast_expression(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class cast_expression;
class type_name;




/**
 * \brief cast_expression_1 implements the pattern: <b>('(', type_name, ')', cast_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_cast_expression_1 [ label="cast_expression_1", URL="\ref cast_expression_1", color="#00AAAA" ];
 *     node_type_name [ label="type_name", URL="\ref type_name", color="#00AAAA"];
 *     node_cast_expression [ label="cast_expression", URL="\ref cast_expression", color="#00AAAA"];
 *     node_cast_expression_1 ->  node_type_name [label="_p_type_name" style=solid];
 *     node_cast_expression_1 ->  node_cast_expression [label="_p_cast_expression" style=solid];
 * }
 * \enddot
 */
class cast_expression_1:public cast_expression
{
	private:
		ReferenceCountedAutoPointer<type_name> _p_type_name;	  ///< A pointer to type_name.
		ReferenceCountedAutoPointer<cast_expression> _p_cast_expression;	  ///< A pointer to cast_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of cast_expression_1
		 *
		 * This function handles the cast_expression_1
                 */
		cast_expression_1	
				(
					ReferenceCountedAutoPointer<type_name> _arg_type_name,   ///< A pointer to type_name.
					ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression  ///< A pointer to cast_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"cast_expression_1"</b>
		 * \returns <b>"cast_expression_1"</b>
                 */
		virtual std::string name()const			{return std::string("cast_expression_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_CAST_EXPRESSION_1
		 * \returns  ID_CAST_EXPRESSION_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_CAST_EXPRESSION_1;}



		ReferenceCountedAutoPointer<type_name>& p_type_name()
		{
			return _p_type_name;
		}

		const ReferenceCountedAutoPointer<type_name>& p_type_name()const
		{
			return _p_type_name;
		}
		ReferenceCountedAutoPointer<cast_expression>& p_cast_expression()
		{
			return _p_cast_expression;
		}

		const ReferenceCountedAutoPointer<cast_expression>& p_cast_expression()const
		{
			return _p_cast_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~cast_expression_1()
		{}
};





class unary_expression;



/**
 * \brief cast_expression_2 implements the pattern: <b>(unary_expression,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_cast_expression_2 [ label="cast_expression_2", URL="\ref cast_expression_2", color="#00AAAA" ];
 *     node_unary_expression [ label="unary_expression", URL="\ref unary_expression", color="#00AAAA"];
 *     node_cast_expression_2 ->  node_unary_expression [label="_p_unary_expression" style=solid];
 * }
 * \enddot
 */
class cast_expression_2:public cast_expression
{
	private:
		ReferenceCountedAutoPointer<unary_expression> _p_unary_expression;	  ///< A pointer to unary_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of cast_expression_2
		 *
		 * This function handles the cast_expression_2
                 */
		cast_expression_2	
				(
					ReferenceCountedAutoPointer<unary_expression> _arg_unary_expression  ///< A pointer to unary_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"cast_expression_2"</b>
		 * \returns <b>"cast_expression_2"</b>
                 */
		virtual std::string name()const			{return std::string("cast_expression_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_CAST_EXPRESSION_2
		 * \returns  ID_CAST_EXPRESSION_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_CAST_EXPRESSION_2;}



		ReferenceCountedAutoPointer<unary_expression>& p_unary_expression()
		{
			return _p_unary_expression;
		}

		const ReferenceCountedAutoPointer<unary_expression>& p_unary_expression()const
		{
			return _p_unary_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~cast_expression_2()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:init_declarator
//////////////////////////////////////////





class token;
class initializer;
class declarator;






/**
 * \brief init_declarator implements the pattern: <b>(declarator, '=', initializer)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_init_declarator [ label="init_declarator", URL="\ref init_declarator", color="#00AAAA" ];
 *     node_declarator [ label="declarator", URL="\ref declarator", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_initializer [ label="initializer", URL="\ref initializer", color="#00AAAA"];
 *     node_init_declarator ->  node_declarator [label="_p_declarator" style=solid];
 *     node_init_declarator ->  node_token [label="_p_token" style=dotted];
 *     node_init_declarator ->  node_initializer [label="_p_initializer" style=dotted];
 * }
 * \enddot
 */
class init_declarator:public CAst
{
	private:
		ReferenceCountedAutoPointer<declarator> _p_declarator;	  ///< A pointer to declarator.
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>'='</b>, <b>None</b>
		ReferenceCountedAutoPointer<initializer> _p_initializer;	  ///< A pointer to initializer. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of init_declarator
		 *
		 * This function handles the init_declarator
                 */
		init_declarator	
				(
					ReferenceCountedAutoPointer<declarator> _arg_declarator,   ///< A pointer to declarator.
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>'='</b>, <b>None</b>
					ReferenceCountedAutoPointer<initializer> _arg_initializer  ///< A pointer to initializer. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"init_declarator"</b>
		 * \returns <b>"init_declarator"</b>
                 */
		virtual std::string name()const			{return std::string("init_declarator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_INIT_DECLARATOR
		 * \returns  ID_INIT_DECLARATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_INIT_DECLARATOR;}



		ReferenceCountedAutoPointer<declarator>& p_declarator()
		{
			return _p_declarator;
		}

		const ReferenceCountedAutoPointer<declarator>& p_declarator()const
		{
			return _p_declarator;
		}
		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<initializer>& p_initializer()
		{
			return _p_initializer;
		}

		const ReferenceCountedAutoPointer<initializer>& p_initializer()const
		{
			return _p_initializer;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~init_declarator()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declarator_list
//////////////////////////////////////////





class token;
class struct_declarator;





/**
 * \brief struct_declarator_list_item implements the pattern: <b>(struct_declarator_list, ',', struct_declarator)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_struct_declarator_list_item [ label="struct_declarator_list_item", URL="\ref struct_declarator_list_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_struct_declarator [ label="struct_declarator", URL="\ref struct_declarator", color="#00AAAA"];
 *     node_struct_declarator_list_item ->  node_token [label="_p_token" style=dotted];
 *     node_struct_declarator_list_item ->  node_struct_declarator [label="_p_struct_declarator" style=solid];
 * }
 * \enddot
 */
class struct_declarator_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
		ReferenceCountedAutoPointer<struct_declarator> _p_struct_declarator;	  ///< A pointer to struct_declarator.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of struct_declarator_list_item
		 *
		 * This function handles the struct_declarator_list_item
                 */
		struct_declarator_list_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
					ReferenceCountedAutoPointer<struct_declarator> _arg_struct_declarator  ///< A pointer to struct_declarator.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_declarator_list_item"</b>
		 * \returns <b>"struct_declarator_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("struct_declarator_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_DECLARATOR_LIST_ITEM
		 * \returns  ID_STRUCT_DECLARATOR_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_DECLARATOR_LIST_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<struct_declarator>& p_struct_declarator()
		{
			return _p_struct_declarator;
		}

		const ReferenceCountedAutoPointer<struct_declarator>& p_struct_declarator()const
		{
			return _p_struct_declarator;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~struct_declarator_list_item()
		{}
};





/**
 * \brief The basic class to handle struct_declarator_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class struct_declarator_list:public CAst
{
	public:
		typedef struct_declarator_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > struct_declarator_listListType;	///< This defines the list type which will store the struct_declarator_list_item
		typedef struct_declarator_listListType::iterator struct_declarator_listIterType;				///< This defines the iterator over struct_declarator_listListType
		typedef struct_declarator_listListType::const_iterator Cstruct_declarator_listIterType;				///< This defines the constant iterator over struct_declarator_listListType

	private:
		struct_declarator_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		struct_declarator_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of struct_declarator_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<struct_declarator_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to struct_declarator_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<struct_declarator_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to struct_declarator_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_declarator_list"</b>
		 * \returns <b>"struct_declarator_list"</b>
                 */
		virtual std::string name()const {return "struct_declarator_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_DECLARATOR_LIST
		 * \returns  ID_STRUCT_DECLARATOR_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_DECLARATOR_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cstruct_declarator_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~struct_declarator_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:logical_or_expression
//////////////////////////////////////////





class token;
class logical_and_expression;





/**
 * \brief logical_or_expression_item implements the pattern: <b>(logical_or_expression, OR_OP, logical_and_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_logical_or_expression_item [ label="logical_or_expression_item", URL="\ref logical_or_expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_logical_and_expression [ label="logical_and_expression", URL="\ref logical_and_expression", color="#00AAAA"];
 *     node_logical_or_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_logical_or_expression_item ->  node_logical_and_expression [label="_p_logical_and_expression" style=solid];
 * }
 * \enddot
 */
class logical_or_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>OR_OP</b>, <b>None</b>
		ReferenceCountedAutoPointer<logical_and_expression> _p_logical_and_expression;	  ///< A pointer to logical_and_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of logical_or_expression_item
		 *
		 * This function handles the logical_or_expression_item
                 */
		logical_or_expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>OR_OP</b>, <b>None</b>
					ReferenceCountedAutoPointer<logical_and_expression> _arg_logical_and_expression  ///< A pointer to logical_and_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"logical_or_expression_item"</b>
		 * \returns <b>"logical_or_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("logical_or_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_LOGICAL_OR_EXPRESSION_ITEM
		 * \returns  ID_LOGICAL_OR_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_LOGICAL_OR_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<logical_and_expression>& p_logical_and_expression()
		{
			return _p_logical_and_expression;
		}

		const ReferenceCountedAutoPointer<logical_and_expression>& p_logical_and_expression()const
		{
			return _p_logical_and_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~logical_or_expression_item()
		{}
};





/**
 * \brief The basic class to handle logical_or_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class logical_or_expression:public CAst
{
	public:
		typedef logical_or_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > logical_or_expressionListType;	///< This defines the list type which will store the logical_or_expression_item
		typedef logical_or_expressionListType::iterator logical_or_expressionIterType;				///< This defines the iterator over logical_or_expressionListType
		typedef logical_or_expressionListType::const_iterator Clogical_or_expressionIterType;				///< This defines the constant iterator over logical_or_expressionListType

	private:
		logical_or_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		logical_or_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of logical_or_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<logical_or_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to logical_or_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<logical_or_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to logical_or_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"logical_or_expression"</b>
		 * \returns <b>"logical_or_expression"</b>
                 */
		virtual std::string name()const {return "logical_or_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_LOGICAL_OR_EXPRESSION
		 * \returns  ID_LOGICAL_OR_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_LOGICAL_OR_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Clogical_or_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~logical_or_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:unary_operator
//////////////////////////////////////////





class token;




/**
 * \brief unary_operator implements the pattern: <b>('&',)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_unary_operator [ label="unary_operator", URL="\ref unary_operator", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_unary_operator ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class unary_operator:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>'*'</b>, <b>'&'</b>, <b>'+'</b>, <b>'-'</b>, <b>'~'</b>, <b>'!'</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of unary_operator
		 *
		 * This function handles the unary_operator
                 */
		unary_operator	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>'*'</b>, <b>'&'</b>, <b>'+'</b>, <b>'-'</b>, <b>'~'</b>, <b>'!'</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"unary_operator"</b>
		 * \returns <b>"unary_operator"</b>
                 */
		virtual std::string name()const			{return std::string("unary_operator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_UNARY_OPERATOR
		 * \returns  ID_UNARY_OPERATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_UNARY_OPERATOR;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~unary_operator()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:relational_expression
//////////////////////////////////////////





class token;
class shift_expression;





/**
 * \brief relational_expression_item implements the pattern: <b>(relational_expression, '<', shift_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_relational_expression_item [ label="relational_expression_item", URL="\ref relational_expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_shift_expression [ label="shift_expression", URL="\ref shift_expression", color="#00AAAA"];
 *     node_relational_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_relational_expression_item ->  node_shift_expression [label="_p_shift_expression" style=solid];
 * }
 * \enddot
 */
class relational_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>GE_OP</b>, <b>LE_OP</b>, <b>'<'</b>, <b>'>'</b>, <b>None</b>
		ReferenceCountedAutoPointer<shift_expression> _p_shift_expression;	  ///< A pointer to shift_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of relational_expression_item
		 *
		 * This function handles the relational_expression_item
                 */
		relational_expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>GE_OP</b>, <b>LE_OP</b>, <b>'<'</b>, <b>'>'</b>, <b>None</b>
					ReferenceCountedAutoPointer<shift_expression> _arg_shift_expression  ///< A pointer to shift_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"relational_expression_item"</b>
		 * \returns <b>"relational_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("relational_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_RELATIONAL_EXPRESSION_ITEM
		 * \returns  ID_RELATIONAL_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_RELATIONAL_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<shift_expression>& p_shift_expression()
		{
			return _p_shift_expression;
		}

		const ReferenceCountedAutoPointer<shift_expression>& p_shift_expression()const
		{
			return _p_shift_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~relational_expression_item()
		{}
};





/**
 * \brief The basic class to handle relational_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class relational_expression:public CAst
{
	public:
		typedef relational_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > relational_expressionListType;	///< This defines the list type which will store the relational_expression_item
		typedef relational_expressionListType::iterator relational_expressionIterType;				///< This defines the iterator over relational_expressionListType
		typedef relational_expressionListType::const_iterator Crelational_expressionIterType;				///< This defines the constant iterator over relational_expressionListType

	private:
		relational_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		relational_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of relational_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<relational_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to relational_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<relational_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to relational_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"relational_expression"</b>
		 * \returns <b>"relational_expression"</b>
                 */
		virtual std::string name()const {return "relational_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_RELATIONAL_EXPRESSION
		 * \returns  ID_RELATIONAL_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_RELATIONAL_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Crelational_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~relational_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_or_union
//////////////////////////////////////////





class token;




/**
 * \brief struct_or_union implements the pattern: <b>(STRUCT,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_struct_or_union [ label="struct_or_union", URL="\ref struct_or_union", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_struct_or_union ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class struct_or_union:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>STRUCT</b>, <b>UNION</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of struct_or_union
		 *
		 * This function handles the struct_or_union
                 */
		struct_or_union	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>STRUCT</b>, <b>UNION</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_or_union"</b>
		 * \returns <b>"struct_or_union"</b>
                 */
		virtual std::string name()const			{return std::string("struct_or_union");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_OR_UNION
		 * \returns  ID_STRUCT_OR_UNION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_OR_UNION;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~struct_or_union()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:enumerator
//////////////////////////////////////////





class token;
class constant_expression;







/**
 * \brief enumerator implements the pattern: <b>(IDENTIFIER, '=', constant_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_enumerator [ label="enumerator", URL="\ref enumerator", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_constant_expression [ label="constant_expression", URL="\ref constant_expression", color="#00AAAA"];
 *     node_enumerator ->  node_token [label="_p_token1" style=solid];
 *     node_enumerator ->  node_token [label="_p_token2" style=dotted];
 *     node_enumerator ->  node_constant_expression [label="_p_constant_expression" style=dotted];
 * }
 * \enddot
 */
class enumerator:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>IDENTIFIER</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>'='</b>, <b>None</b>
		ReferenceCountedAutoPointer<constant_expression> _p_constant_expression;	  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of enumerator
		 *
		 * This function handles the enumerator
                 */
		enumerator	
				(
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>IDENTIFIER</b>
					ReferenceCountedAutoPointer<token> _arg_token2,   ///< A pointer to a token, accepts <b>'='</b>, <b>None</b>
					ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"enumerator"</b>
		 * \returns <b>"enumerator"</b>
                 */
		virtual std::string name()const			{return std::string("enumerator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ENUMERATOR
		 * \returns  ID_ENUMERATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ENUMERATOR;}



		ReferenceCountedAutoPointer<token>& p_token1()
		{
			return _p_token1;
		}

		const ReferenceCountedAutoPointer<token>& p_token1()const
		{
			return _p_token1;
		}
		ReferenceCountedAutoPointer<token>& p_token2()
		{
			return _p_token2;
		}

		const ReferenceCountedAutoPointer<token>& p_token2()const
		{
			return _p_token2;
		}
		ReferenceCountedAutoPointer<constant_expression>& p_constant_expression()
		{
			return _p_constant_expression;
		}

		const ReferenceCountedAutoPointer<constant_expression>& p_constant_expression()const
		{
			return _p_constant_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~enumerator()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:assignment_expression
//////////////////////////////////////////


/**
 * \brief Implements assignment_expression
 * 
 * This is the interface class. This implements the patterns
 *  - (conditional_expression,)
 *  - (unary_expression, assignment_operator, assignment_expression)
 * 
 **/
class assignment_expression:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~assignment_expression(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class conditional_expression;



/**
 * \brief assignment_expression_1 implements the pattern: <b>(conditional_expression,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_assignment_expression_1 [ label="assignment_expression_1", URL="\ref assignment_expression_1", color="#00AAAA" ];
 *     node_conditional_expression [ label="conditional_expression", URL="\ref conditional_expression", color="#00AAAA"];
 *     node_assignment_expression_1 ->  node_conditional_expression [label="_p_conditional_expression" style=solid];
 * }
 * \enddot
 */
class assignment_expression_1:public assignment_expression
{
	private:
		ReferenceCountedAutoPointer<conditional_expression> _p_conditional_expression;	  ///< A pointer to conditional_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of assignment_expression_1
		 *
		 * This function handles the assignment_expression_1
                 */
		assignment_expression_1	
				(
					ReferenceCountedAutoPointer<conditional_expression> _arg_conditional_expression  ///< A pointer to conditional_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"assignment_expression_1"</b>
		 * \returns <b>"assignment_expression_1"</b>
                 */
		virtual std::string name()const			{return std::string("assignment_expression_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ASSIGNMENT_EXPRESSION_1
		 * \returns  ID_ASSIGNMENT_EXPRESSION_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ASSIGNMENT_EXPRESSION_1;}



		ReferenceCountedAutoPointer<conditional_expression>& p_conditional_expression()
		{
			return _p_conditional_expression;
		}

		const ReferenceCountedAutoPointer<conditional_expression>& p_conditional_expression()const
		{
			return _p_conditional_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~assignment_expression_1()
		{}
};





class assignment_operator;
class unary_expression;
class assignment_expression;





/**
 * \brief assignment_expression_2 implements the pattern: <b>(unary_expression, assignment_operator, assignment_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_assignment_expression_2 [ label="assignment_expression_2", URL="\ref assignment_expression_2", color="#00AAAA" ];
 *     node_unary_expression [ label="unary_expression", URL="\ref unary_expression", color="#00AAAA"];
 *     node_assignment_operator [ label="assignment_operator", URL="\ref assignment_operator", color="#00AAAA"];
 *     node_assignment_expression [ label="assignment_expression", URL="\ref assignment_expression", color="#00AAAA"];
 *     node_assignment_expression_2 ->  node_unary_expression [label="_p_unary_expression" style=solid];
 *     node_assignment_expression_2 ->  node_assignment_operator [label="_p_assignment_operator" style=solid];
 *     node_assignment_expression_2 ->  node_assignment_expression [label="_p_assignment_expression" style=solid];
 * }
 * \enddot
 */
class assignment_expression_2:public assignment_expression
{
	private:
		ReferenceCountedAutoPointer<unary_expression> _p_unary_expression;	  ///< A pointer to unary_expression.
		ReferenceCountedAutoPointer<assignment_operator> _p_assignment_operator;	  ///< A pointer to assignment_operator.
		ReferenceCountedAutoPointer<assignment_expression> _p_assignment_expression;	  ///< A pointer to assignment_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of assignment_expression_2
		 *
		 * This function handles the assignment_expression_2
                 */
		assignment_expression_2	
				(
					ReferenceCountedAutoPointer<unary_expression> _arg_unary_expression,   ///< A pointer to unary_expression.
					ReferenceCountedAutoPointer<assignment_operator> _arg_assignment_operator,   ///< A pointer to assignment_operator.
					ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression  ///< A pointer to assignment_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"assignment_expression_2"</b>
		 * \returns <b>"assignment_expression_2"</b>
                 */
		virtual std::string name()const			{return std::string("assignment_expression_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ASSIGNMENT_EXPRESSION_2
		 * \returns  ID_ASSIGNMENT_EXPRESSION_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ASSIGNMENT_EXPRESSION_2;}



		ReferenceCountedAutoPointer<unary_expression>& p_unary_expression()
		{
			return _p_unary_expression;
		}

		const ReferenceCountedAutoPointer<unary_expression>& p_unary_expression()const
		{
			return _p_unary_expression;
		}
		ReferenceCountedAutoPointer<assignment_operator>& p_assignment_operator()
		{
			return _p_assignment_operator;
		}

		const ReferenceCountedAutoPointer<assignment_operator>& p_assignment_operator()const
		{
			return _p_assignment_operator;
		}
		ReferenceCountedAutoPointer<assignment_expression>& p_assignment_expression()
		{
			return _p_assignment_expression;
		}

		const ReferenceCountedAutoPointer<assignment_expression>& p_assignment_expression()const
		{
			return _p_assignment_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~assignment_expression_2()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_type_list
//////////////////////////////////////////





class token;
class parameter_list;







/**
 * \brief parameter_type_list implements the pattern: <b>(parameter_list, ',', ELLIPSIS)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_parameter_type_list [ label="parameter_type_list", URL="\ref parameter_type_list", color="#00AAAA" ];
 *     node_parameter_list [ label="parameter_list", URL="\ref parameter_list", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_parameter_type_list ->  node_parameter_list [label="_p_parameter_list" style=solid];
 *     node_parameter_type_list ->  node_token [label="_p_token1" style=dotted];
 *     node_parameter_type_list ->  node_token [label="_p_token2" style=dotted];
 * }
 * \enddot
 */
class parameter_type_list:public CAst
{
	private:
		ReferenceCountedAutoPointer<parameter_list> _p_parameter_list;	  ///< A pointer to parameter_list.
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>ELLIPSIS</b>, <b>None</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of parameter_type_list
		 *
		 * This function handles the parameter_type_list
                 */
		parameter_type_list	
				(
					ReferenceCountedAutoPointer<parameter_list> _arg_parameter_list,   ///< A pointer to parameter_list.
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
					ReferenceCountedAutoPointer<token> _arg_token2  ///< A pointer to a token, accepts <b>ELLIPSIS</b>, <b>None</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"parameter_type_list"</b>
		 * \returns <b>"parameter_type_list"</b>
                 */
		virtual std::string name()const			{return std::string("parameter_type_list");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_PARAMETER_TYPE_LIST
		 * \returns  ID_PARAMETER_TYPE_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_PARAMETER_TYPE_LIST;}



		ReferenceCountedAutoPointer<parameter_list>& p_parameter_list()
		{
			return _p_parameter_list;
		}

		const ReferenceCountedAutoPointer<parameter_list>& p_parameter_list()const
		{
			return _p_parameter_list;
		}
		ReferenceCountedAutoPointer<token>& p_token1()
		{
			return _p_token1;
		}

		const ReferenceCountedAutoPointer<token>& p_token1()const
		{
			return _p_token1;
		}
		ReferenceCountedAutoPointer<token>& p_token2()
		{
			return _p_token2;
		}

		const ReferenceCountedAutoPointer<token>& p_token2()const
		{
			return _p_token2;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~parameter_type_list()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_declaration
//////////////////////////////////////////


/**
 * \brief Implements parameter_declaration
 * 
 * This is the interface class. This implements the patterns
 *  - (declaration_specifiers, declarator)
 *  - (declaration_specifiers, abstract_declarator)
 *  - (declaration_specifiers,)
 * 
 **/
class parameter_declaration:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~parameter_declaration(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class declaration_specifiers;
class abstract_declarator;




/**
 * \brief parameter_declaration_1 implements the pattern: <b>(declaration_specifiers, abstract_declarator)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_parameter_declaration_1 [ label="parameter_declaration_1", URL="\ref parameter_declaration_1", color="#00AAAA" ];
 *     node_declaration_specifiers [ label="declaration_specifiers", URL="\ref declaration_specifiers", color="#00AAAA"];
 *     node_abstract_declarator [ label="abstract_declarator", URL="\ref abstract_declarator", color="#00AAAA"];
 *     node_parameter_declaration_1 ->  node_declaration_specifiers [label="_p_declaration_specifiers" style=solid];
 *     node_parameter_declaration_1 ->  node_abstract_declarator [label="_p_abstract_declarator" style=solid];
 * }
 * \enddot
 */
class parameter_declaration_1:public parameter_declaration
{
	private:
		ReferenceCountedAutoPointer<declaration_specifiers> _p_declaration_specifiers;	  ///< A pointer to declaration_specifiers.
		ReferenceCountedAutoPointer<abstract_declarator> _p_abstract_declarator;	  ///< A pointer to abstract_declarator.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of parameter_declaration_1
		 *
		 * This function handles the parameter_declaration_1
                 */
		parameter_declaration_1	
				(
					ReferenceCountedAutoPointer<declaration_specifiers> _arg_declaration_specifiers,   ///< A pointer to declaration_specifiers.
					ReferenceCountedAutoPointer<abstract_declarator> _arg_abstract_declarator  ///< A pointer to abstract_declarator.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"parameter_declaration_1"</b>
		 * \returns <b>"parameter_declaration_1"</b>
                 */
		virtual std::string name()const			{return std::string("parameter_declaration_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_PARAMETER_DECLARATION_1
		 * \returns  ID_PARAMETER_DECLARATION_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_PARAMETER_DECLARATION_1;}



		ReferenceCountedAutoPointer<declaration_specifiers>& p_declaration_specifiers()
		{
			return _p_declaration_specifiers;
		}

		const ReferenceCountedAutoPointer<declaration_specifiers>& p_declaration_specifiers()const
		{
			return _p_declaration_specifiers;
		}
		ReferenceCountedAutoPointer<abstract_declarator>& p_abstract_declarator()
		{
			return _p_abstract_declarator;
		}

		const ReferenceCountedAutoPointer<abstract_declarator>& p_abstract_declarator()const
		{
			return _p_abstract_declarator;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~parameter_declaration_1()
		{}
};





class declaration_specifiers;
class declarator;




/**
 * \brief parameter_declaration_2 implements the pattern: <b>(declaration_specifiers, declarator)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_parameter_declaration_2 [ label="parameter_declaration_2", URL="\ref parameter_declaration_2", color="#00AAAA" ];
 *     node_declaration_specifiers [ label="declaration_specifiers", URL="\ref declaration_specifiers", color="#00AAAA"];
 *     node_declarator [ label="declarator", URL="\ref declarator", color="#00AAAA"];
 *     node_parameter_declaration_2 ->  node_declaration_specifiers [label="_p_declaration_specifiers" style=solid];
 *     node_parameter_declaration_2 ->  node_declarator [label="_p_declarator" style=dotted];
 * }
 * \enddot
 */
class parameter_declaration_2:public parameter_declaration
{
	private:
		ReferenceCountedAutoPointer<declaration_specifiers> _p_declaration_specifiers;	  ///< A pointer to declaration_specifiers.
		ReferenceCountedAutoPointer<declarator> _p_declarator;	  ///< A pointer to declarator. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of parameter_declaration_2
		 *
		 * This function handles the parameter_declaration_2
                 */
		parameter_declaration_2	
				(
					ReferenceCountedAutoPointer<declaration_specifiers> _arg_declaration_specifiers,   ///< A pointer to declaration_specifiers.
					ReferenceCountedAutoPointer<declarator> _arg_declarator  ///< A pointer to declarator. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"parameter_declaration_2"</b>
		 * \returns <b>"parameter_declaration_2"</b>
                 */
		virtual std::string name()const			{return std::string("parameter_declaration_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_PARAMETER_DECLARATION_2
		 * \returns  ID_PARAMETER_DECLARATION_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_PARAMETER_DECLARATION_2;}



		ReferenceCountedAutoPointer<declaration_specifiers>& p_declaration_specifiers()
		{
			return _p_declaration_specifiers;
		}

		const ReferenceCountedAutoPointer<declaration_specifiers>& p_declaration_specifiers()const
		{
			return _p_declaration_specifiers;
		}
		ReferenceCountedAutoPointer<declarator>& p_declarator()
		{
			return _p_declarator;
		}

		const ReferenceCountedAutoPointer<declarator>& p_declarator()const
		{
			return _p_declarator;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~parameter_declaration_2()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:multiplicative_expression
//////////////////////////////////////////





class cast_expression;
class token;





/**
 * \brief multiplicative_expression_item implements the pattern: <b>(multiplicative_expression, '*', cast_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_multiplicative_expression_item [ label="multiplicative_expression_item", URL="\ref multiplicative_expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_cast_expression [ label="cast_expression", URL="\ref cast_expression", color="#00AAAA"];
 *     node_multiplicative_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_multiplicative_expression_item ->  node_cast_expression [label="_p_cast_expression" style=solid];
 * }
 * \enddot
 */
class multiplicative_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>'*'</b>, <b>'/'</b>, <b>'%'</b>, <b>None</b>
		ReferenceCountedAutoPointer<cast_expression> _p_cast_expression;	  ///< A pointer to cast_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of multiplicative_expression_item
		 *
		 * This function handles the multiplicative_expression_item
                 */
		multiplicative_expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>'*'</b>, <b>'/'</b>, <b>'%'</b>, <b>None</b>
					ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression  ///< A pointer to cast_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"multiplicative_expression_item"</b>
		 * \returns <b>"multiplicative_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("multiplicative_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_MULTIPLICATIVE_EXPRESSION_ITEM
		 * \returns  ID_MULTIPLICATIVE_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_MULTIPLICATIVE_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<cast_expression>& p_cast_expression()
		{
			return _p_cast_expression;
		}

		const ReferenceCountedAutoPointer<cast_expression>& p_cast_expression()const
		{
			return _p_cast_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~multiplicative_expression_item()
		{}
};





/**
 * \brief The basic class to handle multiplicative_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class multiplicative_expression:public CAst
{
	public:
		typedef multiplicative_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > multiplicative_expressionListType;	///< This defines the list type which will store the multiplicative_expression_item
		typedef multiplicative_expressionListType::iterator multiplicative_expressionIterType;				///< This defines the iterator over multiplicative_expressionListType
		typedef multiplicative_expressionListType::const_iterator Cmultiplicative_expressionIterType;				///< This defines the constant iterator over multiplicative_expressionListType

	private:
		multiplicative_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		multiplicative_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of multiplicative_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<multiplicative_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to multiplicative_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<multiplicative_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to multiplicative_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"multiplicative_expression"</b>
		 * \returns <b>"multiplicative_expression"</b>
                 */
		virtual std::string name()const {return "multiplicative_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_MULTIPLICATIVE_EXPRESSION
		 * \returns  ID_MULTIPLICATIVE_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_MULTIPLICATIVE_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cmultiplicative_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~multiplicative_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_qualifier_list
//////////////////////////////////////////





class type_qualifier;



/**
 * \brief type_qualifier_list_item implements the pattern: <b>(type_qualifier_list, type_qualifier)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_type_qualifier_list_item [ label="type_qualifier_list_item", URL="\ref type_qualifier_list_item", color="#00AAAA" ];
 *     node_type_qualifier [ label="type_qualifier", URL="\ref type_qualifier", color="#00AAAA"];
 *     node_type_qualifier_list_item ->  node_type_qualifier [label="_p_type_qualifier" style=solid];
 * }
 * \enddot
 */
class type_qualifier_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<type_qualifier> _p_type_qualifier;	  ///< A pointer to type_qualifier.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of type_qualifier_list_item
		 *
		 * This function handles the type_qualifier_list_item
                 */
		type_qualifier_list_item	
				(
					ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier  ///< A pointer to type_qualifier.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"type_qualifier_list_item"</b>
		 * \returns <b>"type_qualifier_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("type_qualifier_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TYPE_QUALIFIER_LIST_ITEM
		 * \returns  ID_TYPE_QUALIFIER_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TYPE_QUALIFIER_LIST_ITEM;}



		ReferenceCountedAutoPointer<type_qualifier>& p_type_qualifier()
		{
			return _p_type_qualifier;
		}

		const ReferenceCountedAutoPointer<type_qualifier>& p_type_qualifier()const
		{
			return _p_type_qualifier;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~type_qualifier_list_item()
		{}
};





/**
 * \brief The basic class to handle type_qualifier_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class type_qualifier_list:public CAst
{
	public:
		typedef type_qualifier_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > type_qualifier_listListType;	///< This defines the list type which will store the type_qualifier_list_item
		typedef type_qualifier_listListType::iterator type_qualifier_listIterType;				///< This defines the iterator over type_qualifier_listListType
		typedef type_qualifier_listListType::const_iterator Ctype_qualifier_listIterType;				///< This defines the constant iterator over type_qualifier_listListType

	private:
		type_qualifier_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		type_qualifier_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of type_qualifier_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<type_qualifier_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to type_qualifier_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<type_qualifier_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to type_qualifier_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"type_qualifier_list"</b>
		 * \returns <b>"type_qualifier_list"</b>
                 */
		virtual std::string name()const {return "type_qualifier_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TYPE_QUALIFIER_LIST
		 * \returns  ID_TYPE_QUALIFIER_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TYPE_QUALIFIER_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Ctype_qualifier_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~type_qualifier_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:argument_expression_list
//////////////////////////////////////////





class token;
class assignment_expression;





/**
 * \brief argument_expression_list_item implements the pattern: <b>(argument_expression_list, ',', assignment_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_argument_expression_list_item [ label="argument_expression_list_item", URL="\ref argument_expression_list_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_assignment_expression [ label="assignment_expression", URL="\ref assignment_expression", color="#00AAAA"];
 *     node_argument_expression_list_item ->  node_token [label="_p_token" style=dotted];
 *     node_argument_expression_list_item ->  node_assignment_expression [label="_p_assignment_expression" style=solid];
 * }
 * \enddot
 */
class argument_expression_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
		ReferenceCountedAutoPointer<assignment_expression> _p_assignment_expression;	  ///< A pointer to assignment_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of argument_expression_list_item
		 *
		 * This function handles the argument_expression_list_item
                 */
		argument_expression_list_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
					ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression  ///< A pointer to assignment_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"argument_expression_list_item"</b>
		 * \returns <b>"argument_expression_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("argument_expression_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ARGUMENT_EXPRESSION_LIST_ITEM
		 * \returns  ID_ARGUMENT_EXPRESSION_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ARGUMENT_EXPRESSION_LIST_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<assignment_expression>& p_assignment_expression()
		{
			return _p_assignment_expression;
		}

		const ReferenceCountedAutoPointer<assignment_expression>& p_assignment_expression()const
		{
			return _p_assignment_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~argument_expression_list_item()
		{}
};





/**
 * \brief The basic class to handle argument_expression_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class argument_expression_list:public CAst
{
	public:
		typedef argument_expression_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > argument_expression_listListType;	///< This defines the list type which will store the argument_expression_list_item
		typedef argument_expression_listListType::iterator argument_expression_listIterType;				///< This defines the iterator over argument_expression_listListType
		typedef argument_expression_listListType::const_iterator Cargument_expression_listIterType;				///< This defines the constant iterator over argument_expression_listListType

	private:
		argument_expression_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		argument_expression_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of argument_expression_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<argument_expression_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to argument_expression_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<argument_expression_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to argument_expression_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"argument_expression_list"</b>
		 * \returns <b>"argument_expression_list"</b>
                 */
		virtual std::string name()const {return "argument_expression_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ARGUMENT_EXPRESSION_LIST
		 * \returns  ID_ARGUMENT_EXPRESSION_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ARGUMENT_EXPRESSION_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cargument_expression_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~argument_expression_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:direct_abstract_declarator
//////////////////////////////////////////


/**
 * \brief Implements direct_abstract_declarator
 * 
 * This is the interface class. This implements the patterns
 *  - ('(', abstract_declarator, ')')
 *  - ('[', ']')
 *  - ('[', constant_expression, ']')
 *  - (direct_abstract_declarator, '[', ']')
 *  - (direct_abstract_declarator, '[', constant_expression, ']')
 *  - ('(', ')')
 *  - ('(', parameter_type_list, ')')
 *  - (direct_abstract_declarator, '(', ')')
 *  - (direct_abstract_declarator, '(', parameter_type_list, ')')
 * 
 **/
class direct_abstract_declarator:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~direct_abstract_declarator(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class abstract_declarator;



/**
 * \brief direct_abstract_declarator_1 implements the pattern: <b>('(', abstract_declarator, ')')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_direct_abstract_declarator_1 [ label="direct_abstract_declarator_1", URL="\ref direct_abstract_declarator_1", color="#00AAAA" ];
 *     node_abstract_declarator [ label="abstract_declarator", URL="\ref abstract_declarator", color="#00AAAA"];
 *     node_direct_abstract_declarator_1 ->  node_abstract_declarator [label="_p_abstract_declarator" style=solid];
 * }
 * \enddot
 */
class direct_abstract_declarator_1:public direct_abstract_declarator
{
	private:
		ReferenceCountedAutoPointer<abstract_declarator> _p_abstract_declarator;	  ///< A pointer to abstract_declarator.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of direct_abstract_declarator_1
		 *
		 * This function handles the direct_abstract_declarator_1
                 */
		direct_abstract_declarator_1	
				(
					ReferenceCountedAutoPointer<abstract_declarator> _arg_abstract_declarator  ///< A pointer to abstract_declarator.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"direct_abstract_declarator_1"</b>
		 * \returns <b>"direct_abstract_declarator_1"</b>
                 */
		virtual std::string name()const			{return std::string("direct_abstract_declarator_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DIRECT_ABSTRACT_DECLARATOR_1
		 * \returns  ID_DIRECT_ABSTRACT_DECLARATOR_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DIRECT_ABSTRACT_DECLARATOR_1;}



		ReferenceCountedAutoPointer<abstract_declarator>& p_abstract_declarator()
		{
			return _p_abstract_declarator;
		}

		const ReferenceCountedAutoPointer<abstract_declarator>& p_abstract_declarator()const
		{
			return _p_abstract_declarator;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~direct_abstract_declarator_1()
		{}
};





class direct_abstract_declarator;
class parameter_type_list;




/**
 * \brief direct_abstract_declarator_2 implements the pattern: <b>(direct_abstract_declarator, '(', parameter_type_list, ')')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_direct_abstract_declarator_2 [ label="direct_abstract_declarator_2", URL="\ref direct_abstract_declarator_2", color="#00AAAA" ];
 *     node_direct_abstract_declarator [ label="direct_abstract_declarator", URL="\ref direct_abstract_declarator", color="#00AAAA"];
 *     node_parameter_type_list [ label="parameter_type_list", URL="\ref parameter_type_list", color="#00AAAA"];
 *     node_direct_abstract_declarator_2 ->  node_direct_abstract_declarator [label="_p_direct_abstract_declarator" style=dotted];
 *     node_direct_abstract_declarator_2 ->  node_parameter_type_list [label="_p_parameter_type_list" style=dotted];
 * }
 * \enddot
 */
class direct_abstract_declarator_2:public direct_abstract_declarator
{
	private:
		ReferenceCountedAutoPointer<direct_abstract_declarator> _p_direct_abstract_declarator;	  ///< A pointer to direct_abstract_declarator. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<parameter_type_list> _p_parameter_type_list;	  ///< A pointer to parameter_type_list. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of direct_abstract_declarator_2
		 *
		 * This function handles the direct_abstract_declarator_2
                 */
		direct_abstract_declarator_2	
				(
					ReferenceCountedAutoPointer<direct_abstract_declarator> _arg_direct_abstract_declarator,   ///< A pointer to direct_abstract_declarator. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<parameter_type_list> _arg_parameter_type_list  ///< A pointer to parameter_type_list. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"direct_abstract_declarator_2"</b>
		 * \returns <b>"direct_abstract_declarator_2"</b>
                 */
		virtual std::string name()const			{return std::string("direct_abstract_declarator_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DIRECT_ABSTRACT_DECLARATOR_2
		 * \returns  ID_DIRECT_ABSTRACT_DECLARATOR_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DIRECT_ABSTRACT_DECLARATOR_2;}



		ReferenceCountedAutoPointer<direct_abstract_declarator>& p_direct_abstract_declarator()
		{
			return _p_direct_abstract_declarator;
		}

		const ReferenceCountedAutoPointer<direct_abstract_declarator>& p_direct_abstract_declarator()const
		{
			return _p_direct_abstract_declarator;
		}
		ReferenceCountedAutoPointer<parameter_type_list>& p_parameter_type_list()
		{
			return _p_parameter_type_list;
		}

		const ReferenceCountedAutoPointer<parameter_type_list>& p_parameter_type_list()const
		{
			return _p_parameter_type_list;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~direct_abstract_declarator_2()
		{}
};





class direct_abstract_declarator;
class constant_expression;




/**
 * \brief direct_abstract_declarator_3 implements the pattern: <b>(direct_abstract_declarator, '[', constant_expression, ']')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_direct_abstract_declarator_3 [ label="direct_abstract_declarator_3", URL="\ref direct_abstract_declarator_3", color="#00AAAA" ];
 *     node_direct_abstract_declarator [ label="direct_abstract_declarator", URL="\ref direct_abstract_declarator", color="#00AAAA"];
 *     node_constant_expression [ label="constant_expression", URL="\ref constant_expression", color="#00AAAA"];
 *     node_direct_abstract_declarator_3 ->  node_direct_abstract_declarator [label="_p_direct_abstract_declarator" style=dotted];
 *     node_direct_abstract_declarator_3 ->  node_constant_expression [label="_p_constant_expression" style=dotted];
 * }
 * \enddot
 */
class direct_abstract_declarator_3:public direct_abstract_declarator
{
	private:
		ReferenceCountedAutoPointer<direct_abstract_declarator> _p_direct_abstract_declarator;	  ///< A pointer to direct_abstract_declarator. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<constant_expression> _p_constant_expression;	  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of direct_abstract_declarator_3
		 *
		 * This function handles the direct_abstract_declarator_3
                 */
		direct_abstract_declarator_3	
				(
					ReferenceCountedAutoPointer<direct_abstract_declarator> _arg_direct_abstract_declarator,   ///< A pointer to direct_abstract_declarator. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"direct_abstract_declarator_3"</b>
		 * \returns <b>"direct_abstract_declarator_3"</b>
                 */
		virtual std::string name()const			{return std::string("direct_abstract_declarator_3");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DIRECT_ABSTRACT_DECLARATOR_3
		 * \returns  ID_DIRECT_ABSTRACT_DECLARATOR_3
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DIRECT_ABSTRACT_DECLARATOR_3;}



		ReferenceCountedAutoPointer<direct_abstract_declarator>& p_direct_abstract_declarator()
		{
			return _p_direct_abstract_declarator;
		}

		const ReferenceCountedAutoPointer<direct_abstract_declarator>& p_direct_abstract_declarator()const
		{
			return _p_direct_abstract_declarator;
		}
		ReferenceCountedAutoPointer<constant_expression>& p_constant_expression()
		{
			return _p_constant_expression;
		}

		const ReferenceCountedAutoPointer<constant_expression>& p_constant_expression()const
		{
			return _p_constant_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~direct_abstract_declarator_3()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:equality_expression
//////////////////////////////////////////





class token;
class relational_expression;





/**
 * \brief equality_expression_item implements the pattern: <b>(equality_expression, EQ_OP, relational_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_equality_expression_item [ label="equality_expression_item", URL="\ref equality_expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_relational_expression [ label="relational_expression", URL="\ref relational_expression", color="#00AAAA"];
 *     node_equality_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_equality_expression_item ->  node_relational_expression [label="_p_relational_expression" style=solid];
 * }
 * \enddot
 */
class equality_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>NE_OP</b>, <b>EQ_OP</b>, <b>None</b>
		ReferenceCountedAutoPointer<relational_expression> _p_relational_expression;	  ///< A pointer to relational_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of equality_expression_item
		 *
		 * This function handles the equality_expression_item
                 */
		equality_expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>NE_OP</b>, <b>EQ_OP</b>, <b>None</b>
					ReferenceCountedAutoPointer<relational_expression> _arg_relational_expression  ///< A pointer to relational_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"equality_expression_item"</b>
		 * \returns <b>"equality_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("equality_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_EQUALITY_EXPRESSION_ITEM
		 * \returns  ID_EQUALITY_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_EQUALITY_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<relational_expression>& p_relational_expression()
		{
			return _p_relational_expression;
		}

		const ReferenceCountedAutoPointer<relational_expression>& p_relational_expression()const
		{
			return _p_relational_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~equality_expression_item()
		{}
};





/**
 * \brief The basic class to handle equality_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class equality_expression:public CAst
{
	public:
		typedef equality_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > equality_expressionListType;	///< This defines the list type which will store the equality_expression_item
		typedef equality_expressionListType::iterator equality_expressionIterType;				///< This defines the iterator over equality_expressionListType
		typedef equality_expressionListType::const_iterator Cequality_expressionIterType;				///< This defines the constant iterator over equality_expressionListType

	private:
		equality_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		equality_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of equality_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<equality_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to equality_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<equality_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to equality_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"equality_expression"</b>
		 * \returns <b>"equality_expression"</b>
                 */
		virtual std::string name()const {return "equality_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_EQUALITY_EXPRESSION
		 * \returns  ID_EQUALITY_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_EQUALITY_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cequality_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~equality_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:primary_expression
//////////////////////////////////////////


/**
 * \brief Implements primary_expression
 * 
 * This is the interface class. This implements the patterns
 *  - (IDENTIFIER,)
 *  - (CONSTANT,)
 *  - (STRING_LITERAL,)
 *  - ('(', expression, ')')
 * 
 **/
class primary_expression:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~primary_expression(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class token;




/**
 * \brief primary_expression_1 implements the pattern: <b>(IDENTIFIER,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_primary_expression_1 [ label="primary_expression_1", URL="\ref primary_expression_1", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_primary_expression_1 ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class primary_expression_1:public primary_expression
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>IDENTIFIER</b>, <b>CONSTANT</b>, <b>STRING_LITERAL</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of primary_expression_1
		 *
		 * This function handles the primary_expression_1
                 */
		primary_expression_1	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>IDENTIFIER</b>, <b>CONSTANT</b>, <b>STRING_LITERAL</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"primary_expression_1"</b>
		 * \returns <b>"primary_expression_1"</b>
                 */
		virtual std::string name()const			{return std::string("primary_expression_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_PRIMARY_EXPRESSION_1
		 * \returns  ID_PRIMARY_EXPRESSION_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_PRIMARY_EXPRESSION_1;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~primary_expression_1()
		{}
};





class expression;



/**
 * \brief primary_expression_2 implements the pattern: <b>('(', expression, ')')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_primary_expression_2 [ label="primary_expression_2", URL="\ref primary_expression_2", color="#00AAAA" ];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_primary_expression_2 ->  node_expression [label="_p_expression" style=solid];
 * }
 * \enddot
 */
class primary_expression_2:public primary_expression
{
	private:
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of primary_expression_2
		 *
		 * This function handles the primary_expression_2
                 */
		primary_expression_2	
				(
					ReferenceCountedAutoPointer<expression> _arg_expression  ///< A pointer to expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"primary_expression_2"</b>
		 * \returns <b>"primary_expression_2"</b>
                 */
		virtual std::string name()const			{return std::string("primary_expression_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_PRIMARY_EXPRESSION_2
		 * \returns  ID_PRIMARY_EXPRESSION_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_PRIMARY_EXPRESSION_2;}



		ReferenceCountedAutoPointer<expression>& p_expression()
		{
			return _p_expression;
		}

		const ReferenceCountedAutoPointer<expression>& p_expression()const
		{
			return _p_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~primary_expression_2()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration_specifiers
//////////////////////////////////////////





class declaration_specifiers_item:public CAst
{
	
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;

		virtual ~declaration_specifiers_item(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;

		std::string code()const
		{
			std::stringstream stream;
			codeStream(stream);
			return stream.str();
		}

};

class storage_class_specifier;



/**
 * \brief declaration_specifiers_item_1 implements the pattern: <b>(storage_class_specifier, declaration_specifiers)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_declaration_specifiers_item_1 [ label="declaration_specifiers_item_1", URL="\ref declaration_specifiers_item_1", color="#00AAAA" ];
 *     node_storage_class_specifier [ label="storage_class_specifier", URL="\ref storage_class_specifier", color="#00AAAA"];
 *     node_declaration_specifiers_item_1 ->  node_storage_class_specifier [label="_p_storage_class_specifier" style=solid];
 * }
 * \enddot
 */
class declaration_specifiers_item_1:public declaration_specifiers_item
{
	private:
		ReferenceCountedAutoPointer<storage_class_specifier> _p_storage_class_specifier;	  ///< A pointer to storage_class_specifier.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of declaration_specifiers_item_1
		 *
		 * This function handles the declaration_specifiers_item_1
                 */
		declaration_specifiers_item_1	
				(
					ReferenceCountedAutoPointer<storage_class_specifier> _arg_storage_class_specifier  ///< A pointer to storage_class_specifier.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"declaration_specifiers_item_1"</b>
		 * \returns <b>"declaration_specifiers_item_1"</b>
                 */
		virtual std::string name()const			{return std::string("declaration_specifiers_item_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DECLARATION_SPECIFIERS_ITEM_1
		 * \returns  ID_DECLARATION_SPECIFIERS_ITEM_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DECLARATION_SPECIFIERS_ITEM_1;}



		ReferenceCountedAutoPointer<storage_class_specifier>& p_storage_class_specifier()
		{
			return _p_storage_class_specifier;
		}

		const ReferenceCountedAutoPointer<storage_class_specifier>& p_storage_class_specifier()const
		{
			return _p_storage_class_specifier;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~declaration_specifiers_item_1()
		{}
};





class type_specifier;



/**
 * \brief declaration_specifiers_item_2 implements the pattern: <b>(type_specifier, declaration_specifiers)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_declaration_specifiers_item_2 [ label="declaration_specifiers_item_2", URL="\ref declaration_specifiers_item_2", color="#00AAAA" ];
 *     node_type_specifier [ label="type_specifier", URL="\ref type_specifier", color="#00AAAA"];
 *     node_declaration_specifiers_item_2 ->  node_type_specifier [label="_p_type_specifier" style=solid];
 * }
 * \enddot
 */
class declaration_specifiers_item_2:public declaration_specifiers_item
{
	private:
		ReferenceCountedAutoPointer<type_specifier> _p_type_specifier;	  ///< A pointer to type_specifier.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of declaration_specifiers_item_2
		 *
		 * This function handles the declaration_specifiers_item_2
                 */
		declaration_specifiers_item_2	
				(
					ReferenceCountedAutoPointer<type_specifier> _arg_type_specifier  ///< A pointer to type_specifier.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"declaration_specifiers_item_2"</b>
		 * \returns <b>"declaration_specifiers_item_2"</b>
                 */
		virtual std::string name()const			{return std::string("declaration_specifiers_item_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DECLARATION_SPECIFIERS_ITEM_2
		 * \returns  ID_DECLARATION_SPECIFIERS_ITEM_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DECLARATION_SPECIFIERS_ITEM_2;}



		ReferenceCountedAutoPointer<type_specifier>& p_type_specifier()
		{
			return _p_type_specifier;
		}

		const ReferenceCountedAutoPointer<type_specifier>& p_type_specifier()const
		{
			return _p_type_specifier;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~declaration_specifiers_item_2()
		{}
};





class type_qualifier;



/**
 * \brief declaration_specifiers_item_3 implements the pattern: <b>(type_qualifier, declaration_specifiers)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_declaration_specifiers_item_3 [ label="declaration_specifiers_item_3", URL="\ref declaration_specifiers_item_3", color="#00AAAA" ];
 *     node_type_qualifier [ label="type_qualifier", URL="\ref type_qualifier", color="#00AAAA"];
 *     node_declaration_specifiers_item_3 ->  node_type_qualifier [label="_p_type_qualifier" style=solid];
 * }
 * \enddot
 */
class declaration_specifiers_item_3:public declaration_specifiers_item
{
	private:
		ReferenceCountedAutoPointer<type_qualifier> _p_type_qualifier;	  ///< A pointer to type_qualifier.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of declaration_specifiers_item_3
		 *
		 * This function handles the declaration_specifiers_item_3
                 */
		declaration_specifiers_item_3	
				(
					ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier  ///< A pointer to type_qualifier.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"declaration_specifiers_item_3"</b>
		 * \returns <b>"declaration_specifiers_item_3"</b>
                 */
		virtual std::string name()const			{return std::string("declaration_specifiers_item_3");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DECLARATION_SPECIFIERS_ITEM_3
		 * \returns  ID_DECLARATION_SPECIFIERS_ITEM_3
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DECLARATION_SPECIFIERS_ITEM_3;}



		ReferenceCountedAutoPointer<type_qualifier>& p_type_qualifier()
		{
			return _p_type_qualifier;
		}

		const ReferenceCountedAutoPointer<type_qualifier>& p_type_qualifier()const
		{
			return _p_type_qualifier;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~declaration_specifiers_item_3()
		{}
};





/**
 * \brief The basic class to handle declaration_specifiers
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class declaration_specifiers:public CAst
{
	public:
		typedef declaration_specifiers_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > declaration_specifiersListType;	///< This defines the list type which will store the declaration_specifiers_item
		typedef declaration_specifiersListType::iterator declaration_specifiersIterType;				///< This defines the iterator over declaration_specifiersListType
		typedef declaration_specifiersListType::const_iterator Cdeclaration_specifiersIterType;				///< This defines the constant iterator over declaration_specifiersListType

	private:
		declaration_specifiersListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		declaration_specifiers():
				CAst(),
				_itemList()
		{
			LOG("Created List object of declaration_specifiers: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<declaration_specifiers_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to declaration_specifiers: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<declaration_specifiers_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to declaration_specifiers: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"declaration_specifiers"</b>
		 * \returns <b>"declaration_specifiers"</b>
                 */
		virtual std::string name()const {return "declaration_specifiers";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DECLARATION_SPECIFIERS
		 * \returns  ID_DECLARATION_SPECIFIERS
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DECLARATION_SPECIFIERS;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cdeclaration_specifiersIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~declaration_specifiers(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration
//////////////////////////////////////////





class declaration_specifiers;
class init_declarator_list;




/**
 * \brief declaration implements the pattern: <b>(declaration_specifiers, init_declarator_list, ';')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_declaration [ label="declaration", URL="\ref declaration", color="#00AAAA" ];
 *     node_declaration_specifiers [ label="declaration_specifiers", URL="\ref declaration_specifiers", color="#00AAAA"];
 *     node_init_declarator_list [ label="init_declarator_list", URL="\ref init_declarator_list", color="#00AAAA"];
 *     node_declaration ->  node_declaration_specifiers [label="_p_declaration_specifiers" style=solid];
 *     node_declaration ->  node_init_declarator_list [label="_p_init_declarator_list" style=dotted];
 * }
 * \enddot
 */
class declaration:public CAst
{
	private:
		ReferenceCountedAutoPointer<declaration_specifiers> _p_declaration_specifiers;	  ///< A pointer to declaration_specifiers.
		ReferenceCountedAutoPointer<init_declarator_list> _p_init_declarator_list;	  ///< A pointer to init_declarator_list. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of declaration
		 *
		 * This function handles the declaration
                 */
		declaration	
				(
					ReferenceCountedAutoPointer<declaration_specifiers> _arg_declaration_specifiers,   ///< A pointer to declaration_specifiers.
					ReferenceCountedAutoPointer<init_declarator_list> _arg_init_declarator_list  ///< A pointer to init_declarator_list. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"declaration"</b>
		 * \returns <b>"declaration"</b>
                 */
		virtual std::string name()const			{return std::string("declaration");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DECLARATION
		 * \returns  ID_DECLARATION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DECLARATION;}



		ReferenceCountedAutoPointer<declaration_specifiers>& p_declaration_specifiers()
		{
			return _p_declaration_specifiers;
		}

		const ReferenceCountedAutoPointer<declaration_specifiers>& p_declaration_specifiers()const
		{
			return _p_declaration_specifiers;
		}
		ReferenceCountedAutoPointer<init_declarator_list>& p_init_declarator_list()
		{
			return _p_init_declarator_list;
		}

		const ReferenceCountedAutoPointer<init_declarator_list>& p_init_declarator_list()const
		{
			return _p_init_declarator_list;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~declaration()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:direct_declarator
//////////////////////////////////////////


/**
 * \brief Implements direct_declarator
 * 
 * This is the interface class. This implements the patterns
 *  - (IDENTIFIER,)
 *  - ('(', declarator, ')')
 *  - (direct_declarator, '[', constant_expression, ']')
 *  - (direct_declarator, '[', ']')
 *  - (direct_declarator, '(', parameter_type_list, ')')
 *  - (direct_declarator, '(', identifier_list, ')')
 *  - (direct_declarator, '(', ')')
 * 
 **/
class direct_declarator:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~direct_declarator(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class declarator;



/**
 * \brief direct_declarator_1 implements the pattern: <b>('(', declarator, ')')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_direct_declarator_1 [ label="direct_declarator_1", URL="\ref direct_declarator_1", color="#00AAAA" ];
 *     node_declarator [ label="declarator", URL="\ref declarator", color="#00AAAA"];
 *     node_direct_declarator_1 ->  node_declarator [label="_p_declarator" style=solid];
 * }
 * \enddot
 */
class direct_declarator_1:public direct_declarator
{
	private:
		ReferenceCountedAutoPointer<declarator> _p_declarator;	  ///< A pointer to declarator.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of direct_declarator_1
		 *
		 * This function handles the direct_declarator_1
                 */
		direct_declarator_1	
				(
					ReferenceCountedAutoPointer<declarator> _arg_declarator  ///< A pointer to declarator.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"direct_declarator_1"</b>
		 * \returns <b>"direct_declarator_1"</b>
                 */
		virtual std::string name()const			{return std::string("direct_declarator_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DIRECT_DECLARATOR_1
		 * \returns  ID_DIRECT_DECLARATOR_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DIRECT_DECLARATOR_1;}



		ReferenceCountedAutoPointer<declarator>& p_declarator()
		{
			return _p_declarator;
		}

		const ReferenceCountedAutoPointer<declarator>& p_declarator()const
		{
			return _p_declarator;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~direct_declarator_1()
		{}
};





class direct_declarator;
class constant_expression;




/**
 * \brief direct_declarator_2 implements the pattern: <b>(direct_declarator, '[', constant_expression, ']')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_direct_declarator_2 [ label="direct_declarator_2", URL="\ref direct_declarator_2", color="#00AAAA" ];
 *     node_direct_declarator [ label="direct_declarator", URL="\ref direct_declarator", color="#00AAAA"];
 *     node_constant_expression [ label="constant_expression", URL="\ref constant_expression", color="#00AAAA"];
 *     node_direct_declarator_2 ->  node_direct_declarator [label="_p_direct_declarator" style=solid];
 *     node_direct_declarator_2 ->  node_constant_expression [label="_p_constant_expression" style=dotted];
 * }
 * \enddot
 */
class direct_declarator_2:public direct_declarator
{
	private:
		ReferenceCountedAutoPointer<direct_declarator> _p_direct_declarator;	  ///< A pointer to direct_declarator.
		ReferenceCountedAutoPointer<constant_expression> _p_constant_expression;	  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of direct_declarator_2
		 *
		 * This function handles the direct_declarator_2
                 */
		direct_declarator_2	
				(
					ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator,   ///< A pointer to direct_declarator.
					ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"direct_declarator_2"</b>
		 * \returns <b>"direct_declarator_2"</b>
                 */
		virtual std::string name()const			{return std::string("direct_declarator_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DIRECT_DECLARATOR_2
		 * \returns  ID_DIRECT_DECLARATOR_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DIRECT_DECLARATOR_2;}



		ReferenceCountedAutoPointer<direct_declarator>& p_direct_declarator()
		{
			return _p_direct_declarator;
		}

		const ReferenceCountedAutoPointer<direct_declarator>& p_direct_declarator()const
		{
			return _p_direct_declarator;
		}
		ReferenceCountedAutoPointer<constant_expression>& p_constant_expression()
		{
			return _p_constant_expression;
		}

		const ReferenceCountedAutoPointer<constant_expression>& p_constant_expression()const
		{
			return _p_constant_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~direct_declarator_2()
		{}
};





class parameter_type_list;
class direct_declarator;




/**
 * \brief direct_declarator_3 implements the pattern: <b>(direct_declarator, '(', parameter_type_list, ')')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_direct_declarator_3 [ label="direct_declarator_3", URL="\ref direct_declarator_3", color="#00AAAA" ];
 *     node_direct_declarator [ label="direct_declarator", URL="\ref direct_declarator", color="#00AAAA"];
 *     node_parameter_type_list [ label="parameter_type_list", URL="\ref parameter_type_list", color="#00AAAA"];
 *     node_direct_declarator_3 ->  node_direct_declarator [label="_p_direct_declarator" style=solid];
 *     node_direct_declarator_3 ->  node_parameter_type_list [label="_p_parameter_type_list" style=dotted];
 * }
 * \enddot
 */
class direct_declarator_3:public direct_declarator
{
	private:
		ReferenceCountedAutoPointer<direct_declarator> _p_direct_declarator;	  ///< A pointer to direct_declarator.
		ReferenceCountedAutoPointer<parameter_type_list> _p_parameter_type_list;	  ///< A pointer to parameter_type_list. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of direct_declarator_3
		 *
		 * This function handles the direct_declarator_3
                 */
		direct_declarator_3	
				(
					ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator,   ///< A pointer to direct_declarator.
					ReferenceCountedAutoPointer<parameter_type_list> _arg_parameter_type_list  ///< A pointer to parameter_type_list. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"direct_declarator_3"</b>
		 * \returns <b>"direct_declarator_3"</b>
                 */
		virtual std::string name()const			{return std::string("direct_declarator_3");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DIRECT_DECLARATOR_3
		 * \returns  ID_DIRECT_DECLARATOR_3
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DIRECT_DECLARATOR_3;}



		ReferenceCountedAutoPointer<direct_declarator>& p_direct_declarator()
		{
			return _p_direct_declarator;
		}

		const ReferenceCountedAutoPointer<direct_declarator>& p_direct_declarator()const
		{
			return _p_direct_declarator;
		}
		ReferenceCountedAutoPointer<parameter_type_list>& p_parameter_type_list()
		{
			return _p_parameter_type_list;
		}

		const ReferenceCountedAutoPointer<parameter_type_list>& p_parameter_type_list()const
		{
			return _p_parameter_type_list;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~direct_declarator_3()
		{}
};





class direct_declarator;
class identifier_list;




/**
 * \brief direct_declarator_4 implements the pattern: <b>(direct_declarator, '(', identifier_list, ')')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_direct_declarator_4 [ label="direct_declarator_4", URL="\ref direct_declarator_4", color="#00AAAA" ];
 *     node_direct_declarator [ label="direct_declarator", URL="\ref direct_declarator", color="#00AAAA"];
 *     node_identifier_list [ label="identifier_list", URL="\ref identifier_list", color="#00AAAA"];
 *     node_direct_declarator_4 ->  node_direct_declarator [label="_p_direct_declarator" style=solid];
 *     node_direct_declarator_4 ->  node_identifier_list [label="_p_identifier_list" style=solid];
 * }
 * \enddot
 */
class direct_declarator_4:public direct_declarator
{
	private:
		ReferenceCountedAutoPointer<direct_declarator> _p_direct_declarator;	  ///< A pointer to direct_declarator.
		ReferenceCountedAutoPointer<identifier_list> _p_identifier_list;	  ///< A pointer to identifier_list.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of direct_declarator_4
		 *
		 * This function handles the direct_declarator_4
                 */
		direct_declarator_4	
				(
					ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator,   ///< A pointer to direct_declarator.
					ReferenceCountedAutoPointer<identifier_list> _arg_identifier_list  ///< A pointer to identifier_list.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"direct_declarator_4"</b>
		 * \returns <b>"direct_declarator_4"</b>
                 */
		virtual std::string name()const			{return std::string("direct_declarator_4");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DIRECT_DECLARATOR_4
		 * \returns  ID_DIRECT_DECLARATOR_4
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DIRECT_DECLARATOR_4;}



		ReferenceCountedAutoPointer<direct_declarator>& p_direct_declarator()
		{
			return _p_direct_declarator;
		}

		const ReferenceCountedAutoPointer<direct_declarator>& p_direct_declarator()const
		{
			return _p_direct_declarator;
		}
		ReferenceCountedAutoPointer<identifier_list>& p_identifier_list()
		{
			return _p_identifier_list;
		}

		const ReferenceCountedAutoPointer<identifier_list>& p_identifier_list()const
		{
			return _p_identifier_list;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~direct_declarator_4()
		{}
};





class token;




/**
 * \brief direct_declarator_5 implements the pattern: <b>(IDENTIFIER,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_direct_declarator_5 [ label="direct_declarator_5", URL="\ref direct_declarator_5", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_direct_declarator_5 ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class direct_declarator_5:public direct_declarator
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>IDENTIFIER</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of direct_declarator_5
		 *
		 * This function handles the direct_declarator_5
                 */
		direct_declarator_5	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>IDENTIFIER</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"direct_declarator_5"</b>
		 * \returns <b>"direct_declarator_5"</b>
                 */
		virtual std::string name()const			{return std::string("direct_declarator_5");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DIRECT_DECLARATOR_5
		 * \returns  ID_DIRECT_DECLARATOR_5
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DIRECT_DECLARATOR_5;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~direct_declarator_5()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:logical_and_expression
//////////////////////////////////////////





class inclusive_or_expression;
class token;





/**
 * \brief logical_and_expression_item implements the pattern: <b>(logical_and_expression, AND_OP, inclusive_or_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_logical_and_expression_item [ label="logical_and_expression_item", URL="\ref logical_and_expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_inclusive_or_expression [ label="inclusive_or_expression", URL="\ref inclusive_or_expression", color="#00AAAA"];
 *     node_logical_and_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_logical_and_expression_item ->  node_inclusive_or_expression [label="_p_inclusive_or_expression" style=solid];
 * }
 * \enddot
 */
class logical_and_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>AND_OP</b>, <b>None</b>
		ReferenceCountedAutoPointer<inclusive_or_expression> _p_inclusive_or_expression;	  ///< A pointer to inclusive_or_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of logical_and_expression_item
		 *
		 * This function handles the logical_and_expression_item
                 */
		logical_and_expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>AND_OP</b>, <b>None</b>
					ReferenceCountedAutoPointer<inclusive_or_expression> _arg_inclusive_or_expression  ///< A pointer to inclusive_or_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"logical_and_expression_item"</b>
		 * \returns <b>"logical_and_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("logical_and_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_LOGICAL_AND_EXPRESSION_ITEM
		 * \returns  ID_LOGICAL_AND_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_LOGICAL_AND_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<inclusive_or_expression>& p_inclusive_or_expression()
		{
			return _p_inclusive_or_expression;
		}

		const ReferenceCountedAutoPointer<inclusive_or_expression>& p_inclusive_or_expression()const
		{
			return _p_inclusive_or_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~logical_and_expression_item()
		{}
};





/**
 * \brief The basic class to handle logical_and_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class logical_and_expression:public CAst
{
	public:
		typedef logical_and_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > logical_and_expressionListType;	///< This defines the list type which will store the logical_and_expression_item
		typedef logical_and_expressionListType::iterator logical_and_expressionIterType;				///< This defines the iterator over logical_and_expressionListType
		typedef logical_and_expressionListType::const_iterator Clogical_and_expressionIterType;				///< This defines the constant iterator over logical_and_expressionListType

	private:
		logical_and_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		logical_and_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of logical_and_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<logical_and_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to logical_and_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<logical_and_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to logical_and_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"logical_and_expression"</b>
		 * \returns <b>"logical_and_expression"</b>
                 */
		virtual std::string name()const {return "logical_and_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_LOGICAL_AND_EXPRESSION
		 * \returns  ID_LOGICAL_AND_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_LOGICAL_AND_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Clogical_and_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~logical_and_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:init_declarator_list
//////////////////////////////////////////





class token;
class init_declarator;





/**
 * \brief init_declarator_list_item implements the pattern: <b>(init_declarator_list, ',', init_declarator)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_init_declarator_list_item [ label="init_declarator_list_item", URL="\ref init_declarator_list_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_init_declarator [ label="init_declarator", URL="\ref init_declarator", color="#00AAAA"];
 *     node_init_declarator_list_item ->  node_token [label="_p_token" style=dotted];
 *     node_init_declarator_list_item ->  node_init_declarator [label="_p_init_declarator" style=solid];
 * }
 * \enddot
 */
class init_declarator_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
		ReferenceCountedAutoPointer<init_declarator> _p_init_declarator;	  ///< A pointer to init_declarator.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of init_declarator_list_item
		 *
		 * This function handles the init_declarator_list_item
                 */
		init_declarator_list_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
					ReferenceCountedAutoPointer<init_declarator> _arg_init_declarator  ///< A pointer to init_declarator.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"init_declarator_list_item"</b>
		 * \returns <b>"init_declarator_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("init_declarator_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_INIT_DECLARATOR_LIST_ITEM
		 * \returns  ID_INIT_DECLARATOR_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_INIT_DECLARATOR_LIST_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<init_declarator>& p_init_declarator()
		{
			return _p_init_declarator;
		}

		const ReferenceCountedAutoPointer<init_declarator>& p_init_declarator()const
		{
			return _p_init_declarator;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~init_declarator_list_item()
		{}
};





/**
 * \brief The basic class to handle init_declarator_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class init_declarator_list:public CAst
{
	public:
		typedef init_declarator_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > init_declarator_listListType;	///< This defines the list type which will store the init_declarator_list_item
		typedef init_declarator_listListType::iterator init_declarator_listIterType;				///< This defines the iterator over init_declarator_listListType
		typedef init_declarator_listListType::const_iterator Cinit_declarator_listIterType;				///< This defines the constant iterator over init_declarator_listListType

	private:
		init_declarator_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		init_declarator_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of init_declarator_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<init_declarator_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to init_declarator_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<init_declarator_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to init_declarator_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"init_declarator_list"</b>
		 * \returns <b>"init_declarator_list"</b>
                 */
		virtual std::string name()const {return "init_declarator_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_INIT_DECLARATOR_LIST
		 * \returns  ID_INIT_DECLARATOR_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_INIT_DECLARATOR_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cinit_declarator_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~init_declarator_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:shift_expression
//////////////////////////////////////////





class token;
class additive_expression;





/**
 * \brief shift_expression_item implements the pattern: <b>(shift_expression, LEFT_OP, additive_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_shift_expression_item [ label="shift_expression_item", URL="\ref shift_expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_additive_expression [ label="additive_expression", URL="\ref additive_expression", color="#00AAAA"];
 *     node_shift_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_shift_expression_item ->  node_additive_expression [label="_p_additive_expression" style=solid];
 * }
 * \enddot
 */
class shift_expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>RIGHT_OP</b>, <b>LEFT_OP</b>, <b>None</b>
		ReferenceCountedAutoPointer<additive_expression> _p_additive_expression;	  ///< A pointer to additive_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of shift_expression_item
		 *
		 * This function handles the shift_expression_item
                 */
		shift_expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>RIGHT_OP</b>, <b>LEFT_OP</b>, <b>None</b>
					ReferenceCountedAutoPointer<additive_expression> _arg_additive_expression  ///< A pointer to additive_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"shift_expression_item"</b>
		 * \returns <b>"shift_expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("shift_expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_SHIFT_EXPRESSION_ITEM
		 * \returns  ID_SHIFT_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_SHIFT_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<additive_expression>& p_additive_expression()
		{
			return _p_additive_expression;
		}

		const ReferenceCountedAutoPointer<additive_expression>& p_additive_expression()const
		{
			return _p_additive_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~shift_expression_item()
		{}
};





/**
 * \brief The basic class to handle shift_expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class shift_expression:public CAst
{
	public:
		typedef shift_expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > shift_expressionListType;	///< This defines the list type which will store the shift_expression_item
		typedef shift_expressionListType::iterator shift_expressionIterType;				///< This defines the iterator over shift_expressionListType
		typedef shift_expressionListType::const_iterator Cshift_expressionIterType;				///< This defines the constant iterator over shift_expressionListType

	private:
		shift_expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		shift_expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of shift_expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<shift_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to shift_expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<shift_expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to shift_expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"shift_expression"</b>
		 * \returns <b>"shift_expression"</b>
                 */
		virtual std::string name()const {return "shift_expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_SHIFT_EXPRESSION
		 * \returns  ID_SHIFT_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_SHIFT_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cshift_expressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~shift_expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:identifier_list
//////////////////////////////////////////





class token;






/**
 * \brief identifier_list_item implements the pattern: <b>(identifier_list, ',', IDENTIFIER)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_identifier_list_item [ label="identifier_list_item", URL="\ref identifier_list_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_identifier_list_item ->  node_token [label="_p_token1" style=dotted];
 *     node_identifier_list_item ->  node_token [label="_p_token2" style=solid];
 * }
 * \enddot
 */
class identifier_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>IDENTIFIER</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of identifier_list_item
		 *
		 * This function handles the identifier_list_item
                 */
		identifier_list_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
					ReferenceCountedAutoPointer<token> _arg_token2  ///< A pointer to a token, accepts <b>IDENTIFIER</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"identifier_list_item"</b>
		 * \returns <b>"identifier_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("identifier_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_IDENTIFIER_LIST_ITEM
		 * \returns  ID_IDENTIFIER_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_IDENTIFIER_LIST_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token1()
		{
			return _p_token1;
		}

		const ReferenceCountedAutoPointer<token>& p_token1()const
		{
			return _p_token1;
		}
		ReferenceCountedAutoPointer<token>& p_token2()
		{
			return _p_token2;
		}

		const ReferenceCountedAutoPointer<token>& p_token2()const
		{
			return _p_token2;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~identifier_list_item()
		{}
};





/**
 * \brief The basic class to handle identifier_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class identifier_list:public CAst
{
	public:
		typedef identifier_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > identifier_listListType;	///< This defines the list type which will store the identifier_list_item
		typedef identifier_listListType::iterator identifier_listIterType;				///< This defines the iterator over identifier_listListType
		typedef identifier_listListType::const_iterator Cidentifier_listIterType;				///< This defines the constant iterator over identifier_listListType

	private:
		identifier_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		identifier_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of identifier_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<identifier_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to identifier_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<identifier_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to identifier_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"identifier_list"</b>
		 * \returns <b>"identifier_list"</b>
                 */
		virtual std::string name()const {return "identifier_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_IDENTIFIER_LIST
		 * \returns  ID_IDENTIFIER_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_IDENTIFIER_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cidentifier_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~identifier_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:jump_statement
//////////////////////////////////////////


/**
 * \brief Implements jump_statement
 * 
 * This is the interface class. This implements the patterns
 *  - (GOTO, IDENTIFIER, ';')
 *  - (CONTINUE, ';')
 *  - (BREAK, ';')
 *  - (RETURN, ';')
 *  - (RETURN, expression, ';')
 * 
 **/
class jump_statement:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~jump_statement(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class expression;



/**
 * \brief jump_statement_1 implements the pattern: <b>(RETURN, expression, ';')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_jump_statement_1 [ label="jump_statement_1", URL="\ref jump_statement_1", color="#00AAAA" ];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_jump_statement_1 ->  node_expression [label="_p_expression" style=dotted];
 * }
 * \enddot
 */
class jump_statement_1:public jump_statement
{
	private:
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of jump_statement_1
		 *
		 * This function handles the jump_statement_1
                 */
		jump_statement_1	
				(
					ReferenceCountedAutoPointer<expression> _arg_expression  ///< A pointer to expression. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"jump_statement_1"</b>
		 * \returns <b>"jump_statement_1"</b>
                 */
		virtual std::string name()const			{return std::string("jump_statement_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_JUMP_STATEMENT_1
		 * \returns  ID_JUMP_STATEMENT_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_JUMP_STATEMENT_1;}



		ReferenceCountedAutoPointer<expression>& p_expression()
		{
			return _p_expression;
		}

		const ReferenceCountedAutoPointer<expression>& p_expression()const
		{
			return _p_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~jump_statement_1()
		{}
};





class token;




/**
 * \brief jump_statement_2 implements the pattern: <b>(GOTO, IDENTIFIER, ';')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_jump_statement_2 [ label="jump_statement_2", URL="\ref jump_statement_2", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_jump_statement_2 ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class jump_statement_2:public jump_statement
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>IDENTIFIER</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of jump_statement_2
		 *
		 * This function handles the jump_statement_2
                 */
		jump_statement_2	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>IDENTIFIER</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"jump_statement_2"</b>
		 * \returns <b>"jump_statement_2"</b>
                 */
		virtual std::string name()const			{return std::string("jump_statement_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_JUMP_STATEMENT_2
		 * \returns  ID_JUMP_STATEMENT_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_JUMP_STATEMENT_2;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~jump_statement_2()
		{}
};





class token;




/**
 * \brief jump_statement_3 implements the pattern: <b>(CONTINUE, ';')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_jump_statement_3 [ label="jump_statement_3", URL="\ref jump_statement_3", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_jump_statement_3 ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class jump_statement_3:public jump_statement
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>BREAK</b>, <b>CONTINUE</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of jump_statement_3
		 *
		 * This function handles the jump_statement_3
                 */
		jump_statement_3	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>BREAK</b>, <b>CONTINUE</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"jump_statement_3"</b>
		 * \returns <b>"jump_statement_3"</b>
                 */
		virtual std::string name()const			{return std::string("jump_statement_3");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_JUMP_STATEMENT_3
		 * \returns  ID_JUMP_STATEMENT_3
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_JUMP_STATEMENT_3;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~jump_statement_3()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declarator
//////////////////////////////////////////





class token;
class constant_expression;
class declarator;






/**
 * \brief struct_declarator implements the pattern: <b>(declarator, ':', constant_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_struct_declarator [ label="struct_declarator", URL="\ref struct_declarator", color="#00AAAA" ];
 *     node_declarator [ label="declarator", URL="\ref declarator", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_constant_expression [ label="constant_expression", URL="\ref constant_expression", color="#00AAAA"];
 *     node_struct_declarator ->  node_declarator [label="_p_declarator" style=dotted];
 *     node_struct_declarator ->  node_token [label="_p_token" style=dotted];
 *     node_struct_declarator ->  node_constant_expression [label="_p_constant_expression" style=dotted];
 * }
 * \enddot
 */
class struct_declarator:public CAst
{
	private:
		ReferenceCountedAutoPointer<declarator> _p_declarator;	  ///< A pointer to declarator. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>':'</b>, <b>None</b>
		ReferenceCountedAutoPointer<constant_expression> _p_constant_expression;	  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of struct_declarator
		 *
		 * This function handles the struct_declarator
                 */
		struct_declarator	
				(
					ReferenceCountedAutoPointer<declarator> _arg_declarator,   ///< A pointer to declarator. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>':'</b>, <b>None</b>
					ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_declarator"</b>
		 * \returns <b>"struct_declarator"</b>
                 */
		virtual std::string name()const			{return std::string("struct_declarator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_DECLARATOR
		 * \returns  ID_STRUCT_DECLARATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_DECLARATOR;}



		ReferenceCountedAutoPointer<declarator>& p_declarator()
		{
			return _p_declarator;
		}

		const ReferenceCountedAutoPointer<declarator>& p_declarator()const
		{
			return _p_declarator;
		}
		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<constant_expression>& p_constant_expression()
		{
			return _p_constant_expression;
		}

		const ReferenceCountedAutoPointer<constant_expression>& p_constant_expression()const
		{
			return _p_constant_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~struct_declarator()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:function_definition
//////////////////////////////////////////





class declaration_list;
class compound_statement;
class declaration_specifiers;
class declarator;






/**
 * \brief function_definition implements the pattern: <b>(declaration_specifiers, declarator, declaration_list, compound_statement)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_function_definition [ label="function_definition", URL="\ref function_definition", color="#00AAAA" ];
 *     node_declaration_specifiers [ label="declaration_specifiers", URL="\ref declaration_specifiers", color="#00AAAA"];
 *     node_declarator [ label="declarator", URL="\ref declarator", color="#00AAAA"];
 *     node_declaration_list [ label="declaration_list", URL="\ref declaration_list", color="#00AAAA"];
 *     node_compound_statement [ label="compound_statement", URL="\ref compound_statement", color="#00AAAA"];
 *     node_function_definition ->  node_declaration_specifiers [label="_p_declaration_specifiers" style=dotted];
 *     node_function_definition ->  node_declarator [label="_p_declarator" style=solid];
 *     node_function_definition ->  node_declaration_list [label="_p_declaration_list" style=dotted];
 *     node_function_definition ->  node_compound_statement [label="_p_compound_statement" style=solid];
 * }
 * \enddot
 */
class function_definition:public CAst
{
	private:
		ReferenceCountedAutoPointer<declaration_specifiers> _p_declaration_specifiers;	  ///< A pointer to declaration_specifiers. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<declarator> _p_declarator;	  ///< A pointer to declarator.
		ReferenceCountedAutoPointer<declaration_list> _p_declaration_list;	  ///< A pointer to declaration_list. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<compound_statement> _p_compound_statement;	  ///< A pointer to compound_statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of function_definition
		 *
		 * This function handles the function_definition
                 */
		function_definition	
				(
					ReferenceCountedAutoPointer<declaration_specifiers> _arg_declaration_specifiers,   ///< A pointer to declaration_specifiers. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<declarator> _arg_declarator,   ///< A pointer to declarator.
					ReferenceCountedAutoPointer<declaration_list> _arg_declaration_list,   ///< A pointer to declaration_list. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<compound_statement> _arg_compound_statement  ///< A pointer to compound_statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"function_definition"</b>
		 * \returns <b>"function_definition"</b>
                 */
		virtual std::string name()const			{return std::string("function_definition");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_FUNCTION_DEFINITION
		 * \returns  ID_FUNCTION_DEFINITION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_FUNCTION_DEFINITION;}



		ReferenceCountedAutoPointer<declaration_specifiers>& p_declaration_specifiers()
		{
			return _p_declaration_specifiers;
		}

		const ReferenceCountedAutoPointer<declaration_specifiers>& p_declaration_specifiers()const
		{
			return _p_declaration_specifiers;
		}
		ReferenceCountedAutoPointer<declarator>& p_declarator()
		{
			return _p_declarator;
		}

		const ReferenceCountedAutoPointer<declarator>& p_declarator()const
		{
			return _p_declarator;
		}
		ReferenceCountedAutoPointer<declaration_list>& p_declaration_list()
		{
			return _p_declaration_list;
		}

		const ReferenceCountedAutoPointer<declaration_list>& p_declaration_list()const
		{
			return _p_declaration_list;
		}
		ReferenceCountedAutoPointer<compound_statement>& p_compound_statement()
		{
			return _p_compound_statement;
		}

		const ReferenceCountedAutoPointer<compound_statement>& p_compound_statement()const
		{
			return _p_compound_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~function_definition()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_list
//////////////////////////////////////////





class parameter_declaration;
class token;





/**
 * \brief parameter_list_item implements the pattern: <b>(parameter_list, ',', parameter_declaration)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_parameter_list_item [ label="parameter_list_item", URL="\ref parameter_list_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_parameter_declaration [ label="parameter_declaration", URL="\ref parameter_declaration", color="#00AAAA"];
 *     node_parameter_list_item ->  node_token [label="_p_token" style=dotted];
 *     node_parameter_list_item ->  node_parameter_declaration [label="_p_parameter_declaration" style=solid];
 * }
 * \enddot
 */
class parameter_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
		ReferenceCountedAutoPointer<parameter_declaration> _p_parameter_declaration;	  ///< A pointer to parameter_declaration.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of parameter_list_item
		 *
		 * This function handles the parameter_list_item
                 */
		parameter_list_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
					ReferenceCountedAutoPointer<parameter_declaration> _arg_parameter_declaration  ///< A pointer to parameter_declaration.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"parameter_list_item"</b>
		 * \returns <b>"parameter_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("parameter_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_PARAMETER_LIST_ITEM
		 * \returns  ID_PARAMETER_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_PARAMETER_LIST_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<parameter_declaration>& p_parameter_declaration()
		{
			return _p_parameter_declaration;
		}

		const ReferenceCountedAutoPointer<parameter_declaration>& p_parameter_declaration()const
		{
			return _p_parameter_declaration;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~parameter_list_item()
		{}
};





/**
 * \brief The basic class to handle parameter_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class parameter_list:public CAst
{
	public:
		typedef parameter_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > parameter_listListType;	///< This defines the list type which will store the parameter_list_item
		typedef parameter_listListType::iterator parameter_listIterType;				///< This defines the iterator over parameter_listListType
		typedef parameter_listListType::const_iterator Cparameter_listIterType;				///< This defines the constant iterator over parameter_listListType

	private:
		parameter_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		parameter_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of parameter_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<parameter_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to parameter_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<parameter_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to parameter_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"parameter_list"</b>
		 * \returns <b>"parameter_list"</b>
                 */
		virtual std::string name()const {return "parameter_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_PARAMETER_LIST
		 * \returns  ID_PARAMETER_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_PARAMETER_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cparameter_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~parameter_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:enum_specifier
//////////////////////////////////////////





class token;
class enumerator_list;









/**
 * \brief enum_specifier implements the pattern: <b>(ENUM, IDENTIFIER, '{', enumerator_list, '}')</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_enum_specifier [ label="enum_specifier", URL="\ref enum_specifier", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_enumerator_list [ label="enumerator_list", URL="\ref enumerator_list", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_enum_specifier ->  node_token [label="_p_token1" style=dotted];
 *     node_enum_specifier ->  node_token [label="_p_token2" style=dotted];
 *     node_enum_specifier ->  node_enumerator_list [label="_p_enumerator_list" style=dotted];
 *     node_enum_specifier ->  node_token [label="_p_token3" style=dotted];
 * }
 * \enddot
 */
class enum_specifier:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>IDENTIFIER</b>, <b>None</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>None</b>, <b>'{'</b>
		ReferenceCountedAutoPointer<enumerator_list> _p_enumerator_list;	  ///< A pointer to enumerator_list. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<token> _p_token3;	  ///< A pointer to a token, accepts <b>'}'</b>, <b>None</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of enum_specifier
		 *
		 * This function handles the enum_specifier
                 */
		enum_specifier	
				(
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>IDENTIFIER</b>, <b>None</b>
					ReferenceCountedAutoPointer<token> _arg_token2,   ///< A pointer to a token, accepts <b>None</b>, <b>'{'</b>
					ReferenceCountedAutoPointer<enumerator_list> _arg_enumerator_list,   ///< A pointer to enumerator_list. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<token> _arg_token3  ///< A pointer to a token, accepts <b>'}'</b>, <b>None</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"enum_specifier"</b>
		 * \returns <b>"enum_specifier"</b>
                 */
		virtual std::string name()const			{return std::string("enum_specifier");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ENUM_SPECIFIER
		 * \returns  ID_ENUM_SPECIFIER
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ENUM_SPECIFIER;}



		ReferenceCountedAutoPointer<token>& p_token1()
		{
			return _p_token1;
		}

		const ReferenceCountedAutoPointer<token>& p_token1()const
		{
			return _p_token1;
		}
		ReferenceCountedAutoPointer<token>& p_token2()
		{
			return _p_token2;
		}

		const ReferenceCountedAutoPointer<token>& p_token2()const
		{
			return _p_token2;
		}
		ReferenceCountedAutoPointer<enumerator_list>& p_enumerator_list()
		{
			return _p_enumerator_list;
		}

		const ReferenceCountedAutoPointer<enumerator_list>& p_enumerator_list()const
		{
			return _p_enumerator_list;
		}
		ReferenceCountedAutoPointer<token>& p_token3()
		{
			return _p_token3;
		}

		const ReferenceCountedAutoPointer<token>& p_token3()const
		{
			return _p_token3;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~enum_specifier()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_qualifier
//////////////////////////////////////////





class token;




/**
 * \brief type_qualifier implements the pattern: <b>(CONST,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_type_qualifier [ label="type_qualifier", URL="\ref type_qualifier", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_type_qualifier ->  node_token [label="_p_token" style=solid];
 * }
 * \enddot
 */
class type_qualifier:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>VOLATILE</b>, <b>CONST</b>
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of type_qualifier
		 *
		 * This function handles the type_qualifier
                 */
		type_qualifier	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>VOLATILE</b>, <b>CONST</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"type_qualifier"</b>
		 * \returns <b>"type_qualifier"</b>
                 */
		virtual std::string name()const			{return std::string("type_qualifier");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TYPE_QUALIFIER
		 * \returns  ID_TYPE_QUALIFIER
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TYPE_QUALIFIER;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~type_qualifier()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:enumerator_list
//////////////////////////////////////////





class token;
class enumerator;





/**
 * \brief enumerator_list_item implements the pattern: <b>(enumerator_list, ',', enumerator)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_enumerator_list_item [ label="enumerator_list_item", URL="\ref enumerator_list_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_enumerator [ label="enumerator", URL="\ref enumerator", color="#00AAAA"];
 *     node_enumerator_list_item ->  node_token [label="_p_token" style=dotted];
 *     node_enumerator_list_item ->  node_enumerator [label="_p_enumerator" style=solid];
 * }
 * \enddot
 */
class enumerator_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
		ReferenceCountedAutoPointer<enumerator> _p_enumerator;	  ///< A pointer to enumerator.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of enumerator_list_item
		 *
		 * This function handles the enumerator_list_item
                 */
		enumerator_list_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
					ReferenceCountedAutoPointer<enumerator> _arg_enumerator  ///< A pointer to enumerator.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"enumerator_list_item"</b>
		 * \returns <b>"enumerator_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("enumerator_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ENUMERATOR_LIST_ITEM
		 * \returns  ID_ENUMERATOR_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ENUMERATOR_LIST_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<enumerator>& p_enumerator()
		{
			return _p_enumerator;
		}

		const ReferenceCountedAutoPointer<enumerator>& p_enumerator()const
		{
			return _p_enumerator;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~enumerator_list_item()
		{}
};





/**
 * \brief The basic class to handle enumerator_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class enumerator_list:public CAst
{
	public:
		typedef enumerator_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > enumerator_listListType;	///< This defines the list type which will store the enumerator_list_item
		typedef enumerator_listListType::iterator enumerator_listIterType;				///< This defines the iterator over enumerator_listListType
		typedef enumerator_listListType::const_iterator Cenumerator_listIterType;				///< This defines the constant iterator over enumerator_listListType

	private:
		enumerator_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		enumerator_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of enumerator_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<enumerator_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to enumerator_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<enumerator_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to enumerator_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"enumerator_list"</b>
		 * \returns <b>"enumerator_list"</b>
                 */
		virtual std::string name()const {return "enumerator_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ENUMERATOR_LIST
		 * \returns  ID_ENUMERATOR_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ENUMERATOR_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cenumerator_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~enumerator_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:labeled_statement
//////////////////////////////////////////


/**
 * \brief Implements labeled_statement
 * 
 * This is the interface class. This implements the patterns
 *  - (IDENTIFIER, ':', statement)
 *  - (CASE, constant_expression, ':', statement)
 *  - (DEFAULT, ':', statement)
 * 
 **/
class labeled_statement:public CAst
{
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;
		
		virtual ~labeled_statement(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;
};




class statement;
class constant_expression;




/**
 * \brief labeled_statement_1 implements the pattern: <b>(CASE, constant_expression, ':', statement)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_labeled_statement_1 [ label="labeled_statement_1", URL="\ref labeled_statement_1", color="#00AAAA" ];
 *     node_constant_expression [ label="constant_expression", URL="\ref constant_expression", color="#00AAAA"];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_labeled_statement_1 ->  node_constant_expression [label="_p_constant_expression" style=solid];
 *     node_labeled_statement_1 ->  node_statement [label="_p_statement" style=solid];
 * }
 * \enddot
 */
class labeled_statement_1:public labeled_statement
{
	private:
		ReferenceCountedAutoPointer<constant_expression> _p_constant_expression;	  ///< A pointer to constant_expression.
		ReferenceCountedAutoPointer<statement> _p_statement;	  ///< A pointer to statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of labeled_statement_1
		 *
		 * This function handles the labeled_statement_1
                 */
		labeled_statement_1	
				(
					ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression,   ///< A pointer to constant_expression.
					ReferenceCountedAutoPointer<statement> _arg_statement  ///< A pointer to statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"labeled_statement_1"</b>
		 * \returns <b>"labeled_statement_1"</b>
                 */
		virtual std::string name()const			{return std::string("labeled_statement_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_LABELED_STATEMENT_1
		 * \returns  ID_LABELED_STATEMENT_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_LABELED_STATEMENT_1;}



		ReferenceCountedAutoPointer<constant_expression>& p_constant_expression()
		{
			return _p_constant_expression;
		}

		const ReferenceCountedAutoPointer<constant_expression>& p_constant_expression()const
		{
			return _p_constant_expression;
		}
		ReferenceCountedAutoPointer<statement>& p_statement()
		{
			return _p_statement;
		}

		const ReferenceCountedAutoPointer<statement>& p_statement()const
		{
			return _p_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~labeled_statement_1()
		{}
};





class token;
class statement;





/**
 * \brief labeled_statement_2 implements the pattern: <b>(IDENTIFIER, ':', statement)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_labeled_statement_2 [ label="labeled_statement_2", URL="\ref labeled_statement_2", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_labeled_statement_2 ->  node_token [label="_p_token" style=solid];
 *     node_labeled_statement_2 ->  node_statement [label="_p_statement" style=solid];
 * }
 * \enddot
 */
class labeled_statement_2:public labeled_statement
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>IDENTIFIER</b>, <b>DEFAULT</b>
		ReferenceCountedAutoPointer<statement> _p_statement;	  ///< A pointer to statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of labeled_statement_2
		 *
		 * This function handles the labeled_statement_2
                 */
		labeled_statement_2	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>IDENTIFIER</b>, <b>DEFAULT</b>
					ReferenceCountedAutoPointer<statement> _arg_statement  ///< A pointer to statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"labeled_statement_2"</b>
		 * \returns <b>"labeled_statement_2"</b>
                 */
		virtual std::string name()const			{return std::string("labeled_statement_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_LABELED_STATEMENT_2
		 * \returns  ID_LABELED_STATEMENT_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_LABELED_STATEMENT_2;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<statement>& p_statement()
		{
			return _p_statement;
		}

		const ReferenceCountedAutoPointer<statement>& p_statement()const
		{
			return _p_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~labeled_statement_2()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration_list
//////////////////////////////////////////





class declaration;



/**
 * \brief declaration_list_item implements the pattern: <b>(declaration_list, declaration)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_declaration_list_item [ label="declaration_list_item", URL="\ref declaration_list_item", color="#00AAAA" ];
 *     node_declaration [ label="declaration", URL="\ref declaration", color="#00AAAA"];
 *     node_declaration_list_item ->  node_declaration [label="_p_declaration" style=solid];
 * }
 * \enddot
 */
class declaration_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<declaration> _p_declaration;	  ///< A pointer to declaration.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of declaration_list_item
		 *
		 * This function handles the declaration_list_item
                 */
		declaration_list_item	
				(
					ReferenceCountedAutoPointer<declaration> _arg_declaration  ///< A pointer to declaration.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"declaration_list_item"</b>
		 * \returns <b>"declaration_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("declaration_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DECLARATION_LIST_ITEM
		 * \returns  ID_DECLARATION_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DECLARATION_LIST_ITEM;}



		ReferenceCountedAutoPointer<declaration>& p_declaration()
		{
			return _p_declaration;
		}

		const ReferenceCountedAutoPointer<declaration>& p_declaration()const
		{
			return _p_declaration;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~declaration_list_item()
		{}
};





/**
 * \brief The basic class to handle declaration_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class declaration_list:public CAst
{
	public:
		typedef declaration_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > declaration_listListType;	///< This defines the list type which will store the declaration_list_item
		typedef declaration_listListType::iterator declaration_listIterType;				///< This defines the iterator over declaration_listListType
		typedef declaration_listListType::const_iterator Cdeclaration_listIterType;				///< This defines the constant iterator over declaration_listListType

	private:
		declaration_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		declaration_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of declaration_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<declaration_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to declaration_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<declaration_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to declaration_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"declaration_list"</b>
		 * \returns <b>"declaration_list"</b>
                 */
		virtual std::string name()const {return "declaration_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DECLARATION_LIST
		 * \returns  ID_DECLARATION_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DECLARATION_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cdeclaration_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~declaration_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:specifier_qualifier_list
//////////////////////////////////////////





class specifier_qualifier_list_item:public CAst
{
	
	public:
		/**
                 * \brief Interface for the child classes to return the name
                 *
                 */
		virtual std::string name()const=0;

		/**
                 *  \brief Interface for the child classes to return the class ID
                 *
                 */
		virtual CAST_CLASS_ID classId()const=0;

		virtual ~specifier_qualifier_list_item(){};

		virtual std::ostream& codeStream(std::ostream& stream)const=0;

		std::string code()const
		{
			std::stringstream stream;
			codeStream(stream);
			return stream.str();
		}

};

class type_qualifier;



/**
 * \brief specifier_qualifier_list_item_1 implements the pattern: <b>(type_qualifier, specifier_qualifier_list)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_specifier_qualifier_list_item_1 [ label="specifier_qualifier_list_item_1", URL="\ref specifier_qualifier_list_item_1", color="#00AAAA" ];
 *     node_type_qualifier [ label="type_qualifier", URL="\ref type_qualifier", color="#00AAAA"];
 *     node_specifier_qualifier_list_item_1 ->  node_type_qualifier [label="_p_type_qualifier" style=solid];
 * }
 * \enddot
 */
class specifier_qualifier_list_item_1:public specifier_qualifier_list_item
{
	private:
		ReferenceCountedAutoPointer<type_qualifier> _p_type_qualifier;	  ///< A pointer to type_qualifier.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of specifier_qualifier_list_item_1
		 *
		 * This function handles the specifier_qualifier_list_item_1
                 */
		specifier_qualifier_list_item_1	
				(
					ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier  ///< A pointer to type_qualifier.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"specifier_qualifier_list_item_1"</b>
		 * \returns <b>"specifier_qualifier_list_item_1"</b>
                 */
		virtual std::string name()const			{return std::string("specifier_qualifier_list_item_1");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_SPECIFIER_QUALIFIER_LIST_ITEM_1
		 * \returns  ID_SPECIFIER_QUALIFIER_LIST_ITEM_1
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_SPECIFIER_QUALIFIER_LIST_ITEM_1;}



		ReferenceCountedAutoPointer<type_qualifier>& p_type_qualifier()
		{
			return _p_type_qualifier;
		}

		const ReferenceCountedAutoPointer<type_qualifier>& p_type_qualifier()const
		{
			return _p_type_qualifier;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~specifier_qualifier_list_item_1()
		{}
};





class type_specifier;



/**
 * \brief specifier_qualifier_list_item_2 implements the pattern: <b>(type_specifier, specifier_qualifier_list)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_specifier_qualifier_list_item_2 [ label="specifier_qualifier_list_item_2", URL="\ref specifier_qualifier_list_item_2", color="#00AAAA" ];
 *     node_type_specifier [ label="type_specifier", URL="\ref type_specifier", color="#00AAAA"];
 *     node_specifier_qualifier_list_item_2 ->  node_type_specifier [label="_p_type_specifier" style=solid];
 * }
 * \enddot
 */
class specifier_qualifier_list_item_2:public specifier_qualifier_list_item
{
	private:
		ReferenceCountedAutoPointer<type_specifier> _p_type_specifier;	  ///< A pointer to type_specifier.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of specifier_qualifier_list_item_2
		 *
		 * This function handles the specifier_qualifier_list_item_2
                 */
		specifier_qualifier_list_item_2	
				(
					ReferenceCountedAutoPointer<type_specifier> _arg_type_specifier  ///< A pointer to type_specifier.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"specifier_qualifier_list_item_2"</b>
		 * \returns <b>"specifier_qualifier_list_item_2"</b>
                 */
		virtual std::string name()const			{return std::string("specifier_qualifier_list_item_2");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_SPECIFIER_QUALIFIER_LIST_ITEM_2
		 * \returns  ID_SPECIFIER_QUALIFIER_LIST_ITEM_2
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_SPECIFIER_QUALIFIER_LIST_ITEM_2;}



		ReferenceCountedAutoPointer<type_specifier>& p_type_specifier()
		{
			return _p_type_specifier;
		}

		const ReferenceCountedAutoPointer<type_specifier>& p_type_specifier()const
		{
			return _p_type_specifier;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~specifier_qualifier_list_item_2()
		{}
};





/**
 * \brief The basic class to handle specifier_qualifier_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class specifier_qualifier_list:public CAst
{
	public:
		typedef specifier_qualifier_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > specifier_qualifier_listListType;	///< This defines the list type which will store the specifier_qualifier_list_item
		typedef specifier_qualifier_listListType::iterator specifier_qualifier_listIterType;				///< This defines the iterator over specifier_qualifier_listListType
		typedef specifier_qualifier_listListType::const_iterator Cspecifier_qualifier_listIterType;				///< This defines the constant iterator over specifier_qualifier_listListType

	private:
		specifier_qualifier_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		specifier_qualifier_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of specifier_qualifier_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<specifier_qualifier_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to specifier_qualifier_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<specifier_qualifier_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to specifier_qualifier_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"specifier_qualifier_list"</b>
		 * \returns <b>"specifier_qualifier_list"</b>
                 */
		virtual std::string name()const {return "specifier_qualifier_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_SPECIFIER_QUALIFIER_LIST
		 * \returns  ID_SPECIFIER_QUALIFIER_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_SPECIFIER_QUALIFIER_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cspecifier_qualifier_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~specifier_qualifier_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:translation_unit
//////////////////////////////////////////





class external_declaration;



/**
 * \brief translation_unit_item implements the pattern: <b>(translation_unit, external_declaration)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_translation_unit_item [ label="translation_unit_item", URL="\ref translation_unit_item", color="#00AAAA" ];
 *     node_external_declaration [ label="external_declaration", URL="\ref external_declaration", color="#00AAAA"];
 *     node_translation_unit_item ->  node_external_declaration [label="_p_external_declaration" style=solid];
 * }
 * \enddot
 */
class translation_unit_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<external_declaration> _p_external_declaration;	  ///< A pointer to external_declaration.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of translation_unit_item
		 *
		 * This function handles the translation_unit_item
                 */
		translation_unit_item	
				(
					ReferenceCountedAutoPointer<external_declaration> _arg_external_declaration  ///< A pointer to external_declaration.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"translation_unit_item"</b>
		 * \returns <b>"translation_unit_item"</b>
                 */
		virtual std::string name()const			{return std::string("translation_unit_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TRANSLATION_UNIT_ITEM
		 * \returns  ID_TRANSLATION_UNIT_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TRANSLATION_UNIT_ITEM;}



		ReferenceCountedAutoPointer<external_declaration>& p_external_declaration()
		{
			return _p_external_declaration;
		}

		const ReferenceCountedAutoPointer<external_declaration>& p_external_declaration()const
		{
			return _p_external_declaration;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~translation_unit_item()
		{}
};





/**
 * \brief The basic class to handle translation_unit
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class translation_unit:public CAst
{
	public:
		typedef translation_unit_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > translation_unitListType;	///< This defines the list type which will store the translation_unit_item
		typedef translation_unitListType::iterator translation_unitIterType;				///< This defines the iterator over translation_unitListType
		typedef translation_unitListType::const_iterator Ctranslation_unitIterType;				///< This defines the constant iterator over translation_unitListType

	private:
		translation_unitListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		translation_unit():
				CAst(),
				_itemList()
		{
			LOG("Created List object of translation_unit: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<translation_unit_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to translation_unit: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<translation_unit_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to translation_unit: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"translation_unit"</b>
		 * \returns <b>"translation_unit"</b>
                 */
		virtual std::string name()const {return "translation_unit";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TRANSLATION_UNIT
		 * \returns  ID_TRANSLATION_UNIT
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TRANSLATION_UNIT;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Ctranslation_unitIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~translation_unit(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:constant_expression
//////////////////////////////////////////





class conditional_expression;



/**
 * \brief constant_expression implements the pattern: <b>(conditional_expression,)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_constant_expression [ label="constant_expression", URL="\ref constant_expression", color="#00AAAA" ];
 *     node_conditional_expression [ label="conditional_expression", URL="\ref conditional_expression", color="#00AAAA"];
 *     node_constant_expression ->  node_conditional_expression [label="_p_conditional_expression" style=solid];
 * }
 * \enddot
 */
class constant_expression:public CAst
{
	private:
		ReferenceCountedAutoPointer<conditional_expression> _p_conditional_expression;	  ///< A pointer to conditional_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of constant_expression
		 *
		 * This function handles the constant_expression
                 */
		constant_expression	
				(
					ReferenceCountedAutoPointer<conditional_expression> _arg_conditional_expression  ///< A pointer to conditional_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"constant_expression"</b>
		 * \returns <b>"constant_expression"</b>
                 */
		virtual std::string name()const			{return std::string("constant_expression");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_CONSTANT_EXPRESSION
		 * \returns  ID_CONSTANT_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_CONSTANT_EXPRESSION;}



		ReferenceCountedAutoPointer<conditional_expression>& p_conditional_expression()
		{
			return _p_conditional_expression;
		}

		const ReferenceCountedAutoPointer<conditional_expression>& p_conditional_expression()const
		{
			return _p_conditional_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~constant_expression()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:initializer_list
//////////////////////////////////////////





class token;
class initializer;





/**
 * \brief initializer_list_item implements the pattern: <b>(initializer_list, ',', initializer)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_initializer_list_item [ label="initializer_list_item", URL="\ref initializer_list_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_initializer [ label="initializer", URL="\ref initializer", color="#00AAAA"];
 *     node_initializer_list_item ->  node_token [label="_p_token" style=dotted];
 *     node_initializer_list_item ->  node_initializer [label="_p_initializer" style=solid];
 * }
 * \enddot
 */
class initializer_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
		ReferenceCountedAutoPointer<initializer> _p_initializer;	  ///< A pointer to initializer.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of initializer_list_item
		 *
		 * This function handles the initializer_list_item
                 */
		initializer_list_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
					ReferenceCountedAutoPointer<initializer> _arg_initializer  ///< A pointer to initializer.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"initializer_list_item"</b>
		 * \returns <b>"initializer_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("initializer_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_INITIALIZER_LIST_ITEM
		 * \returns  ID_INITIALIZER_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_INITIALIZER_LIST_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<initializer>& p_initializer()
		{
			return _p_initializer;
		}

		const ReferenceCountedAutoPointer<initializer>& p_initializer()const
		{
			return _p_initializer;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~initializer_list_item()
		{}
};





/**
 * \brief The basic class to handle initializer_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class initializer_list:public CAst
{
	public:
		typedef initializer_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > initializer_listListType;	///< This defines the list type which will store the initializer_list_item
		typedef initializer_listListType::iterator initializer_listIterType;				///< This defines the iterator over initializer_listListType
		typedef initializer_listListType::const_iterator Cinitializer_listIterType;				///< This defines the constant iterator over initializer_listListType

	private:
		initializer_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		initializer_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of initializer_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<initializer_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to initializer_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<initializer_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to initializer_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"initializer_list"</b>
		 * \returns <b>"initializer_list"</b>
                 */
		virtual std::string name()const {return "initializer_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_INITIALIZER_LIST
		 * \returns  ID_INITIALIZER_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_INITIALIZER_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cinitializer_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~initializer_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:statement_list
//////////////////////////////////////////





class statement;



/**
 * \brief statement_list_item implements the pattern: <b>(statement_list, statement)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_statement_list_item [ label="statement_list_item", URL="\ref statement_list_item", color="#00AAAA" ];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_statement_list_item ->  node_statement [label="_p_statement" style=solid];
 * }
 * \enddot
 */
class statement_list_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<statement> _p_statement;	  ///< A pointer to statement.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of statement_list_item
		 *
		 * This function handles the statement_list_item
                 */
		statement_list_item	
				(
					ReferenceCountedAutoPointer<statement> _arg_statement  ///< A pointer to statement.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"statement_list_item"</b>
		 * \returns <b>"statement_list_item"</b>
                 */
		virtual std::string name()const			{return std::string("statement_list_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STATEMENT_LIST_ITEM
		 * \returns  ID_STATEMENT_LIST_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STATEMENT_LIST_ITEM;}



		ReferenceCountedAutoPointer<statement>& p_statement()
		{
			return _p_statement;
		}

		const ReferenceCountedAutoPointer<statement>& p_statement()const
		{
			return _p_statement;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~statement_list_item()
		{}
};





/**
 * \brief The basic class to handle statement_list
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class statement_list:public CAst
{
	public:
		typedef statement_list_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > statement_listListType;	///< This defines the list type which will store the statement_list_item
		typedef statement_listListType::iterator statement_listIterType;				///< This defines the iterator over statement_listListType
		typedef statement_listListType::const_iterator Cstatement_listIterType;				///< This defines the constant iterator over statement_listListType

	private:
		statement_listListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		statement_list():
				CAst(),
				_itemList()
		{
			LOG("Created List object of statement_list: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<statement_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to statement_list: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<statement_list_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to statement_list: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"statement_list"</b>
		 * \returns <b>"statement_list"</b>
                 */
		virtual std::string name()const {return "statement_list";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STATEMENT_LIST
		 * \returns  ID_STATEMENT_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STATEMENT_LIST;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(Cstatement_listIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~statement_list(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:expression
//////////////////////////////////////////





class token;
class assignment_expression;





/**
 * \brief expression_item implements the pattern: <b>(expression, ',', assignment_expression)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_expression_item [ label="expression_item", URL="\ref expression_item", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_assignment_expression [ label="assignment_expression", URL="\ref assignment_expression", color="#00AAAA"];
 *     node_expression_item ->  node_token [label="_p_token" style=dotted];
 *     node_expression_item ->  node_assignment_expression [label="_p_assignment_expression" style=solid];
 * }
 * \enddot
 */
class expression_item:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
		ReferenceCountedAutoPointer<assignment_expression> _p_assignment_expression;	  ///< A pointer to assignment_expression.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of expression_item
		 *
		 * This function handles the expression_item
                 */
		expression_item	
				(
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>','</b>, <b>None</b>
					ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression  ///< A pointer to assignment_expression.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"expression_item"</b>
		 * \returns <b>"expression_item"</b>
                 */
		virtual std::string name()const			{return std::string("expression_item");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_EXPRESSION_ITEM
		 * \returns  ID_EXPRESSION_ITEM
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_EXPRESSION_ITEM;}



		ReferenceCountedAutoPointer<token>& p_token()
		{
			return _p_token;
		}

		const ReferenceCountedAutoPointer<token>& p_token()const
		{
			return _p_token;
		}
		ReferenceCountedAutoPointer<assignment_expression>& p_assignment_expression()
		{
			return _p_assignment_expression;
		}

		const ReferenceCountedAutoPointer<assignment_expression>& p_assignment_expression()const
		{
			return _p_assignment_expression;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~expression_item()
		{}
};





/**
 * \brief The basic class to handle expression
 *
 * Since the rule contains itself, this rule will be implemented in the form of a list
 */
class expression:public CAst
{
	public:
		typedef expression_item ItemType;
		typedef std::vector<ReferenceCountedAutoPointer< ItemType > > expressionListType;	///< This defines the list type which will store the expression_item
		typedef expressionListType::iterator expressionIterType;				///< This defines the iterator over expressionListType
		typedef expressionListType::const_iterator CexpressionIterType;				///< This defines the constant iterator over expressionListType

	private:
		expressionListType _itemList;									///< The list of items
	public:
		static CAST_CLASS_ID ID;
		
	public:
		/**
		 * \brief The default constructor calls the parent constructor
		 *
		 */
		expression():
				CAst(),
				_itemList()
		{
			LOG("Created List object of expression: "<<this)
		}

		/**
		 * \brief Append an item to the back of the list
		 *
		 */
		void append( ReferenceCountedAutoPointer<expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Appending to expression: "<<this)
			_itemList.push_back(item);
		}

		/**
		 * \brief Prepend an item to the front of the list
		 *
		 */
		void prepend( ReferenceCountedAutoPointer<expression_item> item)
		{
			LOG(COL_FG_GREEN<<"Prepending to expression: "<<this)
			_itemList.insert(_itemList.begin(),item);
		}
		
		int size()const
		{
			return _itemList.size();
		}
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"expression"</b>
		 * \returns <b>"expression"</b>
                 */
		virtual std::string name()const {return "expression";}
		
		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_EXPRESSION
		 * \returns  ID_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_EXPRESSION;}


		ReferenceCountedAutoPointer<ItemType>& operator[](int i)
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}

		const ReferenceCountedAutoPointer<ItemType>& operator[](int i)const
		{
			if(i<0)i+=_itemList.size(); 
			if(i<0 or i>=_itemList.size()) 
				throw IndexError(); 
			return _itemList[i];
		}



		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream& stream)const
		{
			for(CexpressionIterType i=_itemList.begin();i!=_itemList.end();i++)
			{
				(*i)->codeStream(stream);
			}
			return stream;
		}

		virtual ~expression(){}
};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declarator
//////////////////////////////////////////





class direct_declarator;
class pointer;




/**
 * \brief declarator implements the pattern: <b>(pointer, direct_declarator)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_declarator [ label="declarator", URL="\ref declarator", color="#00AAAA" ];
 *     node_pointer [ label="pointer", URL="\ref pointer", color="#00AAAA"];
 *     node_direct_declarator [ label="direct_declarator", URL="\ref direct_declarator", color="#00AAAA"];
 *     node_declarator ->  node_pointer [label="_p_pointer" style=dotted];
 *     node_declarator ->  node_direct_declarator [label="_p_direct_declarator" style=solid];
 * }
 * \enddot
 */
class declarator:public CAst
{
	private:
		ReferenceCountedAutoPointer<pointer> _p_pointer;	  ///< A pointer to pointer. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<direct_declarator> _p_direct_declarator;	  ///< A pointer to direct_declarator.
	public:
		static CAST_CLASS_ID ID;
	public:
		/** 
		 * \brief Constructor of declarator
		 *
		 * This function handles the declarator
                 */
		declarator	
				(
					ReferenceCountedAutoPointer<pointer> _arg_pointer,   ///< A pointer to pointer. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator  ///< A pointer to direct_declarator.
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"declarator"</b>
		 * \returns <b>"declarator"</b>
                 */
		virtual std::string name()const			{return std::string("declarator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DECLARATOR
		 * \returns  ID_DECLARATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DECLARATOR;}



		ReferenceCountedAutoPointer<pointer>& p_pointer()
		{
			return _p_pointer;
		}

		const ReferenceCountedAutoPointer<pointer>& p_pointer()const
		{
			return _p_pointer;
		}
		ReferenceCountedAutoPointer<direct_declarator>& p_direct_declarator()
		{
			return _p_direct_declarator;
		}

		const ReferenceCountedAutoPointer<direct_declarator>& p_direct_declarator()const
		{
			return _p_direct_declarator;
		}

		/**
		 * \brief Writes code to the code stream
		 *
		 *
		 */
		virtual std::ostream& codeStream(std::ostream&)const;

		/**
		 * \brief Default destructor. 
		 */
		virtual ~declarator()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////










}


#define CAP(TYPE,OBJ) CAst::ReferenceCountedAutoPointer<CAst::TYPE>(obj)
#include <cstdio>
extern "C"
{
        int yylex(void);  
	int yyerror(const char *s);
	int yylex_destroy();
        int yyparse();  
}

extern CAst::translation_unit *root;
CAst::ReferenceCountedAutoPointer<CAst::translation_unit> parseFile(const char* fileName);

#endif
