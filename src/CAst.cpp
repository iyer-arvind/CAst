#include "CAst.h"

namespace CAst
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:storage_class_specifier
//////////////////////////////////////////



CAST_CLASS_ID storage_class_specifier::ID=ID_STORAGE_CLASS_SPECIFIER;

storage_class_specifier::storage_class_specifier
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		CAst() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="auto"||_p_token->text()=="typedef"||_p_token->text()=="extern"||_p_token->text()=="register"||_p_token->text()=="static")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of storage_class_specifier: "<<this)
}


std::ostream& storage_class_specifier::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:expression_statement
//////////////////////////////////////////



CAST_CLASS_ID expression_statement::ID=ID_EXPRESSION_STATEMENT;

expression_statement::expression_statement
	(
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		CAst() ,
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of expression_statement: "<<this)
}


std::ostream& expression_statement::codeStream(std::ostream& stream)const
{
	if( ! _p_expression.isNull()){_p_expression->codeStream(stream);}

	stream<<"; ";

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_name
//////////////////////////////////////////



CAST_CLASS_ID type_name::ID=ID_TYPE_NAME;

type_name::type_name
	(
		ReferenceCountedAutoPointer<specifier_qualifier_list> _arg_specifier_qualifier_list,
		ReferenceCountedAutoPointer<abstract_declarator> _arg_abstract_declarator
	):
		CAst() ,
		_p_specifier_qualifier_list(_arg_specifier_qualifier_list),
		_p_abstract_declarator(_arg_abstract_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of type_name: "<<this)
}


std::ostream& type_name::codeStream(std::ostream& stream)const
{
	if( ! _p_specifier_qualifier_list.isNull()){_p_specifier_qualifier_list->codeStream(stream);}

	if( ! _p_abstract_declarator.isNull()){_p_abstract_declarator->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:unary_expression
//////////////////////////////////////////




CAST_CLASS_ID unary_expression_1::ID=ID_UNARY_EXPRESSION_1;

unary_expression_1::unary_expression_1
	(
		ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression
	):
		unary_expression() ,
		_p_postfix_expression(_arg_postfix_expression)
{
	LOG(COL_FG_GREEN<<"Created object of unary_expression_1: "<<this)
}


std::ostream& unary_expression_1::codeStream(std::ostream& stream)const
{
	if( ! _p_postfix_expression.isNull()){_p_postfix_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID unary_expression_2::ID=ID_UNARY_EXPRESSION_2;

unary_expression_2::unary_expression_2
	(
		ReferenceCountedAutoPointer<type_name> _arg_type_name
	):
		unary_expression() ,
		_p_type_name(_arg_type_name)
{
	LOG(COL_FG_GREEN<<"Created object of unary_expression_2: "<<this)
}


std::ostream& unary_expression_2::codeStream(std::ostream& stream)const
{
	stream<<"sizeof ";

	stream<<"( ";

	if( ! _p_type_name.isNull()){_p_type_name->codeStream(stream);}

	stream<<") ";

	return stream;
}


CAST_CLASS_ID unary_expression_3::ID=ID_UNARY_EXPRESSION_3;

unary_expression_3::unary_expression_3
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<unary_expression> _arg_unary_expression
	):
		unary_expression() ,
		_p_token(_arg_token),
		_p_unary_expression(_arg_unary_expression)
{
	AssertTokenType(_p_token->text()=="++"||_p_token->text()=="--"||_p_token->text()=="sizeof")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of unary_expression_3: "<<this)
}


std::ostream& unary_expression_3::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_unary_expression.isNull()){_p_unary_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID unary_expression_4::ID=ID_UNARY_EXPRESSION_4;

unary_expression_4::unary_expression_4
	(
		ReferenceCountedAutoPointer<unary_operator> _arg_unary_operator,
		ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression
	):
		unary_expression() ,
		_p_unary_operator(_arg_unary_operator),
		_p_cast_expression(_arg_cast_expression)
{
	LOG(COL_FG_GREEN<<"Created object of unary_expression_4: "<<this)
}


std::ostream& unary_expression_4::codeStream(std::ostream& stream)const
{
	if( ! _p_unary_operator.isNull()){_p_unary_operator->codeStream(stream);}

	if( ! _p_cast_expression.isNull()){_p_cast_expression->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:conditional_expression
//////////////////////////////////////////





CAST_CLASS_ID conditional_expression_item::ID=ID_CONDITIONAL_EXPRESSION_ITEM;

conditional_expression_item::conditional_expression_item
	(
		ReferenceCountedAutoPointer<logical_or_expression> _arg_logical_or_expression,
		ReferenceCountedAutoPointer<token> _arg_token1,
		ReferenceCountedAutoPointer<expression> _arg_expression,
		ReferenceCountedAutoPointer<token> _arg_token2
	):
		_p_logical_or_expression(_arg_logical_or_expression),
		_p_token1(_arg_token1),
		_p_expression(_arg_expression),
		_p_token2(_arg_token2)
{
	AssertTokenType(_p_token1.isNull()||_p_token1->text()=="?")
	AssertTokenType(_p_token2.isNull()||_p_token2->text()==":")
	LOG(COL_FG_GREEN<<"Created object of conditional_expression_item: "<<this)
}


std::ostream& conditional_expression_item::codeStream(std::ostream& stream)const
{
	if( ! _p_logical_or_expression.isNull()){_p_logical_or_expression->codeStream(stream);}

	if( ! _p_token1.isNull()){_p_token1->codeStream(stream);}

	if( ! _p_expression.isNull()){_p_expression->codeStream(stream);}

	if( ! _p_token2.isNull()){_p_token2->codeStream(stream);}

	

	return stream;
}


CAST_CLASS_ID conditional_expression::ID=ID_CONDITIONAL_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_or_union_specifier
//////////////////////////////////////////



CAST_CLASS_ID struct_or_union_specifier::ID=ID_STRUCT_OR_UNION_SPECIFIER;

struct_or_union_specifier::struct_or_union_specifier
	(
		ReferenceCountedAutoPointer<struct_or_union> _arg_struct_or_union,
		ReferenceCountedAutoPointer<token> _arg_token1,
		ReferenceCountedAutoPointer<token> _arg_token2,
		ReferenceCountedAutoPointer<struct_declaration_list> _arg_struct_declaration_list,
		ReferenceCountedAutoPointer<token> _arg_token3
	):
		CAst() ,
		_p_struct_or_union(_arg_struct_or_union),
		_p_token1(_arg_token1),
		_p_token2(_arg_token2),
		_p_struct_declaration_list(_arg_struct_declaration_list),
		_p_token3(_arg_token3)
{
	AssertTokenType(_p_token2.isNull()||_p_token2->text()=="{")
	AssertTokenType(_p_token3.isNull()||_p_token3->text()=="}")
	LOG(COL_FG_GREEN<<"Created object of struct_or_union_specifier: "<<this)
}


std::ostream& struct_or_union_specifier::codeStream(std::ostream& stream)const
{
	if( ! _p_struct_or_union.isNull()){_p_struct_or_union->codeStream(stream);}

	if( ! _p_token1.isNull()){_p_token1->codeStream(stream);}

	if( ! _p_token2.isNull()){_p_token2->codeStream(stream);}

	if( ! _p_struct_declaration_list.isNull()){_p_struct_declaration_list->codeStream(stream);}

	if( ! _p_token3.isNull()){_p_token3->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:exclusive_or_expression
//////////////////////////////////////////





CAST_CLASS_ID exclusive_or_expression_item::ID=ID_EXCLUSIVE_OR_EXPRESSION_ITEM;

exclusive_or_expression_item::exclusive_or_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<and_expression> _arg_and_expression
	):
		_p_token(_arg_token),
		_p_and_expression(_arg_and_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="^")
	LOG(COL_FG_GREEN<<"Created object of exclusive_or_expression_item: "<<this)
}


std::ostream& exclusive_or_expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_and_expression.isNull()){_p_and_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID exclusive_or_expression::ID=ID_EXCLUSIVE_OR_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:initializer
//////////////////////////////////////////




CAST_CLASS_ID initializer_1::ID=ID_INITIALIZER_1;

initializer_1::initializer_1
	(
		ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression
	):
		initializer() ,
		_p_assignment_expression(_arg_assignment_expression)
{
	LOG(COL_FG_GREEN<<"Created object of initializer_1: "<<this)
}


std::ostream& initializer_1::codeStream(std::ostream& stream)const
{
	if( ! _p_assignment_expression.isNull()){_p_assignment_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID initializer_2::ID=ID_INITIALIZER_2;

initializer_2::initializer_2
	(
		ReferenceCountedAutoPointer<initializer_list> _arg_initializer_list,
		ReferenceCountedAutoPointer<token> _arg_token
	):
		initializer() ,
		_p_initializer_list(_arg_initializer_list),
		_p_token(_arg_token)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==",")
	LOG(COL_FG_GREEN<<"Created object of initializer_2: "<<this)
}


std::ostream& initializer_2::codeStream(std::ostream& stream)const
{
	stream<<"{ ";

	if( ! _p_initializer_list.isNull()){_p_initializer_list->codeStream(stream);}

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	stream<<"} ";

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declaration_list
//////////////////////////////////////////





CAST_CLASS_ID struct_declaration_list_item::ID=ID_STRUCT_DECLARATION_LIST_ITEM;

struct_declaration_list_item::struct_declaration_list_item
	(
		ReferenceCountedAutoPointer<struct_declaration> _arg_struct_declaration
	):
		_p_struct_declaration(_arg_struct_declaration)
{
	LOG(COL_FG_GREEN<<"Created object of struct_declaration_list_item: "<<this)
}


std::ostream& struct_declaration_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_struct_declaration.isNull()){_p_struct_declaration->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID struct_declaration_list::ID=ID_STRUCT_DECLARATION_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:assignment_operator
//////////////////////////////////////////



CAST_CLASS_ID assignment_operator::ID=ID_ASSIGNMENT_OPERATOR;

assignment_operator::assignment_operator
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		CAst() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="*="||_p_token->text()=="/="||_p_token->text()=="="||_p_token->text()=="+="||_p_token->text()=="-="||_p_token->text()=="<<="||_p_token->text()==">>="||_p_token->text()=="&="||_p_token->text()=="^="||_p_token->text()=="|="||_p_token->text()=="%=")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of assignment_operator: "<<this)
}


std::ostream& assignment_operator::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declaration
//////////////////////////////////////////



CAST_CLASS_ID struct_declaration::ID=ID_STRUCT_DECLARATION;

struct_declaration::struct_declaration
	(
		ReferenceCountedAutoPointer<specifier_qualifier_list> _arg_specifier_qualifier_list,
		ReferenceCountedAutoPointer<struct_declarator_list> _arg_struct_declarator_list
	):
		CAst() ,
		_p_specifier_qualifier_list(_arg_specifier_qualifier_list),
		_p_struct_declarator_list(_arg_struct_declarator_list)
{
	LOG(COL_FG_GREEN<<"Created object of struct_declaration: "<<this)
}


std::ostream& struct_declaration::codeStream(std::ostream& stream)const
{
	if( ! _p_specifier_qualifier_list.isNull()){_p_specifier_qualifier_list->codeStream(stream);}

	if( ! _p_struct_declarator_list.isNull()){_p_struct_declarator_list->codeStream(stream);}

	stream<<"; ";

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:abstract_declarator
//////////////////////////////////////////



CAST_CLASS_ID abstract_declarator::ID=ID_ABSTRACT_DECLARATOR;

abstract_declarator::abstract_declarator
	(
		ReferenceCountedAutoPointer<pointer> _arg_pointer,
		ReferenceCountedAutoPointer<direct_abstract_declarator> _arg_direct_abstract_declarator
	):
		CAst() ,
		_p_pointer(_arg_pointer),
		_p_direct_abstract_declarator(_arg_direct_abstract_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of abstract_declarator: "<<this)
}


std::ostream& abstract_declarator::codeStream(std::ostream& stream)const
{
	if( ! _p_pointer.isNull()){_p_pointer->codeStream(stream);}

	if( ! _p_direct_abstract_declarator.isNull()){_p_direct_abstract_declarator->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:iteration_statement
//////////////////////////////////////////




CAST_CLASS_ID iteration_statement_1::ID=ID_ITERATION_STATEMENT_1;

iteration_statement_1::iteration_statement_1
	(
		ReferenceCountedAutoPointer<expression> _arg_expression,
		ReferenceCountedAutoPointer<statement> _arg_statement
	):
		iteration_statement() ,
		_p_expression(_arg_expression),
		_p_statement(_arg_statement)
{
	LOG(COL_FG_GREEN<<"Created object of iteration_statement_1: "<<this)
}


std::ostream& iteration_statement_1::codeStream(std::ostream& stream)const
{
	stream<<"while ";

	stream<<"( ";

	if( ! _p_expression.isNull()){_p_expression->codeStream(stream);}

	stream<<") ";

	if( ! _p_statement.isNull()){_p_statement->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID iteration_statement_2::ID=ID_ITERATION_STATEMENT_2;

iteration_statement_2::iteration_statement_2
	(
		ReferenceCountedAutoPointer<statement> _arg_statement,
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		iteration_statement() ,
		_p_statement(_arg_statement),
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of iteration_statement_2: "<<this)
}


std::ostream& iteration_statement_2::codeStream(std::ostream& stream)const
{
	stream<<"do ";

	if( ! _p_statement.isNull()){_p_statement->codeStream(stream);}

	stream<<"while ";

	stream<<"( ";

	if( ! _p_expression.isNull()){_p_expression->codeStream(stream);}

	stream<<") ";

	stream<<"; ";

	return stream;
}


CAST_CLASS_ID iteration_statement_3::ID=ID_ITERATION_STATEMENT_3;

iteration_statement_3::iteration_statement_3
	(
		ReferenceCountedAutoPointer<expression_statement> _arg_expression_statement1,
		ReferenceCountedAutoPointer<expression_statement> _arg_expression_statement2,
		ReferenceCountedAutoPointer<expression> _arg_expression,
		ReferenceCountedAutoPointer<statement> _arg_statement
	):
		iteration_statement() ,
		_p_expression_statement1(_arg_expression_statement1),
		_p_expression_statement2(_arg_expression_statement2),
		_p_expression(_arg_expression),
		_p_statement(_arg_statement)
{
	LOG(COL_FG_GREEN<<"Created object of iteration_statement_3: "<<this)
}


std::ostream& iteration_statement_3::codeStream(std::ostream& stream)const
{
	stream<<"for ";

	stream<<"( ";

	if( ! _p_expression_statement1.isNull()){_p_expression_statement1->codeStream(stream);}

	if( ! _p_expression_statement2.isNull()){_p_expression_statement2->codeStream(stream);}

	if( ! _p_expression.isNull()){_p_expression->codeStream(stream);}

	stream<<") ";

	if( ! _p_statement.isNull()){_p_statement->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:additive_expression
//////////////////////////////////////////





CAST_CLASS_ID additive_expression_item::ID=ID_ADDITIVE_EXPRESSION_ITEM;

additive_expression_item::additive_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<multiplicative_expression> _arg_multiplicative_expression
	):
		_p_token(_arg_token),
		_p_multiplicative_expression(_arg_multiplicative_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="+"||_p_token->text()=="-")
	LOG(COL_FG_GREEN<<"Created object of additive_expression_item: "<<this)
}


std::ostream& additive_expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_multiplicative_expression.isNull()){_p_multiplicative_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID additive_expression::ID=ID_ADDITIVE_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:external_declaration
//////////////////////////////////////////




CAST_CLASS_ID external_declaration_1::ID=ID_EXTERNAL_DECLARATION_1;

external_declaration_1::external_declaration_1
	(
		ReferenceCountedAutoPointer<declaration> _arg_declaration
	):
		external_declaration() ,
		_p_declaration(_arg_declaration)
{
	LOG(COL_FG_GREEN<<"Created object of external_declaration_1: "<<this)
}


std::ostream& external_declaration_1::codeStream(std::ostream& stream)const
{
	if( ! _p_declaration.isNull()){_p_declaration->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID external_declaration_2::ID=ID_EXTERNAL_DECLARATION_2;

external_declaration_2::external_declaration_2
	(
		ReferenceCountedAutoPointer<function_definition> _arg_function_definition
	):
		external_declaration() ,
		_p_function_definition(_arg_function_definition)
{
	LOG(COL_FG_GREEN<<"Created object of external_declaration_2: "<<this)
}


std::ostream& external_declaration_2::codeStream(std::ostream& stream)const
{
	if( ! _p_function_definition.isNull()){_p_function_definition->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_specifier
//////////////////////////////////////////




CAST_CLASS_ID type_specifier_1::ID=ID_TYPE_SPECIFIER_1;

type_specifier_1::type_specifier_1
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		type_specifier() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="char"||_p_token->text()=="short"||_p_token->text()=="int"||_p_token->text()=="long"||_p_token->text()=="signed"||_p_token->text()=="unsigned"||_p_token->text()=="float"||_p_token->text()=="double"||_p_token->text()=="void")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of type_specifier_1: "<<this)
}


std::ostream& type_specifier_1::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID type_specifier_2::ID=ID_TYPE_SPECIFIER_2;

type_specifier_2::type_specifier_2
	(
		ReferenceCountedAutoPointer<struct_or_union_specifier> _arg_struct_or_union_specifier
	):
		type_specifier() ,
		_p_struct_or_union_specifier(_arg_struct_or_union_specifier)
{
	LOG(COL_FG_GREEN<<"Created object of type_specifier_2: "<<this)
}


std::ostream& type_specifier_2::codeStream(std::ostream& stream)const
{
	if( ! _p_struct_or_union_specifier.isNull()){_p_struct_or_union_specifier->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID type_specifier_3::ID=ID_TYPE_SPECIFIER_3;

type_specifier_3::type_specifier_3
	(
		ReferenceCountedAutoPointer<enum_specifier> _arg_enum_specifier
	):
		type_specifier() ,
		_p_enum_specifier(_arg_enum_specifier)
{
	LOG(COL_FG_GREEN<<"Created object of type_specifier_3: "<<this)
}


std::ostream& type_specifier_3::codeStream(std::ostream& stream)const
{
	if( ! _p_enum_specifier.isNull()){_p_enum_specifier->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:compound_statement
//////////////////////////////////////////



CAST_CLASS_ID compound_statement::ID=ID_COMPOUND_STATEMENT;

compound_statement::compound_statement
	(
		ReferenceCountedAutoPointer<declaration_list> _arg_declaration_list,
		ReferenceCountedAutoPointer<statement_list> _arg_statement_list
	):
		CAst() ,
		_p_declaration_list(_arg_declaration_list),
		_p_statement_list(_arg_statement_list)
{
	LOG(COL_FG_GREEN<<"Created object of compound_statement: "<<this)
}


std::ostream& compound_statement::codeStream(std::ostream& stream)const
{
	stream<<"{ ";

	if( ! _p_declaration_list.isNull()){_p_declaration_list->codeStream(stream);}

	if( ! _p_statement_list.isNull()){_p_statement_list->codeStream(stream);}

	stream<<"} ";

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:inclusive_or_expression
//////////////////////////////////////////





CAST_CLASS_ID inclusive_or_expression_item::ID=ID_INCLUSIVE_OR_EXPRESSION_ITEM;

inclusive_or_expression_item::inclusive_or_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<exclusive_or_expression> _arg_exclusive_or_expression
	):
		_p_token(_arg_token),
		_p_exclusive_or_expression(_arg_exclusive_or_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="|")
	LOG(COL_FG_GREEN<<"Created object of inclusive_or_expression_item: "<<this)
}


std::ostream& inclusive_or_expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_exclusive_or_expression.isNull()){_p_exclusive_or_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID inclusive_or_expression::ID=ID_INCLUSIVE_OR_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:pointer
//////////////////////////////////////////




CAST_CLASS_ID pointer_item_1::ID=ID_POINTER_ITEM_1;

pointer_item_1::pointer_item_1
	(
		ReferenceCountedAutoPointer<type_qualifier_list> _arg_type_qualifier_list
	):
		pointer_item() ,
		_p_type_qualifier_list(_arg_type_qualifier_list)
{
	LOG(COL_FG_GREEN<<"Created object of pointer_item_1: "<<this)
}


std::ostream& pointer_item_1::codeStream(std::ostream& stream)const
{
	stream<<"* ";

	if( ! _p_type_qualifier_list.isNull()){_p_type_qualifier_list->codeStream(stream);}

	

	return stream;
}


CAST_CLASS_ID pointer_item_2::ID=ID_POINTER_ITEM_2;

pointer_item_2::pointer_item_2
	(
		
	):
		pointer_item() 
		
{
	LOG(COL_FG_GREEN<<"Created object of pointer_item_2: "<<this)
}


std::ostream& pointer_item_2::codeStream(std::ostream& stream)const
{
	stream<<"* ";

	

	return stream;
}


CAST_CLASS_ID pointer::ID=ID_POINTER;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:selection_statement
//////////////////////////////////////////




CAST_CLASS_ID selection_statement_1::ID=ID_SELECTION_STATEMENT_1;

selection_statement_1::selection_statement_1
	(
		ReferenceCountedAutoPointer<expression> _arg_expression,
		ReferenceCountedAutoPointer<statement> _arg_statement1,
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<statement> _arg_statement2
	):
		selection_statement() ,
		_p_expression(_arg_expression),
		_p_statement1(_arg_statement1),
		_p_token(_arg_token),
		_p_statement2(_arg_statement2)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="else")
	LOG(COL_FG_GREEN<<"Created object of selection_statement_1: "<<this)
}


std::ostream& selection_statement_1::codeStream(std::ostream& stream)const
{
	stream<<"if ";

	stream<<"( ";

	if( ! _p_expression.isNull()){_p_expression->codeStream(stream);}

	stream<<") ";

	if( ! _p_statement1.isNull()){_p_statement1->codeStream(stream);}

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_statement2.isNull()){_p_statement2->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID selection_statement_2::ID=ID_SELECTION_STATEMENT_2;

selection_statement_2::selection_statement_2
	(
		ReferenceCountedAutoPointer<expression> _arg_expression,
		ReferenceCountedAutoPointer<statement> _arg_statement
	):
		selection_statement() ,
		_p_expression(_arg_expression),
		_p_statement(_arg_statement)
{
	LOG(COL_FG_GREEN<<"Created object of selection_statement_2: "<<this)
}


std::ostream& selection_statement_2::codeStream(std::ostream& stream)const
{
	stream<<"switch ";

	stream<<"( ";

	if( ! _p_expression.isNull()){_p_expression->codeStream(stream);}

	stream<<") ";

	if( ! _p_statement.isNull()){_p_statement->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:postfix_expression
//////////////////////////////////////////




CAST_CLASS_ID postfix_expression_1::ID=ID_POSTFIX_EXPRESSION_1;

postfix_expression_1::postfix_expression_1
	(
		ReferenceCountedAutoPointer<primary_expression> _arg_primary_expression
	):
		postfix_expression() ,
		_p_primary_expression(_arg_primary_expression)
{
	LOG(COL_FG_GREEN<<"Created object of postfix_expression_1: "<<this)
}


std::ostream& postfix_expression_1::codeStream(std::ostream& stream)const
{
	if( ! _p_primary_expression.isNull()){_p_primary_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID postfix_expression_2::ID=ID_POSTFIX_EXPRESSION_2;

postfix_expression_2::postfix_expression_2
	(
		ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,
		ReferenceCountedAutoPointer<token> _arg_token1,
		ReferenceCountedAutoPointer<token> _arg_token2
	):
		postfix_expression() ,
		_p_postfix_expression(_arg_postfix_expression),
		_p_token1(_arg_token1),
		_p_token2(_arg_token2)
{
	AssertTokenType(_p_token1->text()=="->"||_p_token1->text()==".")
	AssertNotNullRule(_p_token1)
	AssertNotNullRule(_p_token2)
	LOG(COL_FG_GREEN<<"Created object of postfix_expression_2: "<<this)
}


std::ostream& postfix_expression_2::codeStream(std::ostream& stream)const
{
	if( ! _p_postfix_expression.isNull()){_p_postfix_expression->codeStream(stream);}

	if( ! _p_token1.isNull()){_p_token1->codeStream(stream);}

	if( ! _p_token2.isNull()){_p_token2->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID postfix_expression_3::ID=ID_POSTFIX_EXPRESSION_3;

postfix_expression_3::postfix_expression_3
	(
		ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		postfix_expression() ,
		_p_postfix_expression(_arg_postfix_expression),
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of postfix_expression_3: "<<this)
}


std::ostream& postfix_expression_3::codeStream(std::ostream& stream)const
{
	if( ! _p_postfix_expression.isNull()){_p_postfix_expression->codeStream(stream);}

	stream<<"[ ";

	if( ! _p_expression.isNull()){_p_expression->codeStream(stream);}

	stream<<"] ";

	return stream;
}


CAST_CLASS_ID postfix_expression_4::ID=ID_POSTFIX_EXPRESSION_4;

postfix_expression_4::postfix_expression_4
	(
		ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,
		ReferenceCountedAutoPointer<argument_expression_list> _arg_argument_expression_list
	):
		postfix_expression() ,
		_p_postfix_expression(_arg_postfix_expression),
		_p_argument_expression_list(_arg_argument_expression_list)
{
	LOG(COL_FG_GREEN<<"Created object of postfix_expression_4: "<<this)
}


std::ostream& postfix_expression_4::codeStream(std::ostream& stream)const
{
	if( ! _p_postfix_expression.isNull()){_p_postfix_expression->codeStream(stream);}

	stream<<"( ";

	if( ! _p_argument_expression_list.isNull()){_p_argument_expression_list->codeStream(stream);}

	stream<<") ";

	return stream;
}


CAST_CLASS_ID postfix_expression_5::ID=ID_POSTFIX_EXPRESSION_5;

postfix_expression_5::postfix_expression_5
	(
		ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,
		ReferenceCountedAutoPointer<token> _arg_token
	):
		postfix_expression() ,
		_p_postfix_expression(_arg_postfix_expression),
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="++"||_p_token->text()=="--")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of postfix_expression_5: "<<this)
}


std::ostream& postfix_expression_5::codeStream(std::ostream& stream)const
{
	if( ! _p_postfix_expression.isNull()){_p_postfix_expression->codeStream(stream);}

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:and_expression
//////////////////////////////////////////





CAST_CLASS_ID and_expression_item::ID=ID_AND_EXPRESSION_ITEM;

and_expression_item::and_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<equality_expression> _arg_equality_expression
	):
		_p_token(_arg_token),
		_p_equality_expression(_arg_equality_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="&")
	LOG(COL_FG_GREEN<<"Created object of and_expression_item: "<<this)
}


std::ostream& and_expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_equality_expression.isNull()){_p_equality_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID and_expression::ID=ID_AND_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:statement
//////////////////////////////////////////




CAST_CLASS_ID statement_1::ID=ID_STATEMENT_1;

statement_1::statement_1
	(
		ReferenceCountedAutoPointer<selection_statement> _arg_selection_statement
	):
		statement() ,
		_p_selection_statement(_arg_selection_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_1: "<<this)
}


std::ostream& statement_1::codeStream(std::ostream& stream)const
{
	if( ! _p_selection_statement.isNull()){_p_selection_statement->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID statement_2::ID=ID_STATEMENT_2;

statement_2::statement_2
	(
		ReferenceCountedAutoPointer<iteration_statement> _arg_iteration_statement
	):
		statement() ,
		_p_iteration_statement(_arg_iteration_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_2: "<<this)
}


std::ostream& statement_2::codeStream(std::ostream& stream)const
{
	if( ! _p_iteration_statement.isNull()){_p_iteration_statement->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID statement_3::ID=ID_STATEMENT_3;

statement_3::statement_3
	(
		ReferenceCountedAutoPointer<jump_statement> _arg_jump_statement
	):
		statement() ,
		_p_jump_statement(_arg_jump_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_3: "<<this)
}


std::ostream& statement_3::codeStream(std::ostream& stream)const
{
	if( ! _p_jump_statement.isNull()){_p_jump_statement->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID statement_4::ID=ID_STATEMENT_4;

statement_4::statement_4
	(
		ReferenceCountedAutoPointer<labeled_statement> _arg_labeled_statement
	):
		statement() ,
		_p_labeled_statement(_arg_labeled_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_4: "<<this)
}


std::ostream& statement_4::codeStream(std::ostream& stream)const
{
	if( ! _p_labeled_statement.isNull()){_p_labeled_statement->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID statement_5::ID=ID_STATEMENT_5;

statement_5::statement_5
	(
		ReferenceCountedAutoPointer<compound_statement> _arg_compound_statement
	):
		statement() ,
		_p_compound_statement(_arg_compound_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_5: "<<this)
}


std::ostream& statement_5::codeStream(std::ostream& stream)const
{
	if( ! _p_compound_statement.isNull()){_p_compound_statement->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID statement_6::ID=ID_STATEMENT_6;

statement_6::statement_6
	(
		ReferenceCountedAutoPointer<expression_statement> _arg_expression_statement
	):
		statement() ,
		_p_expression_statement(_arg_expression_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_6: "<<this)
}


std::ostream& statement_6::codeStream(std::ostream& stream)const
{
	if( ! _p_expression_statement.isNull()){_p_expression_statement->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:cast_expression
//////////////////////////////////////////




CAST_CLASS_ID cast_expression_1::ID=ID_CAST_EXPRESSION_1;

cast_expression_1::cast_expression_1
	(
		ReferenceCountedAutoPointer<unary_expression> _arg_unary_expression
	):
		cast_expression() ,
		_p_unary_expression(_arg_unary_expression)
{
	LOG(COL_FG_GREEN<<"Created object of cast_expression_1: "<<this)
}


std::ostream& cast_expression_1::codeStream(std::ostream& stream)const
{
	if( ! _p_unary_expression.isNull()){_p_unary_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID cast_expression_2::ID=ID_CAST_EXPRESSION_2;

cast_expression_2::cast_expression_2
	(
		ReferenceCountedAutoPointer<type_name> _arg_type_name,
		ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression
	):
		cast_expression() ,
		_p_type_name(_arg_type_name),
		_p_cast_expression(_arg_cast_expression)
{
	LOG(COL_FG_GREEN<<"Created object of cast_expression_2: "<<this)
}


std::ostream& cast_expression_2::codeStream(std::ostream& stream)const
{
	stream<<"( ";

	if( ! _p_type_name.isNull()){_p_type_name->codeStream(stream);}

	stream<<") ";

	if( ! _p_cast_expression.isNull()){_p_cast_expression->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:init_declarator
//////////////////////////////////////////



CAST_CLASS_ID init_declarator::ID=ID_INIT_DECLARATOR;

init_declarator::init_declarator
	(
		ReferenceCountedAutoPointer<declarator> _arg_declarator,
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<initializer> _arg_initializer
	):
		CAst() ,
		_p_declarator(_arg_declarator),
		_p_token(_arg_token),
		_p_initializer(_arg_initializer)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="=")
	LOG(COL_FG_GREEN<<"Created object of init_declarator: "<<this)
}


std::ostream& init_declarator::codeStream(std::ostream& stream)const
{
	if( ! _p_declarator.isNull()){_p_declarator->codeStream(stream);}

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_initializer.isNull()){_p_initializer->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declarator_list
//////////////////////////////////////////





CAST_CLASS_ID struct_declarator_list_item::ID=ID_STRUCT_DECLARATOR_LIST_ITEM;

struct_declarator_list_item::struct_declarator_list_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<struct_declarator> _arg_struct_declarator
	):
		_p_token(_arg_token),
		_p_struct_declarator(_arg_struct_declarator)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==",")
	LOG(COL_FG_GREEN<<"Created object of struct_declarator_list_item: "<<this)
}


std::ostream& struct_declarator_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_struct_declarator.isNull()){_p_struct_declarator->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID struct_declarator_list::ID=ID_STRUCT_DECLARATOR_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:logical_or_expression
//////////////////////////////////////////





CAST_CLASS_ID logical_or_expression_item::ID=ID_LOGICAL_OR_EXPRESSION_ITEM;

logical_or_expression_item::logical_or_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<logical_and_expression> _arg_logical_and_expression
	):
		_p_token(_arg_token),
		_p_logical_and_expression(_arg_logical_and_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="||")
	LOG(COL_FG_GREEN<<"Created object of logical_or_expression_item: "<<this)
}


std::ostream& logical_or_expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_logical_and_expression.isNull()){_p_logical_and_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID logical_or_expression::ID=ID_LOGICAL_OR_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:unary_operator
//////////////////////////////////////////



CAST_CLASS_ID unary_operator::ID=ID_UNARY_OPERATOR;

unary_operator::unary_operator
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		CAst() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="*"||_p_token->text()=="&"||_p_token->text()=="+"||_p_token->text()=="-"||_p_token->text()=="~"||_p_token->text()=="!")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of unary_operator: "<<this)
}


std::ostream& unary_operator::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:relational_expression
//////////////////////////////////////////





CAST_CLASS_ID relational_expression_item::ID=ID_RELATIONAL_EXPRESSION_ITEM;

relational_expression_item::relational_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<shift_expression> _arg_shift_expression
	):
		_p_token(_arg_token),
		_p_shift_expression(_arg_shift_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="<"||_p_token->text()=="<="||_p_token->text()==">"||_p_token->text()==">=")
	LOG(COL_FG_GREEN<<"Created object of relational_expression_item: "<<this)
}


std::ostream& relational_expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_shift_expression.isNull()){_p_shift_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID relational_expression::ID=ID_RELATIONAL_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_or_union
//////////////////////////////////////////



CAST_CLASS_ID struct_or_union::ID=ID_STRUCT_OR_UNION;

struct_or_union::struct_or_union
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		CAst() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="struct"||_p_token->text()=="union")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of struct_or_union: "<<this)
}


std::ostream& struct_or_union::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:enumerator
//////////////////////////////////////////



CAST_CLASS_ID enumerator::ID=ID_ENUMERATOR;

enumerator::enumerator
	(
		ReferenceCountedAutoPointer<token> _arg_token1,
		ReferenceCountedAutoPointer<token> _arg_token2,
		ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression
	):
		CAst() ,
		_p_token1(_arg_token1),
		_p_token2(_arg_token2),
		_p_constant_expression(_arg_constant_expression)
{
	AssertNotNullRule(_p_token1)
	AssertTokenType(_p_token2.isNull()||_p_token2->text()=="=")
	LOG(COL_FG_GREEN<<"Created object of enumerator: "<<this)
}


std::ostream& enumerator::codeStream(std::ostream& stream)const
{
	if( ! _p_token1.isNull()){_p_token1->codeStream(stream);}

	if( ! _p_token2.isNull()){_p_token2->codeStream(stream);}

	if( ! _p_constant_expression.isNull()){_p_constant_expression->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:assignment_expression
//////////////////////////////////////////




CAST_CLASS_ID assignment_expression_1::ID=ID_ASSIGNMENT_EXPRESSION_1;

assignment_expression_1::assignment_expression_1
	(
		ReferenceCountedAutoPointer<conditional_expression> _arg_conditional_expression
	):
		assignment_expression() ,
		_p_conditional_expression(_arg_conditional_expression)
{
	LOG(COL_FG_GREEN<<"Created object of assignment_expression_1: "<<this)
}


std::ostream& assignment_expression_1::codeStream(std::ostream& stream)const
{
	if( ! _p_conditional_expression.isNull()){_p_conditional_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID assignment_expression_2::ID=ID_ASSIGNMENT_EXPRESSION_2;

assignment_expression_2::assignment_expression_2
	(
		ReferenceCountedAutoPointer<unary_expression> _arg_unary_expression,
		ReferenceCountedAutoPointer<assignment_operator> _arg_assignment_operator,
		ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression
	):
		assignment_expression() ,
		_p_unary_expression(_arg_unary_expression),
		_p_assignment_operator(_arg_assignment_operator),
		_p_assignment_expression(_arg_assignment_expression)
{
	LOG(COL_FG_GREEN<<"Created object of assignment_expression_2: "<<this)
}


std::ostream& assignment_expression_2::codeStream(std::ostream& stream)const
{
	if( ! _p_unary_expression.isNull()){_p_unary_expression->codeStream(stream);}

	if( ! _p_assignment_operator.isNull()){_p_assignment_operator->codeStream(stream);}

	if( ! _p_assignment_expression.isNull()){_p_assignment_expression->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_type_list
//////////////////////////////////////////



CAST_CLASS_ID parameter_type_list::ID=ID_PARAMETER_TYPE_LIST;

parameter_type_list::parameter_type_list
	(
		ReferenceCountedAutoPointer<parameter_list> _arg_parameter_list,
		ReferenceCountedAutoPointer<token> _arg_token1,
		ReferenceCountedAutoPointer<token> _arg_token2
	):
		CAst() ,
		_p_parameter_list(_arg_parameter_list),
		_p_token1(_arg_token1),
		_p_token2(_arg_token2)
{
	AssertTokenType(_p_token1.isNull()||_p_token1->text()==",")
	AssertTokenType(_p_token2.isNull()||_p_token2->text()=="...")
	LOG(COL_FG_GREEN<<"Created object of parameter_type_list: "<<this)
}


std::ostream& parameter_type_list::codeStream(std::ostream& stream)const
{
	if( ! _p_parameter_list.isNull()){_p_parameter_list->codeStream(stream);}

	if( ! _p_token1.isNull()){_p_token1->codeStream(stream);}

	if( ! _p_token2.isNull()){_p_token2->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_declaration
//////////////////////////////////////////




CAST_CLASS_ID parameter_declaration_1::ID=ID_PARAMETER_DECLARATION_1;

parameter_declaration_1::parameter_declaration_1
	(
		ReferenceCountedAutoPointer<declaration_specifiers> _arg_declaration_specifiers,
		ReferenceCountedAutoPointer<declarator> _arg_declarator
	):
		parameter_declaration() ,
		_p_declaration_specifiers(_arg_declaration_specifiers),
		_p_declarator(_arg_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of parameter_declaration_1: "<<this)
}


std::ostream& parameter_declaration_1::codeStream(std::ostream& stream)const
{
	if( ! _p_declaration_specifiers.isNull()){_p_declaration_specifiers->codeStream(stream);}

	if( ! _p_declarator.isNull()){_p_declarator->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID parameter_declaration_2::ID=ID_PARAMETER_DECLARATION_2;

parameter_declaration_2::parameter_declaration_2
	(
		ReferenceCountedAutoPointer<declaration_specifiers> _arg_declaration_specifiers,
		ReferenceCountedAutoPointer<abstract_declarator> _arg_abstract_declarator
	):
		parameter_declaration() ,
		_p_declaration_specifiers(_arg_declaration_specifiers),
		_p_abstract_declarator(_arg_abstract_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of parameter_declaration_2: "<<this)
}


std::ostream& parameter_declaration_2::codeStream(std::ostream& stream)const
{
	if( ! _p_declaration_specifiers.isNull()){_p_declaration_specifiers->codeStream(stream);}

	if( ! _p_abstract_declarator.isNull()){_p_abstract_declarator->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:multiplicative_expression
//////////////////////////////////////////





CAST_CLASS_ID multiplicative_expression_item::ID=ID_MULTIPLICATIVE_EXPRESSION_ITEM;

multiplicative_expression_item::multiplicative_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression
	):
		_p_token(_arg_token),
		_p_cast_expression(_arg_cast_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="/"||_p_token->text()=="*"||_p_token->text()=="%")
	LOG(COL_FG_GREEN<<"Created object of multiplicative_expression_item: "<<this)
}


std::ostream& multiplicative_expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_cast_expression.isNull()){_p_cast_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID multiplicative_expression::ID=ID_MULTIPLICATIVE_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_qualifier_list
//////////////////////////////////////////





CAST_CLASS_ID type_qualifier_list_item::ID=ID_TYPE_QUALIFIER_LIST_ITEM;

type_qualifier_list_item::type_qualifier_list_item
	(
		ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier
	):
		_p_type_qualifier(_arg_type_qualifier)
{
	LOG(COL_FG_GREEN<<"Created object of type_qualifier_list_item: "<<this)
}


std::ostream& type_qualifier_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_type_qualifier.isNull()){_p_type_qualifier->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID type_qualifier_list::ID=ID_TYPE_QUALIFIER_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:argument_expression_list
//////////////////////////////////////////





CAST_CLASS_ID argument_expression_list_item::ID=ID_ARGUMENT_EXPRESSION_LIST_ITEM;

argument_expression_list_item::argument_expression_list_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression
	):
		_p_token(_arg_token),
		_p_assignment_expression(_arg_assignment_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==",")
	LOG(COL_FG_GREEN<<"Created object of argument_expression_list_item: "<<this)
}


std::ostream& argument_expression_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_assignment_expression.isNull()){_p_assignment_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID argument_expression_list::ID=ID_ARGUMENT_EXPRESSION_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:direct_abstract_declarator
//////////////////////////////////////////




CAST_CLASS_ID direct_abstract_declarator_1::ID=ID_DIRECT_ABSTRACT_DECLARATOR_1;

direct_abstract_declarator_1::direct_abstract_declarator_1
	(
		ReferenceCountedAutoPointer<direct_abstract_declarator> _arg_direct_abstract_declarator,
		ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression
	):
		direct_abstract_declarator() ,
		_p_direct_abstract_declarator(_arg_direct_abstract_declarator),
		_p_constant_expression(_arg_constant_expression)
{
	LOG(COL_FG_GREEN<<"Created object of direct_abstract_declarator_1: "<<this)
}


std::ostream& direct_abstract_declarator_1::codeStream(std::ostream& stream)const
{
	if( ! _p_direct_abstract_declarator.isNull()){_p_direct_abstract_declarator->codeStream(stream);}

	stream<<"[ ";

	if( ! _p_constant_expression.isNull()){_p_constant_expression->codeStream(stream);}

	stream<<"] ";

	return stream;
}


CAST_CLASS_ID direct_abstract_declarator_2::ID=ID_DIRECT_ABSTRACT_DECLARATOR_2;

direct_abstract_declarator_2::direct_abstract_declarator_2
	(
		ReferenceCountedAutoPointer<direct_abstract_declarator> _arg_direct_abstract_declarator,
		ReferenceCountedAutoPointer<parameter_type_list> _arg_parameter_type_list
	):
		direct_abstract_declarator() ,
		_p_direct_abstract_declarator(_arg_direct_abstract_declarator),
		_p_parameter_type_list(_arg_parameter_type_list)
{
	LOG(COL_FG_GREEN<<"Created object of direct_abstract_declarator_2: "<<this)
}


std::ostream& direct_abstract_declarator_2::codeStream(std::ostream& stream)const
{
	if( ! _p_direct_abstract_declarator.isNull()){_p_direct_abstract_declarator->codeStream(stream);}

	stream<<"( ";

	if( ! _p_parameter_type_list.isNull()){_p_parameter_type_list->codeStream(stream);}

	stream<<") ";

	return stream;
}


CAST_CLASS_ID direct_abstract_declarator_3::ID=ID_DIRECT_ABSTRACT_DECLARATOR_3;

direct_abstract_declarator_3::direct_abstract_declarator_3
	(
		ReferenceCountedAutoPointer<abstract_declarator> _arg_abstract_declarator
	):
		direct_abstract_declarator() ,
		_p_abstract_declarator(_arg_abstract_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of direct_abstract_declarator_3: "<<this)
}


std::ostream& direct_abstract_declarator_3::codeStream(std::ostream& stream)const
{
	stream<<"( ";

	if( ! _p_abstract_declarator.isNull()){_p_abstract_declarator->codeStream(stream);}

	stream<<") ";

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:equality_expression
//////////////////////////////////////////





CAST_CLASS_ID equality_expression_item::ID=ID_EQUALITY_EXPRESSION_ITEM;

equality_expression_item::equality_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<relational_expression> _arg_relational_expression
	):
		_p_token(_arg_token),
		_p_relational_expression(_arg_relational_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="=="||_p_token->text()=="!=")
	LOG(COL_FG_GREEN<<"Created object of equality_expression_item: "<<this)
}


std::ostream& equality_expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_relational_expression.isNull()){_p_relational_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID equality_expression::ID=ID_EQUALITY_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:primary_expression
//////////////////////////////////////////




CAST_CLASS_ID primary_expression_1::ID=ID_PRIMARY_EXPRESSION_1;

primary_expression_1::primary_expression_1
	(
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		primary_expression() ,
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of primary_expression_1: "<<this)
}


std::ostream& primary_expression_1::codeStream(std::ostream& stream)const
{
	stream<<"( ";

	if( ! _p_expression.isNull()){_p_expression->codeStream(stream);}

	stream<<") ";

	return stream;
}


CAST_CLASS_ID primary_expression_2::ID=ID_PRIMARY_EXPRESSION_2;

primary_expression_2::primary_expression_2
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		primary_expression() ,
		_p_token(_arg_token)
{
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of primary_expression_2: "<<this)
}


std::ostream& primary_expression_2::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration_specifiers
//////////////////////////////////////////




CAST_CLASS_ID declaration_specifiers_item_1::ID=ID_DECLARATION_SPECIFIERS_ITEM_1;

declaration_specifiers_item_1::declaration_specifiers_item_1
	(
		ReferenceCountedAutoPointer<type_specifier> _arg_type_specifier
	):
		declaration_specifiers_item() ,
		_p_type_specifier(_arg_type_specifier)
{
	LOG(COL_FG_GREEN<<"Created object of declaration_specifiers_item_1: "<<this)
}


std::ostream& declaration_specifiers_item_1::codeStream(std::ostream& stream)const
{
	if( ! _p_type_specifier.isNull()){_p_type_specifier->codeStream(stream);}

	

	return stream;
}


CAST_CLASS_ID declaration_specifiers_item_2::ID=ID_DECLARATION_SPECIFIERS_ITEM_2;

declaration_specifiers_item_2::declaration_specifiers_item_2
	(
		ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier
	):
		declaration_specifiers_item() ,
		_p_type_qualifier(_arg_type_qualifier)
{
	LOG(COL_FG_GREEN<<"Created object of declaration_specifiers_item_2: "<<this)
}


std::ostream& declaration_specifiers_item_2::codeStream(std::ostream& stream)const
{
	if( ! _p_type_qualifier.isNull()){_p_type_qualifier->codeStream(stream);}

	

	return stream;
}


CAST_CLASS_ID declaration_specifiers_item_3::ID=ID_DECLARATION_SPECIFIERS_ITEM_3;

declaration_specifiers_item_3::declaration_specifiers_item_3
	(
		ReferenceCountedAutoPointer<storage_class_specifier> _arg_storage_class_specifier
	):
		declaration_specifiers_item() ,
		_p_storage_class_specifier(_arg_storage_class_specifier)
{
	LOG(COL_FG_GREEN<<"Created object of declaration_specifiers_item_3: "<<this)
}


std::ostream& declaration_specifiers_item_3::codeStream(std::ostream& stream)const
{
	if( ! _p_storage_class_specifier.isNull()){_p_storage_class_specifier->codeStream(stream);}

	

	return stream;
}


CAST_CLASS_ID declaration_specifiers::ID=ID_DECLARATION_SPECIFIERS;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration
//////////////////////////////////////////



CAST_CLASS_ID declaration::ID=ID_DECLARATION;

declaration::declaration
	(
		ReferenceCountedAutoPointer<declaration_specifiers> _arg_declaration_specifiers,
		ReferenceCountedAutoPointer<init_declarator_list> _arg_init_declarator_list
	):
		CAst() ,
		_p_declaration_specifiers(_arg_declaration_specifiers),
		_p_init_declarator_list(_arg_init_declarator_list)
{
	LOG(COL_FG_GREEN<<"Created object of declaration: "<<this)
}


std::ostream& declaration::codeStream(std::ostream& stream)const
{
	if( ! _p_declaration_specifiers.isNull()){_p_declaration_specifiers->codeStream(stream);}

	if( ! _p_init_declarator_list.isNull()){_p_init_declarator_list->codeStream(stream);}

	stream<<"; ";

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:direct_declarator
//////////////////////////////////////////




CAST_CLASS_ID direct_declarator_1::ID=ID_DIRECT_DECLARATOR_1;

direct_declarator_1::direct_declarator_1
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		direct_declarator() ,
		_p_token(_arg_token)
{
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of direct_declarator_1: "<<this)
}


std::ostream& direct_declarator_1::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID direct_declarator_2::ID=ID_DIRECT_DECLARATOR_2;

direct_declarator_2::direct_declarator_2
	(
		ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator,
		ReferenceCountedAutoPointer<identifier_list> _arg_identifier_list
	):
		direct_declarator() ,
		_p_direct_declarator(_arg_direct_declarator),
		_p_identifier_list(_arg_identifier_list)
{
	LOG(COL_FG_GREEN<<"Created object of direct_declarator_2: "<<this)
}


std::ostream& direct_declarator_2::codeStream(std::ostream& stream)const
{
	if( ! _p_direct_declarator.isNull()){_p_direct_declarator->codeStream(stream);}

	stream<<"( ";

	if( ! _p_identifier_list.isNull()){_p_identifier_list->codeStream(stream);}

	stream<<") ";

	return stream;
}


CAST_CLASS_ID direct_declarator_3::ID=ID_DIRECT_DECLARATOR_3;

direct_declarator_3::direct_declarator_3
	(
		ReferenceCountedAutoPointer<declarator> _arg_declarator
	):
		direct_declarator() ,
		_p_declarator(_arg_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of direct_declarator_3: "<<this)
}


std::ostream& direct_declarator_3::codeStream(std::ostream& stream)const
{
	stream<<"( ";

	if( ! _p_declarator.isNull()){_p_declarator->codeStream(stream);}

	stream<<") ";

	return stream;
}


CAST_CLASS_ID direct_declarator_4::ID=ID_DIRECT_DECLARATOR_4;

direct_declarator_4::direct_declarator_4
	(
		ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator,
		ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression
	):
		direct_declarator() ,
		_p_direct_declarator(_arg_direct_declarator),
		_p_constant_expression(_arg_constant_expression)
{
	LOG(COL_FG_GREEN<<"Created object of direct_declarator_4: "<<this)
}


std::ostream& direct_declarator_4::codeStream(std::ostream& stream)const
{
	if( ! _p_direct_declarator.isNull()){_p_direct_declarator->codeStream(stream);}

	stream<<"[ ";

	if( ! _p_constant_expression.isNull()){_p_constant_expression->codeStream(stream);}

	stream<<"] ";

	return stream;
}


CAST_CLASS_ID direct_declarator_5::ID=ID_DIRECT_DECLARATOR_5;

direct_declarator_5::direct_declarator_5
	(
		ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator,
		ReferenceCountedAutoPointer<parameter_type_list> _arg_parameter_type_list
	):
		direct_declarator() ,
		_p_direct_declarator(_arg_direct_declarator),
		_p_parameter_type_list(_arg_parameter_type_list)
{
	LOG(COL_FG_GREEN<<"Created object of direct_declarator_5: "<<this)
}


std::ostream& direct_declarator_5::codeStream(std::ostream& stream)const
{
	if( ! _p_direct_declarator.isNull()){_p_direct_declarator->codeStream(stream);}

	stream<<"( ";

	if( ! _p_parameter_type_list.isNull()){_p_parameter_type_list->codeStream(stream);}

	stream<<") ";

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:logical_and_expression
//////////////////////////////////////////





CAST_CLASS_ID logical_and_expression_item::ID=ID_LOGICAL_AND_EXPRESSION_ITEM;

logical_and_expression_item::logical_and_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<inclusive_or_expression> _arg_inclusive_or_expression
	):
		_p_token(_arg_token),
		_p_inclusive_or_expression(_arg_inclusive_or_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="&&")
	LOG(COL_FG_GREEN<<"Created object of logical_and_expression_item: "<<this)
}


std::ostream& logical_and_expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_inclusive_or_expression.isNull()){_p_inclusive_or_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID logical_and_expression::ID=ID_LOGICAL_AND_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:init_declarator_list
//////////////////////////////////////////





CAST_CLASS_ID init_declarator_list_item::ID=ID_INIT_DECLARATOR_LIST_ITEM;

init_declarator_list_item::init_declarator_list_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<init_declarator> _arg_init_declarator
	):
		_p_token(_arg_token),
		_p_init_declarator(_arg_init_declarator)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==",")
	LOG(COL_FG_GREEN<<"Created object of init_declarator_list_item: "<<this)
}


std::ostream& init_declarator_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_init_declarator.isNull()){_p_init_declarator->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID init_declarator_list::ID=ID_INIT_DECLARATOR_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:shift_expression
//////////////////////////////////////////





CAST_CLASS_ID shift_expression_item::ID=ID_SHIFT_EXPRESSION_ITEM;

shift_expression_item::shift_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<additive_expression> _arg_additive_expression
	):
		_p_token(_arg_token),
		_p_additive_expression(_arg_additive_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="<<"||_p_token->text()==">>")
	LOG(COL_FG_GREEN<<"Created object of shift_expression_item: "<<this)
}


std::ostream& shift_expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_additive_expression.isNull()){_p_additive_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID shift_expression::ID=ID_SHIFT_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:identifier_list
//////////////////////////////////////////





CAST_CLASS_ID identifier_list_item::ID=ID_IDENTIFIER_LIST_ITEM;

identifier_list_item::identifier_list_item
	(
		ReferenceCountedAutoPointer<token> _arg_token1,
		ReferenceCountedAutoPointer<token> _arg_token2
	):
		_p_token1(_arg_token1),
		_p_token2(_arg_token2)
{
	AssertTokenType(_p_token1.isNull()||_p_token1->text()==",")
	AssertNotNullRule(_p_token2)
	LOG(COL_FG_GREEN<<"Created object of identifier_list_item: "<<this)
}


std::ostream& identifier_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token1.isNull()){_p_token1->codeStream(stream);}

	if( ! _p_token2.isNull()){_p_token2->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID identifier_list::ID=ID_IDENTIFIER_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:jump_statement
//////////////////////////////////////////




CAST_CLASS_ID jump_statement_1::ID=ID_JUMP_STATEMENT_1;

jump_statement_1::jump_statement_1
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		jump_statement() ,
		_p_token(_arg_token)
{
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of jump_statement_1: "<<this)
}


std::ostream& jump_statement_1::codeStream(std::ostream& stream)const
{
	stream<<"goto ";

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	stream<<"; ";

	return stream;
}


CAST_CLASS_ID jump_statement_2::ID=ID_JUMP_STATEMENT_2;

jump_statement_2::jump_statement_2
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		jump_statement() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="continue"||_p_token->text()=="break")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of jump_statement_2: "<<this)
}


std::ostream& jump_statement_2::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	stream<<"; ";

	return stream;
}


CAST_CLASS_ID jump_statement_3::ID=ID_JUMP_STATEMENT_3;

jump_statement_3::jump_statement_3
	(
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		jump_statement() ,
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of jump_statement_3: "<<this)
}


std::ostream& jump_statement_3::codeStream(std::ostream& stream)const
{
	stream<<"return ";

	if( ! _p_expression.isNull()){_p_expression->codeStream(stream);}

	stream<<"; ";

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declarator
//////////////////////////////////////////



CAST_CLASS_ID struct_declarator::ID=ID_STRUCT_DECLARATOR;

struct_declarator::struct_declarator
	(
		ReferenceCountedAutoPointer<declarator> _arg_declarator,
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression
	):
		CAst() ,
		_p_declarator(_arg_declarator),
		_p_token(_arg_token),
		_p_constant_expression(_arg_constant_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==":")
	LOG(COL_FG_GREEN<<"Created object of struct_declarator: "<<this)
}


std::ostream& struct_declarator::codeStream(std::ostream& stream)const
{
	if( ! _p_declarator.isNull()){_p_declarator->codeStream(stream);}

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_constant_expression.isNull()){_p_constant_expression->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:function_definition
//////////////////////////////////////////



CAST_CLASS_ID function_definition::ID=ID_FUNCTION_DEFINITION;

function_definition::function_definition
	(
		ReferenceCountedAutoPointer<declaration_specifiers> _arg_declaration_specifiers,
		ReferenceCountedAutoPointer<declarator> _arg_declarator,
		ReferenceCountedAutoPointer<declaration_list> _arg_declaration_list,
		ReferenceCountedAutoPointer<compound_statement> _arg_compound_statement
	):
		CAst() ,
		_p_declaration_specifiers(_arg_declaration_specifiers),
		_p_declarator(_arg_declarator),
		_p_declaration_list(_arg_declaration_list),
		_p_compound_statement(_arg_compound_statement)
{
	LOG(COL_FG_GREEN<<"Created object of function_definition: "<<this)
}


std::ostream& function_definition::codeStream(std::ostream& stream)const
{
	if( ! _p_declaration_specifiers.isNull()){_p_declaration_specifiers->codeStream(stream);}

	if( ! _p_declarator.isNull()){_p_declarator->codeStream(stream);}

	if( ! _p_declaration_list.isNull()){_p_declaration_list->codeStream(stream);}

	if( ! _p_compound_statement.isNull()){_p_compound_statement->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_list
//////////////////////////////////////////





CAST_CLASS_ID parameter_list_item::ID=ID_PARAMETER_LIST_ITEM;

parameter_list_item::parameter_list_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<parameter_declaration> _arg_parameter_declaration
	):
		_p_token(_arg_token),
		_p_parameter_declaration(_arg_parameter_declaration)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==",")
	LOG(COL_FG_GREEN<<"Created object of parameter_list_item: "<<this)
}


std::ostream& parameter_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_parameter_declaration.isNull()){_p_parameter_declaration->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID parameter_list::ID=ID_PARAMETER_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:enum_specifier
//////////////////////////////////////////



CAST_CLASS_ID enum_specifier::ID=ID_ENUM_SPECIFIER;

enum_specifier::enum_specifier
	(
		ReferenceCountedAutoPointer<token> _arg_token1,
		ReferenceCountedAutoPointer<token> _arg_token2,
		ReferenceCountedAutoPointer<enumerator_list> _arg_enumerator_list,
		ReferenceCountedAutoPointer<token> _arg_token3
	):
		CAst() ,
		_p_token1(_arg_token1),
		_p_token2(_arg_token2),
		_p_enumerator_list(_arg_enumerator_list),
		_p_token3(_arg_token3)
{
	AssertTokenType(_p_token2.isNull()||_p_token2->text()=="{")
	AssertTokenType(_p_token3.isNull()||_p_token3->text()=="}")
	LOG(COL_FG_GREEN<<"Created object of enum_specifier: "<<this)
}


std::ostream& enum_specifier::codeStream(std::ostream& stream)const
{
	stream<<"enum ";

	if( ! _p_token1.isNull()){_p_token1->codeStream(stream);}

	if( ! _p_token2.isNull()){_p_token2->codeStream(stream);}

	if( ! _p_enumerator_list.isNull()){_p_enumerator_list->codeStream(stream);}

	if( ! _p_token3.isNull()){_p_token3->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_qualifier
//////////////////////////////////////////



CAST_CLASS_ID type_qualifier::ID=ID_TYPE_QUALIFIER;

type_qualifier::type_qualifier
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		CAst() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="const"||_p_token->text()=="volatile")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of type_qualifier: "<<this)
}


std::ostream& type_qualifier::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:enumerator_list
//////////////////////////////////////////





CAST_CLASS_ID enumerator_list_item::ID=ID_ENUMERATOR_LIST_ITEM;

enumerator_list_item::enumerator_list_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<enumerator> _arg_enumerator
	):
		_p_token(_arg_token),
		_p_enumerator(_arg_enumerator)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==",")
	LOG(COL_FG_GREEN<<"Created object of enumerator_list_item: "<<this)
}


std::ostream& enumerator_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_enumerator.isNull()){_p_enumerator->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID enumerator_list::ID=ID_ENUMERATOR_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:labeled_statement
//////////////////////////////////////////




CAST_CLASS_ID labeled_statement_1::ID=ID_LABELED_STATEMENT_1;

labeled_statement_1::labeled_statement_1
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<statement> _arg_statement
	):
		labeled_statement() ,
		_p_token(_arg_token),
		_p_statement(_arg_statement)
{
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of labeled_statement_1: "<<this)
}


std::ostream& labeled_statement_1::codeStream(std::ostream& stream)const
{
	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	stream<<": ";

	if( ! _p_statement.isNull()){_p_statement->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID labeled_statement_2::ID=ID_LABELED_STATEMENT_2;

labeled_statement_2::labeled_statement_2
	(
		ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression,
		ReferenceCountedAutoPointer<statement> _arg_statement
	):
		labeled_statement() ,
		_p_constant_expression(_arg_constant_expression),
		_p_statement(_arg_statement)
{
	LOG(COL_FG_GREEN<<"Created object of labeled_statement_2: "<<this)
}


std::ostream& labeled_statement_2::codeStream(std::ostream& stream)const
{
	stream<<"case ";

	if( ! _p_constant_expression.isNull()){_p_constant_expression->codeStream(stream);}

	stream<<": ";

	if( ! _p_statement.isNull()){_p_statement->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration_list
//////////////////////////////////////////





CAST_CLASS_ID declaration_list_item::ID=ID_DECLARATION_LIST_ITEM;

declaration_list_item::declaration_list_item
	(
		ReferenceCountedAutoPointer<declaration> _arg_declaration
	):
		_p_declaration(_arg_declaration)
{
	LOG(COL_FG_GREEN<<"Created object of declaration_list_item: "<<this)
}


std::ostream& declaration_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_declaration.isNull()){_p_declaration->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID declaration_list::ID=ID_DECLARATION_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:specifier_qualifier_list
//////////////////////////////////////////




CAST_CLASS_ID specifier_qualifier_list_item_1::ID=ID_SPECIFIER_QUALIFIER_LIST_ITEM_1;

specifier_qualifier_list_item_1::specifier_qualifier_list_item_1
	(
		ReferenceCountedAutoPointer<type_specifier> _arg_type_specifier
	):
		specifier_qualifier_list_item() ,
		_p_type_specifier(_arg_type_specifier)
{
	LOG(COL_FG_GREEN<<"Created object of specifier_qualifier_list_item_1: "<<this)
}


std::ostream& specifier_qualifier_list_item_1::codeStream(std::ostream& stream)const
{
	if( ! _p_type_specifier.isNull()){_p_type_specifier->codeStream(stream);}

	

	return stream;
}


CAST_CLASS_ID specifier_qualifier_list_item_2::ID=ID_SPECIFIER_QUALIFIER_LIST_ITEM_2;

specifier_qualifier_list_item_2::specifier_qualifier_list_item_2
	(
		ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier
	):
		specifier_qualifier_list_item() ,
		_p_type_qualifier(_arg_type_qualifier)
{
	LOG(COL_FG_GREEN<<"Created object of specifier_qualifier_list_item_2: "<<this)
}


std::ostream& specifier_qualifier_list_item_2::codeStream(std::ostream& stream)const
{
	if( ! _p_type_qualifier.isNull()){_p_type_qualifier->codeStream(stream);}

	

	return stream;
}


CAST_CLASS_ID specifier_qualifier_list::ID=ID_SPECIFIER_QUALIFIER_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:translation_unit
//////////////////////////////////////////





CAST_CLASS_ID translation_unit_item::ID=ID_TRANSLATION_UNIT_ITEM;

translation_unit_item::translation_unit_item
	(
		ReferenceCountedAutoPointer<external_declaration> _arg_external_declaration
	):
		_p_external_declaration(_arg_external_declaration)
{
	LOG(COL_FG_GREEN<<"Created object of translation_unit_item: "<<this)
}


std::ostream& translation_unit_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_external_declaration.isNull()){_p_external_declaration->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID translation_unit::ID=ID_TRANSLATION_UNIT;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:constant_expression
//////////////////////////////////////////



CAST_CLASS_ID constant_expression::ID=ID_CONSTANT_EXPRESSION;

constant_expression::constant_expression
	(
		ReferenceCountedAutoPointer<conditional_expression> _arg_conditional_expression
	):
		CAst() ,
		_p_conditional_expression(_arg_conditional_expression)
{
	LOG(COL_FG_GREEN<<"Created object of constant_expression: "<<this)
}


std::ostream& constant_expression::codeStream(std::ostream& stream)const
{
	if( ! _p_conditional_expression.isNull()){_p_conditional_expression->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:initializer_list
//////////////////////////////////////////





CAST_CLASS_ID initializer_list_item::ID=ID_INITIALIZER_LIST_ITEM;

initializer_list_item::initializer_list_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<initializer> _arg_initializer
	):
		_p_token(_arg_token),
		_p_initializer(_arg_initializer)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==",")
	LOG(COL_FG_GREEN<<"Created object of initializer_list_item: "<<this)
}


std::ostream& initializer_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_initializer.isNull()){_p_initializer->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID initializer_list::ID=ID_INITIALIZER_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:statement_list
//////////////////////////////////////////





CAST_CLASS_ID statement_list_item::ID=ID_STATEMENT_LIST_ITEM;

statement_list_item::statement_list_item
	(
		ReferenceCountedAutoPointer<statement> _arg_statement
	):
		_p_statement(_arg_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_list_item: "<<this)
}


std::ostream& statement_list_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_statement.isNull()){_p_statement->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID statement_list::ID=ID_STATEMENT_LIST;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:expression
//////////////////////////////////////////





CAST_CLASS_ID expression_item::ID=ID_EXPRESSION_ITEM;

expression_item::expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression
	):
		_p_token(_arg_token),
		_p_assignment_expression(_arg_assignment_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==",")
	LOG(COL_FG_GREEN<<"Created object of expression_item: "<<this)
}


std::ostream& expression_item::codeStream(std::ostream& stream)const
{
	

	if( ! _p_token.isNull()){_p_token->codeStream(stream);}

	if( ! _p_assignment_expression.isNull()){_p_assignment_expression->codeStream(stream);}

	return stream;
}


CAST_CLASS_ID expression::ID=ID_EXPRESSION;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declarator
//////////////////////////////////////////



CAST_CLASS_ID declarator::ID=ID_DECLARATOR;

declarator::declarator
	(
		ReferenceCountedAutoPointer<pointer> _arg_pointer,
		ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator
	):
		CAst() ,
		_p_pointer(_arg_pointer),
		_p_direct_declarator(_arg_direct_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of declarator: "<<this)
}


std::ostream& declarator::codeStream(std::ostream& stream)const
{
	if( ! _p_pointer.isNull()){_p_pointer->codeStream(stream);}

	if( ! _p_direct_declarator.isNull()){_p_direct_declarator->codeStream(stream);}

	return stream;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////










}


extern "C"
{
        int yylex(void);  
}
extern FILE *yyin;
CAst::translation_unit *root;
CAst::ReferenceCountedAutoPointer<CAst::translation_unit> parseFile(const char* fileName)
{
	yyin=fopen(fileName,"r");
	yyparse();
	return root;	
}
