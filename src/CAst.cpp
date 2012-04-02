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
	AssertTokenType((_p_token->text() == "auto" ) || (_p_token->text() == "typedef" ) || (_p_token->text() == "extern" ) || (_p_token->text() == "register" ) || (_p_token->text() == "static" ))
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
	AssertNotNullRule(_p_specifier_qualifier_list)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:unary_expression
//////////////////////////////////////////




unary_expression_1::unary_expression_1
	(
		ReferenceCountedAutoPointer<type_name> _arg_type_name
	):
		unary_expression() ,
		_p_type_name(_arg_type_name)
{
	AssertNotNullRule(_p_type_name)
}


unary_expression_2::unary_expression_2
	(
		ReferenceCountedAutoPointer<unary_operator> _arg_unary_operator,
		ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression
	):
		unary_expression() ,
		_p_unary_operator(_arg_unary_operator),
		_p_cast_expression(_arg_cast_expression)
{
	AssertNotNullRule(_p_unary_operator)
	AssertNotNullRule(_p_cast_expression)
}


unary_expression_3::unary_expression_3
	(
		ReferenceCountedAutoPointer<token> _arg_token,
		ReferenceCountedAutoPointer<unary_expression> _arg_unary_expression
	):
		unary_expression() ,
		_p_token(_arg_token),
		_p_unary_expression(_arg_unary_expression)
{
	AssertTokenType((_p_token->text() == "++" ) || (_p_token->text() == "--" ) || (_p_token->text() == "sizeof" ))
	AssertNotNullRule(_p_unary_expression)
}


