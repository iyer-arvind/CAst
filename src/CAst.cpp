#include "CAst.h"

namespace CAst
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:storage_class_specifier
//////////////////////////////////////////



storage_class_specifier::storage_class_specifier
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		CAst() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="static"||_p_token->text()=="register"||_p_token->text()=="auto"||_p_token->text()=="typedef"||_p_token->text()=="extern")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of storage_class_specifier: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:expression_statement
//////////////////////////////////////////



expression_statement::expression_statement
	(
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		CAst() ,
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of expression_statement: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_name
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:unary_expression
//////////////////////////////////////////




unary_expression_1::unary_expression_1
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
	LOG(COL_FG_GREEN<<"Created object of unary_expression_1: "<<this)
}


unary_expression_2::unary_expression_2
	(
		ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression
	):
		unary_expression() ,
		_p_postfix_expression(_arg_postfix_expression)
{
	LOG(COL_FG_GREEN<<"Created object of unary_expression_2: "<<this)
}


unary_expression_3::unary_expression_3
	(
		ReferenceCountedAutoPointer<unary_operator> _arg_unary_operator,
		ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression
	):
		unary_expression() ,
		_p_unary_operator(_arg_unary_operator),
		_p_cast_expression(_arg_cast_expression)
{
	LOG(COL_FG_GREEN<<"Created object of unary_expression_3: "<<this)
}


