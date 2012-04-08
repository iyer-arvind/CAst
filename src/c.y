%token             RIGHT_OP                   DO                SHORT             CONSTANT         RIGHT_ASSIGN 
%token              DEFAULT                 VOID       STRING_LITERAL                 CHAR                WHILE 
%token               STATIC                EQ_OP               EXTERN                CONST               SIZEOF 
%token                 CASE                LE_OP           MUL_ASSIGN             REGISTER             UNSIGNED 
%token                OR_OP               DEC_OP               SWITCH           AND_ASSIGN               PTR_OP 
%token             ELLIPSIS           IDENTIFIER           ADD_ASSIGN              TYPEDEF                 GOTO 
%token                  FOR                UNION                 AUTO                 ENUM           MOD_ASSIGN 
%token                 ELSE               AND_OP                GE_OP              LEFT_OP                   IF 
%token           SUB_ASSIGN               RETURN               STRUCT           XOR_ASSIGN                  INT 
%token               DOUBLE                FLOAT            OR_ASSIGN               SIGNED                BREAK 
%token             CONTINUE             VOLATILE          LEFT_ASSIGN                 LONG               INC_OP 
%token                NE_OP           DIV_ASSIGN 

%union{
                                       const char* _t_string;
                    CAst::storage_class_specifier* _t_storage_class_specifier;
                       CAst::expression_statement* _t_expression_statement;
                                  CAst::type_name* _t_type_name;
                           CAst::unary_expression* _t_unary_expression;
                     CAst::conditional_expression* _t_conditional_expression;
                  CAst::struct_or_union_specifier* _t_struct_or_union_specifier;
                    CAst::exclusive_or_expression* _t_exclusive_or_expression;
                                CAst::initializer* _t_initializer;
                    CAst::struct_declaration_list* _t_struct_declaration_list;
                        CAst::assignment_operator* _t_assignment_operator;
                         CAst::struct_declaration* _t_struct_declaration;
                        CAst::abstract_declarator* _t_abstract_declarator;
                        CAst::iteration_statement* _t_iteration_statement;
                        CAst::additive_expression* _t_additive_expression;
                       CAst::external_declaration* _t_external_declaration;
                             CAst::type_specifier* _t_type_specifier;
                         CAst::compound_statement* _t_compound_statement;
                    CAst::inclusive_or_expression* _t_inclusive_or_expression;
                                    CAst::pointer* _t_pointer;
                        CAst::selection_statement* _t_selection_statement;
                         CAst::postfix_expression* _t_postfix_expression;
                             CAst::and_expression* _t_and_expression;
                                  CAst::statement* _t_statement;
                            CAst::cast_expression* _t_cast_expression;
                            CAst::init_declarator* _t_init_declarator;
                     CAst::struct_declarator_list* _t_struct_declarator_list;
                      CAst::logical_or_expression* _t_logical_or_expression;
                             CAst::unary_operator* _t_unary_operator;
                      CAst::relational_expression* _t_relational_expression;
                            CAst::struct_or_union* _t_struct_or_union;
                                 CAst::enumerator* _t_enumerator;
                      CAst::assignment_expression* _t_assignment_expression;
                        CAst::parameter_type_list* _t_parameter_type_list;
                      CAst::parameter_declaration* _t_parameter_declaration;
                  CAst::multiplicative_expression* _t_multiplicative_expression;
                        CAst::type_qualifier_list* _t_type_qualifier_list;
                   CAst::argument_expression_list* _t_argument_expression_list;
                 CAst::direct_abstract_declarator* _t_direct_abstract_declarator;
                        CAst::equality_expression* _t_equality_expression;
                         CAst::primary_expression* _t_primary_expression;
                     CAst::declaration_specifiers* _t_declaration_specifiers;
                                CAst::declaration* _t_declaration;
                          CAst::direct_declarator* _t_direct_declarator;
                     CAst::logical_and_expression* _t_logical_and_expression;
                       CAst::init_declarator_list* _t_init_declarator_list;
                           CAst::shift_expression* _t_shift_expression;
                            CAst::identifier_list* _t_identifier_list;
                             CAst::jump_statement* _t_jump_statement;
                          CAst::struct_declarator* _t_struct_declarator;
                        CAst::function_definition* _t_function_definition;
                             CAst::parameter_list* _t_parameter_list;
                             CAst::enum_specifier* _t_enum_specifier;
                             CAst::type_qualifier* _t_type_qualifier;
                            CAst::enumerator_list* _t_enumerator_list;
                          CAst::labeled_statement* _t_labeled_statement;
                           CAst::declaration_list* _t_declaration_list;
                   CAst::specifier_qualifier_list* _t_specifier_qualifier_list;
                           CAst::translation_unit* _t_translation_unit;
                        CAst::constant_expression* _t_constant_expression;
                           CAst::initializer_list* _t_initializer_list;
                             CAst::statement_list* _t_statement_list;
                                 CAst::expression* _t_expression;
                                 CAst::declarator* _t_declarator;
}

%start translation_unit
%%
storage_class_specifier 
	: TYPEDEF                                                                                              	{ LOG("storage_class_specifier:" <<"TYPEDEF("<< $<_t_string>1 <<")" <<")") CAst::storage_class_specifier *obj=new CAst::storage_class_specifier(	new CAst::token($<_t_string>1) ); LOG("Created storage_class_specifier: "<<obj)$<_t_storage_class_specifier>$=obj; LOG("Returning :"<<$<_t_storage_class_specifier>$) 	}
	| EXTERN                                                                                               	{ LOG("storage_class_specifier:" <<"EXTERN("<< $<_t_string>1 <<")" <<")") CAst::storage_class_specifier *obj=new CAst::storage_class_specifier(	new CAst::token($<_t_string>1) ); LOG("Created storage_class_specifier: "<<obj)$<_t_storage_class_specifier>$=obj; LOG("Returning :"<<$<_t_storage_class_specifier>$) 	}
	| STATIC                                                                                               	{ LOG("storage_class_specifier:" <<"STATIC("<< $<_t_string>1 <<")" <<")") CAst::storage_class_specifier *obj=new CAst::storage_class_specifier(	new CAst::token($<_t_string>1) ); LOG("Created storage_class_specifier: "<<obj)$<_t_storage_class_specifier>$=obj; LOG("Returning :"<<$<_t_storage_class_specifier>$) 	}
	| AUTO                                                                                                 	{ LOG("storage_class_specifier:" <<"AUTO("<< $<_t_string>1 <<")" <<")") CAst::storage_class_specifier *obj=new CAst::storage_class_specifier(	new CAst::token($<_t_string>1) ); LOG("Created storage_class_specifier: "<<obj)$<_t_storage_class_specifier>$=obj; LOG("Returning :"<<$<_t_storage_class_specifier>$) 	}
	| REGISTER                                                                                             	{ LOG("storage_class_specifier:" <<"REGISTER("<< $<_t_string>1 <<")" <<")") CAst::storage_class_specifier *obj=new CAst::storage_class_specifier(	new CAst::token($<_t_string>1) ); LOG("Created storage_class_specifier: "<<obj)$<_t_storage_class_specifier>$=obj; LOG("Returning :"<<$<_t_storage_class_specifier>$) 	}
	;



expression_statement 
	: ';'                                                                                                  	{ LOG("expression_statement:" <<"';'("<< $<_t_string>1 <<")" <<")") CAst::expression_statement *obj=new CAst::expression_statement(	NULL ); LOG("Created expression_statement: "<<obj)$<_t_expression_statement>$=obj; LOG("Returning :"<<$<_t_expression_statement>$) 	}
	| expression ';'                                                                                       	{ LOG("expression_statement:" <<"expression("<< $<_t_expression>1 <<")" <<"';'("<< $<_t_string>2 <<")" <<")") CAst::expression_statement *obj=new CAst::expression_statement(	$<_t_expression>1 ); LOG("Created expression_statement: "<<obj)$<_t_expression_statement>$=obj; LOG("Returning :"<<$<_t_expression_statement>$) 	}
	;



type_name 
	: specifier_qualifier_list                                                                             	{ LOG("type_name:" <<"specifier_qualifier_list("<< $<_t_specifier_qualifier_list>1 <<")" <<")") CAst::type_name *obj=new CAst::type_name(	$<_t_specifier_qualifier_list>1,NULL ); LOG("Created type_name: "<<obj)$<_t_type_name>$=obj; LOG("Returning :"<<$<_t_type_name>$) 	}
	| specifier_qualifier_list abstract_declarator                                                         	{ LOG("type_name:" <<"specifier_qualifier_list("<< $<_t_specifier_qualifier_list>1 <<")" <<"abstract_declarator("<< $<_t_abstract_declarator>2 <<")" <<")") CAst::type_name *obj=new CAst::type_name(	$<_t_specifier_qualifier_list>1,$<_t_abstract_declarator>2 ); LOG("Created type_name: "<<obj)$<_t_type_name>$=obj; LOG("Returning :"<<$<_t_type_name>$) 	}
	;



unary_expression 
	: postfix_expression                                                                                   	{ LOG("unary_expression:" <<"postfix_expression("<< $<_t_postfix_expression>1 <<")" <<")") CAst::unary_expression_2 *obj=new CAst::unary_expression_2(	$<_t_postfix_expression>1 ); LOG("Created unary_expression_2: "<<obj)$<_t_unary_expression>$=obj; LOG("Returning :"<<$<_t_unary_expression>$) 	}
	| INC_OP unary_expression                                                                              	{ LOG("unary_expression:" <<"INC_OP("<< $<_t_string>1 <<")" <<"unary_expression("<< $<_t_unary_expression>2 <<")" <<")") CAst::unary_expression_1 *obj=new CAst::unary_expression_1(	new CAst::token($<_t_string>1),$<_t_unary_expression>2 ); LOG("Created unary_expression_1: "<<obj)$<_t_unary_expression>$=obj; LOG("Returning :"<<$<_t_unary_expression>$) 	}
	| DEC_OP unary_expression                                                                              	{ LOG("unary_expression:" <<"DEC_OP("<< $<_t_string>1 <<")" <<"unary_expression("<< $<_t_unary_expression>2 <<")" <<")") CAst::unary_expression_1 *obj=new CAst::unary_expression_1(	new CAst::token($<_t_string>1),$<_t_unary_expression>2 ); LOG("Created unary_expression_1: "<<obj)$<_t_unary_expression>$=obj; LOG("Returning :"<<$<_t_unary_expression>$) 	}
	| unary_operator cast_expression                                                                       	{ LOG("unary_expression:" <<"unary_operator("<< $<_t_unary_operator>1 <<")" <<"cast_expression("<< $<_t_cast_expression>2 <<")" <<")") CAst::unary_expression_3 *obj=new CAst::unary_expression_3(	$<_t_unary_operator>1,$<_t_cast_expression>2 ); LOG("Created unary_expression_3: "<<obj)$<_t_unary_expression>$=obj; LOG("Returning :"<<$<_t_unary_expression>$) 	}
	| SIZEOF unary_expression                                                                              	{ LOG("unary_expression:" <<"SIZEOF("<< $<_t_string>1 <<")" <<"unary_expression("<< $<_t_unary_expression>2 <<")" <<")") CAst::unary_expression_1 *obj=new CAst::unary_expression_1(	new CAst::token($<_t_string>1),$<_t_unary_expression>2 ); LOG("Created unary_expression_1: "<<obj)$<_t_unary_expression>$=obj; LOG("Returning :"<<$<_t_unary_expression>$) 	}
	| SIZEOF '(' type_name ')'                                                                             	{ LOG("unary_expression:" <<"SIZEOF("<< $<_t_string>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"type_name("<< $<_t_type_name>3 <<")" <<"')'("<< $<_t_string>4 <<")" <<")") CAst::unary_expression_4 *obj=new CAst::unary_expression_4(	$<_t_type_name>3 ); LOG("Created unary_expression_4: "<<obj)$<_t_unary_expression>$=obj; LOG("Returning :"<<$<_t_unary_expression>$) 	}
	;



conditional_expression 
	: logical_or_expression                                                                                	{ LOG("conditional_expression:" <<"logical_or_expression("<< $<_t_logical_or_expression>1 <<")" <<")") CAst::conditional_expression_item *obj=new CAst::conditional_expression_item(	$<_t_logical_or_expression>1,NULL ); LOG("Created conditional_expression_item: "<<obj)CAst::conditional_expression *lst=new CAst::conditional_expression;lst->append(obj);$<_t_conditional_expression>$=lst; LOG("Created List conditional_expression: "<<lst)LOG("Returning :"<<$<_t_conditional_expression>$) 	}
	| logical_or_expression '?' expression ':' conditional_expression                                      	{ LOG("conditional_expression:" <<"logical_or_expression("<< $<_t_logical_or_expression>1 <<")" <<"'?'("<< $<_t_string>2 <<")" <<"expression("<< $<_t_expression>3 <<")" <<"':'("<< $<_t_string>4 <<")" <<"conditional_expression("<< $<_t_conditional_expression>5 <<")" <<")") CAst::conditional_expression_item *obj=new CAst::conditional_expression_item(	$<_t_logical_or_expression>1,$<_t_expression>3 ); LOG("Created conditional_expression_item: "<<obj)$<_t_conditional_expression>5 ->append(obj);$<_t_conditional_expression>$=$<_t_conditional_expression>5; LOG("Appended to conditional_expression") LOG("Returning :"<<$<_t_conditional_expression>$) 	}
	;



struct_or_union_specifier 
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'                                           	{ LOG("struct_or_union_specifier:" <<"struct_or_union("<< $<_t_struct_or_union>1 <<")" <<"IDENTIFIER("<< $<_t_string>2 <<")" <<"'{'("<< $<_t_string>3 <<")" <<"struct_declaration_list("<< $<_t_struct_declaration_list>4 <<")" <<"'}'("<< $<_t_string>5 <<")" <<")") CAst::struct_or_union_specifier *obj=new CAst::struct_or_union_specifier(	$<_t_struct_or_union>1,new CAst::token($<_t_string>2),new CAst::token($<_t_string>3),$<_t_struct_declaration_list>4,new CAst::token($<_t_string>5) ); LOG("Created struct_or_union_specifier: "<<obj)$<_t_struct_or_union_specifier>$=obj; LOG("Returning :"<<$<_t_struct_or_union_specifier>$) 	}
	| struct_or_union '{' struct_declaration_list '}'                                                      	{ LOG("struct_or_union_specifier:" <<"struct_or_union("<< $<_t_struct_or_union>1 <<")" <<"'{'("<< $<_t_string>2 <<")" <<"struct_declaration_list("<< $<_t_struct_declaration_list>3 <<")" <<"'}'("<< $<_t_string>4 <<")" <<")") CAst::struct_or_union_specifier *obj=new CAst::struct_or_union_specifier(	$<_t_struct_or_union>1,NULL,new CAst::token($<_t_string>2),$<_t_struct_declaration_list>3,new CAst::token($<_t_string>4) ); LOG("Created struct_or_union_specifier: "<<obj)$<_t_struct_or_union_specifier>$=obj; LOG("Returning :"<<$<_t_struct_or_union_specifier>$) 	}
	| struct_or_union IDENTIFIER                                                                           	{ LOG("struct_or_union_specifier:" <<"struct_or_union("<< $<_t_struct_or_union>1 <<")" <<"IDENTIFIER("<< $<_t_string>2 <<")" <<")") CAst::struct_or_union_specifier *obj=new CAst::struct_or_union_specifier(	$<_t_struct_or_union>1,new CAst::token($<_t_string>2),NULL,NULL,NULL ); LOG("Created struct_or_union_specifier: "<<obj)$<_t_struct_or_union_specifier>$=obj; LOG("Returning :"<<$<_t_struct_or_union_specifier>$) 	}
	;