unary_expression_4::unary_expression_4
	(
		ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression
	):
		unary_expression() ,
		_p_postfix_expression(_arg_postfix_expression)
{
	AssertNotNullRule(_p_postfix_expression)
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
	AssertNotNullRule(_p_logical_or_expression)
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
	AssertNotNullRule(_p_struct_or_union)
	AssertTokenType((_p_token1->text() == "[IDENTIFIER]" ) || _p_token1.isNull())
	AssertTokenType((_p_token2->text() == "{" ) || _p_token2.isNull())
	AssertTokenType((_p_token3->text() == "}" ) || _p_token3.isNull())
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
	AssertNotNullRule(_p_and_expression)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:initializer
//////////////////////////////////////////




initializer_1::initializer_1
	(
		ReferenceCountedAutoPointer<initializer_list> _arg_initializer_list,
		ReferenceCountedAutoPointer<token> _arg_token
	):
		initializer() ,
		_p_initializer_list(_arg_initializer_list),
		_p_token(_arg_token)
{
	AssertNotNullRule(_p_initializer_list)
	AssertTokenType((_p_token->text() == "," ) || _p_token.isNull())
}


initializer_2::initializer_2
	(
		ReferenceCountedAutoPointer<assignment_expression> _arg_assignment_expression
	):
		initializer() ,
		_p_assignment_expression(_arg_assignment_expression)
{
	AssertNotNullRule(_p_assignment_expression)
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
	AssertNotNullRule(_p_struct_declaration)
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
	AssertTokenType((_p_token->text() == ">>=" ) || (_p_token->text() == "&=" ) || (_p_token->text() == "^=" ) || (_p_token->text() == "|=" ) || (_p_token->text() == "=" ) || (_p_token->text() == "*=" ) || (_p_token->text() == "/=" ) || (_p_token->text() == "%=" ) || (_p_token->text() == "+=" ) || (_p_token->text() == "-=" ) || (_p_token->text() == "<<=" ))
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
	AssertNotNullRule(_p_specifier_qualifier_list)
	AssertNotNullRule(_p_struct_declarator_list)
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
	AssertNotNullRule(_p_expression_statement1)
	AssertNotNullRule(_p_expression_statement2)
	AssertNotNullRule(_p_statement)
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
	AssertNotNullRule(_p_expression)
	AssertNotNullRule(_p_statement)
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
	AssertNotNullRule(_p_statement)
	AssertNotNullRule(_p_expression)
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
	AssertTokenType((_p_token->text() == "+" ) || (_p_token->text() == "-" ) || _p_token.isNull())
	AssertNotNullRule(_p_multiplicative_expression)
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
	AssertNotNullRule(_p_declaration)
}


external_declaration_2::external_declaration_2
	(
		ReferenceCountedAutoPointer<function_definition> _arg_function_definition
	):
		external_declaration() ,
		_p_function_definition(_arg_function_definition)
{
	AssertNotNullRule(_p_function_definition)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:type_specifier
//////////////////////////////////////////




type_specifier_1::type_specifier_1
	(
		ReferenceCountedAutoPointer<struct_or_union_specifier> _arg_struct_or_union_specifier
	):
		type_specifier() ,
		_p_struct_or_union_specifier(_arg_struct_or_union_specifier)
{
	AssertNotNullRule(_p_struct_or_union_specifier)
}


type_specifier_2::type_specifier_2
	(
		ReferenceCountedAutoPointer<enum_specifier> _arg_enum_specifier
	):
		type_specifier() ,
		_p_enum_specifier(_arg_enum_specifier)
{
	AssertNotNullRule(_p_enum_specifier)
}


type_specifier_3::type_specifier_3
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		type_specifier() ,
		_p_token(_arg_token)
{
	AssertTokenType((_p_token->text() == "float" ) || (_p_token->text() == "double" ) || (_p_token->text() == "void" ) || (_p_token->text() == "char" ) || (_p_token->text() == "short" ) || (_p_token->text() == "int" ) || (_p_token->text() == "long" ) || (_p_token->text() == "signed" ) || (_p_token->text() == "unsigned" ))
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
	AssertNotNullRule(_p_exclusive_or_expression)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:pointer
//////////////////////////////////////////




pointer_item_1::pointer_item_1
	(
		ReferenceCountedAutoPointer<type_qualifier_list> _arg_type_qualifier_list
	):
		pointer_item() ,
		_p_type_qualifier_list(_arg_type_qualifier_list)
{
}


pointer_item_2::pointer_item_2
	(
		
	):
		pointer_item() 
		
{
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
	AssertTokenType((_p_token1->text() == "switch" ) || (_p_token1->text() == "if" ))
	AssertNotNullRule(_p_expression)
	AssertNotNullRule(_p_statement1)
	AssertTokenType((_p_token2->text() == "else" ) || _p_token2.isNull())
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:postfix_expression
//////////////////////////////////////////




postfix_expression_1::postfix_expression_1
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
	AssertNotNullRule(_p_postfix_expression)
	AssertTokenType((_p_token->text() == "->" ) || (_p_token->text() == "." ) || (_p_token->text() == "(" ))
}


postfix_expression_2::postfix_expression_2
	(
		ReferenceCountedAutoPointer<postfix_expression> _arg_postfix_expression,
		ReferenceCountedAutoPointer<token> _arg_token
	):
		postfix_expression() ,
		_p_postfix_expression(_arg_postfix_expression),
		_p_token(_arg_token)
{
	AssertNotNullRule(_p_postfix_expression)
	AssertTokenType((_p_token->text() == "++" ) || (_p_token->text() == "--" ))
}


postfix_expression_3::postfix_expression_3
	(
		ReferenceCountedAutoPointer<primary_expression> _arg_primary_expression
	):
		postfix_expression() ,
		_p_primary_expression(_arg_primary_expression)
{
	AssertNotNullRule(_p_primary_expression)
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
	AssertNotNullRule(_p_postfix_expression)
	AssertNotNullRule(_p_expression)
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
	AssertNotNullRule(_p_equality_expression)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:statement
//////////////////////////////////////////




statement_1::statement_1
	(
		ReferenceCountedAutoPointer<iteration_statement> _arg_iteration_statement
	):
		statement() ,
		_p_iteration_statement(_arg_iteration_statement)
{
	AssertNotNullRule(_p_iteration_statement)
}


statement_2::statement_2
	(
		ReferenceCountedAutoPointer<jump_statement> _arg_jump_statement
	):
		statement() ,
		_p_jump_statement(_arg_jump_statement)
{
	AssertNotNullRule(_p_jump_statement)
}


statement_3::statement_3
	(
		ReferenceCountedAutoPointer<labeled_statement> _arg_labeled_statement
	):
		statement() ,
		_p_labeled_statement(_arg_labeled_statement)
{
	AssertNotNullRule(_p_labeled_statement)
}


statement_4::statement_4
	(
		ReferenceCountedAutoPointer<compound_statement> _arg_compound_statement
	):
		statement() ,
		_p_compound_statement(_arg_compound_statement)
{
	AssertNotNullRule(_p_compound_statement)
}


statement_5::statement_5
	(
		ReferenceCountedAutoPointer<expression_statement> _arg_expression_statement
	):
		statement() ,
		_p_expression_statement(_arg_expression_statement)
{
	AssertNotNullRule(_p_expression_statement)
}


statement_6::statement_6
	(
		ReferenceCountedAutoPointer<selection_statement> _arg_selection_statement
	):
		statement() ,
		_p_selection_statement(_arg_selection_statement)
{
	AssertNotNullRule(_p_selection_statement)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:cast_expression
//////////////////////////////////////////




cast_expression_1::cast_expression_1
	(
		ReferenceCountedAutoPointer<unary_expression> _arg_unary_expression
	):
		cast_expression() ,
		_p_unary_expression(_arg_unary_expression)
{
	AssertNotNullRule(_p_unary_expression)
}


cast_expression_2::cast_expression_2
	(
		ReferenceCountedAutoPointer<type_name> _arg_type_name,
		ReferenceCountedAutoPointer<cast_expression> _arg_cast_expression
	):
		cast_expression() ,
		_p_type_name(_arg_type_name),
		_p_cast_expression(_arg_cast_expression)
{
	AssertNotNullRule(_p_type_name)
	AssertNotNullRule(_p_cast_expression)
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
	AssertNotNullRule(_p_declarator)
	AssertTokenType((_p_token->text() == "=" ) || _p_token.isNull())
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
	AssertNotNullRule(_p_struct_declarator)
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
	AssertNotNullRule(_p_logical_and_expression)
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
	AssertTokenType((_p_token->text() == "+" ) || (_p_token->text() == "-" ) || (_p_token->text() == "~" ) || (_p_token->text() == "!" ) || (_p_token->text() == "*" ) || (_p_token->text() == "&" ))
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
	AssertTokenType((_p_token->text() == "<" ) || (_p_token->text() == "<=" ) || (_p_token->text() == ">" ) || (_p_token->text() == ">=" ) || _p_token.isNull())
	AssertNotNullRule(_p_shift_expression)
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
	AssertTokenType((_p_token->text() == "struct" ) || (_p_token->text() == "union" ))
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
	AssertTokenType((_p_token1->text() == "[IDENTIFIER]" ))
	AssertTokenType((_p_token2->text() == "=" ) || _p_token2.isNull())
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:assignment_expression
//////////////////////////////////////////




assignment_expression_1::assignment_expression_1
	(
		ReferenceCountedAutoPointer<conditional_expression> _arg_conditional_expression
	):
		assignment_expression() ,
		_p_conditional_expression(_arg_conditional_expression)
{
	AssertNotNullRule(_p_conditional_expression)
}


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
	AssertNotNullRule(_p_unary_expression)
	AssertNotNullRule(_p_assignment_operator)
	AssertNotNullRule(_p_assignment_expression)
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
	AssertNotNullRule(_p_parameter_list)
	AssertTokenType((_p_token1->text() == "," ) || _p_token1.isNull())
	AssertTokenType((_p_token2->text() == "..." ) || _p_token2.isNull())
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:parameter_declaration
//////////////////////////////////////////




parameter_declaration_1::parameter_declaration_1
	(
		ReferenceCountedAutoPointer<declaration_specifiers> _arg_declaration_specifiers,
		ReferenceCountedAutoPointer<abstract_declarator> _arg_abstract_declarator
	):
		parameter_declaration() ,
		_p_declaration_specifiers(_arg_declaration_specifiers),
		_p_abstract_declarator(_arg_abstract_declarator)
{
	AssertNotNullRule(_p_declaration_specifiers)
	AssertNotNullRule(_p_abstract_declarator)
}


parameter_declaration_2::parameter_declaration_2
	(
		ReferenceCountedAutoPointer<declaration_specifiers> _arg_declaration_specifiers,
		ReferenceCountedAutoPointer<declarator> _arg_declarator
	):
		parameter_declaration() ,
		_p_declaration_specifiers(_arg_declaration_specifiers),
		_p_declarator(_arg_declarator)
{
	AssertNotNullRule(_p_declaration_specifiers)
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
	AssertTokenType((_p_token->text() == "/" ) || (_p_token->text() == "*" ) || (_p_token->text() == "%" ) || _p_token.isNull())
	AssertNotNullRule(_p_cast_expression)
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
	AssertNotNullRule(_p_type_qualifier)
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
	AssertNotNullRule(_p_assignment_expression)
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
}


direct_abstract_declarator_2::direct_abstract_declarator_2
	(
		ReferenceCountedAutoPointer<abstract_declarator> _arg_abstract_declarator
	):
		direct_abstract_declarator() ,
		_p_abstract_declarator(_arg_abstract_declarator)
{
	AssertNotNullRule(_p_abstract_declarator)
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
	AssertTokenType((_p_token->text() == "==" ) || (_p_token->text() == "!=" ) || _p_token.isNull())
	AssertNotNullRule(_p_relational_expression)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:primary_expression
//////////////////////////////////////////




primary_expression_1::primary_expression_1
	(
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		primary_expression() ,
		_p_expression(_arg_expression)
{
	AssertNotNullRule(_p_expression)
}


primary_expression_2::primary_expression_2
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		primary_expression() ,
		_p_token(_arg_token)
{
	AssertTokenType((_p_token->text() == "[STRING_LITERAL]" ) || (_p_token->text() == "[IDENTIFIER]" ) || (_p_token->text() == "[CONSTANT]" ))
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:declaration_specifiers
//////////////////////////////////////////




declaration_specifiers_item_1::declaration_specifiers_item_1
	(
		ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier
	):
		declaration_specifiers_item() ,
		_p_type_qualifier(_arg_type_qualifier)
{
	AssertNotNullRule(_p_type_qualifier)
}


declaration_specifiers_item_2::declaration_specifiers_item_2
	(
		ReferenceCountedAutoPointer<storage_class_specifier> _arg_storage_class_specifier
	):
		declaration_specifiers_item() ,
		_p_storage_class_specifier(_arg_storage_class_specifier)
{
	AssertNotNullRule(_p_storage_class_specifier)
}


declaration_specifiers_item_3::declaration_specifiers_item_3
	(
		ReferenceCountedAutoPointer<type_specifier> _arg_type_specifier
	):
		declaration_specifiers_item() ,
		_p_type_specifier(_arg_type_specifier)
{
	AssertNotNullRule(_p_type_specifier)
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
	AssertNotNullRule(_p_declaration_specifiers)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:direct_declarator
//////////////////////////////////////////




direct_declarator_1::direct_declarator_1
	(
		ReferenceCountedAutoPointer<declarator> _arg_declarator
	):
		direct_declarator() ,
		_p_declarator(_arg_declarator)
{
	AssertNotNullRule(_p_declarator)
}


direct_declarator_2::direct_declarator_2
	(
		ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator,
		ReferenceCountedAutoPointer<constant_expression> _arg_constant_expression
	):
		direct_declarator() ,
		_p_direct_declarator(_arg_direct_declarator),
		_p_constant_expression(_arg_constant_expression)
{
	AssertNotNullRule(_p_direct_declarator)
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
	AssertNotNullRule(_p_direct_declarator)
}


direct_declarator_4::direct_declarator_4
	(
		ReferenceCountedAutoPointer<direct_declarator> _arg_direct_declarator,
		ReferenceCountedAutoPointer<identifier_list> _arg_identifier_list
	):
		direct_declarator() ,
		_p_direct_declarator(_arg_direct_declarator),
		_p_identifier_list(_arg_identifier_list)
{
	AssertNotNullRule(_p_direct_declarator)
	AssertNotNullRule(_p_identifier_list)
}


direct_declarator_5::direct_declarator_5
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		direct_declarator() ,
		_p_token(_arg_token)
{
	AssertTokenType((_p_token->text() == "[IDENTIFIER]" ))
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
	AssertNotNullRule(_p_inclusive_or_expression)
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
	AssertNotNullRule(_p_init_declarator)
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
	AssertTokenType((_p_token->text() == "<<" ) || (_p_token->text() == ">>" ) || _p_token.isNull())
	AssertNotNullRule(_p_additive_expression)
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
	AssertTokenType((_p_token->text() == "[IDENTIFIER]" ))
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
	AssertTokenType((_p_token->text() == "[IDENTIFIER]" ))
}


jump_statement_2::jump_statement_2
	(
		ReferenceCountedAutoPointer<token> _arg_token
	):
		jump_statement() ,
		_p_token(_arg_token)
{
	AssertTokenType((_p_token->text() == "continue" ) || (_p_token->text() == "break" ))
}


jump_statement_3::jump_statement_3
	(
		ReferenceCountedAutoPointer<expression> _arg_expression
	):
		jump_statement() ,
		_p_expression(_arg_expression)
{
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
	AssertTokenType((_p_token->text() == ":" ) || _p_token.isNull())
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
	AssertNotNullRule(_p_declarator)
	AssertNotNullRule(_p_compound_statement)
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
	AssertNotNullRule(_p_parameter_declaration)
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
	AssertTokenType((_p_token1->text() == "[IDENTIFIER]" ) || _p_token1.isNull())
	AssertTokenType((_p_token2->text() == "{" ) || _p_token2.isNull())
	AssertTokenType((_p_token3->text() == "}" ) || _p_token3.isNull())
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
	AssertTokenType((_p_token->text() == "const" ) || (_p_token->text() == "volatile" ))
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
	AssertNotNullRule(_p_enumerator)
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
	AssertNotNullRule(_p_constant_expression)
	AssertNotNullRule(_p_statement)
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
	AssertTokenType((_p_token->text() == "default" ) || (_p_token->text() == "[IDENTIFIER]" ))
	AssertNotNullRule(_p_statement)
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
	AssertNotNullRule(_p_declaration)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//RULE:specifier_qualifier_list
//////////////////////////////////////////




specifier_qualifier_list_item_1::specifier_qualifier_list_item_1
	(
		ReferenceCountedAutoPointer<type_qualifier> _arg_type_qualifier
	):
		specifier_qualifier_list_item() ,
		_p_type_qualifier(_arg_type_qualifier)
{
	AssertNotNullRule(_p_type_qualifier)
}


specifier_qualifier_list_item_2::specifier_qualifier_list_item_2
	(
		ReferenceCountedAutoPointer<type_specifier> _arg_type_specifier
	):
		specifier_qualifier_list_item() ,
		_p_type_specifier(_arg_type_specifier)
{
	AssertNotNullRule(_p_type_specifier)
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
	AssertNotNullRule(_p_external_declaration)
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
	AssertNotNullRule(_p_conditional_expression)
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
	AssertNotNullRule(_p_initializer)
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
	AssertNotNullRule(_p_statement)
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
	AssertNotNullRule(_p_assignment_expression)
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
	AssertNotNullRule(_p_direct_declarator)
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////










}
