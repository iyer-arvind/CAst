#include "CAst.h"

namespace CAst
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:storage_class_specifier
//////////////////////////////////////////





class token;




/**
 * \brief storage_class_specifier implements the pattern: <b>(typedef,)</b>


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
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>auto</b>, <b>typedef</b>, <b>extern</b>, <b>register</b>, <b>static</b>
	public:
		/** 
		 * \brief Constructor of storage_class_specifier
		 *
		 * This function handles the storage_class_specifier
                 */
		storage_class_specifier	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>auto</b>, <b>typedef</b>, <b>extern</b>, <b>register</b>, <b>static</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"storage_class_specifier"</b>
		 * \returns <b>"storage_class_specifier"</b>
                 */
		virtual std::string name()const		{return std::string("storage_class_specifier");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STORAGE_CLASS_SPECIFIER
		 * \returns  ID_STORAGE_CLASS_SPECIFIER
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STORAGE_CLASS_SPECIFIER;}

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
 * \brief expression_statement implements the pattern: <b>(expression, ;)</b>


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
		virtual std::string name()const		{return std::string("expression_statement");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_EXPRESSION_STATEMENT
		 * \returns  ID_EXPRESSION_STATEMENT
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_EXPRESSION_STATEMENT;}

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
		virtual std::string name()const		{return std::string("type_name");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TYPE_NAME
		 * \returns  ID_TYPE_NAME
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TYPE_NAME;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:conditional_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_or_union_specifier
//////////////////////////////////////////





class struct_or_union;
class token;
class struct_declaration_list;










/**
 * \brief struct_or_union_specifier implements the pattern: <b>(struct_or_union, [IDENTIFIER], {, struct_declaration_list, })</b>


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
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>[IDENTIFIER]</b>, <b>None</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>{</b>, <b>None</b>
		ReferenceCountedAutoPointer<struct_declaration_list> _p_struct_declaration_list;	  ///< A pointer to struct_declaration_list. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<token> _p_token3;	  ///< A pointer to a token, accepts <b>}</b>, <b>None</b>
	public:
		/** 
		 * \brief Constructor of struct_or_union_specifier
		 *
		 * This function handles the struct_or_union_specifier
                 */
		struct_or_union_specifier	
				(
					ReferenceCountedAutoPointer<struct_or_union> _arg_struct_or_union,   ///< A pointer to struct_or_union.
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>[IDENTIFIER]</b>, <b>None</b>
					ReferenceCountedAutoPointer<token> _arg_token2,   ///< A pointer to a token, accepts <b>{</b>, <b>None</b>
					ReferenceCountedAutoPointer<struct_declaration_list> _arg_struct_declaration_list,   ///< A pointer to struct_declaration_list. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<token> _arg_token3  ///< A pointer to a token, accepts <b>}</b>, <b>None</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_or_union_specifier"</b>
		 * \returns <b>"struct_or_union_specifier"</b>
                 */
		virtual std::string name()const		{return std::string("struct_or_union_specifier");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_OR_UNION_SPECIFIER
		 * \returns  ID_STRUCT_OR_UNION_SPECIFIER
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_OR_UNION_SPECIFIER;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:initializer
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declaration_list
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:assignment_operator
//////////////////////////////////////////





class token;




/**
 * \brief assignment_operator implements the pattern: <b>(=,)</b>


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
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>>>=</b>, <b>&=</b>, <b>^=</b>, <b>|=</b>, <b>=</b>, <b>*=</b>, <b>/=</b>, <b>%=</b>, <b>+=</b>, <b>-=</b>, <b><<=</b>
	public:
		/** 
		 * \brief Constructor of assignment_operator
		 *
		 * This function handles the assignment_operator
                 */
		assignment_operator	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>>>=</b>, <b>&=</b>, <b>^=</b>, <b>|=</b>, <b>=</b>, <b>*=</b>, <b>/=</b>, <b>%=</b>, <b>+=</b>, <b>-=</b>, <b><<=</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"assignment_operator"</b>
		 * \returns <b>"assignment_operator"</b>
                 */
		virtual std::string name()const		{return std::string("assignment_operator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ASSIGNMENT_OPERATOR
		 * \returns  ID_ASSIGNMENT_OPERATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ASSIGNMENT_OPERATOR;}

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
 * \brief struct_declaration implements the pattern: <b>(specifier_qualifier_list, struct_declarator_list, ;)</b>


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
		virtual std::string name()const		{return std::string("struct_declaration");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_DECLARATION
		 * \returns  ID_STRUCT_DECLARATION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_DECLARATION;}

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
		virtual std::string name()const		{return std::string("abstract_declarator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ABSTRACT_DECLARATOR
		 * \returns  ID_ABSTRACT_DECLARATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ABSTRACT_DECLARATOR;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:additive_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:external_declaration
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_specifier
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:compound_statement
//////////////////////////////////////////





class statement_list;
class declaration_list;




/**
 * \brief compound_statement implements the pattern: <b>({, declaration_list, statement_list, })</b>


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
		virtual std::string name()const		{return std::string("compound_statement");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_COMPOUND_STATEMENT
		 * \returns  ID_COMPOUND_STATEMENT
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_COMPOUND_STATEMENT;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:pointer
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:selection_statement
//////////////////////////////////////////





class token;
class expression;
class statement;









/**
 * \brief selection_statement implements the pattern: <b>(if, (, expression, ), statement, else, statement)</b>


 * \dot
 * digraph AST {
 *     node [shape=polygon,sides=4, fontname=Helvetica, fontsize=10, style=filled,peripheries=2];
 *     edge [fontsize=10, fontname=Helvetica, arrowhead="open"];
 *     node_selection_statement [ label="selection_statement", URL="\ref selection_statement", color="#00AAAA" ];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_expression [ label="expression", URL="\ref expression", color="#00AAAA"];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_token [ label="token", URL="\ref token", color="#FFFF44"];
 *     node_statement [ label="statement", URL="\ref statement", color="#00AAAA"];
 *     node_selection_statement ->  node_token [label="_p_token1" style=solid];
 *     node_selection_statement ->  node_expression [label="_p_expression" style=solid];
 *     node_selection_statement ->  node_statement [label="_p_statement1" style=solid];
 *     node_selection_statement ->  node_token [label="_p_token2" style=dotted];
 *     node_selection_statement ->  node_statement [label="_p_statement2" style=dotted];
 * }
 * \enddot
 */
class selection_statement:public CAst
{
	private:
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>switch</b>, <b>if</b>
		ReferenceCountedAutoPointer<expression> _p_expression;	  ///< A pointer to expression.
		ReferenceCountedAutoPointer<statement> _p_statement1;	  ///< A pointer to statement.
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>else</b>, <b>None</b>
		ReferenceCountedAutoPointer<statement> _p_statement2;	  ///< A pointer to statement. This parameter can be <b>Null</b>
	public:
		/** 
		 * \brief Constructor of selection_statement
		 *
		 * This function handles the selection_statement
                 */
		selection_statement	
				(
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>switch</b>, <b>if</b>
					ReferenceCountedAutoPointer<expression> _arg_expression,   ///< A pointer to expression.
					ReferenceCountedAutoPointer<statement> _arg_statement1,   ///< A pointer to statement.
					ReferenceCountedAutoPointer<token> _arg_token2,   ///< A pointer to a token, accepts <b>else</b>, <b>None</b>
					ReferenceCountedAutoPointer<statement> _arg_statement2  ///< A pointer to statement. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"selection_statement"</b>
		 * \returns <b>"selection_statement"</b>
                 */
		virtual std::string name()const		{return std::string("selection_statement");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_SELECTION_STATEMENT
		 * \returns  ID_SELECTION_STATEMENT
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_SELECTION_STATEMENT;}

		/**
		 * \brief Default destructor. 
		 */
		virtual ~selection_statement()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:postfix_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:and_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:statement
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:cast_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:init_declarator
//////////////////////////////////////////





class token;
class initializer;
class declarator;






/**
 * \brief init_declarator implements the pattern: <b>(declarator, =, initializer)</b>


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
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>=</b>, <b>None</b>
		ReferenceCountedAutoPointer<initializer> _p_initializer;	  ///< A pointer to initializer. This parameter can be <b>Null</b>
	public:
		/** 
		 * \brief Constructor of init_declarator
		 *
		 * This function handles the init_declarator
                 */
		init_declarator	
				(
					ReferenceCountedAutoPointer<declarator> _arg_declarator,   ///< A pointer to declarator.
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>=</b>, <b>None</b>
					ReferenceCountedAutoPointer<initializer> _arg_initializer  ///< A pointer to initializer. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"init_declarator"</b>
		 * \returns <b>"init_declarator"</b>
                 */
		virtual std::string name()const		{return std::string("init_declarator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_INIT_DECLARATOR
		 * \returns  ID_INIT_DECLARATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_INIT_DECLARATOR;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:logical_or_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:unary_operator
//////////////////////////////////////////





class token;




/**
 * \brief unary_operator implements the pattern: <b>(&,)</b>


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
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>-</b>, <b>~</b>, <b>!</b>, <b>*</b>, <b>&</b>, <b>+</b>
	public:
		/** 
		 * \brief Constructor of unary_operator
		 *
		 * This function handles the unary_operator
                 */
		unary_operator	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>-</b>, <b>~</b>, <b>!</b>, <b>*</b>, <b>&</b>, <b>+</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"unary_operator"</b>
		 * \returns <b>"unary_operator"</b>
                 */
		virtual std::string name()const		{return std::string("unary_operator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_UNARY_OPERATOR
		 * \returns  ID_UNARY_OPERATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_UNARY_OPERATOR;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_or_union
//////////////////////////////////////////





class token;




/**
 * \brief struct_or_union implements the pattern: <b>(struct,)</b>


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
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>struct</b>, <b>union</b>
	public:
		/** 
		 * \brief Constructor of struct_or_union
		 *
		 * This function handles the struct_or_union
                 */
		struct_or_union	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>struct</b>, <b>union</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_or_union"</b>
		 * \returns <b>"struct_or_union"</b>
                 */
		virtual std::string name()const		{return std::string("struct_or_union");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_OR_UNION
		 * \returns  ID_STRUCT_OR_UNION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_OR_UNION;}

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
 * \brief enumerator implements the pattern: <b>([IDENTIFIER], =, constant_expression)</b>


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
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>[IDENTIFIER]</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>=</b>, <b>None</b>
		ReferenceCountedAutoPointer<constant_expression> _p_constant_expression;	  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
	public:
		/** 
		 * \brief Constructor of enumerator
		 *
		 * This function handles the enumerator
                 */
		enumerator	
				(
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>[IDENTIFIER]</b>
					ReferenceCountedAutoPointer<token> _arg_token2,   ///< A pointer to a token, accepts <b>=</b>, <b>None</b>
					ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"enumerator"</b>
		 * \returns <b>"enumerator"</b>
                 */
		virtual std::string name()const		{return std::string("enumerator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ENUMERATOR
		 * \returns  ID_ENUMERATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ENUMERATOR;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_type_list
//////////////////////////////////////////





class token;
class parameter_list;







/**
 * \brief parameter_type_list implements the pattern: <b>(parameter_list, ,, ...)</b>


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
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>,</b>, <b>None</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>...</b>, <b>None</b>
	public:
		/** 
		 * \brief Constructor of parameter_type_list
		 *
		 * This function handles the parameter_type_list
                 */
		parameter_type_list	
				(
					ReferenceCountedAutoPointer<parameter_list> _arg_parameter_list,   ///< A pointer to parameter_list.
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>,</b>, <b>None</b>
					ReferenceCountedAutoPointer<token> _arg_token2  ///< A pointer to a token, accepts <b>...</b>, <b>None</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"parameter_type_list"</b>
		 * \returns <b>"parameter_type_list"</b>
                 */
		virtual std::string name()const		{return std::string("parameter_type_list");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_PARAMETER_TYPE_LIST
		 * \returns  ID_PARAMETER_TYPE_LIST
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_PARAMETER_TYPE_LIST;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:multiplicative_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_qualifier_list
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:argument_expression_list
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:direct_abstract_declarator
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:equality_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:primary_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration_specifiers
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration
//////////////////////////////////////////





class declaration_specifiers;
class init_declarator_list;




/**
 * \brief declaration implements the pattern: <b>(declaration_specifiers, init_declarator_list, ;)</b>


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
		virtual std::string name()const		{return std::string("declaration");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DECLARATION
		 * \returns  ID_DECLARATION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DECLARATION;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:logical_and_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:init_declarator_list
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:shift_expression
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:identifier_list
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:jump_statement
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declarator
//////////////////////////////////////////





class token;
class constant_expression;
class declarator;






/**
 * \brief struct_declarator implements the pattern: <b>(declarator, :, constant_expression)</b>


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
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>:</b>, <b>None</b>
		ReferenceCountedAutoPointer<constant_expression> _p_constant_expression;	  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
	public:
		/** 
		 * \brief Constructor of struct_declarator
		 *
		 * This function handles the struct_declarator
                 */
		struct_declarator	
				(
					ReferenceCountedAutoPointer<declarator> _arg_declarator,   ///< A pointer to declarator. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<token> _arg_token,   ///< A pointer to a token, accepts <b>:</b>, <b>None</b>
					ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression  ///< A pointer to constant_expression. This parameter can be <b>Null</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"struct_declarator"</b>
		 * \returns <b>"struct_declarator"</b>
                 */
		virtual std::string name()const		{return std::string("struct_declarator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_STRUCT_DECLARATOR
		 * \returns  ID_STRUCT_DECLARATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_STRUCT_DECLARATOR;}

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
		virtual std::string name()const		{return std::string("function_definition");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_FUNCTION_DEFINITION
		 * \returns  ID_FUNCTION_DEFINITION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_FUNCTION_DEFINITION;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:enum_specifier
//////////////////////////////////////////





class token;
class enumerator_list;









/**
 * \brief enum_specifier implements the pattern: <b>(enum, [IDENTIFIER], {, enumerator_list, })</b>


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
		ReferenceCountedAutoPointer<token> _p_token1;	  ///< A pointer to a token, accepts <b>[IDENTIFIER]</b>, <b>None</b>
		ReferenceCountedAutoPointer<token> _p_token2;	  ///< A pointer to a token, accepts <b>{</b>, <b>None</b>
		ReferenceCountedAutoPointer<enumerator_list> _p_enumerator_list;	  ///< A pointer to enumerator_list. This parameter can be <b>Null</b>
		ReferenceCountedAutoPointer<token> _p_token3;	  ///< A pointer to a token, accepts <b>}</b>, <b>None</b>
	public:
		/** 
		 * \brief Constructor of enum_specifier
		 *
		 * This function handles the enum_specifier
                 */
		enum_specifier	
				(
					ReferenceCountedAutoPointer<token> _arg_token1,   ///< A pointer to a token, accepts <b>[IDENTIFIER]</b>, <b>None</b>
					ReferenceCountedAutoPointer<token> _arg_token2,   ///< A pointer to a token, accepts <b>{</b>, <b>None</b>
					ReferenceCountedAutoPointer<enumerator_list> _arg_enumerator_list,   ///< A pointer to enumerator_list. This parameter can be <b>Null</b>
					ReferenceCountedAutoPointer<token> _arg_token3  ///< A pointer to a token, accepts <b>}</b>, <b>None</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"enum_specifier"</b>
		 * \returns <b>"enum_specifier"</b>
                 */
		virtual std::string name()const		{return std::string("enum_specifier");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_ENUM_SPECIFIER
		 * \returns  ID_ENUM_SPECIFIER
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_ENUM_SPECIFIER;}

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
 * \brief type_qualifier implements the pattern: <b>(const,)</b>


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
		ReferenceCountedAutoPointer<token> _p_token;	  ///< A pointer to a token, accepts <b>const</b>, <b>volatile</b>
	public:
		/** 
		 * \brief Constructor of type_qualifier
		 *
		 * This function handles the type_qualifier
                 */
		type_qualifier	
				(
					ReferenceCountedAutoPointer<token> _arg_token  ///< A pointer to a token, accepts <b>const</b>, <b>volatile</b>
				);
		/**
                 * \brief Returns the name of the class.
                 *
                 * Returns the name of the class. Here, returns <b>"type_qualifier"</b>
		 * \returns <b>"type_qualifier"</b>
                 */
		virtual std::string name()const		{return std::string("type_qualifier");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_TYPE_QUALIFIER
		 * \returns  ID_TYPE_QUALIFIER
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_TYPE_QUALIFIER;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:labeled_statement
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration_list
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:specifier_qualifier_list
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:translation_unit
//////////////////////////////////////////




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
		virtual std::string name()const		{return std::string("constant_expression");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_CONSTANT_EXPRESSION
		 * \returns  ID_CONSTANT_EXPRESSION
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_CONSTANT_EXPRESSION;}

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




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:statement_list
//////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:expression
//////////////////////////////////////////




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
		virtual std::string name()const		{return std::string("declarator");}

		/**
                 * \brief Returns the ID of the class
                 *
                 * Returns the ID of the class. Here, returns ID_DECLARATOR
		 * \returns  ID_DECLARATOR
                 */
		virtual CAST_CLASS_ID classId()const		{return ID_DECLARATOR;}

		/**
		 * \brief Default destructor. 
		 */
		virtual ~declarator()
		{}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////










}