exclusive_or_expression 
	: and_expression                                                                                       	{ LOG("exclusive_or_expression:" <<"and_expression("<< $<_t_and_expression>1 <<")" <<")") CAst::exclusive_or_expression_item *obj=new CAst::exclusive_or_expression_item(	$<_t_and_expression>1 ); LOG("Created exclusive_or_expression_item: "<<obj)CAst::exclusive_or_expression *lst=new CAst::exclusive_or_expression;lst->append(obj);$<_t_exclusive_or_expression>$=lst; LOG("Created List exclusive_or_expression: "<<lst)LOG("Returning :"<<$<_t_exclusive_or_expression>$) 	}
	| exclusive_or_expression '^' and_expression                                                           	{ LOG("exclusive_or_expression:" <<"exclusive_or_expression("<< $<_t_exclusive_or_expression>1 <<")" <<"'^'("<< $<_t_string>2 <<")" <<"and_expression("<< $<_t_and_expression>3 <<")" <<")") CAst::exclusive_or_expression_item *obj=new CAst::exclusive_or_expression_item(	$<_t_and_expression>3 ); LOG("Created exclusive_or_expression_item: "<<obj)$<_t_exclusive_or_expression>1 ->append(obj);$<_t_exclusive_or_expression>$=$<_t_exclusive_or_expression>1; LOG("Appended to exclusive_or_expression") LOG("Returning :"<<$<_t_exclusive_or_expression>$) 	}
	;



initializer 
	: assignment_expression                                                                                	{ LOG("initializer:" <<"assignment_expression("<< $<_t_assignment_expression>1 <<")" <<")") CAst::initializer_1 *obj=new CAst::initializer_1(	$<_t_assignment_expression>1 ); LOG("Created initializer_1: "<<obj)$<_t_initializer>$=obj; LOG("Returning :"<<$<_t_initializer>$) 	}
	| '{' initializer_list '}'                                                                             	{ LOG("initializer:" <<"'{'("<< $<_t_string>1 <<")" <<"initializer_list("<< $<_t_initializer_list>2 <<")" <<"'}'("<< $<_t_string>3 <<")" <<")") CAst::initializer_2 *obj=new CAst::initializer_2(	$<_t_initializer_list>2,NULL ); LOG("Created initializer_2: "<<obj)$<_t_initializer>$=obj; LOG("Returning :"<<$<_t_initializer>$) 	}
	| '{' initializer_list ',' '}'                                                                         	{ LOG("initializer:" <<"'{'("<< $<_t_string>1 <<")" <<"initializer_list("<< $<_t_initializer_list>2 <<")" <<"','("<< $<_t_string>3 <<")" <<"'}'("<< $<_t_string>4 <<")" <<")") CAst::initializer_2 *obj=new CAst::initializer_2(	$<_t_initializer_list>2,new CAst::token($<_t_string>3) ); LOG("Created initializer_2: "<<obj)$<_t_initializer>$=obj; LOG("Returning :"<<$<_t_initializer>$) 	}
	;



struct_declaration_list 
	: struct_declaration                                                                                   	{ LOG("struct_declaration_list:" <<"struct_declaration("<< $<_t_struct_declaration>1 <<")" <<")") CAst::struct_declaration_list_item *obj=new CAst::struct_declaration_list_item(	$<_t_struct_declaration>1 ); LOG("Created struct_declaration_list_item: "<<obj)CAst::struct_declaration_list *lst=new CAst::struct_declaration_list;lst->append(obj);$<_t_struct_declaration_list>$=lst; LOG("Created List struct_declaration_list: "<<lst)LOG("Returning :"<<$<_t_struct_declaration_list>$) 	}
	| struct_declaration_list struct_declaration                                                           	{ LOG("struct_declaration_list:" <<"struct_declaration_list("<< $<_t_struct_declaration_list>1 <<")" <<"struct_declaration("<< $<_t_struct_declaration>2 <<")" <<")") CAst::struct_declaration_list_item *obj=new CAst::struct_declaration_list_item(	$<_t_struct_declaration>2 ); LOG("Created struct_declaration_list_item: "<<obj)$<_t_struct_declaration_list>1 ->append(obj);$<_t_struct_declaration_list>$=$<_t_struct_declaration_list>1; LOG("Appended to struct_declaration_list") LOG("Returning :"<<$<_t_struct_declaration_list>$) 	}
	;