unary_expression_4::unary_expression_4
	(
		ReferenceCountedAutoPointer<type_name> _arg_type_name
	):
		unary_expression() ,
		_p_type_name(_arg_type_name)
{
	LOG(COL_FG_GREEN<<"Created object of unary_expression_4: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:conditional_expression
//////////////////////////////////////////





conditional_expression_item::conditional_expression_item
	(
		ReferenceCountedAutoPointer<logical_or_expression> _arg_logical_or_expression,
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		_p_logical_or_expression(_arg_logical_or_expression),
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of conditional_expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_or_union_specifier
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:exclusive_or_expression
//////////////////////////////////////////





exclusive_or_expression_item::exclusive_or_expression_item
	(
		ReferenceCountedAutoPointer<and_expression> _arg_and_expression
	):
		_p_and_expression(_arg_and_expression)
{
	LOG(COL_FG_GREEN<<"Created object of exclusive_or_expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:initializer
//////////////////////////////////////////




initializer_1::initializer_1
	(
		ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression
	):
		initializer() ,
		_p_assignment_expression(_arg_assignment_expression)
{
	LOG(COL_FG_GREEN<<"Created object of initializer_1: "<<this)
}


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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declaration_list
//////////////////////////////////////////





struct_declaration_list_item::struct_declaration_list_item
	(
		ReferenceCountedAutoPointer<struct_declaration> _arg_struct_declaration
	):
		_p_struct_declaration(_arg_struct_declaration)
{
	LOG(COL_FG_GREEN<<"Created object of struct_declaration_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:assignment_operator
//////////////////////////////////////////



assignment_operator::assignment_operator
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		CAst() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="/="||_p_token->text()=="%="||_p_token->text()=="+="||_p_token->text()=="-="||_p_token->text()=="<<="||_p_token->text()==">>="||_p_token->text()=="&="||_p_token->text()=="^="||_p_token->text()=="|="||_p_token->text()=="="||_p_token->text()=="*=")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of assignment_operator: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declaration
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:abstract_declarator
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:iteration_statement
//////////////////////////////////////////




iteration_statement_1::iteration_statement_1
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
	LOG(COL_FG_GREEN<<"Created object of iteration_statement_1: "<<this)
}


iteration_statement_2::iteration_statement_2
	(
		ReferenceCountedAutoPointer<expression> _arg_expression,
		ReferenceCountedAutoPointer<statement> _arg_statement
	):
		iteration_statement() ,
		_p_expression(_arg_expression),
		_p_statement(_arg_statement)
{
	LOG(COL_FG_GREEN<<"Created object of iteration_statement_2: "<<this)
}


iteration_statement_3::iteration_statement_3
	(
		ReferenceCountedAutoPointer<statement> _arg_statement,
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		iteration_statement() ,
		_p_statement(_arg_statement),
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of iteration_statement_3: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:additive_expression
//////////////////////////////////////////





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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:external_declaration
//////////////////////////////////////////




external_declaration_1::external_declaration_1
	(
		ReferenceCountedAutoPointer<declaration> _arg_declaration
	):
		external_declaration() ,
		_p_declaration(_arg_declaration)
{
	LOG(COL_FG_GREEN<<"Created object of external_declaration_1: "<<this)
}


external_declaration_2::external_declaration_2
	(
		ReferenceCountedAutoPointer<function_definition> _arg_function_definition
	):
		external_declaration() ,
		_p_function_definition(_arg_function_definition)
{
	LOG(COL_FG_GREEN<<"Created object of external_declaration_2: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_specifier
//////////////////////////////////////////




type_specifier_1::type_specifier_1
	(
		ReferenceCountedAutoPointer<enum_specifier> _arg_enum_specifier
	):
		type_specifier() ,
		_p_enum_specifier(_arg_enum_specifier)
{
	LOG(COL_FG_GREEN<<"Created object of type_specifier_1: "<<this)
}


type_specifier_2::type_specifier_2
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		type_specifier() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="short"||_p_token->text()=="int"||_p_token->text()=="long"||_p_token->text()=="signed"||_p_token->text()=="unsigned"||_p_token->text()=="float"||_p_token->text()=="double"||_p_token->text()=="void"||_p_token->text()=="char")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of type_specifier_2: "<<this)
}


type_specifier_3::type_specifier_3
	(
		ReferenceCountedAutoPointer<struct_or_union_specifier> _arg_struct_or_union_specifier
	):
		type_specifier() ,
		_p_struct_or_union_specifier(_arg_struct_or_union_specifier)
{
	LOG(COL_FG_GREEN<<"Created object of type_specifier_3: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:compound_statement
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:inclusive_or_expression
//////////////////////////////////////////





inclusive_or_expression_item::inclusive_or_expression_item
	(
		ReferenceCountedAutoPointer<exclusive_or_expression> _arg_exclusive_or_expression
	):
		_p_exclusive_or_expression(_arg_exclusive_or_expression)
{
	LOG(COL_FG_GREEN<<"Created object of inclusive_or_expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:pointer
//////////////////////////////////////////




pointer_item_1::pointer_item_1
	(
		
	):
		pointer_item() 
		
{
	LOG(COL_FG_GREEN<<"Created object of pointer_item_1: "<<this)
}


pointer_item_2::pointer_item_2
	(
		ReferenceCountedAutoPointer<type_qualifier_list> _arg_type_qualifier_list
	):
		pointer_item() ,
		_p_type_qualifier_list(_arg_type_qualifier_list)
{
	LOG(COL_FG_GREEN<<"Created object of pointer_item_2: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:selection_statement
//////////////////////////////////////////



selection_statement::selection_statement
	(
		ReferenceCountedAutoPointer<token> _arg_token1,
		ReferenceCountedAutoPointer<expression> _arg_expression,
		ReferenceCountedAutoPointer<statement> _arg_statement1,
		ReferenceCountedAutoPointer<token> _arg_token2,
		ReferenceCountedAutoPointer<statement> _arg_statement2
	):
		CAst() ,
		_p_token1(_arg_token1),
		_p_expression(_arg_expression),
		_p_statement1(_arg_statement1),
		_p_token2(_arg_token2),
		_p_statement2(_arg_statement2)
{
	AssertTokenType(_p_token1->text()=="if"||_p_token1->text()=="switch")
	AssertNotNullRule(_p_token1)
	AssertTokenType(_p_token2.isNull()||_p_token2->text()=="else")
	LOG(COL_FG_GREEN<<"Created object of selection_statement: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:postfix_expression
//////////////////////////////////////////




postfix_expression_1::postfix_expression_1
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
	LOG(COL_FG_GREEN<<"Created object of postfix_expression_1: "<<this)
}


postfix_expression_2::postfix_expression_2
	(
		ReferenceCountedAutoPointer<primary_expression> _arg_primary_expression
	):
		postfix_expression() ,
		_p_primary_expression(_arg_primary_expression)
{
	LOG(COL_FG_GREEN<<"Created object of postfix_expression_2: "<<this)
}


postfix_expression_3::postfix_expression_3
	(
		ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<argument_expression_list> _arg_argument_expression_list
	):
		postfix_expression() ,
		_p_postfix_expression(_arg_postfix_expression),
		_p_token(_arg_token),
		_p_argument_expression_list(_arg_argument_expression_list)
{
	AssertTokenType(_p_token->text()=="->"||_p_token->text()=="("||_p_token->text()==".")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of postfix_expression_3: "<<this)
}


postfix_expression_4::postfix_expression_4
	(
		ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		postfix_expression() ,
		_p_postfix_expression(_arg_postfix_expression),
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of postfix_expression_4: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:and_expression
//////////////////////////////////////////





and_expression_item::and_expression_item
	(
		ReferenceCountedAutoPointer<equality_expression> _arg_equality_expression
	):
		_p_equality_expression(_arg_equality_expression)
{
	LOG(COL_FG_GREEN<<"Created object of and_expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:statement
//////////////////////////////////////////




statement_1::statement_1
	(
		ReferenceCountedAutoPointer<jump_statement> _arg_jump_statement
	):
		statement() ,
		_p_jump_statement(_arg_jump_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_1: "<<this)
}


statement_2::statement_2
	(
		ReferenceCountedAutoPointer<labeled_statement> _arg_labeled_statement
	):
		statement() ,
		_p_labeled_statement(_arg_labeled_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_2: "<<this)
}


statement_3::statement_3
	(
		ReferenceCountedAutoPointer<compound_statement> _arg_compound_statement
	):
		statement() ,
		_p_compound_statement(_arg_compound_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_3: "<<this)
}


statement_4::statement_4
	(
		ReferenceCountedAutoPointer<expression_statement> _arg_expression_statement
	):
		statement() ,
		_p_expression_statement(_arg_expression_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_4: "<<this)
}


statement_5::statement_5
	(
		ReferenceCountedAutoPointer<selection_statement> _arg_selection_statement
	):
		statement() ,
		_p_selection_statement(_arg_selection_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_5: "<<this)
}


statement_6::statement_6
	(
		ReferenceCountedAutoPointer<iteration_statement> _arg_iteration_statement
	):
		statement() ,
		_p_iteration_statement(_arg_iteration_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_6: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:cast_expression
//////////////////////////////////////////




cast_expression_1::cast_expression_1
	(
		ReferenceCountedAutoPointer<type_name> _arg_type_name,
		ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression
	):
		cast_expression() ,
		_p_type_name(_arg_type_name),
		_p_cast_expression(_arg_cast_expression)
{
	LOG(COL_FG_GREEN<<"Created object of cast_expression_1: "<<this)
}


cast_expression_2::cast_expression_2
	(
		ReferenceCountedAutoPointer<unary_expression> _arg_unary_expression
	):
		cast_expression() ,
		_p_unary_expression(_arg_unary_expression)
{
	LOG(COL_FG_GREEN<<"Created object of cast_expression_2: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:init_declarator
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declarator_list
//////////////////////////////////////////





struct_declarator_list_item::struct_declarator_list_item
	(
		ReferenceCountedAutoPointer<struct_declarator> _arg_struct_declarator
	):
		_p_struct_declarator(_arg_struct_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of struct_declarator_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:logical_or_expression
//////////////////////////////////////////





logical_or_expression_item::logical_or_expression_item
	(
		ReferenceCountedAutoPointer<logical_and_expression> _arg_logical_and_expression
	):
		_p_logical_and_expression(_arg_logical_and_expression)
{
	LOG(COL_FG_GREEN<<"Created object of logical_or_expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:unary_operator
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:relational_expression
//////////////////////////////////////////





relational_expression_item::relational_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<shift_expression> _arg_shift_expression
	):
		_p_token(_arg_token),
		_p_shift_expression(_arg_shift_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==">="||_p_token->text()=="<="||_p_token->text()=="<"||_p_token->text()==">")
	LOG(COL_FG_GREEN<<"Created object of relational_expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_or_union
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:enumerator
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:assignment_expression
//////////////////////////////////////////




assignment_expression_1::assignment_expression_1
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
	LOG(COL_FG_GREEN<<"Created object of assignment_expression_1: "<<this)
}


assignment_expression_2::assignment_expression_2
	(
		ReferenceCountedAutoPointer<conditional_expression> _arg_conditional_expression
	):
		assignment_expression() ,
		_p_conditional_expression(_arg_conditional_expression)
{
	LOG(COL_FG_GREEN<<"Created object of assignment_expression_2: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_type_list
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_declaration
//////////////////////////////////////////




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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:multiplicative_expression
//////////////////////////////////////////





multiplicative_expression_item::multiplicative_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression
	):
		_p_token(_arg_token),
		_p_cast_expression(_arg_cast_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="*"||_p_token->text()=="/"||_p_token->text()=="%")
	LOG(COL_FG_GREEN<<"Created object of multiplicative_expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_qualifier_list
//////////////////////////////////////////





type_qualifier_list_item::type_qualifier_list_item
	(
		ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier
	):
		_p_type_qualifier(_arg_type_qualifier)
{
	LOG(COL_FG_GREEN<<"Created object of type_qualifier_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:argument_expression_list
//////////////////////////////////////////





argument_expression_list_item::argument_expression_list_item
	(
		ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression
	):
		_p_assignment_expression(_arg_assignment_expression)
{
	LOG(COL_FG_GREEN<<"Created object of argument_expression_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:direct_abstract_declarator
//////////////////////////////////////////




direct_abstract_declarator_1::direct_abstract_declarator_1
	(
		ReferenceCountedAutoPointer<direct_abstract_declarator> _arg_direct_abstract_declarator,
		ReferenceCountedAutoPointer<parameter_type_list> _arg_parameter_type_list
	):
		direct_abstract_declarator() ,
		_p_direct_abstract_declarator(_arg_direct_abstract_declarator),
		_p_parameter_type_list(_arg_parameter_type_list)
{
	LOG(COL_FG_GREEN<<"Created object of direct_abstract_declarator_1: "<<this)
}


direct_abstract_declarator_2::direct_abstract_declarator_2
	(
		ReferenceCountedAutoPointer<abstract_declarator> _arg_abstract_declarator
	):
		direct_abstract_declarator() ,
		_p_abstract_declarator(_arg_abstract_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of direct_abstract_declarator_2: "<<this)
}


direct_abstract_declarator_3::direct_abstract_declarator_3
	(
		ReferenceCountedAutoPointer<direct_abstract_declarator> _arg_direct_abstract_declarator,
		ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression
	):
		direct_abstract_declarator() ,
		_p_direct_abstract_declarator(_arg_direct_abstract_declarator),
		_p_constant_expression(_arg_constant_expression)
{
	LOG(COL_FG_GREEN<<"Created object of direct_abstract_declarator_3: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:equality_expression
//////////////////////////////////////////





equality_expression_item::equality_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<relational_expression> _arg_relational_expression
	):
		_p_token(_arg_token),
		_p_relational_expression(_arg_relational_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()=="!="||_p_token->text()=="==")
	LOG(COL_FG_GREEN<<"Created object of equality_expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:primary_expression
//////////////////////////////////////////




primary_expression_1::primary_expression_1
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		primary_expression() ,
		_p_token(_arg_token)
{
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of primary_expression_1: "<<this)
}


primary_expression_2::primary_expression_2
	(
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		primary_expression() ,
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of primary_expression_2: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration_specifiers
//////////////////////////////////////////




declaration_specifiers_item_1::declaration_specifiers_item_1
	(
		ReferenceCountedAutoPointer<storage_class_specifier> _arg_storage_class_specifier
	):
		declaration_specifiers_item() ,
		_p_storage_class_specifier(_arg_storage_class_specifier)
{
	LOG(COL_FG_GREEN<<"Created object of declaration_specifiers_item_1: "<<this)
}


declaration_specifiers_item_2::declaration_specifiers_item_2
	(
		ReferenceCountedAutoPointer<type_specifier> _arg_type_specifier
	):
		declaration_specifiers_item() ,
		_p_type_specifier(_arg_type_specifier)
{
	LOG(COL_FG_GREEN<<"Created object of declaration_specifiers_item_2: "<<this)
}


declaration_specifiers_item_3::declaration_specifiers_item_3
	(
		ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier
	):
		declaration_specifiers_item() ,
		_p_type_qualifier(_arg_type_qualifier)
{
	LOG(COL_FG_GREEN<<"Created object of declaration_specifiers_item_3: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:direct_declarator
//////////////////////////////////////////




direct_declarator_1::direct_declarator_1
	(
		ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator,
		ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression
	):
		direct_declarator() ,
		_p_direct_declarator(_arg_direct_declarator),
		_p_constant_expression(_arg_constant_expression)
{
	LOG(COL_FG_GREEN<<"Created object of direct_declarator_1: "<<this)
}


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


direct_declarator_3::direct_declarator_3
	(
		ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator,
		ReferenceCountedAutoPointer<parameter_type_list> _arg_parameter_type_list
	):
		direct_declarator() ,
		_p_direct_declarator(_arg_direct_declarator),
		_p_parameter_type_list(_arg_parameter_type_list)
{
	LOG(COL_FG_GREEN<<"Created object of direct_declarator_3: "<<this)
}


direct_declarator_4::direct_declarator_4
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		direct_declarator() ,
		_p_token(_arg_token)
{
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of direct_declarator_4: "<<this)
}


direct_declarator_5::direct_declarator_5
	(
		ReferenceCountedAutoPointer<declarator> _arg_declarator
	):
		direct_declarator() ,
		_p_declarator(_arg_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of direct_declarator_5: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:logical_and_expression
//////////////////////////////////////////





logical_and_expression_item::logical_and_expression_item
	(
		ReferenceCountedAutoPointer<inclusive_or_expression> _arg_inclusive_or_expression
	):
		_p_inclusive_or_expression(_arg_inclusive_or_expression)
{
	LOG(COL_FG_GREEN<<"Created object of logical_and_expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:init_declarator_list
//////////////////////////////////////////





init_declarator_list_item::init_declarator_list_item
	(
		ReferenceCountedAutoPointer<init_declarator> _arg_init_declarator
	):
		_p_init_declarator(_arg_init_declarator)
{
	LOG(COL_FG_GREEN<<"Created object of init_declarator_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:shift_expression
//////////////////////////////////////////





shift_expression_item::shift_expression_item
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<additive_expression> _arg_additive_expression
	):
		_p_token(_arg_token),
		_p_additive_expression(_arg_additive_expression)
{
	AssertTokenType(_p_token.isNull()||_p_token->text()==">>"||_p_token->text()=="<<")
	LOG(COL_FG_GREEN<<"Created object of shift_expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:identifier_list
//////////////////////////////////////////





identifier_list_item::identifier_list_item
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		_p_token(_arg_token)
{
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of identifier_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:jump_statement
//////////////////////////////////////////




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


jump_statement_2::jump_statement_2
	(
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		jump_statement() ,
		_p_expression(_arg_expression)
{
	LOG(COL_FG_GREEN<<"Created object of jump_statement_2: "<<this)
}


jump_statement_3::jump_statement_3
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		jump_statement() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="break"||_p_token->text()=="continue")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of jump_statement_3: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:struct_declarator
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:function_definition
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_list
//////////////////////////////////////////





parameter_list_item::parameter_list_item
	(
		ReferenceCountedAutoPointer<parameter_declaration> _arg_parameter_declaration
	):
		_p_parameter_declaration(_arg_parameter_declaration)
{
	LOG(COL_FG_GREEN<<"Created object of parameter_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:enum_specifier
//////////////////////////////////////////



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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_qualifier
//////////////////////////////////////////



type_qualifier::type_qualifier
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		CAst() ,
		_p_token(_arg_token)
{
	AssertTokenType(_p_token->text()=="volatile"||_p_token->text()=="const")
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of type_qualifier: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:enumerator_list
//////////////////////////////////////////





enumerator_list_item::enumerator_list_item
	(
		ReferenceCountedAutoPointer<enumerator> _arg_enumerator
	):
		_p_enumerator(_arg_enumerator)
{
	LOG(COL_FG_GREEN<<"Created object of enumerator_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:labeled_statement
//////////////////////////////////////////




labeled_statement_1::labeled_statement_1
	(
		ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression,
		ReferenceCountedAutoPointer<statement> _arg_statement
	):
		labeled_statement() ,
		_p_constant_expression(_arg_constant_expression),
		_p_statement(_arg_statement)
{
	LOG(COL_FG_GREEN<<"Created object of labeled_statement_1: "<<this)
}


labeled_statement_2::labeled_statement_2
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<statement> _arg_statement
	):
		labeled_statement() ,
		_p_token(_arg_token),
		_p_statement(_arg_statement)
{
	AssertNotNullRule(_p_token)
	LOG(COL_FG_GREEN<<"Created object of labeled_statement_2: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration_list
//////////////////////////////////////////





declaration_list_item::declaration_list_item
	(
		ReferenceCountedAutoPointer<declaration> _arg_declaration
	):
		_p_declaration(_arg_declaration)
{
	LOG(COL_FG_GREEN<<"Created object of declaration_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:specifier_qualifier_list
//////////////////////////////////////////




specifier_qualifier_list_item_1::specifier_qualifier_list_item_1
	(
		ReferenceCountedAutoPointer<type_specifier> _arg_type_specifier
	):
		specifier_qualifier_list_item() ,
		_p_type_specifier(_arg_type_specifier)
{
	LOG(COL_FG_GREEN<<"Created object of specifier_qualifier_list_item_1: "<<this)
}


specifier_qualifier_list_item_2::specifier_qualifier_list_item_2
	(
		ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier
	):
		specifier_qualifier_list_item() ,
		_p_type_qualifier(_arg_type_qualifier)
{
	LOG(COL_FG_GREEN<<"Created object of specifier_qualifier_list_item_2: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:translation_unit
//////////////////////////////////////////





translation_unit_item::translation_unit_item
	(
		ReferenceCountedAutoPointer<external_declaration> _arg_external_declaration
	):
		_p_external_declaration(_arg_external_declaration)
{
	LOG(COL_FG_GREEN<<"Created object of translation_unit_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:constant_expression
//////////////////////////////////////////



constant_expression::constant_expression
	(
		ReferenceCountedAutoPointer<conditional_expression> _arg_conditional_expression
	):
		CAst() ,
		_p_conditional_expression(_arg_conditional_expression)
{
	LOG(COL_FG_GREEN<<"Created object of constant_expression: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:initializer_list
//////////////////////////////////////////





initializer_list_item::initializer_list_item
	(
		ReferenceCountedAutoPointer<initializer> _arg_initializer
	):
		_p_initializer(_arg_initializer)
{
	LOG(COL_FG_GREEN<<"Created object of initializer_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:statement_list
//////////////////////////////////////////





statement_list_item::statement_list_item
	(
		ReferenceCountedAutoPointer<statement> _arg_statement
	):
		_p_statement(_arg_statement)
{
	LOG(COL_FG_GREEN<<"Created object of statement_list_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:expression
//////////////////////////////////////////





expression_item::expression_item
	(
		ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression
	):
		_p_assignment_expression(_arg_assignment_expression)
{
	LOG(COL_FG_GREEN<<"Created object of expression_item: "<<this)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declarator
//////////////////////////////////////////



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