assignment_operator 
	: '='                                                                                                  	{ LOG("assignment_operator:" <<"'='("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	| MUL_ASSIGN                                                                                           	{ LOG("assignment_operator:" <<"MUL_ASSIGN("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	| DIV_ASSIGN                                                                                           	{ LOG("assignment_operator:" <<"DIV_ASSIGN("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	| MOD_ASSIGN                                                                                           	{ LOG("assignment_operator:" <<"MOD_ASSIGN("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	| ADD_ASSIGN                                                                                           	{ LOG("assignment_operator:" <<"ADD_ASSIGN("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	| SUB_ASSIGN                                                                                           	{ LOG("assignment_operator:" <<"SUB_ASSIGN("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	| LEFT_ASSIGN                                                                                          	{ LOG("assignment_operator:" <<"LEFT_ASSIGN("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	| RIGHT_ASSIGN                                                                                         	{ LOG("assignment_operator:" <<"RIGHT_ASSIGN("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	| AND_ASSIGN                                                                                           	{ LOG("assignment_operator:" <<"AND_ASSIGN("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	| XOR_ASSIGN                                                                                           	{ LOG("assignment_operator:" <<"XOR_ASSIGN("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	| OR_ASSIGN                                                                                            	{ LOG("assignment_operator:" <<"OR_ASSIGN("<< $<_t_string>1 <<")" <<")") CAst::assignment_operator *obj=new CAst::assignment_operator(	new CAst::token($<_t_string>1) ); LOG("Created assignment_operator: "<<obj)$<_t_assignment_operator>$=obj; LOG("Returning :"<<$<_t_assignment_operator>$) 	}
	;



struct_declaration 
	: specifier_qualifier_list struct_declarator_list ';'                                                  	{ LOG("struct_declaration:" <<"specifier_qualifier_list("<< $<_t_specifier_qualifier_list>1 <<")" <<"struct_declarator_list("<< $<_t_struct_declarator_list>2 <<")" <<"';'("<< $<_t_string>3 <<")" <<")") CAst::struct_declaration *obj=new CAst::struct_declaration(	$<_t_specifier_qualifier_list>1,$<_t_struct_declarator_list>2 ); LOG("Created struct_declaration: "<<obj)$<_t_struct_declaration>$=obj; LOG("Returning :"<<$<_t_struct_declaration>$) 	}
	;



abstract_declarator 
	: pointer                                                                                              	{ LOG("abstract_declarator:" <<"pointer("<< $<_t_pointer>1 <<")" <<")") CAst::abstract_declarator *obj=new CAst::abstract_declarator(	$<_t_pointer>1,NULL ); LOG("Created abstract_declarator: "<<obj)$<_t_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_abstract_declarator>$) 	}
	| direct_abstract_declarator                                                                           	{ LOG("abstract_declarator:" <<"direct_abstract_declarator("<< $<_t_direct_abstract_declarator>1 <<")" <<")") CAst::abstract_declarator *obj=new CAst::abstract_declarator(	NULL,$<_t_direct_abstract_declarator>1 ); LOG("Created abstract_declarator: "<<obj)$<_t_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_abstract_declarator>$) 	}
	| pointer direct_abstract_declarator                                                                   	{ LOG("abstract_declarator:" <<"pointer("<< $<_t_pointer>1 <<")" <<"direct_abstract_declarator("<< $<_t_direct_abstract_declarator>2 <<")" <<")") CAst::abstract_declarator *obj=new CAst::abstract_declarator(	$<_t_pointer>1,$<_t_direct_abstract_declarator>2 ); LOG("Created abstract_declarator: "<<obj)$<_t_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_abstract_declarator>$) 	}
	;



iteration_statement 
	: WHILE '(' expression ')' statement                                                                   	{ LOG("iteration_statement:" <<"WHILE("<< $<_t_string>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"expression("<< $<_t_expression>3 <<")" <<"')'("<< $<_t_string>4 <<")" <<"statement("<< $<_t_statement>5 <<")" <<")") CAst::iteration_statement_2 *obj=new CAst::iteration_statement_2(	$<_t_expression>3,$<_t_statement>5 ); LOG("Created iteration_statement_2: "<<obj)$<_t_iteration_statement>$=obj; LOG("Returning :"<<$<_t_iteration_statement>$) 	}
	| DO statement WHILE '(' expression ')' ';'                                                            	{ LOG("iteration_statement:" <<"DO("<< $<_t_string>1 <<")" <<"statement("<< $<_t_statement>2 <<")" <<"WHILE("<< $<_t_string>3 <<")" <<"'('("<< $<_t_string>4 <<")" <<"expression("<< $<_t_expression>5 <<")" <<"')'("<< $<_t_string>6 <<")" <<"';'("<< $<_t_string>7 <<")" <<")") CAst::iteration_statement_3 *obj=new CAst::iteration_statement_3(	$<_t_statement>2,$<_t_expression>5 ); LOG("Created iteration_statement_3: "<<obj)$<_t_iteration_statement>$=obj; LOG("Returning :"<<$<_t_iteration_statement>$) 	}
	| FOR '(' expression_statement expression_statement ')' statement                                      	{ LOG("iteration_statement:" <<"FOR("<< $<_t_string>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"expression_statement("<< $<_t_expression_statement>3 <<")" <<"expression_statement("<< $<_t_expression_statement>4 <<")" <<"')'("<< $<_t_string>5 <<")" <<"statement("<< $<_t_statement>6 <<")" <<")") CAst::iteration_statement_1 *obj=new CAst::iteration_statement_1(	$<_t_expression_statement>3,$<_t_expression_statement>4,NULL,$<_t_statement>6 ); LOG("Created iteration_statement_1: "<<obj)$<_t_iteration_statement>$=obj; LOG("Returning :"<<$<_t_iteration_statement>$) 	}
	| FOR '(' expression_statement expression_statement expression ')' statement                           	{ LOG("iteration_statement:" <<"FOR("<< $<_t_string>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"expression_statement("<< $<_t_expression_statement>3 <<")" <<"expression_statement("<< $<_t_expression_statement>4 <<")" <<"expression("<< $<_t_expression>5 <<")" <<"')'("<< $<_t_string>6 <<")" <<"statement("<< $<_t_statement>7 <<")" <<")") CAst::iteration_statement_1 *obj=new CAst::iteration_statement_1(	$<_t_expression_statement>3,$<_t_expression_statement>4,$<_t_expression>5,$<_t_statement>7 ); LOG("Created iteration_statement_1: "<<obj)$<_t_iteration_statement>$=obj; LOG("Returning :"<<$<_t_iteration_statement>$) 	}
	;



additive_expression 
	: multiplicative_expression                                                                            	{ LOG("additive_expression:" <<"multiplicative_expression("<< $<_t_multiplicative_expression>1 <<")" <<")") CAst::additive_expression_item *obj=new CAst::additive_expression_item(	NULL,$<_t_multiplicative_expression>1 ); LOG("Created additive_expression_item: "<<obj)CAst::additive_expression *lst=new CAst::additive_expression;lst->append(obj);$<_t_additive_expression>$=lst; LOG("Created List additive_expression: "<<lst)LOG("Returning :"<<$<_t_additive_expression>$) 	}
	| additive_expression '+' multiplicative_expression                                                    	{ LOG("additive_expression:" <<"additive_expression("<< $<_t_additive_expression>1 <<")" <<"'+'("<< $<_t_string>2 <<")" <<"multiplicative_expression("<< $<_t_multiplicative_expression>3 <<")" <<")") CAst::additive_expression_item *obj=new CAst::additive_expression_item(	new CAst::token($<_t_string>2),$<_t_multiplicative_expression>3 ); LOG("Created additive_expression_item: "<<obj)$<_t_additive_expression>1 ->append(obj);$<_t_additive_expression>$=$<_t_additive_expression>1; LOG("Appended to additive_expression") LOG("Returning :"<<$<_t_additive_expression>$) 	}
	| additive_expression '-' multiplicative_expression                                                    	{ LOG("additive_expression:" <<"additive_expression("<< $<_t_additive_expression>1 <<")" <<"'-'("<< $<_t_string>2 <<")" <<"multiplicative_expression("<< $<_t_multiplicative_expression>3 <<")" <<")") CAst::additive_expression_item *obj=new CAst::additive_expression_item(	new CAst::token($<_t_string>2),$<_t_multiplicative_expression>3 ); LOG("Created additive_expression_item: "<<obj)$<_t_additive_expression>1 ->append(obj);$<_t_additive_expression>$=$<_t_additive_expression>1; LOG("Appended to additive_expression") LOG("Returning :"<<$<_t_additive_expression>$) 	}
	;



external_declaration 
	: function_definition                                                                                  	{ LOG("external_declaration:" <<"function_definition("<< $<_t_function_definition>1 <<")" <<")") CAst::external_declaration_2 *obj=new CAst::external_declaration_2(	$<_t_function_definition>1 ); LOG("Created external_declaration_2: "<<obj)$<_t_external_declaration>$=obj; LOG("Returning :"<<$<_t_external_declaration>$) 	}
	| declaration                                                                                          	{ LOG("external_declaration:" <<"declaration("<< $<_t_declaration>1 <<")" <<")") CAst::external_declaration_1 *obj=new CAst::external_declaration_1(	$<_t_declaration>1 ); LOG("Created external_declaration_1: "<<obj)$<_t_external_declaration>$=obj; LOG("Returning :"<<$<_t_external_declaration>$) 	}
	;



type_specifier 
	: VOID                                                                                                 	{ LOG("type_specifier:" <<"VOID("<< $<_t_string>1 <<")" <<")") CAst::type_specifier_2 *obj=new CAst::type_specifier_2(	new CAst::token($<_t_string>1) ); LOG("Created type_specifier_2: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	| CHAR                                                                                                 	{ LOG("type_specifier:" <<"CHAR("<< $<_t_string>1 <<")" <<")") CAst::type_specifier_2 *obj=new CAst::type_specifier_2(	new CAst::token($<_t_string>1) ); LOG("Created type_specifier_2: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	| SHORT                                                                                                	{ LOG("type_specifier:" <<"SHORT("<< $<_t_string>1 <<")" <<")") CAst::type_specifier_2 *obj=new CAst::type_specifier_2(	new CAst::token($<_t_string>1) ); LOG("Created type_specifier_2: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	| INT                                                                                                  	{ LOG("type_specifier:" <<"INT("<< $<_t_string>1 <<")" <<")") CAst::type_specifier_2 *obj=new CAst::type_specifier_2(	new CAst::token($<_t_string>1) ); LOG("Created type_specifier_2: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	| LONG                                                                                                 	{ LOG("type_specifier:" <<"LONG("<< $<_t_string>1 <<")" <<")") CAst::type_specifier_2 *obj=new CAst::type_specifier_2(	new CAst::token($<_t_string>1) ); LOG("Created type_specifier_2: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	| FLOAT                                                                                                	{ LOG("type_specifier:" <<"FLOAT("<< $<_t_string>1 <<")" <<")") CAst::type_specifier_2 *obj=new CAst::type_specifier_2(	new CAst::token($<_t_string>1) ); LOG("Created type_specifier_2: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	| DOUBLE                                                                                               	{ LOG("type_specifier:" <<"DOUBLE("<< $<_t_string>1 <<")" <<")") CAst::type_specifier_2 *obj=new CAst::type_specifier_2(	new CAst::token($<_t_string>1) ); LOG("Created type_specifier_2: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	| SIGNED                                                                                               	{ LOG("type_specifier:" <<"SIGNED("<< $<_t_string>1 <<")" <<")") CAst::type_specifier_2 *obj=new CAst::type_specifier_2(	new CAst::token($<_t_string>1) ); LOG("Created type_specifier_2: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	| UNSIGNED                                                                                             	{ LOG("type_specifier:" <<"UNSIGNED("<< $<_t_string>1 <<")" <<")") CAst::type_specifier_2 *obj=new CAst::type_specifier_2(	new CAst::token($<_t_string>1) ); LOG("Created type_specifier_2: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	| struct_or_union_specifier                                                                            	{ LOG("type_specifier:" <<"struct_or_union_specifier("<< $<_t_struct_or_union_specifier>1 <<")" <<")") CAst::type_specifier_3 *obj=new CAst::type_specifier_3(	$<_t_struct_or_union_specifier>1 ); LOG("Created type_specifier_3: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	| enum_specifier                                                                                       	{ LOG("type_specifier:" <<"enum_specifier("<< $<_t_enum_specifier>1 <<")" <<")") CAst::type_specifier_1 *obj=new CAst::type_specifier_1(	$<_t_enum_specifier>1 ); LOG("Created type_specifier_1: "<<obj)$<_t_type_specifier>$=obj; LOG("Returning :"<<$<_t_type_specifier>$) 	}
	;



compound_statement 
	: '{' '}'                                                                                              	{ LOG("compound_statement:" <<"'{'("<< $<_t_string>1 <<")" <<"'}'("<< $<_t_string>2 <<")" <<")") CAst::compound_statement *obj=new CAst::compound_statement(	NULL,NULL ); LOG("Created compound_statement: "<<obj)$<_t_compound_statement>$=obj; LOG("Returning :"<<$<_t_compound_statement>$) 	}
	| '{' statement_list '}'                                                                               	{ LOG("compound_statement:" <<"'{'("<< $<_t_string>1 <<")" <<"statement_list("<< $<_t_statement_list>2 <<")" <<"'}'("<< $<_t_string>3 <<")" <<")") CAst::compound_statement *obj=new CAst::compound_statement(	NULL,$<_t_statement_list>2 ); LOG("Created compound_statement: "<<obj)$<_t_compound_statement>$=obj; LOG("Returning :"<<$<_t_compound_statement>$) 	}
	| '{' declaration_list '}'                                                                             	{ LOG("compound_statement:" <<"'{'("<< $<_t_string>1 <<")" <<"declaration_list("<< $<_t_declaration_list>2 <<")" <<"'}'("<< $<_t_string>3 <<")" <<")") CAst::compound_statement *obj=new CAst::compound_statement(	$<_t_declaration_list>2,NULL ); LOG("Created compound_statement: "<<obj)$<_t_compound_statement>$=obj; LOG("Returning :"<<$<_t_compound_statement>$) 	}
	| '{' declaration_list statement_list '}'                                                              	{ LOG("compound_statement:" <<"'{'("<< $<_t_string>1 <<")" <<"declaration_list("<< $<_t_declaration_list>2 <<")" <<"statement_list("<< $<_t_statement_list>3 <<")" <<"'}'("<< $<_t_string>4 <<")" <<")") CAst::compound_statement *obj=new CAst::compound_statement(	$<_t_declaration_list>2,$<_t_statement_list>3 ); LOG("Created compound_statement: "<<obj)$<_t_compound_statement>$=obj; LOG("Returning :"<<$<_t_compound_statement>$) 	}
	;



inclusive_or_expression 
	: exclusive_or_expression                                                                              	{ LOG("inclusive_or_expression:" <<"exclusive_or_expression("<< $<_t_exclusive_or_expression>1 <<")" <<")") CAst::inclusive_or_expression_item *obj=new CAst::inclusive_or_expression_item(	$<_t_exclusive_or_expression>1 ); LOG("Created inclusive_or_expression_item: "<<obj)CAst::inclusive_or_expression *lst=new CAst::inclusive_or_expression;lst->append(obj);$<_t_inclusive_or_expression>$=lst; LOG("Created List inclusive_or_expression: "<<lst)LOG("Returning :"<<$<_t_inclusive_or_expression>$) 	}
	| inclusive_or_expression '|' exclusive_or_expression                                                  	{ LOG("inclusive_or_expression:" <<"inclusive_or_expression("<< $<_t_inclusive_or_expression>1 <<")" <<"'|'("<< $<_t_string>2 <<")" <<"exclusive_or_expression("<< $<_t_exclusive_or_expression>3 <<")" <<")") CAst::inclusive_or_expression_item *obj=new CAst::inclusive_or_expression_item(	$<_t_exclusive_or_expression>3 ); LOG("Created inclusive_or_expression_item: "<<obj)$<_t_inclusive_or_expression>1 ->append(obj);$<_t_inclusive_or_expression>$=$<_t_inclusive_or_expression>1; LOG("Appended to inclusive_or_expression") LOG("Returning :"<<$<_t_inclusive_or_expression>$) 	}
	;



pointer 
	: '*'                                                                                                  	{ LOG("pointer:" <<"'*'("<< $<_t_string>1 <<")" <<")") CAst::pointer_item_2 *obj=new CAst::pointer_item_2(	NULL ); LOG("Created pointer_item_2: "<<obj)CAst::pointer *lst=new CAst::pointer;lst->append(obj);$<_t_pointer>$=lst; LOG("Created List pointer: "<<lst)LOG("Returning :"<<$<_t_pointer>$) 	}
	| '*' type_qualifier_list                                                                              	{ LOG("pointer:" <<"'*'("<< $<_t_string>1 <<")" <<"type_qualifier_list("<< $<_t_type_qualifier_list>2 <<")" <<")") CAst::pointer_item_2 *obj=new CAst::pointer_item_2(	$<_t_type_qualifier_list>2 ); LOG("Created pointer_item_2: "<<obj)CAst::pointer *lst=new CAst::pointer;lst->append(obj);$<_t_pointer>$=lst; LOG("Created List pointer: "<<lst)LOG("Returning :"<<$<_t_pointer>$) 	}
	| '*' pointer                                                                                          	{ LOG("pointer:" <<"'*'("<< $<_t_string>1 <<")" <<"pointer("<< $<_t_pointer>2 <<")" <<")") CAst::pointer_item_1 *obj=new CAst::pointer_item_1(	 ); LOG("Created pointer_item_1: "<<obj)$<_t_pointer>2 ->append(obj);$<_t_pointer>$=$<_t_pointer>2; LOG("Appended to pointer") LOG("Returning :"<<$<_t_pointer>$) 	}
	| '*' type_qualifier_list pointer                                                                      	{ LOG("pointer:" <<"'*'("<< $<_t_string>1 <<")" <<"type_qualifier_list("<< $<_t_type_qualifier_list>2 <<")" <<"pointer("<< $<_t_pointer>3 <<")" <<")") CAst::pointer_item_2 *obj=new CAst::pointer_item_2(	$<_t_type_qualifier_list>2 ); LOG("Created pointer_item_2: "<<obj)$<_t_pointer>3 ->append(obj);$<_t_pointer>$=$<_t_pointer>3; LOG("Appended to pointer") LOG("Returning :"<<$<_t_pointer>$) 	}
	;



selection_statement 
	: IF '(' expression ')' statement                                                                      	{ LOG("selection_statement:" <<"IF("<< $<_t_string>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"expression("<< $<_t_expression>3 <<")" <<"')'("<< $<_t_string>4 <<")" <<"statement("<< $<_t_statement>5 <<")" <<")") CAst::selection_statement *obj=new CAst::selection_statement(	new CAst::token($<_t_string>1),$<_t_expression>3,$<_t_statement>5,NULL,NULL ); LOG("Created selection_statement: "<<obj)$<_t_selection_statement>$=obj; LOG("Returning :"<<$<_t_selection_statement>$) 	}
	| IF '(' expression ')' statement ELSE statement                                                       	{ LOG("selection_statement:" <<"IF("<< $<_t_string>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"expression("<< $<_t_expression>3 <<")" <<"')'("<< $<_t_string>4 <<")" <<"statement("<< $<_t_statement>5 <<")" <<"ELSE("<< $<_t_string>6 <<")" <<"statement("<< $<_t_statement>7 <<")" <<")") CAst::selection_statement *obj=new CAst::selection_statement(	new CAst::token($<_t_string>1),$<_t_expression>3,$<_t_statement>5,new CAst::token($<_t_string>6),$<_t_statement>7 ); LOG("Created selection_statement: "<<obj)$<_t_selection_statement>$=obj; LOG("Returning :"<<$<_t_selection_statement>$) 	}
	| SWITCH '(' expression ')' statement                                                                  	{ LOG("selection_statement:" <<"SWITCH("<< $<_t_string>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"expression("<< $<_t_expression>3 <<")" <<"')'("<< $<_t_string>4 <<")" <<"statement("<< $<_t_statement>5 <<")" <<")") CAst::selection_statement *obj=new CAst::selection_statement(	new CAst::token($<_t_string>1),$<_t_expression>3,$<_t_statement>5,NULL,NULL ); LOG("Created selection_statement: "<<obj)$<_t_selection_statement>$=obj; LOG("Returning :"<<$<_t_selection_statement>$) 	}
	;



postfix_expression 
	: primary_expression                                                                                   	{ LOG("postfix_expression:" <<"primary_expression("<< $<_t_primary_expression>1 <<")" <<")") CAst::postfix_expression_2 *obj=new CAst::postfix_expression_2(	$<_t_primary_expression>1 ); LOG("Created postfix_expression_2: "<<obj)$<_t_postfix_expression>$=obj; LOG("Returning :"<<$<_t_postfix_expression>$) 	}
	| postfix_expression '[' expression ']'                                                                	{ LOG("postfix_expression:" <<"postfix_expression("<< $<_t_postfix_expression>1 <<")" <<"'['("<< $<_t_string>2 <<")" <<"expression("<< $<_t_expression>3 <<")" <<"']'("<< $<_t_string>4 <<")" <<")") CAst::postfix_expression_4 *obj=new CAst::postfix_expression_4(	$<_t_postfix_expression>1,$<_t_expression>3 ); LOG("Created postfix_expression_4: "<<obj)$<_t_postfix_expression>$=obj; LOG("Returning :"<<$<_t_postfix_expression>$) 	}
	| postfix_expression '(' ')'                                                                           	{ LOG("postfix_expression:" <<"postfix_expression("<< $<_t_postfix_expression>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"')'("<< $<_t_string>3 <<")" <<")") CAst::postfix_expression_3 *obj=new CAst::postfix_expression_3(	$<_t_postfix_expression>1,new CAst::token($<_t_string>2),NULL ); LOG("Created postfix_expression_3: "<<obj)$<_t_postfix_expression>$=obj; LOG("Returning :"<<$<_t_postfix_expression>$) 	}
	| postfix_expression '(' argument_expression_list ')'                                                  	{ LOG("postfix_expression:" <<"postfix_expression("<< $<_t_postfix_expression>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"argument_expression_list("<< $<_t_argument_expression_list>3 <<")" <<"')'("<< $<_t_string>4 <<")" <<")") CAst::postfix_expression_3 *obj=new CAst::postfix_expression_3(	$<_t_postfix_expression>1,new CAst::token($<_t_string>2),$<_t_argument_expression_list>3 ); LOG("Created postfix_expression_3: "<<obj)$<_t_postfix_expression>$=obj; LOG("Returning :"<<$<_t_postfix_expression>$) 	}
	| postfix_expression '.' IDENTIFIER                                                                    	{ LOG("postfix_expression:" <<"postfix_expression("<< $<_t_postfix_expression>1 <<")" <<"'.'("<< $<_t_string>2 <<")" <<"IDENTIFIER("<< $<_t_string>3 <<")" <<")") CAst::postfix_expression_3 *obj=new CAst::postfix_expression_3(	$<_t_postfix_expression>1,new CAst::token($<_t_string>2),$<_t_argument_expression_list>3 ); LOG("Created postfix_expression_3: "<<obj)$<_t_postfix_expression>$=obj; LOG("Returning :"<<$<_t_postfix_expression>$) 	}
	| postfix_expression PTR_OP IDENTIFIER                                                                 	{ LOG("postfix_expression:" <<"postfix_expression("<< $<_t_postfix_expression>1 <<")" <<"PTR_OP("<< $<_t_string>2 <<")" <<"IDENTIFIER("<< $<_t_string>3 <<")" <<")") CAst::postfix_expression_3 *obj=new CAst::postfix_expression_3(	$<_t_postfix_expression>1,new CAst::token($<_t_string>2),$<_t_argument_expression_list>3 ); LOG("Created postfix_expression_3: "<<obj)$<_t_postfix_expression>$=obj; LOG("Returning :"<<$<_t_postfix_expression>$) 	}
	| postfix_expression INC_OP                                                                            	{ LOG("postfix_expression:" <<"postfix_expression("<< $<_t_postfix_expression>1 <<")" <<"INC_OP("<< $<_t_string>2 <<")" <<")") CAst::postfix_expression_1 *obj=new CAst::postfix_expression_1(	$<_t_postfix_expression>1,new CAst::token($<_t_string>2) ); LOG("Created postfix_expression_1: "<<obj)$<_t_postfix_expression>$=obj; LOG("Returning :"<<$<_t_postfix_expression>$) 	}
	| postfix_expression DEC_OP                                                                            	{ LOG("postfix_expression:" <<"postfix_expression("<< $<_t_postfix_expression>1 <<")" <<"DEC_OP("<< $<_t_string>2 <<")" <<")") CAst::postfix_expression_1 *obj=new CAst::postfix_expression_1(	$<_t_postfix_expression>1,new CAst::token($<_t_string>2) ); LOG("Created postfix_expression_1: "<<obj)$<_t_postfix_expression>$=obj; LOG("Returning :"<<$<_t_postfix_expression>$) 	}
	;



and_expression 
	: equality_expression                                                                                  	{ LOG("and_expression:" <<"equality_expression("<< $<_t_equality_expression>1 <<")" <<")") CAst::and_expression_item *obj=new CAst::and_expression_item(	$<_t_equality_expression>1 ); LOG("Created and_expression_item: "<<obj)CAst::and_expression *lst=new CAst::and_expression;lst->append(obj);$<_t_and_expression>$=lst; LOG("Created List and_expression: "<<lst)LOG("Returning :"<<$<_t_and_expression>$) 	}
	| and_expression '&' equality_expression                                                               	{ LOG("and_expression:" <<"and_expression("<< $<_t_and_expression>1 <<")" <<"'&'("<< $<_t_string>2 <<")" <<"equality_expression("<< $<_t_equality_expression>3 <<")" <<")") CAst::and_expression_item *obj=new CAst::and_expression_item(	$<_t_equality_expression>3 ); LOG("Created and_expression_item: "<<obj)$<_t_and_expression>1 ->append(obj);$<_t_and_expression>$=$<_t_and_expression>1; LOG("Appended to and_expression") LOG("Returning :"<<$<_t_and_expression>$) 	}
	;



statement 
	: labeled_statement                                                                                    	{ LOG("statement:" <<"labeled_statement("<< $<_t_labeled_statement>1 <<")" <<")") CAst::statement_2 *obj=new CAst::statement_2(	$<_t_labeled_statement>1 ); LOG("Created statement_2: "<<obj)$<_t_statement>$=obj; LOG("Returning :"<<$<_t_statement>$) 	}
	| compound_statement                                                                                   	{ LOG("statement:" <<"compound_statement("<< $<_t_compound_statement>1 <<")" <<")") CAst::statement_3 *obj=new CAst::statement_3(	$<_t_compound_statement>1 ); LOG("Created statement_3: "<<obj)$<_t_statement>$=obj; LOG("Returning :"<<$<_t_statement>$) 	}
	| expression_statement                                                                                 	{ LOG("statement:" <<"expression_statement("<< $<_t_expression_statement>1 <<")" <<")") CAst::statement_4 *obj=new CAst::statement_4(	$<_t_expression_statement>1 ); LOG("Created statement_4: "<<obj)$<_t_statement>$=obj; LOG("Returning :"<<$<_t_statement>$) 	}
	| selection_statement                                                                                  	{ LOG("statement:" <<"selection_statement("<< $<_t_selection_statement>1 <<")" <<")") CAst::statement_5 *obj=new CAst::statement_5(	$<_t_selection_statement>1 ); LOG("Created statement_5: "<<obj)$<_t_statement>$=obj; LOG("Returning :"<<$<_t_statement>$) 	}
	| iteration_statement                                                                                  	{ LOG("statement:" <<"iteration_statement("<< $<_t_iteration_statement>1 <<")" <<")") CAst::statement_6 *obj=new CAst::statement_6(	$<_t_iteration_statement>1 ); LOG("Created statement_6: "<<obj)$<_t_statement>$=obj; LOG("Returning :"<<$<_t_statement>$) 	}
	| jump_statement                                                                                       	{ LOG("statement:" <<"jump_statement("<< $<_t_jump_statement>1 <<")" <<")") CAst::statement_1 *obj=new CAst::statement_1(	$<_t_jump_statement>1 ); LOG("Created statement_1: "<<obj)$<_t_statement>$=obj; LOG("Returning :"<<$<_t_statement>$) 	}
	;



cast_expression 
	: unary_expression                                                                                     	{ LOG("cast_expression:" <<"unary_expression("<< $<_t_unary_expression>1 <<")" <<")") CAst::cast_expression_2 *obj=new CAst::cast_expression_2(	$<_t_unary_expression>1 ); LOG("Created cast_expression_2: "<<obj)$<_t_cast_expression>$=obj; LOG("Returning :"<<$<_t_cast_expression>$) 	}
	| '(' type_name ')' cast_expression                                                                    	{ LOG("cast_expression:" <<"'('("<< $<_t_string>1 <<")" <<"type_name("<< $<_t_type_name>2 <<")" <<"')'("<< $<_t_string>3 <<")" <<"cast_expression("<< $<_t_cast_expression>4 <<")" <<")") CAst::cast_expression_1 *obj=new CAst::cast_expression_1(	$<_t_type_name>2,$<_t_cast_expression>4 ); LOG("Created cast_expression_1: "<<obj)$<_t_cast_expression>$=obj; LOG("Returning :"<<$<_t_cast_expression>$) 	}
	;



init_declarator 
	: declarator                                                                                           	{ LOG("init_declarator:" <<"declarator("<< $<_t_declarator>1 <<")" <<")") CAst::init_declarator *obj=new CAst::init_declarator(	$<_t_declarator>1,NULL,NULL ); LOG("Created init_declarator: "<<obj)$<_t_init_declarator>$=obj; LOG("Returning :"<<$<_t_init_declarator>$) 	}
	| declarator '=' initializer                                                                           	{ LOG("init_declarator:" <<"declarator("<< $<_t_declarator>1 <<")" <<"'='("<< $<_t_string>2 <<")" <<"initializer("<< $<_t_initializer>3 <<")" <<")") CAst::init_declarator *obj=new CAst::init_declarator(	$<_t_declarator>1,new CAst::token($<_t_string>2),$<_t_initializer>3 ); LOG("Created init_declarator: "<<obj)$<_t_init_declarator>$=obj; LOG("Returning :"<<$<_t_init_declarator>$) 	}
	;



struct_declarator_list 
	: struct_declarator                                                                                    	{ LOG("struct_declarator_list:" <<"struct_declarator("<< $<_t_struct_declarator>1 <<")" <<")") CAst::struct_declarator_list_item *obj=new CAst::struct_declarator_list_item(	$<_t_struct_declarator>1 ); LOG("Created struct_declarator_list_item: "<<obj)CAst::struct_declarator_list *lst=new CAst::struct_declarator_list;lst->append(obj);$<_t_struct_declarator_list>$=lst; LOG("Created List struct_declarator_list: "<<lst)LOG("Returning :"<<$<_t_struct_declarator_list>$) 	}
	| struct_declarator_list ',' struct_declarator                                                         	{ LOG("struct_declarator_list:" <<"struct_declarator_list("<< $<_t_struct_declarator_list>1 <<")" <<"','("<< $<_t_string>2 <<")" <<"struct_declarator("<< $<_t_struct_declarator>3 <<")" <<")") CAst::struct_declarator_list_item *obj=new CAst::struct_declarator_list_item(	$<_t_struct_declarator>3 ); LOG("Created struct_declarator_list_item: "<<obj)$<_t_struct_declarator_list>1 ->append(obj);$<_t_struct_declarator_list>$=$<_t_struct_declarator_list>1; LOG("Appended to struct_declarator_list") LOG("Returning :"<<$<_t_struct_declarator_list>$) 	}
	;



logical_or_expression 
	: logical_and_expression                                                                               	{ LOG("logical_or_expression:" <<"logical_and_expression("<< $<_t_logical_and_expression>1 <<")" <<")") CAst::logical_or_expression_item *obj=new CAst::logical_or_expression_item(	$<_t_logical_and_expression>1 ); LOG("Created logical_or_expression_item: "<<obj)CAst::logical_or_expression *lst=new CAst::logical_or_expression;lst->append(obj);$<_t_logical_or_expression>$=lst; LOG("Created List logical_or_expression: "<<lst)LOG("Returning :"<<$<_t_logical_or_expression>$) 	}
	| logical_or_expression OR_OP logical_and_expression                                                   	{ LOG("logical_or_expression:" <<"logical_or_expression("<< $<_t_logical_or_expression>1 <<")" <<"OR_OP("<< $<_t_string>2 <<")" <<"logical_and_expression("<< $<_t_logical_and_expression>3 <<")" <<")") CAst::logical_or_expression_item *obj=new CAst::logical_or_expression_item(	$<_t_logical_and_expression>3 ); LOG("Created logical_or_expression_item: "<<obj)$<_t_logical_or_expression>1 ->append(obj);$<_t_logical_or_expression>$=$<_t_logical_or_expression>1; LOG("Appended to logical_or_expression") LOG("Returning :"<<$<_t_logical_or_expression>$) 	}
	;



unary_operator 
	: '&'                                                                                                  	{ LOG("unary_operator:" <<"'&'("<< $<_t_string>1 <<")" <<")") CAst::unary_operator *obj=new CAst::unary_operator(	new CAst::token($<_t_string>1) ); LOG("Created unary_operator: "<<obj)$<_t_unary_operator>$=obj; LOG("Returning :"<<$<_t_unary_operator>$) 	}
	| '*'                                                                                                  	{ LOG("unary_operator:" <<"'*'("<< $<_t_string>1 <<")" <<")") CAst::unary_operator *obj=new CAst::unary_operator(	new CAst::token($<_t_string>1) ); LOG("Created unary_operator: "<<obj)$<_t_unary_operator>$=obj; LOG("Returning :"<<$<_t_unary_operator>$) 	}
	| '+'                                                                                                  	{ LOG("unary_operator:" <<"'+'("<< $<_t_string>1 <<")" <<")") CAst::unary_operator *obj=new CAst::unary_operator(	new CAst::token($<_t_string>1) ); LOG("Created unary_operator: "<<obj)$<_t_unary_operator>$=obj; LOG("Returning :"<<$<_t_unary_operator>$) 	}
	| '-'                                                                                                  	{ LOG("unary_operator:" <<"'-'("<< $<_t_string>1 <<")" <<")") CAst::unary_operator *obj=new CAst::unary_operator(	new CAst::token($<_t_string>1) ); LOG("Created unary_operator: "<<obj)$<_t_unary_operator>$=obj; LOG("Returning :"<<$<_t_unary_operator>$) 	}
	| '~'                                                                                                  	{ LOG("unary_operator:" <<"'~'("<< $<_t_string>1 <<")" <<")") CAst::unary_operator *obj=new CAst::unary_operator(	new CAst::token($<_t_string>1) ); LOG("Created unary_operator: "<<obj)$<_t_unary_operator>$=obj; LOG("Returning :"<<$<_t_unary_operator>$) 	}
	| '!'                                                                                                  	{ LOG("unary_operator:" <<"'!'("<< $<_t_string>1 <<")" <<")") CAst::unary_operator *obj=new CAst::unary_operator(	new CAst::token($<_t_string>1) ); LOG("Created unary_operator: "<<obj)$<_t_unary_operator>$=obj; LOG("Returning :"<<$<_t_unary_operator>$) 	}
	;



relational_expression 
	: shift_expression                                                                                     	{ LOG("relational_expression:" <<"shift_expression("<< $<_t_shift_expression>1 <<")" <<")") CAst::relational_expression_item *obj=new CAst::relational_expression_item(	NULL,$<_t_shift_expression>1 ); LOG("Created relational_expression_item: "<<obj)CAst::relational_expression *lst=new CAst::relational_expression;lst->append(obj);$<_t_relational_expression>$=lst; LOG("Created List relational_expression: "<<lst)LOG("Returning :"<<$<_t_relational_expression>$) 	}
	| relational_expression '<' shift_expression                                                           	{ LOG("relational_expression:" <<"relational_expression("<< $<_t_relational_expression>1 <<")" <<"'<'("<< $<_t_string>2 <<")" <<"shift_expression("<< $<_t_shift_expression>3 <<")" <<")") CAst::relational_expression_item *obj=new CAst::relational_expression_item(	new CAst::token($<_t_string>2),$<_t_shift_expression>3 ); LOG("Created relational_expression_item: "<<obj)$<_t_relational_expression>1 ->append(obj);$<_t_relational_expression>$=$<_t_relational_expression>1; LOG("Appended to relational_expression") LOG("Returning :"<<$<_t_relational_expression>$) 	}
	| relational_expression '>' shift_expression                                                           	{ LOG("relational_expression:" <<"relational_expression("<< $<_t_relational_expression>1 <<")" <<"'>'("<< $<_t_string>2 <<")" <<"shift_expression("<< $<_t_shift_expression>3 <<")" <<")") CAst::relational_expression_item *obj=new CAst::relational_expression_item(	new CAst::token($<_t_string>2),$<_t_shift_expression>3 ); LOG("Created relational_expression_item: "<<obj)$<_t_relational_expression>1 ->append(obj);$<_t_relational_expression>$=$<_t_relational_expression>1; LOG("Appended to relational_expression") LOG("Returning :"<<$<_t_relational_expression>$) 	}
	| relational_expression LE_OP shift_expression                                                         	{ LOG("relational_expression:" <<"relational_expression("<< $<_t_relational_expression>1 <<")" <<"LE_OP("<< $<_t_string>2 <<")" <<"shift_expression("<< $<_t_shift_expression>3 <<")" <<")") CAst::relational_expression_item *obj=new CAst::relational_expression_item(	new CAst::token($<_t_string>2),$<_t_shift_expression>3 ); LOG("Created relational_expression_item: "<<obj)$<_t_relational_expression>1 ->append(obj);$<_t_relational_expression>$=$<_t_relational_expression>1; LOG("Appended to relational_expression") LOG("Returning :"<<$<_t_relational_expression>$) 	}
	| relational_expression GE_OP shift_expression                                                         	{ LOG("relational_expression:" <<"relational_expression("<< $<_t_relational_expression>1 <<")" <<"GE_OP("<< $<_t_string>2 <<")" <<"shift_expression("<< $<_t_shift_expression>3 <<")" <<")") CAst::relational_expression_item *obj=new CAst::relational_expression_item(	new CAst::token($<_t_string>2),$<_t_shift_expression>3 ); LOG("Created relational_expression_item: "<<obj)$<_t_relational_expression>1 ->append(obj);$<_t_relational_expression>$=$<_t_relational_expression>1; LOG("Appended to relational_expression") LOG("Returning :"<<$<_t_relational_expression>$) 	}
	;



struct_or_union 
	: STRUCT                                                                                               	{ LOG("struct_or_union:" <<"STRUCT("<< $<_t_string>1 <<")" <<")") CAst::struct_or_union *obj=new CAst::struct_or_union(	new CAst::token($<_t_string>1) ); LOG("Created struct_or_union: "<<obj)$<_t_struct_or_union>$=obj; LOG("Returning :"<<$<_t_struct_or_union>$) 	}
	| UNION                                                                                                	{ LOG("struct_or_union:" <<"UNION("<< $<_t_string>1 <<")" <<")") CAst::struct_or_union *obj=new CAst::struct_or_union(	new CAst::token($<_t_string>1) ); LOG("Created struct_or_union: "<<obj)$<_t_struct_or_union>$=obj; LOG("Returning :"<<$<_t_struct_or_union>$) 	}
	;



enumerator 
	: IDENTIFIER                                                                                           	{ LOG("enumerator:" <<"IDENTIFIER("<< $<_t_string>1 <<")" <<")") CAst::enumerator *obj=new CAst::enumerator(	new CAst::token($<_t_string>1),NULL,NULL ); LOG("Created enumerator: "<<obj)$<_t_enumerator>$=obj; LOG("Returning :"<<$<_t_enumerator>$) 	}
	| IDENTIFIER '=' constant_expression                                                                   	{ LOG("enumerator:" <<"IDENTIFIER("<< $<_t_string>1 <<")" <<"'='("<< $<_t_string>2 <<")" <<"constant_expression("<< $<_t_constant_expression>3 <<")" <<")") CAst::enumerator *obj=new CAst::enumerator(	new CAst::token($<_t_string>1),new CAst::token($<_t_string>2),$<_t_constant_expression>3 ); LOG("Created enumerator: "<<obj)$<_t_enumerator>$=obj; LOG("Returning :"<<$<_t_enumerator>$) 	}
	;



assignment_expression 
	: conditional_expression                                                                               	{ LOG("assignment_expression:" <<"conditional_expression("<< $<_t_conditional_expression>1 <<")" <<")") CAst::assignment_expression_2 *obj=new CAst::assignment_expression_2(	$<_t_conditional_expression>1 ); LOG("Created assignment_expression_2: "<<obj)$<_t_assignment_expression>$=obj; LOG("Returning :"<<$<_t_assignment_expression>$) 	}
	| unary_expression assignment_operator assignment_expression                                           	{ LOG("assignment_expression:" <<"unary_expression("<< $<_t_unary_expression>1 <<")" <<"assignment_operator("<< $<_t_assignment_operator>2 <<")" <<"assignment_expression("<< $<_t_assignment_expression>3 <<")" <<")") CAst::assignment_expression_1 *obj=new CAst::assignment_expression_1(	$<_t_unary_expression>1,$<_t_assignment_operator>2,$<_t_assignment_expression>3 ); LOG("Created assignment_expression_1: "<<obj)$<_t_assignment_expression>$=obj; LOG("Returning :"<<$<_t_assignment_expression>$) 	}
	;



parameter_type_list 
	: parameter_list                                                                                       	{ LOG("parameter_type_list:" <<"parameter_list("<< $<_t_parameter_list>1 <<")" <<")") CAst::parameter_type_list *obj=new CAst::parameter_type_list(	$<_t_parameter_list>1,NULL,NULL ); LOG("Created parameter_type_list: "<<obj)$<_t_parameter_type_list>$=obj; LOG("Returning :"<<$<_t_parameter_type_list>$) 	}
	| parameter_list ',' ELLIPSIS                                                                          	{ LOG("parameter_type_list:" <<"parameter_list("<< $<_t_parameter_list>1 <<")" <<"','("<< $<_t_string>2 <<")" <<"ELLIPSIS("<< $<_t_string>3 <<")" <<")") CAst::parameter_type_list *obj=new CAst::parameter_type_list(	$<_t_parameter_list>1,new CAst::token($<_t_string>2),new CAst::token($<_t_string>3) ); LOG("Created parameter_type_list: "<<obj)$<_t_parameter_type_list>$=obj; LOG("Returning :"<<$<_t_parameter_type_list>$) 	}
	;



parameter_declaration 
	: declaration_specifiers declarator                                                                    	{ LOG("parameter_declaration:" <<"declaration_specifiers("<< $<_t_declaration_specifiers>1 <<")" <<"declarator("<< $<_t_declarator>2 <<")" <<")") CAst::parameter_declaration_1 *obj=new CAst::parameter_declaration_1(	$<_t_declaration_specifiers>1,$<_t_declarator>2 ); LOG("Created parameter_declaration_1: "<<obj)$<_t_parameter_declaration>$=obj; LOG("Returning :"<<$<_t_parameter_declaration>$) 	}
	| declaration_specifiers abstract_declarator                                                           	{ LOG("parameter_declaration:" <<"declaration_specifiers("<< $<_t_declaration_specifiers>1 <<")" <<"abstract_declarator("<< $<_t_abstract_declarator>2 <<")" <<")") CAst::parameter_declaration_2 *obj=new CAst::parameter_declaration_2(	$<_t_declaration_specifiers>1,$<_t_abstract_declarator>2 ); LOG("Created parameter_declaration_2: "<<obj)$<_t_parameter_declaration>$=obj; LOG("Returning :"<<$<_t_parameter_declaration>$) 	}
	| declaration_specifiers                                                                               	{ LOG("parameter_declaration:" <<"declaration_specifiers("<< $<_t_declaration_specifiers>1 <<")" <<")") CAst::parameter_declaration_1 *obj=new CAst::parameter_declaration_1(	$<_t_declaration_specifiers>1,NULL ); LOG("Created parameter_declaration_1: "<<obj)$<_t_parameter_declaration>$=obj; LOG("Returning :"<<$<_t_parameter_declaration>$) 	}
	;



multiplicative_expression 
	: cast_expression                                                                                      	{ LOG("multiplicative_expression:" <<"cast_expression("<< $<_t_cast_expression>1 <<")" <<")") CAst::multiplicative_expression_item *obj=new CAst::multiplicative_expression_item(	NULL,$<_t_cast_expression>1 ); LOG("Created multiplicative_expression_item: "<<obj)CAst::multiplicative_expression *lst=new CAst::multiplicative_expression;lst->append(obj);$<_t_multiplicative_expression>$=lst; LOG("Created List multiplicative_expression: "<<lst)LOG("Returning :"<<$<_t_multiplicative_expression>$) 	}
	| multiplicative_expression '*' cast_expression                                                        	{ LOG("multiplicative_expression:" <<"multiplicative_expression("<< $<_t_multiplicative_expression>1 <<")" <<"'*'("<< $<_t_string>2 <<")" <<"cast_expression("<< $<_t_cast_expression>3 <<")" <<")") CAst::multiplicative_expression_item *obj=new CAst::multiplicative_expression_item(	new CAst::token($<_t_string>2),$<_t_cast_expression>3 ); LOG("Created multiplicative_expression_item: "<<obj)$<_t_multiplicative_expression>1 ->append(obj);$<_t_multiplicative_expression>$=$<_t_multiplicative_expression>1; LOG("Appended to multiplicative_expression") LOG("Returning :"<<$<_t_multiplicative_expression>$) 	}
	| multiplicative_expression '/' cast_expression                                                        	{ LOG("multiplicative_expression:" <<"multiplicative_expression("<< $<_t_multiplicative_expression>1 <<")" <<"'/'("<< $<_t_string>2 <<")" <<"cast_expression("<< $<_t_cast_expression>3 <<")" <<")") CAst::multiplicative_expression_item *obj=new CAst::multiplicative_expression_item(	new CAst::token($<_t_string>2),$<_t_cast_expression>3 ); LOG("Created multiplicative_expression_item: "<<obj)$<_t_multiplicative_expression>1 ->append(obj);$<_t_multiplicative_expression>$=$<_t_multiplicative_expression>1; LOG("Appended to multiplicative_expression") LOG("Returning :"<<$<_t_multiplicative_expression>$) 	}
	| multiplicative_expression '%' cast_expression                                                        	{ LOG("multiplicative_expression:" <<"multiplicative_expression("<< $<_t_multiplicative_expression>1 <<")" <<"'%'("<< $<_t_string>2 <<")" <<"cast_expression("<< $<_t_cast_expression>3 <<")" <<")") CAst::multiplicative_expression_item *obj=new CAst::multiplicative_expression_item(	new CAst::token($<_t_string>2),$<_t_cast_expression>3 ); LOG("Created multiplicative_expression_item: "<<obj)$<_t_multiplicative_expression>1 ->append(obj);$<_t_multiplicative_expression>$=$<_t_multiplicative_expression>1; LOG("Appended to multiplicative_expression") LOG("Returning :"<<$<_t_multiplicative_expression>$) 	}
	;



type_qualifier_list 
	: type_qualifier                                                                                       	{ LOG("type_qualifier_list:" <<"type_qualifier("<< $<_t_type_qualifier>1 <<")" <<")") CAst::type_qualifier_list_item *obj=new CAst::type_qualifier_list_item(	$<_t_type_qualifier>1 ); LOG("Created type_qualifier_list_item: "<<obj)CAst::type_qualifier_list *lst=new CAst::type_qualifier_list;lst->append(obj);$<_t_type_qualifier_list>$=lst; LOG("Created List type_qualifier_list: "<<lst)LOG("Returning :"<<$<_t_type_qualifier_list>$) 	}
	| type_qualifier_list type_qualifier                                                                   	{ LOG("type_qualifier_list:" <<"type_qualifier_list("<< $<_t_type_qualifier_list>1 <<")" <<"type_qualifier("<< $<_t_type_qualifier>2 <<")" <<")") CAst::type_qualifier_list_item *obj=new CAst::type_qualifier_list_item(	$<_t_type_qualifier>2 ); LOG("Created type_qualifier_list_item: "<<obj)$<_t_type_qualifier_list>1 ->append(obj);$<_t_type_qualifier_list>$=$<_t_type_qualifier_list>1; LOG("Appended to type_qualifier_list") LOG("Returning :"<<$<_t_type_qualifier_list>$) 	}
	;



argument_expression_list 
	: assignment_expression                                                                                	{ LOG("argument_expression_list:" <<"assignment_expression("<< $<_t_assignment_expression>1 <<")" <<")") CAst::argument_expression_list_item *obj=new CAst::argument_expression_list_item(	$<_t_assignment_expression>1 ); LOG("Created argument_expression_list_item: "<<obj)CAst::argument_expression_list *lst=new CAst::argument_expression_list;lst->append(obj);$<_t_argument_expression_list>$=lst; LOG("Created List argument_expression_list: "<<lst)LOG("Returning :"<<$<_t_argument_expression_list>$) 	}
	| argument_expression_list ',' assignment_expression                                                   	{ LOG("argument_expression_list:" <<"argument_expression_list("<< $<_t_argument_expression_list>1 <<")" <<"','("<< $<_t_string>2 <<")" <<"assignment_expression("<< $<_t_assignment_expression>3 <<")" <<")") CAst::argument_expression_list_item *obj=new CAst::argument_expression_list_item(	$<_t_assignment_expression>3 ); LOG("Created argument_expression_list_item: "<<obj)$<_t_argument_expression_list>1 ->append(obj);$<_t_argument_expression_list>$=$<_t_argument_expression_list>1; LOG("Appended to argument_expression_list") LOG("Returning :"<<$<_t_argument_expression_list>$) 	}
	;



direct_abstract_declarator 
	: '(' abstract_declarator ')'                                                                          	{ LOG("direct_abstract_declarator:" <<"'('("<< $<_t_string>1 <<")" <<"abstract_declarator("<< $<_t_abstract_declarator>2 <<")" <<"')'("<< $<_t_string>3 <<")" <<")") CAst::direct_abstract_declarator_2 *obj=new CAst::direct_abstract_declarator_2(	$<_t_abstract_declarator>2 ); LOG("Created direct_abstract_declarator_2: "<<obj)$<_t_direct_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_direct_abstract_declarator>$) 	}
	| '[' ']'                                                                                              	{ LOG("direct_abstract_declarator:" <<"'['("<< $<_t_string>1 <<")" <<"']'("<< $<_t_string>2 <<")" <<")") CAst::direct_abstract_declarator_3 *obj=new CAst::direct_abstract_declarator_3(	NULL,NULL ); LOG("Created direct_abstract_declarator_3: "<<obj)$<_t_direct_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_direct_abstract_declarator>$) 	}
	| '[' constant_expression ']'                                                                          	{ LOG("direct_abstract_declarator:" <<"'['("<< $<_t_string>1 <<")" <<"constant_expression("<< $<_t_constant_expression>2 <<")" <<"']'("<< $<_t_string>3 <<")" <<")") CAst::direct_abstract_declarator_3 *obj=new CAst::direct_abstract_declarator_3(	NULL,$<_t_constant_expression>2 ); LOG("Created direct_abstract_declarator_3: "<<obj)$<_t_direct_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_direct_abstract_declarator>$) 	}
	| direct_abstract_declarator '[' ']'                                                                   	{ LOG("direct_abstract_declarator:" <<"direct_abstract_declarator("<< $<_t_direct_abstract_declarator>1 <<")" <<"'['("<< $<_t_string>2 <<")" <<"']'("<< $<_t_string>3 <<")" <<")") CAst::direct_abstract_declarator_3 *obj=new CAst::direct_abstract_declarator_3(	$<_t_direct_abstract_declarator>1,NULL ); LOG("Created direct_abstract_declarator_3: "<<obj)$<_t_direct_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_direct_abstract_declarator>$) 	}
	| direct_abstract_declarator '[' constant_expression ']'                                               	{ LOG("direct_abstract_declarator:" <<"direct_abstract_declarator("<< $<_t_direct_abstract_declarator>1 <<")" <<"'['("<< $<_t_string>2 <<")" <<"constant_expression("<< $<_t_constant_expression>3 <<")" <<"']'("<< $<_t_string>4 <<")" <<")") CAst::direct_abstract_declarator_3 *obj=new CAst::direct_abstract_declarator_3(	$<_t_direct_abstract_declarator>1,$<_t_constant_expression>3 ); LOG("Created direct_abstract_declarator_3: "<<obj)$<_t_direct_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_direct_abstract_declarator>$) 	}
	| '(' ')'                                                                                              	{ LOG("direct_abstract_declarator:" <<"'('("<< $<_t_string>1 <<")" <<"')'("<< $<_t_string>2 <<")" <<")") CAst::direct_abstract_declarator_1 *obj=new CAst::direct_abstract_declarator_1(	NULL,NULL ); LOG("Created direct_abstract_declarator_1: "<<obj)$<_t_direct_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_direct_abstract_declarator>$) 	}
	| '(' parameter_type_list ')'                                                                          	{ LOG("direct_abstract_declarator:" <<"'('("<< $<_t_string>1 <<")" <<"parameter_type_list("<< $<_t_parameter_type_list>2 <<")" <<"')'("<< $<_t_string>3 <<")" <<")") CAst::direct_abstract_declarator_1 *obj=new CAst::direct_abstract_declarator_1(	NULL,$<_t_parameter_type_list>2 ); LOG("Created direct_abstract_declarator_1: "<<obj)$<_t_direct_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_direct_abstract_declarator>$) 	}
	| direct_abstract_declarator '(' ')'                                                                   	{ LOG("direct_abstract_declarator:" <<"direct_abstract_declarator("<< $<_t_direct_abstract_declarator>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"')'("<< $<_t_string>3 <<")" <<")") CAst::direct_abstract_declarator_1 *obj=new CAst::direct_abstract_declarator_1(	$<_t_direct_abstract_declarator>1,NULL ); LOG("Created direct_abstract_declarator_1: "<<obj)$<_t_direct_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_direct_abstract_declarator>$) 	}
	| direct_abstract_declarator '(' parameter_type_list ')'                                               	{ LOG("direct_abstract_declarator:" <<"direct_abstract_declarator("<< $<_t_direct_abstract_declarator>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"parameter_type_list("<< $<_t_parameter_type_list>3 <<")" <<"')'("<< $<_t_string>4 <<")" <<")") CAst::direct_abstract_declarator_1 *obj=new CAst::direct_abstract_declarator_1(	$<_t_direct_abstract_declarator>1,$<_t_parameter_type_list>3 ); LOG("Created direct_abstract_declarator_1: "<<obj)$<_t_direct_abstract_declarator>$=obj; LOG("Returning :"<<$<_t_direct_abstract_declarator>$) 	}
	;



equality_expression 
	: relational_expression                                                                                	{ LOG("equality_expression:" <<"relational_expression("<< $<_t_relational_expression>1 <<")" <<")") CAst::equality_expression_item *obj=new CAst::equality_expression_item(	NULL,$<_t_relational_expression>1 ); LOG("Created equality_expression_item: "<<obj)CAst::equality_expression *lst=new CAst::equality_expression;lst->append(obj);$<_t_equality_expression>$=lst; LOG("Created List equality_expression: "<<lst)LOG("Returning :"<<$<_t_equality_expression>$) 	}
	| equality_expression EQ_OP relational_expression                                                      	{ LOG("equality_expression:" <<"equality_expression("<< $<_t_equality_expression>1 <<")" <<"EQ_OP("<< $<_t_string>2 <<")" <<"relational_expression("<< $<_t_relational_expression>3 <<")" <<")") CAst::equality_expression_item *obj=new CAst::equality_expression_item(	new CAst::token($<_t_string>2),$<_t_relational_expression>3 ); LOG("Created equality_expression_item: "<<obj)$<_t_equality_expression>1 ->append(obj);$<_t_equality_expression>$=$<_t_equality_expression>1; LOG("Appended to equality_expression") LOG("Returning :"<<$<_t_equality_expression>$) 	}
	| equality_expression NE_OP relational_expression                                                      	{ LOG("equality_expression:" <<"equality_expression("<< $<_t_equality_expression>1 <<")" <<"NE_OP("<< $<_t_string>2 <<")" <<"relational_expression("<< $<_t_relational_expression>3 <<")" <<")") CAst::equality_expression_item *obj=new CAst::equality_expression_item(	new CAst::token($<_t_string>2),$<_t_relational_expression>3 ); LOG("Created equality_expression_item: "<<obj)$<_t_equality_expression>1 ->append(obj);$<_t_equality_expression>$=$<_t_equality_expression>1; LOG("Appended to equality_expression") LOG("Returning :"<<$<_t_equality_expression>$) 	}
	;



primary_expression 
	: IDENTIFIER                                                                                           	{ LOG("primary_expression:" <<"IDENTIFIER("<< $<_t_string>1 <<")" <<")") CAst::primary_expression_1 *obj=new CAst::primary_expression_1(	new CAst::token($<_t_string>1) ); LOG("Created primary_expression_1: "<<obj)$<_t_primary_expression>$=obj; LOG("Returning :"<<$<_t_primary_expression>$) 	}
	| CONSTANT                                                                                             	{ LOG("primary_expression:" <<"CONSTANT("<< $<_t_string>1 <<")" <<")") CAst::primary_expression_1 *obj=new CAst::primary_expression_1(	new CAst::token($<_t_string>1) ); LOG("Created primary_expression_1: "<<obj)$<_t_primary_expression>$=obj; LOG("Returning :"<<$<_t_primary_expression>$) 	}
	| STRING_LITERAL                                                                                       	{ LOG("primary_expression:" <<"STRING_LITERAL("<< $<_t_string>1 <<")" <<")") CAst::primary_expression_1 *obj=new CAst::primary_expression_1(	new CAst::token($<_t_string>1) ); LOG("Created primary_expression_1: "<<obj)$<_t_primary_expression>$=obj; LOG("Returning :"<<$<_t_primary_expression>$) 	}
	| '(' expression ')'                                                                                   	{ LOG("primary_expression:" <<"'('("<< $<_t_string>1 <<")" <<"expression("<< $<_t_expression>2 <<")" <<"')'("<< $<_t_string>3 <<")" <<")") CAst::primary_expression_2 *obj=new CAst::primary_expression_2(	$<_t_expression>2 ); LOG("Created primary_expression_2: "<<obj)$<_t_primary_expression>$=obj; LOG("Returning :"<<$<_t_primary_expression>$) 	}
	;



declaration_specifiers 
	: storage_class_specifier                                                                              	{ LOG("declaration_specifiers:" <<"storage_class_specifier("<< $<_t_storage_class_specifier>1 <<")" <<")") CAst::declaration_specifiers_item_1 *obj=new CAst::declaration_specifiers_item_1(	$<_t_storage_class_specifier>1 ); LOG("Created declaration_specifiers_item_1: "<<obj)CAst::declaration_specifiers *lst=new CAst::declaration_specifiers;lst->append(obj);$<_t_declaration_specifiers>$=lst; LOG("Created List declaration_specifiers: "<<lst)LOG("Returning :"<<$<_t_declaration_specifiers>$) 	}
	| storage_class_specifier declaration_specifiers                                                       	{ LOG("declaration_specifiers:" <<"storage_class_specifier("<< $<_t_storage_class_specifier>1 <<")" <<"declaration_specifiers("<< $<_t_declaration_specifiers>2 <<")" <<")") CAst::declaration_specifiers_item_1 *obj=new CAst::declaration_specifiers_item_1(	$<_t_storage_class_specifier>1 ); LOG("Created declaration_specifiers_item_1: "<<obj)$<_t_declaration_specifiers>2 ->append(obj);$<_t_declaration_specifiers>$=$<_t_declaration_specifiers>2; LOG("Appended to declaration_specifiers") LOG("Returning :"<<$<_t_declaration_specifiers>$) 	}
	| type_specifier                                                                                       	{ LOG("declaration_specifiers:" <<"type_specifier("<< $<_t_type_specifier>1 <<")" <<")") CAst::declaration_specifiers_item_2 *obj=new CAst::declaration_specifiers_item_2(	$<_t_type_specifier>1 ); LOG("Created declaration_specifiers_item_2: "<<obj)CAst::declaration_specifiers *lst=new CAst::declaration_specifiers;lst->append(obj);$<_t_declaration_specifiers>$=lst; LOG("Created List declaration_specifiers: "<<lst)LOG("Returning :"<<$<_t_declaration_specifiers>$) 	}
	| type_specifier declaration_specifiers                                                                	{ LOG("declaration_specifiers:" <<"type_specifier("<< $<_t_type_specifier>1 <<")" <<"declaration_specifiers("<< $<_t_declaration_specifiers>2 <<")" <<")") CAst::declaration_specifiers_item_2 *obj=new CAst::declaration_specifiers_item_2(	$<_t_type_specifier>1 ); LOG("Created declaration_specifiers_item_2: "<<obj)$<_t_declaration_specifiers>2 ->append(obj);$<_t_declaration_specifiers>$=$<_t_declaration_specifiers>2; LOG("Appended to declaration_specifiers") LOG("Returning :"<<$<_t_declaration_specifiers>$) 	}
	| type_qualifier                                                                                       	{ LOG("declaration_specifiers:" <<"type_qualifier("<< $<_t_type_qualifier>1 <<")" <<")") CAst::declaration_specifiers_item_3 *obj=new CAst::declaration_specifiers_item_3(	$<_t_type_qualifier>1 ); LOG("Created declaration_specifiers_item_3: "<<obj)CAst::declaration_specifiers *lst=new CAst::declaration_specifiers;lst->append(obj);$<_t_declaration_specifiers>$=lst; LOG("Created List declaration_specifiers: "<<lst)LOG("Returning :"<<$<_t_declaration_specifiers>$) 	}
	| type_qualifier declaration_specifiers                                                                	{ LOG("declaration_specifiers:" <<"type_qualifier("<< $<_t_type_qualifier>1 <<")" <<"declaration_specifiers("<< $<_t_declaration_specifiers>2 <<")" <<")") CAst::declaration_specifiers_item_3 *obj=new CAst::declaration_specifiers_item_3(	$<_t_type_qualifier>1 ); LOG("Created declaration_specifiers_item_3: "<<obj)$<_t_declaration_specifiers>2 ->append(obj);$<_t_declaration_specifiers>$=$<_t_declaration_specifiers>2; LOG("Appended to declaration_specifiers") LOG("Returning :"<<$<_t_declaration_specifiers>$) 	}
	;



declaration 
	: declaration_specifiers ';'                                                                           	{ LOG("declaration:" <<"declaration_specifiers("<< $<_t_declaration_specifiers>1 <<")" <<"';'("<< $<_t_string>2 <<")" <<")") CAst::declaration *obj=new CAst::declaration(	$<_t_declaration_specifiers>1,NULL ); LOG("Created declaration: "<<obj)$<_t_declaration>$=obj; LOG("Returning :"<<$<_t_declaration>$) 	}
	| declaration_specifiers init_declarator_list ';'                                                      	{ LOG("declaration:" <<"declaration_specifiers("<< $<_t_declaration_specifiers>1 <<")" <<"init_declarator_list("<< $<_t_init_declarator_list>2 <<")" <<"';'("<< $<_t_string>3 <<")" <<")") CAst::declaration *obj=new CAst::declaration(	$<_t_declaration_specifiers>1,$<_t_init_declarator_list>2 ); LOG("Created declaration: "<<obj)$<_t_declaration>$=obj; LOG("Returning :"<<$<_t_declaration>$) 	}
	;



direct_declarator 
	: IDENTIFIER                                                                                           	{ LOG("direct_declarator:" <<"IDENTIFIER("<< $<_t_string>1 <<")" <<")") CAst::direct_declarator_4 *obj=new CAst::direct_declarator_4(	new CAst::token($<_t_string>1) ); LOG("Created direct_declarator_4: "<<obj)$<_t_direct_declarator>$=obj; LOG("Returning :"<<$<_t_direct_declarator>$) 	}
	| '(' declarator ')'                                                                                   	{ LOG("direct_declarator:" <<"'('("<< $<_t_string>1 <<")" <<"declarator("<< $<_t_declarator>2 <<")" <<"')'("<< $<_t_string>3 <<")" <<")") CAst::direct_declarator_5 *obj=new CAst::direct_declarator_5(	$<_t_declarator>2 ); LOG("Created direct_declarator_5: "<<obj)$<_t_direct_declarator>$=obj; LOG("Returning :"<<$<_t_direct_declarator>$) 	}
	| direct_declarator '[' constant_expression ']'                                                        	{ LOG("direct_declarator:" <<"direct_declarator("<< $<_t_direct_declarator>1 <<")" <<"'['("<< $<_t_string>2 <<")" <<"constant_expression("<< $<_t_constant_expression>3 <<")" <<"']'("<< $<_t_string>4 <<")" <<")") CAst::direct_declarator_1 *obj=new CAst::direct_declarator_1(	$<_t_direct_declarator>1,$<_t_constant_expression>3 ); LOG("Created direct_declarator_1: "<<obj)$<_t_direct_declarator>$=obj; LOG("Returning :"<<$<_t_direct_declarator>$) 	}
	| direct_declarator '[' ']'                                                                            	{ LOG("direct_declarator:" <<"direct_declarator("<< $<_t_direct_declarator>1 <<")" <<"'['("<< $<_t_string>2 <<")" <<"']'("<< $<_t_string>3 <<")" <<")") CAst::direct_declarator_1 *obj=new CAst::direct_declarator_1(	$<_t_direct_declarator>1,NULL ); LOG("Created direct_declarator_1: "<<obj)$<_t_direct_declarator>$=obj; LOG("Returning :"<<$<_t_direct_declarator>$) 	}
	| direct_declarator '(' parameter_type_list ')'                                                        	{ LOG("direct_declarator:" <<"direct_declarator("<< $<_t_direct_declarator>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"parameter_type_list("<< $<_t_parameter_type_list>3 <<")" <<"')'("<< $<_t_string>4 <<")" <<")") CAst::direct_declarator_3 *obj=new CAst::direct_declarator_3(	$<_t_direct_declarator>1,$<_t_parameter_type_list>3 ); LOG("Created direct_declarator_3: "<<obj)$<_t_direct_declarator>$=obj; LOG("Returning :"<<$<_t_direct_declarator>$) 	}
	| direct_declarator '(' identifier_list ')'                                                            	{ LOG("direct_declarator:" <<"direct_declarator("<< $<_t_direct_declarator>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"identifier_list("<< $<_t_identifier_list>3 <<")" <<"')'("<< $<_t_string>4 <<")" <<")") CAst::direct_declarator_2 *obj=new CAst::direct_declarator_2(	$<_t_direct_declarator>1,$<_t_identifier_list>3 ); LOG("Created direct_declarator_2: "<<obj)$<_t_direct_declarator>$=obj; LOG("Returning :"<<$<_t_direct_declarator>$) 	}
	| direct_declarator '(' ')'                                                                            	{ LOG("direct_declarator:" <<"direct_declarator("<< $<_t_direct_declarator>1 <<")" <<"'('("<< $<_t_string>2 <<")" <<"')'("<< $<_t_string>3 <<")" <<")") CAst::direct_declarator_3 *obj=new CAst::direct_declarator_3(	$<_t_direct_declarator>1,NULL ); LOG("Created direct_declarator_3: "<<obj)$<_t_direct_declarator>$=obj; LOG("Returning :"<<$<_t_direct_declarator>$) 	}
	;



logical_and_expression 
	: inclusive_or_expression                                                                              	{ LOG("logical_and_expression:" <<"inclusive_or_expression("<< $<_t_inclusive_or_expression>1 <<")" <<")") CAst::logical_and_expression_item *obj=new CAst::logical_and_expression_item(	$<_t_inclusive_or_expression>1 ); LOG("Created logical_and_expression_item: "<<obj)CAst::logical_and_expression *lst=new CAst::logical_and_expression;lst->append(obj);$<_t_logical_and_expression>$=lst; LOG("Created List logical_and_expression: "<<lst)LOG("Returning :"<<$<_t_logical_and_expression>$) 	}
	| logical_and_expression AND_OP inclusive_or_expression                                                	{ LOG("logical_and_expression:" <<"logical_and_expression("<< $<_t_logical_and_expression>1 <<")" <<"AND_OP("<< $<_t_string>2 <<")" <<"inclusive_or_expression("<< $<_t_inclusive_or_expression>3 <<")" <<")") CAst::logical_and_expression_item *obj=new CAst::logical_and_expression_item(	$<_t_inclusive_or_expression>3 ); LOG("Created logical_and_expression_item: "<<obj)$<_t_logical_and_expression>1 ->append(obj);$<_t_logical_and_expression>$=$<_t_logical_and_expression>1; LOG("Appended to logical_and_expression") LOG("Returning :"<<$<_t_logical_and_expression>$) 	}
	;



init_declarator_list 
	: init_declarator                                                                                      	{ LOG("init_declarator_list:" <<"init_declarator("<< $<_t_init_declarator>1 <<")" <<")") CAst::init_declarator_list_item *obj=new CAst::init_declarator_list_item(	$<_t_init_declarator>1 ); LOG("Created init_declarator_list_item: "<<obj)CAst::init_declarator_list *lst=new CAst::init_declarator_list;lst->append(obj);$<_t_init_declarator_list>$=lst; LOG("Created List init_declarator_list: "<<lst)LOG("Returning :"<<$<_t_init_declarator_list>$) 	}
	| init_declarator_list ',' init_declarator                                                             	{ LOG("init_declarator_list:" <<"init_declarator_list("<< $<_t_init_declarator_list>1 <<")" <<"','("<< $<_t_string>2 <<")" <<"init_declarator("<< $<_t_init_declarator>3 <<")" <<")") CAst::init_declarator_list_item *obj=new CAst::init_declarator_list_item(	$<_t_init_declarator>3 ); LOG("Created init_declarator_list_item: "<<obj)$<_t_init_declarator_list>1 ->append(obj);$<_t_init_declarator_list>$=$<_t_init_declarator_list>1; LOG("Appended to init_declarator_list") LOG("Returning :"<<$<_t_init_declarator_list>$) 	}
	;



shift_expression 
	: additive_expression                                                                                  	{ LOG("shift_expression:" <<"additive_expression("<< $<_t_additive_expression>1 <<")" <<")") CAst::shift_expression_item *obj=new CAst::shift_expression_item(	NULL,$<_t_additive_expression>1 ); LOG("Created shift_expression_item: "<<obj)CAst::shift_expression *lst=new CAst::shift_expression;lst->append(obj);$<_t_shift_expression>$=lst; LOG("Created List shift_expression: "<<lst)LOG("Returning :"<<$<_t_shift_expression>$) 	}
	| shift_expression LEFT_OP additive_expression                                                         	{ LOG("shift_expression:" <<"shift_expression("<< $<_t_shift_expression>1 <<")" <<"LEFT_OP("<< $<_t_string>2 <<")" <<"additive_expression("<< $<_t_additive_expression>3 <<")" <<")") CAst::shift_expression_item *obj=new CAst::shift_expression_item(	new CAst::token($<_t_string>2),$<_t_additive_expression>3 ); LOG("Created shift_expression_item: "<<obj)$<_t_shift_expression>1 ->append(obj);$<_t_shift_expression>$=$<_t_shift_expression>1; LOG("Appended to shift_expression") LOG("Returning :"<<$<_t_shift_expression>$) 	}
	| shift_expression RIGHT_OP additive_expression                                                        	{ LOG("shift_expression:" <<"shift_expression("<< $<_t_shift_expression>1 <<")" <<"RIGHT_OP("<< $<_t_string>2 <<")" <<"additive_expression("<< $<_t_additive_expression>3 <<")" <<")") CAst::shift_expression_item *obj=new CAst::shift_expression_item(	new CAst::token($<_t_string>2),$<_t_additive_expression>3 ); LOG("Created shift_expression_item: "<<obj)$<_t_shift_expression>1 ->append(obj);$<_t_shift_expression>$=$<_t_shift_expression>1; LOG("Appended to shift_expression") LOG("Returning :"<<$<_t_shift_expression>$) 	}
	;



identifier_list 
	: IDENTIFIER                                                                                           	{ LOG("identifier_list:" <<"IDENTIFIER("<< $<_t_string>1 <<")" <<")") CAst::identifier_list_item *obj=new CAst::identifier_list_item(	new CAst::token($<_t_string>1) ); LOG("Created identifier_list_item: "<<obj)CAst::identifier_list *lst=new CAst::identifier_list;lst->append(obj);$<_t_identifier_list>$=lst; LOG("Created List identifier_list: "<<lst)LOG("Returning :"<<$<_t_identifier_list>$) 	}
	| identifier_list ',' IDENTIFIER                                                                       	{ LOG("identifier_list:" <<"identifier_list("<< $<_t_identifier_list>1 <<")" <<"','("<< $<_t_string>2 <<")" <<"IDENTIFIER("<< $<_t_string>3 <<")" <<")") CAst::identifier_list_item *obj=new CAst::identifier_list_item(	new CAst::token($<_t_string>3) ); LOG("Created identifier_list_item: "<<obj)$<_t_identifier_list>1 ->append(obj);$<_t_identifier_list>$=$<_t_identifier_list>1; LOG("Appended to identifier_list") LOG("Returning :"<<$<_t_identifier_list>$) 	}
	;



jump_statement 
	: GOTO IDENTIFIER ';'                                                                                  	{ LOG("jump_statement:" <<"GOTO("<< $<_t_string>1 <<")" <<"IDENTIFIER("<< $<_t_string>2 <<")" <<"';'("<< $<_t_string>3 <<")" <<")") CAst::jump_statement_1 *obj=new CAst::jump_statement_1(	new CAst::token($<_t_string>2) ); LOG("Created jump_statement_1: "<<obj)$<_t_jump_statement>$=obj; LOG("Returning :"<<$<_t_jump_statement>$) 	}
	| CONTINUE ';'                                                                                         	{ LOG("jump_statement:" <<"CONTINUE("<< $<_t_string>1 <<")" <<"';'("<< $<_t_string>2 <<")" <<")") CAst::jump_statement_3 *obj=new CAst::jump_statement_3(	new CAst::token($<_t_string>1) ); LOG("Created jump_statement_3: "<<obj)$<_t_jump_statement>$=obj; LOG("Returning :"<<$<_t_jump_statement>$) 	}
	| BREAK ';'                                                                                            	{ LOG("jump_statement:" <<"BREAK("<< $<_t_string>1 <<")" <<"';'("<< $<_t_string>2 <<")" <<")") CAst::jump_statement_3 *obj=new CAst::jump_statement_3(	new CAst::token($<_t_string>1) ); LOG("Created jump_statement_3: "<<obj)$<_t_jump_statement>$=obj; LOG("Returning :"<<$<_t_jump_statement>$) 	}
	| RETURN ';'                                                                                           	{ LOG("jump_statement:" <<"RETURN("<< $<_t_string>1 <<")" <<"';'("<< $<_t_string>2 <<")" <<")") CAst::jump_statement_2 *obj=new CAst::jump_statement_2(	NULL ); LOG("Created jump_statement_2: "<<obj)$<_t_jump_statement>$=obj; LOG("Returning :"<<$<_t_jump_statement>$) 	}
	| RETURN expression ';'                                                                                	{ LOG("jump_statement:" <<"RETURN("<< $<_t_string>1 <<")" <<"expression("<< $<_t_expression>2 <<")" <<"';'("<< $<_t_string>3 <<")" <<")") CAst::jump_statement_2 *obj=new CAst::jump_statement_2(	$<_t_expression>2 ); LOG("Created jump_statement_2: "<<obj)$<_t_jump_statement>$=obj; LOG("Returning :"<<$<_t_jump_statement>$) 	}
	;



struct_declarator 
	: declarator                                                                                           	{ LOG("struct_declarator:" <<"declarator("<< $<_t_declarator>1 <<")" <<")") CAst::struct_declarator *obj=new CAst::struct_declarator(	$<_t_declarator>1,NULL,NULL ); LOG("Created struct_declarator: "<<obj)$<_t_struct_declarator>$=obj; LOG("Returning :"<<$<_t_struct_declarator>$) 	}
	| ':' constant_expression                                                                              	{ LOG("struct_declarator:" <<"':'("<< $<_t_string>1 <<")" <<"constant_expression("<< $<_t_constant_expression>2 <<")" <<")") CAst::struct_declarator *obj=new CAst::struct_declarator(	NULL,new CAst::token($<_t_string>1),$<_t_constant_expression>2 ); LOG("Created struct_declarator: "<<obj)$<_t_struct_declarator>$=obj; LOG("Returning :"<<$<_t_struct_declarator>$) 	}
	| declarator ':' constant_expression                                                                   	{ LOG("struct_declarator:" <<"declarator("<< $<_t_declarator>1 <<")" <<"':'("<< $<_t_string>2 <<")" <<"constant_expression("<< $<_t_constant_expression>3 <<")" <<")") CAst::struct_declarator *obj=new CAst::struct_declarator(	$<_t_declarator>1,new CAst::token($<_t_string>2),$<_t_constant_expression>3 ); LOG("Created struct_declarator: "<<obj)$<_t_struct_declarator>$=obj; LOG("Returning :"<<$<_t_struct_declarator>$) 	}
	;



function_definition 
	: declaration_specifiers declarator declaration_list compound_statement                                	{ LOG("function_definition:" <<"declaration_specifiers("<< $<_t_declaration_specifiers>1 <<")" <<"declarator("<< $<_t_declarator>2 <<")" <<"declaration_list("<< $<_t_declaration_list>3 <<")" <<"compound_statement("<< $<_t_compound_statement>4 <<")" <<")") CAst::function_definition *obj=new CAst::function_definition(	$<_t_declaration_specifiers>1,$<_t_declarator>2,$<_t_declaration_list>3,$<_t_compound_statement>4 ); LOG("Created function_definition: "<<obj)$<_t_function_definition>$=obj; LOG("Returning :"<<$<_t_function_definition>$) 	}
	| declaration_specifiers declarator compound_statement                                                 	{ LOG("function_definition:" <<"declaration_specifiers("<< $<_t_declaration_specifiers>1 <<")" <<"declarator("<< $<_t_declarator>2 <<")" <<"compound_statement("<< $<_t_compound_statement>3 <<")" <<")") CAst::function_definition *obj=new CAst::function_definition(	$<_t_declaration_specifiers>1,$<_t_declarator>2,NULL,$<_t_compound_statement>3 ); LOG("Created function_definition: "<<obj)$<_t_function_definition>$=obj; LOG("Returning :"<<$<_t_function_definition>$) 	}
	| declarator declaration_list compound_statement                                                       	{ LOG("function_definition:" <<"declarator("<< $<_t_declarator>1 <<")" <<"declaration_list("<< $<_t_declaration_list>2 <<")" <<"compound_statement("<< $<_t_compound_statement>3 <<")" <<")") CAst::function_definition *obj=new CAst::function_definition(	NULL,$<_t_declarator>1,$<_t_declaration_list>2,$<_t_compound_statement>3 ); LOG("Created function_definition: "<<obj)$<_t_function_definition>$=obj; LOG("Returning :"<<$<_t_function_definition>$) 	}
	| declarator compound_statement                                                                        	{ LOG("function_definition:" <<"declarator("<< $<_t_declarator>1 <<")" <<"compound_statement("<< $<_t_compound_statement>2 <<")" <<")") CAst::function_definition *obj=new CAst::function_definition(	NULL,$<_t_declarator>1,NULL,$<_t_compound_statement>2 ); LOG("Created function_definition: "<<obj)$<_t_function_definition>$=obj; LOG("Returning :"<<$<_t_function_definition>$) 	}
	;



parameter_list 
	: parameter_declaration                                                                                	{ LOG("parameter_list:" <<"parameter_declaration("<< $<_t_parameter_declaration>1 <<")" <<")") CAst::parameter_list_item *obj=new CAst::parameter_list_item(	$<_t_parameter_declaration>1 ); LOG("Created parameter_list_item: "<<obj)CAst::parameter_list *lst=new CAst::parameter_list;lst->append(obj);$<_t_parameter_list>$=lst; LOG("Created List parameter_list: "<<lst)LOG("Returning :"<<$<_t_parameter_list>$) 	}
	| parameter_list ',' parameter_declaration                                                             	{ LOG("parameter_list:" <<"parameter_list("<< $<_t_parameter_list>1 <<")" <<"','("<< $<_t_string>2 <<")" <<"parameter_declaration("<< $<_t_parameter_declaration>3 <<")" <<")") CAst::parameter_list_item *obj=new CAst::parameter_list_item(	$<_t_parameter_declaration>3 ); LOG("Created parameter_list_item: "<<obj)$<_t_parameter_list>1 ->append(obj);$<_t_parameter_list>$=$<_t_parameter_list>1; LOG("Appended to parameter_list") LOG("Returning :"<<$<_t_parameter_list>$) 	}
	;



enum_specifier 
	: ENUM '{' enumerator_list '}'                                                                         	{ LOG("enum_specifier:" <<"ENUM("<< $<_t_string>1 <<")" <<"'{'("<< $<_t_string>2 <<")" <<"enumerator_list("<< $<_t_enumerator_list>3 <<")" <<"'}'("<< $<_t_string>4 <<")" <<")") CAst::enum_specifier *obj=new CAst::enum_specifier(	NULL,new CAst::token($<_t_string>2),$<_t_enumerator_list>3,new CAst::token($<_t_string>4) ); LOG("Created enum_specifier: "<<obj)$<_t_enum_specifier>$=obj; LOG("Returning :"<<$<_t_enum_specifier>$) 	}
	| ENUM IDENTIFIER '{' enumerator_list '}'                                                              	{ LOG("enum_specifier:" <<"ENUM("<< $<_t_string>1 <<")" <<"IDENTIFIER("<< $<_t_string>2 <<")" <<"'{'("<< $<_t_string>3 <<")" <<"enumerator_list("<< $<_t_enumerator_list>4 <<")" <<"'}'("<< $<_t_string>5 <<")" <<")") CAst::enum_specifier *obj=new CAst::enum_specifier(	new CAst::token($<_t_string>2),new CAst::token($<_t_string>3),$<_t_enumerator_list>4,new CAst::token($<_t_string>5) ); LOG("Created enum_specifier: "<<obj)$<_t_enum_specifier>$=obj; LOG("Returning :"<<$<_t_enum_specifier>$) 	}
	| ENUM IDENTIFIER                                                                                      	{ LOG("enum_specifier:" <<"ENUM("<< $<_t_string>1 <<")" <<"IDENTIFIER("<< $<_t_string>2 <<")" <<")") CAst::enum_specifier *obj=new CAst::enum_specifier(	new CAst::token($<_t_string>2),NULL,NULL,NULL ); LOG("Created enum_specifier: "<<obj)$<_t_enum_specifier>$=obj; LOG("Returning :"<<$<_t_enum_specifier>$) 	}
	;



type_qualifier 
	: CONST                                                                                                	{ LOG("type_qualifier:" <<"CONST("<< $<_t_string>1 <<")" <<")") CAst::type_qualifier *obj=new CAst::type_qualifier(	new CAst::token($<_t_string>1) ); LOG("Created type_qualifier: "<<obj)$<_t_type_qualifier>$=obj; LOG("Returning :"<<$<_t_type_qualifier>$) 	}
	| VOLATILE                                                                                             	{ LOG("type_qualifier:" <<"VOLATILE("<< $<_t_string>1 <<")" <<")") CAst::type_qualifier *obj=new CAst::type_qualifier(	new CAst::token($<_t_string>1) ); LOG("Created type_qualifier: "<<obj)$<_t_type_qualifier>$=obj; LOG("Returning :"<<$<_t_type_qualifier>$) 	}
	;



enumerator_list 
	: enumerator                                                                                           	{ LOG("enumerator_list:" <<"enumerator("<< $<_t_enumerator>1 <<")" <<")") CAst::enumerator_list_item *obj=new CAst::enumerator_list_item(	$<_t_enumerator>1 ); LOG("Created enumerator_list_item: "<<obj)CAst::enumerator_list *lst=new CAst::enumerator_list;lst->append(obj);$<_t_enumerator_list>$=lst; LOG("Created List enumerator_list: "<<lst)LOG("Returning :"<<$<_t_enumerator_list>$) 	}
	| enumerator_list ',' enumerator                                                                       	{ LOG("enumerator_list:" <<"enumerator_list("<< $<_t_enumerator_list>1 <<")" <<"','("<< $<_t_string>2 <<")" <<"enumerator("<< $<_t_enumerator>3 <<")" <<")") CAst::enumerator_list_item *obj=new CAst::enumerator_list_item(	$<_t_enumerator>3 ); LOG("Created enumerator_list_item: "<<obj)$<_t_enumerator_list>1 ->append(obj);$<_t_enumerator_list>$=$<_t_enumerator_list>1; LOG("Appended to enumerator_list") LOG("Returning :"<<$<_t_enumerator_list>$) 	}
	;



labeled_statement 
	: IDENTIFIER ':' statement                                                                             	{ LOG("labeled_statement:" <<"IDENTIFIER("<< $<_t_string>1 <<")" <<"':'("<< $<_t_string>2 <<")" <<"statement("<< $<_t_statement>3 <<")" <<")") CAst::labeled_statement_2 *obj=new CAst::labeled_statement_2(	new CAst::token($<_t_string>1),$<_t_statement>3 ); LOG("Created labeled_statement_2: "<<obj)$<_t_labeled_statement>$=obj; LOG("Returning :"<<$<_t_labeled_statement>$) 	}
	| CASE constant_expression ':' statement                                                               	{ LOG("labeled_statement:" <<"CASE("<< $<_t_string>1 <<")" <<"constant_expression("<< $<_t_constant_expression>2 <<")" <<"':'("<< $<_t_string>3 <<")" <<"statement("<< $<_t_statement>4 <<")" <<")") CAst::labeled_statement_1 *obj=new CAst::labeled_statement_1(	$<_t_constant_expression>2,$<_t_statement>4 ); LOG("Created labeled_statement_1: "<<obj)$<_t_labeled_statement>$=obj; LOG("Returning :"<<$<_t_labeled_statement>$) 	}
	| DEFAULT ':' statement                                                                                	{ LOG("labeled_statement:" <<"DEFAULT("<< $<_t_string>1 <<")" <<"':'("<< $<_t_string>2 <<")" <<"statement("<< $<_t_statement>3 <<")" <<")") CAst::labeled_statement_2 *obj=new CAst::labeled_statement_2(	new CAst::token($<_t_string>1),$<_t_statement>3 ); LOG("Created labeled_statement_2: "<<obj)$<_t_labeled_statement>$=obj; LOG("Returning :"<<$<_t_labeled_statement>$) 	}
	;



declaration_list 
	: declaration                                                                                          	{ LOG("declaration_list:" <<"declaration("<< $<_t_declaration>1 <<")" <<")") CAst::declaration_list_item *obj=new CAst::declaration_list_item(	$<_t_declaration>1 ); LOG("Created declaration_list_item: "<<obj)CAst::declaration_list *lst=new CAst::declaration_list;lst->append(obj);$<_t_declaration_list>$=lst; LOG("Created List declaration_list: "<<lst)LOG("Returning :"<<$<_t_declaration_list>$) 	}
	| declaration_list declaration                                                                         	{ LOG("declaration_list:" <<"declaration_list("<< $<_t_declaration_list>1 <<")" <<"declaration("<< $<_t_declaration>2 <<")" <<")") CAst::declaration_list_item *obj=new CAst::declaration_list_item(	$<_t_declaration>2 ); LOG("Created declaration_list_item: "<<obj)$<_t_declaration_list>1 ->append(obj);$<_t_declaration_list>$=$<_t_declaration_list>1; LOG("Appended to declaration_list") LOG("Returning :"<<$<_t_declaration_list>$) 	}
	;



specifier_qualifier_list 
	: type_specifier specifier_qualifier_list                                                              	{ LOG("specifier_qualifier_list:" <<"type_specifier("<< $<_t_type_specifier>1 <<")" <<"specifier_qualifier_list("<< $<_t_specifier_qualifier_list>2 <<")" <<")") CAst::specifier_qualifier_list_item_1 *obj=new CAst::specifier_qualifier_list_item_1(	$<_t_type_specifier>1 ); LOG("Created specifier_qualifier_list_item_1: "<<obj)$<_t_specifier_qualifier_list>2 ->append(obj);$<_t_specifier_qualifier_list>$=$<_t_specifier_qualifier_list>2; LOG("Appended to specifier_qualifier_list") LOG("Returning :"<<$<_t_specifier_qualifier_list>$) 	}
	| type_specifier                                                                                       	{ LOG("specifier_qualifier_list:" <<"type_specifier("<< $<_t_type_specifier>1 <<")" <<")") CAst::specifier_qualifier_list_item_1 *obj=new CAst::specifier_qualifier_list_item_1(	$<_t_type_specifier>1 ); LOG("Created specifier_qualifier_list_item_1: "<<obj)CAst::specifier_qualifier_list *lst=new CAst::specifier_qualifier_list;lst->append(obj);$<_t_specifier_qualifier_list>$=lst; LOG("Created List specifier_qualifier_list: "<<lst)LOG("Returning :"<<$<_t_specifier_qualifier_list>$) 	}
	| type_qualifier specifier_qualifier_list                                                              	{ LOG("specifier_qualifier_list:" <<"type_qualifier("<< $<_t_type_qualifier>1 <<")" <<"specifier_qualifier_list("<< $<_t_specifier_qualifier_list>2 <<")" <<")") CAst::specifier_qualifier_list_item_2 *obj=new CAst::specifier_qualifier_list_item_2(	$<_t_type_qualifier>1 ); LOG("Created specifier_qualifier_list_item_2: "<<obj)$<_t_specifier_qualifier_list>2 ->append(obj);$<_t_specifier_qualifier_list>$=$<_t_specifier_qualifier_list>2; LOG("Appended to specifier_qualifier_list") LOG("Returning :"<<$<_t_specifier_qualifier_list>$) 	}
	| type_qualifier                                                                                       	{ LOG("specifier_qualifier_list:" <<"type_qualifier("<< $<_t_type_qualifier>1 <<")" <<")") CAst::specifier_qualifier_list_item_2 *obj=new CAst::specifier_qualifier_list_item_2(	$<_t_type_qualifier>1 ); LOG("Created specifier_qualifier_list_item_2: "<<obj)CAst::specifier_qualifier_list *lst=new CAst::specifier_qualifier_list;lst->append(obj);$<_t_specifier_qualifier_list>$=lst; LOG("Created List specifier_qualifier_list: "<<lst)LOG("Returning :"<<$<_t_specifier_qualifier_list>$) 	}
	;



translation_unit 
	: external_declaration                                                                                 	{ LOG("translation_unit:" <<"external_declaration("<< $<_t_external_declaration>1 <<")" <<")") CAst::translation_unit_item *obj=new CAst::translation_unit_item(	$<_t_external_declaration>1 ); LOG("Created translation_unit_item: "<<obj)CAst::translation_unit *lst=new CAst::translation_unit;lst->append(obj);$<_t_translation_unit>$=lst; LOG("Created List translation_unit: "<<lst)root=$<_t_translation_unit>$; LOG("Returning :"<<$<_t_translation_unit>$) 	}
	| translation_unit external_declaration                                                                	{ LOG("translation_unit:" <<"translation_unit("<< $<_t_translation_unit>1 <<")" <<"external_declaration("<< $<_t_external_declaration>2 <<")" <<")") CAst::translation_unit_item *obj=new CAst::translation_unit_item(	$<_t_external_declaration>2 ); LOG("Created translation_unit_item: "<<obj)$<_t_translation_unit>1 ->append(obj);$<_t_translation_unit>$=$<_t_translation_unit>1; LOG("Appended to translation_unit") LOG("Returning :"<<$<_t_translation_unit>$) 	}
	;



constant_expression 
	: conditional_expression                                                                               	{ LOG("constant_expression:" <<"conditional_expression("<< $<_t_conditional_expression>1 <<")" <<")") CAst::constant_expression *obj=new CAst::constant_expression(	$<_t_conditional_expression>1 ); LOG("Created constant_expression: "<<obj)$<_t_constant_expression>$=obj; LOG("Returning :"<<$<_t_constant_expression>$) 	}
	;



initializer_list 
	: initializer                                                                                          	{ LOG("initializer_list:" <<"initializer("<< $<_t_initializer>1 <<")" <<")") CAst::initializer_list_item *obj=new CAst::initializer_list_item(	$<_t_initializer>1 ); LOG("Created initializer_list_item: "<<obj)CAst::initializer_list *lst=new CAst::initializer_list;lst->append(obj);$<_t_initializer_list>$=lst; LOG("Created List initializer_list: "<<lst)LOG("Returning :"<<$<_t_initializer_list>$) 	}
	| initializer_list ',' initializer                                                                     	{ LOG("initializer_list:" <<"initializer_list("<< $<_t_initializer_list>1 <<")" <<"','("<< $<_t_string>2 <<")" <<"initializer("<< $<_t_initializer>3 <<")" <<")") CAst::initializer_list_item *obj=new CAst::initializer_list_item(	$<_t_initializer>3 ); LOG("Created initializer_list_item: "<<obj)$<_t_initializer_list>1 ->append(obj);$<_t_initializer_list>$=$<_t_initializer_list>1; LOG("Appended to initializer_list") LOG("Returning :"<<$<_t_initializer_list>$) 	}
	;



statement_list 
	: statement                                                                                            	{ LOG("statement_list:" <<"statement("<< $<_t_statement>1 <<")" <<")") CAst::statement_list_item *obj=new CAst::statement_list_item(	$<_t_statement>1 ); LOG("Created statement_list_item: "<<obj)CAst::statement_list *lst=new CAst::statement_list;lst->append(obj);$<_t_statement_list>$=lst; LOG("Created List statement_list: "<<lst)LOG("Returning :"<<$<_t_statement_list>$) 	}
	| statement_list statement                                                                             	{ LOG("statement_list:" <<"statement_list("<< $<_t_statement_list>1 <<")" <<"statement("<< $<_t_statement>2 <<")" <<")") CAst::statement_list_item *obj=new CAst::statement_list_item(	$<_t_statement>2 ); LOG("Created statement_list_item: "<<obj)$<_t_statement_list>1 ->append(obj);$<_t_statement_list>$=$<_t_statement_list>1; LOG("Appended to statement_list") LOG("Returning :"<<$<_t_statement_list>$) 	}
	;



expression 
	: assignment_expression                                                                                	{ LOG("expression:" <<"assignment_expression("<< $<_t_assignment_expression>1 <<")" <<")") CAst::expression_item *obj=new CAst::expression_item(	$<_t_assignment_expression>1 ); LOG("Created expression_item: "<<obj)CAst::expression *lst=new CAst::expression;lst->append(obj);$<_t_expression>$=lst; LOG("Created List expression: "<<lst)LOG("Returning :"<<$<_t_expression>$) 	}
	| expression ',' assignment_expression                                                                 	{ LOG("expression:" <<"expression("<< $<_t_expression>1 <<")" <<"','("<< $<_t_string>2 <<")" <<"assignment_expression("<< $<_t_assignment_expression>3 <<")" <<")") CAst::expression_item *obj=new CAst::expression_item(	$<_t_assignment_expression>3 ); LOG("Created expression_item: "<<obj)$<_t_expression>1 ->append(obj);$<_t_expression>$=$<_t_expression>1; LOG("Appended to expression") LOG("Returning :"<<$<_t_expression>$) 	}
	;



declarator 
	: pointer direct_declarator                                                                            	{ LOG("declarator:" <<"pointer("<< $<_t_pointer>1 <<")" <<"direct_declarator("<< $<_t_direct_declarator>2 <<")" <<")") CAst::declarator *obj=new CAst::declarator(	$<_t_pointer>1,$<_t_direct_declarator>2 ); LOG("Created declarator: "<<obj)$<_t_declarator>$=obj; LOG("Returning :"<<$<_t_declarator>$) 	}
	| direct_declarator                                                                                    	{ LOG("declarator:" <<"direct_declarator("<< $<_t_direct_declarator>1 <<")" <<")") CAst::declarator *obj=new CAst::declarator(	NULL,$<_t_direct_declarator>1 ); LOG("Created declarator: "<<obj)$<_t_declarator>$=obj; LOG("Returning :"<<$<_t_declarator>$) 	}
	;



%%
extern char yytext[];
extern int column;
extern "C" {
	int yyerror(const char *s)
	{
		fflush(stdout);
		printf("\n%*s\n%*s\n", column, "^", column, s);
	}
}
