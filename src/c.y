%token RIGHT_OP DO RETURN SHORT CONSTANT 
%token RIGHT_ASSIGN DEFAULT VOLATILE VOID CHAR 
%token WHILE STATIC EQ_OP EXTERN CONST 
%token SIZEOF CASE STRUCT LE_OP REGISTER 
%token UNSIGNED OR_OP DEC_OP SWITCH AND_ASSIGN 
%token PTR_OP ELLIPSIS IDENTIFIER ADD_ASSIGN TYPEDEF 
%token GOTO FOR UNION AUTO ENUM 
%token ELSE AND_OP GE_OP LEFT_OP IF 
%token SUB_ASSIGN MOD_ASSIGN STRING_LITERAL XOR_ASSIGN INT 
%token DOUBLE TYPE_NAME OR_ASSIGN SIGNED FLOAT 
%token BREAK CONTINUE MUL_ASSIGN LEFT_ASSIGN LONG 
%token INC_OP NE_OP DIV_ASSIGN 

%union {
	const char*                           _t_str;
	CAst::Token*                          _t_Token;
	CAst::storage_class_specifier*        _t_storage_class_specifier;
	CAst::expression_statement*           _t_expression_statement;
	CAst::type_name*                      _t_type_name;
	CAst::unary_expression*               _t_unary_expression;
	CAst::conditional_expression*         _t_conditional_expression;
	CAst::struct_or_union_specifier*      _t_struct_or_union_specifier;
	CAst::exclusive_or_expression*        _t_exclusive_or_expression;
	CAst::initializer*                    _t_initializer;
	CAst::struct_declaration_list*        _t_struct_declaration_list;
	CAst::assignment_operator*            _t_assignment_operator;
	CAst::struct_declaration*             _t_struct_declaration;
	CAst::abstract_declarator*            _t_abstract_declarator;
	CAst::iteration_statement*            _t_iteration_statement;
	CAst::additive_expression*            _t_additive_expression;
	CAst::external_declaration*           _t_external_declaration;
	CAst::type_specifier*                 _t_type_specifier;
	CAst::compound_statement*             _t_compound_statement;
	CAst::inclusive_or_expression*        _t_inclusive_or_expression;
	CAst::pointer*                        _t_pointer;
	CAst::selection_statement*            _t_selection_statement;
	CAst::postfix_expression*             _t_postfix_expression;
	CAst::and_expression*                 _t_and_expression;
	CAst::statement*                      _t_statement;
	CAst::cast_expression*                _t_cast_expression;
	CAst::init_declarator*                _t_init_declarator;
	CAst::struct_declarator_list*         _t_struct_declarator_list;
	CAst::logical_or_expression*          _t_logical_or_expression;
	CAst::unary_operator*                 _t_unary_operator;
	CAst::relational_expression*          _t_relational_expression;
	CAst::struct_or_union*                _t_struct_or_union;
	CAst::enumerator*                     _t_enumerator;
	CAst::assignment_expression*          _t_assignment_expression;
	CAst::parameter_type_list*            _t_parameter_type_list;
	CAst::parameter_declaration*          _t_parameter_declaration;
	CAst::multiplicative_expression*      _t_multiplicative_expression;
	CAst::type_qualifier_list*            _t_type_qualifier_list;
	CAst::argument_expression_list*       _t_argument_expression_list;
	CAst::direct_abstract_declarator*     _t_direct_abstract_declarator;
	CAst::equality_expression*            _t_equality_expression;
	CAst::primary_expression*             _t_primary_expression;
	CAst::declaration_specifiers*         _t_declaration_specifiers;
	CAst::declaration*                    _t_declaration;
	CAst::direct_declarator*              _t_direct_declarator;
	CAst::logical_and_expression*         _t_logical_and_expression;
	CAst::init_declarator_list*           _t_init_declarator_list;
	CAst::shift_expression*               _t_shift_expression;
	CAst::identifier_list*                _t_identifier_list;
	CAst::jump_statement*                 _t_jump_statement;
	CAst::struct_declarator*              _t_struct_declarator;
	CAst::function_definition*            _t_function_definition;
	CAst::parameter_list*                 _t_parameter_list;
	CAst::enum_specifier*                 _t_enum_specifier;
	CAst::type_qualifier*                 _t_type_qualifier;
	CAst::enumerator_list*                _t_enumerator_list;
	CAst::labeled_statement*              _t_labeled_statement;
	CAst::declaration_list*               _t_declaration_list;
	CAst::specifier_qualifier_list*       _t_specifier_qualifier_list;
	CAst::translation_unit*               _t_translation_unit;
	CAst::constant_expression*            _t_constant_expression;
	CAst::initializer_list*               _t_initializer_list;
	CAst::statement_list*                 _t_statement_list;
	CAst::expression*                     _t_expression;
	CAst::declarator*                     _t_declarator;
}
%start translation_unit
%%

storage_class_specifier
	:TYPEDEF                                                                            {RULE_MARKER(     "storage_class_specifier");$<_t_storage_class_specifier>$=new CAst::storage_class_specifier("[TYPEDEF]",CAst::GetToken(TYPEDEF,$<_t_str>1));}
	|EXTERN                                                                             {RULE_MARKER(     "storage_class_specifier");$<_t_storage_class_specifier>$=new CAst::storage_class_specifier("[EXTERN]",CAst::GetToken(TYPEDEF,$<_t_str>1));}
	|STATIC                                                                             {RULE_MARKER(     "storage_class_specifier");$<_t_storage_class_specifier>$=new CAst::storage_class_specifier("[STATIC]",CAst::GetToken(TYPEDEF,$<_t_str>1));}
	|AUTO                                                                               {RULE_MARKER(     "storage_class_specifier");$<_t_storage_class_specifier>$=new CAst::storage_class_specifier("[AUTO]",CAst::GetToken(TYPEDEF,$<_t_str>1));}
	|REGISTER                                                                           {RULE_MARKER(     "storage_class_specifier");$<_t_storage_class_specifier>$=new CAst::storage_class_specifier("[REGISTER]",CAst::GetToken(TYPEDEF,$<_t_str>1));}
	;


expression_statement
	:expression ';'                                                                     {RULE_MARKER(        "expression_statement");$<_t_expression_statement>$=new CAst::expression_statement("[expression,';']",$<_t_expression>1);}
	|';'                                                                                {RULE_MARKER(        "expression_statement");$<_t_expression_statement>$=new CAst::expression_statement("[';']",NULL);}
	;


type_name
	:specifier_qualifier_list abstract_declarator                                       {RULE_MARKER(                   "type_name");$<_t_type_name>$=new CAst::type_name("[specifier_qualifier_list,abstract_declarator]",$<_t_specifier_qualifier_list>1, $<_t_abstract_declarator>2);}
	|specifier_qualifier_list                                                           {RULE_MARKER(                   "type_name");$<_t_type_name>$=new CAst::type_name("[specifier_qualifier_list]",$<_t_specifier_qualifier_list>1, NULL);}
	;


unary_expression
	:SIZEOF '(' type_name ')'                                                           {RULE_MARKER(           "unary_expression1");$<_t_unary_expression>$=new CAst::unary_expression1("[SIZEOF,'(',type_name,')']",$<_t_type_name>3);}
	|INC_OP unary_expression                                                            {RULE_MARKER(           "unary_expression2");$<_t_unary_expression>$=new CAst::unary_expression2("[INC_OP,unary_expression]",CAst::GetToken(INC_OP,$<_t_str>1), $<_t_unary_expression>2);}
	|DEC_OP unary_expression                                                            {RULE_MARKER(           "unary_expression2");$<_t_unary_expression>$=new CAst::unary_expression2("[DEC_OP,unary_expression]",CAst::GetToken(INC_OP,$<_t_str>1), $<_t_unary_expression>2);}
	|unary_operator cast_expression                                                     {RULE_MARKER(           "unary_expression3");$<_t_unary_expression>$=new CAst::unary_expression3("[unary_operator,cast_expression]",$<_t_unary_operator>1, $<_t_cast_expression>2);}
	|SIZEOF unary_expression                                                            {RULE_MARKER(           "unary_expression2");$<_t_unary_expression>$=new CAst::unary_expression2("[SIZEOF,unary_expression]",CAst::GetToken(INC_OP,$<_t_str>1), $<_t_unary_expression>2);}
	|postfix_expression                                                                 {RULE_MARKER(           "unary_expression4");$<_t_unary_expression>$=new CAst::unary_expression4("[postfix_expression]",$<_t_postfix_expression>1);}
	;


conditional_expression
	:logical_or_expression '?' expression ':' conditional_expression                    {RULE_MARKER(      "conditional_expression");CAST_PTR(conditional_expression,$<_t_conditional_expression>5)->append("[logical_or_expression,'?',expression,':',conditional_expression]", $<_t_logical_or_expression>1, $<_t_expression>3);$<_t_conditional_expression>$=$<_t_conditional_expression>5;}
	|logical_or_expression                                                              {RULE_MARKER(      "conditional_expression");$<_t_conditional_expression>$=new CAst::conditional_expression("[logical_or_expression]",$<_t_logical_or_expression>1);}
	;


struct_or_union_specifier
	:struct_or_union IDENTIFIER '{' struct_declaration_list '}'                         {RULE_MARKER(   "struct_or_union_specifier");$<_t_struct_or_union_specifier>$=new CAst::struct_or_union_specifier("[struct_or_union,IDENTIFIER,'{',struct_declaration_list,'}']",$<_t_struct_or_union>1, CAst::GetToken(IDENTIFIER,$<_t_str>2), CAst::GetToken('{',$<_t_str>3), $<_t_struct_declaration_list>4, CAst::GetToken('}',$<_t_str>5));}
	|struct_or_union '{' struct_declaration_list '}'                                    {RULE_MARKER(   "struct_or_union_specifier");$<_t_struct_or_union_specifier>$=new CAst::struct_or_union_specifier("[struct_or_union,'{',struct_declaration_list,'}']",$<_t_struct_or_union>1, NULL, CAst::GetToken('{',$<_t_str>2), $<_t_struct_declaration_list>3, CAst::GetToken('}',$<_t_str>4));}
	|struct_or_union IDENTIFIER                                                         {RULE_MARKER(   "struct_or_union_specifier");$<_t_struct_or_union_specifier>$=new CAst::struct_or_union_specifier("[struct_or_union,IDENTIFIER]",$<_t_struct_or_union>1, CAst::GetToken(IDENTIFIER,$<_t_str>2), NULL, NULL, NULL);}
	;


exclusive_or_expression
	:exclusive_or_expression '^' and_expression                                         {RULE_MARKER(     "exclusive_or_expression");CAST_PTR(exclusive_or_expression,$<_t_exclusive_or_expression>1)->append("[exclusive_or_expression,'^',and_expression]", $<_t_and_expression>3);$<_t_exclusive_or_expression>$=$<_t_exclusive_or_expression>1;}
	|and_expression                                                                     {RULE_MARKER(     "exclusive_or_expression");$<_t_exclusive_or_expression>$=new CAst::exclusive_or_expression("[and_expression]",$<_t_and_expression>1);}
	;


initializer
	:'{' initializer_list ',' '}'                                                       {RULE_MARKER(                "initializer1");$<_t_initializer>$=new CAst::initializer1("['{',initializer_list,',','}']",$<_t_initializer_list>2, CAst::GetToken(',',$<_t_str>3));}
	|'{' initializer_list '}'                                                           {RULE_MARKER(                "initializer1");$<_t_initializer>$=new CAst::initializer1("['{',initializer_list,'}']",$<_t_initializer_list>2, NULL);}
	|assignment_expression                                                              {RULE_MARKER(                "initializer2");$<_t_initializer>$=new CAst::initializer2("[assignment_expression]",$<_t_assignment_expression>1);}
	;


struct_declaration_list
	:struct_declaration_list struct_declaration                                         {RULE_MARKER(     "struct_declaration_list");CAST_PTR(struct_declaration_list,$<_t_struct_declaration_list>1)->append("[struct_declaration_list,struct_declaration]", $<_t_struct_declaration>2);$<_t_struct_declaration_list>$=$<_t_struct_declaration_list>1;}
	|struct_declaration                                                                 {RULE_MARKER(     "struct_declaration_list");$<_t_struct_declaration_list>$=new CAst::struct_declaration_list("[struct_declaration]",$<_t_struct_declaration>1);}
	;


assignment_operator
	:'='                                                                                {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("['=']",CAst::GetToken('=',$<_t_str>1));}
	|MUL_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("[MUL_ASSIGN]",CAst::GetToken('=',$<_t_str>1));}
	|DIV_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("[DIV_ASSIGN]",CAst::GetToken('=',$<_t_str>1));}
	|MOD_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("[MOD_ASSIGN]",CAst::GetToken('=',$<_t_str>1));}
	|ADD_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("[ADD_ASSIGN]",CAst::GetToken('=',$<_t_str>1));}
	|SUB_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("[SUB_ASSIGN]",CAst::GetToken('=',$<_t_str>1));}
	|LEFT_ASSIGN                                                                        {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("[LEFT_ASSIGN]",CAst::GetToken('=',$<_t_str>1));}
	|RIGHT_ASSIGN                                                                       {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("[RIGHT_ASSIGN]",CAst::GetToken('=',$<_t_str>1));}
	|AND_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("[AND_ASSIGN]",CAst::GetToken('=',$<_t_str>1));}
	|XOR_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("[XOR_ASSIGN]",CAst::GetToken('=',$<_t_str>1));}
	|OR_ASSIGN                                                                          {RULE_MARKER(         "assignment_operator");$<_t_assignment_operator>$=new CAst::assignment_operator("[OR_ASSIGN]",CAst::GetToken('=',$<_t_str>1));}
	;


struct_declaration
	:specifier_qualifier_list struct_declarator_list ';'                                {RULE_MARKER(          "struct_declaration");$<_t_struct_declaration>$=new CAst::struct_declaration("[specifier_qualifier_list,struct_declarator_list,';']",$<_t_specifier_qualifier_list>1, $<_t_struct_declarator_list>2);}
	;


abstract_declarator
	:pointer direct_abstract_declarator                                                 {RULE_MARKER(         "abstract_declarator");$<_t_abstract_declarator>$=new CAst::abstract_declarator("[pointer,direct_abstract_declarator]",$<_t_pointer>1, $<_t_direct_abstract_declarator>2);}
	|pointer                                                                            {RULE_MARKER(         "abstract_declarator");$<_t_abstract_declarator>$=new CAst::abstract_declarator("[pointer]",$<_t_pointer>1, NULL);}
	|direct_abstract_declarator                                                         {RULE_MARKER(         "abstract_declarator");$<_t_abstract_declarator>$=new CAst::abstract_declarator("[direct_abstract_declarator]",NULL, $<_t_direct_abstract_declarator>1);}
	;


iteration_statement
	:DO statement WHILE '(' expression ')' ';'                                          {RULE_MARKER(        "iteration_statement1");$<_t_iteration_statement>$=new CAst::iteration_statement1("[DO,statement,WHILE,'(',expression,')',';']",$<_t_statement>2, $<_t_expression>5);}
	|FOR '(' expression_statement expression_statement expression ')' statement         {RULE_MARKER(        "iteration_statement2");$<_t_iteration_statement>$=new CAst::iteration_statement2("[FOR,'(',expression_statement,expression_statement,expression,')',statement]",$<_t_expression_statement>3, $<_t_expression_statement>4, $<_t_expression>5, $<_t_statement>7);}
	|FOR '(' expression_statement expression_statement ')' statement                    {RULE_MARKER(        "iteration_statement2");$<_t_iteration_statement>$=new CAst::iteration_statement2("[FOR,'(',expression_statement,expression_statement,')',statement]",$<_t_expression_statement>3, $<_t_expression_statement>4, NULL, $<_t_statement>6);}
	|WHILE '(' expression ')' statement                                                 {RULE_MARKER(        "iteration_statement3");$<_t_iteration_statement>$=new CAst::iteration_statement3("[WHILE,'(',expression,')',statement]",$<_t_expression>3, $<_t_statement>5);}
	;


additive_expression
	:additive_expression '+' multiplicative_expression                                  {RULE_MARKER(         "additive_expression");CAST_PTR(additive_expression,$<_t_additive_expression>1)->append("[additive_expression,'+',multiplicative_expression]", CAst::GetToken('+',$<_t_str>2), $<_t_multiplicative_expression>3);$<_t_additive_expression>$=$<_t_additive_expression>1;}
	|additive_expression '-' multiplicative_expression                                  {RULE_MARKER(         "additive_expression");CAST_PTR(additive_expression,$<_t_additive_expression>1)->append("[additive_expression,'-',multiplicative_expression]", CAst::GetToken('+',$<_t_str>2), $<_t_multiplicative_expression>3);$<_t_additive_expression>$=$<_t_additive_expression>1;}
	|multiplicative_expression                                                          {RULE_MARKER(         "additive_expression");$<_t_additive_expression>$=new CAst::additive_expression("[multiplicative_expression]",$<_t_multiplicative_expression>1);}
	;


external_declaration
	:function_definition                                                                {RULE_MARKER(       "external_declaration1");$<_t_external_declaration>$=new CAst::external_declaration1("[function_definition]",$<_t_function_definition>1);}
	|declaration                                                                        {RULE_MARKER(       "external_declaration2");$<_t_external_declaration>$=new CAst::external_declaration2("[declaration]",$<_t_declaration>1);}
	;


type_specifier
	:VOID                                                                               {RULE_MARKER(             "type_specifier1");$<_t_type_specifier>$=new CAst::type_specifier1("[VOID]",CAst::GetToken(VOID,$<_t_str>1));}
	|CHAR                                                                               {RULE_MARKER(             "type_specifier1");$<_t_type_specifier>$=new CAst::type_specifier1("[CHAR]",CAst::GetToken(VOID,$<_t_str>1));}
	|SHORT                                                                              {RULE_MARKER(             "type_specifier1");$<_t_type_specifier>$=new CAst::type_specifier1("[SHORT]",CAst::GetToken(VOID,$<_t_str>1));}
	|INT                                                                                {RULE_MARKER(             "type_specifier1");$<_t_type_specifier>$=new CAst::type_specifier1("[INT]",CAst::GetToken(VOID,$<_t_str>1));}
	|LONG                                                                               {RULE_MARKER(             "type_specifier1");$<_t_type_specifier>$=new CAst::type_specifier1("[LONG]",CAst::GetToken(VOID,$<_t_str>1));}
	|FLOAT                                                                              {RULE_MARKER(             "type_specifier1");$<_t_type_specifier>$=new CAst::type_specifier1("[FLOAT]",CAst::GetToken(VOID,$<_t_str>1));}
	|DOUBLE                                                                             {RULE_MARKER(             "type_specifier1");$<_t_type_specifier>$=new CAst::type_specifier1("[DOUBLE]",CAst::GetToken(VOID,$<_t_str>1));}
	|SIGNED                                                                             {RULE_MARKER(             "type_specifier1");$<_t_type_specifier>$=new CAst::type_specifier1("[SIGNED]",CAst::GetToken(VOID,$<_t_str>1));}
	|UNSIGNED                                                                           {RULE_MARKER(             "type_specifier1");$<_t_type_specifier>$=new CAst::type_specifier1("[UNSIGNED]",CAst::GetToken(VOID,$<_t_str>1));}
	|struct_or_union_specifier                                                          {RULE_MARKER(             "type_specifier2");$<_t_type_specifier>$=new CAst::type_specifier2("[struct_or_union_specifier]",$<_t_struct_or_union_specifier>1);}
	|enum_specifier                                                                     {RULE_MARKER(             "type_specifier3");$<_t_type_specifier>$=new CAst::type_specifier3("[enum_specifier]",$<_t_enum_specifier>1);}
	|TYPE_NAME                                                                          {RULE_MARKER(             "type_specifier1");$<_t_type_specifier>$=new CAst::type_specifier1("[TYPE_NAME]",CAst::GetToken(VOID,$<_t_str>1));}
	;


compound_statement
	:'{' declaration_list statement_list '}'                                            {RULE_MARKER(          "compound_statement");$<_t_compound_statement>$=new CAst::compound_statement("['{',declaration_list,statement_list,'}']",$<_t_declaration_list>2, $<_t_statement_list>3);}
	|'{' statement_list '}'                                                             {RULE_MARKER(          "compound_statement");$<_t_compound_statement>$=new CAst::compound_statement("['{',statement_list,'}']",NULL, $<_t_statement_list>2);}
	|'{' declaration_list '}'                                                           {RULE_MARKER(          "compound_statement");$<_t_compound_statement>$=new CAst::compound_statement("['{',declaration_list,'}']",$<_t_declaration_list>2, NULL);}
	|'{' '}'                                                                            {RULE_MARKER(          "compound_statement");$<_t_compound_statement>$=new CAst::compound_statement("['{','}']",NULL, NULL);}
	;


inclusive_or_expression
	:inclusive_or_expression '|' exclusive_or_expression                                {RULE_MARKER(     "inclusive_or_expression");CAST_PTR(inclusive_or_expression,$<_t_inclusive_or_expression>1)->append("[inclusive_or_expression,'|',exclusive_or_expression]", $<_t_exclusive_or_expression>3);$<_t_inclusive_or_expression>$=$<_t_inclusive_or_expression>1;}
	|exclusive_or_expression                                                            {RULE_MARKER(     "inclusive_or_expression");$<_t_inclusive_or_expression>$=new CAst::inclusive_or_expression("[exclusive_or_expression]",$<_t_exclusive_or_expression>1);}
	;


pointer
	:'*' type_qualifier_list pointer                                                    {RULE_MARKER(                     "pointer");CAST_PTR(pointer,$<_t_pointer>3)->append("['*',type_qualifier_list,pointer]", $<_t_type_qualifier_list>2);$<_t_pointer>$=$<_t_pointer>3;}
	|'*' type_qualifier_list                                                            {RULE_MARKER(                     "pointer");$<_t_pointer>$=new CAst::pointer("['*',type_qualifier_list]",$<_t_type_qualifier_list>2);}
	|'*' pointer                                                                        {RULE_MARKER(                     "pointer");CAST_PTR(pointer,$<_t_pointer>2)->append("['*',pointer]", NULL);$<_t_pointer>$=$<_t_pointer>2;}
	|'*'                                                                                {RULE_MARKER(                     "pointer");$<_t_pointer>$=new CAst::pointer("['*']",NULL);}
	;


selection_statement
	:IF '(' expression ')' statement ELSE statement                                     {RULE_MARKER(        "selection_statement1");$<_t_selection_statement>$=new CAst::selection_statement1("[IF,'(',expression,')',statement,ELSE,statement]",$<_t_expression>3, $<_t_statement>5, CAst::GetToken(ELSE,$<_t_str>6), $<_t_statement>7);}
	|IF '(' expression ')' statement                                                    {RULE_MARKER(        "selection_statement1");$<_t_selection_statement>$=new CAst::selection_statement1("[IF,'(',expression,')',statement]",$<_t_expression>3, $<_t_statement>5, NULL, NULL);}
	|SWITCH '(' expression ')' statement                                                {RULE_MARKER(        "selection_statement2");$<_t_selection_statement>$=new CAst::selection_statement2("[SWITCH,'(',expression,')',statement]",$<_t_expression>3, $<_t_statement>5);}
	;


postfix_expression
	:postfix_expression '[' expression ']'                                              {RULE_MARKER(         "postfix_expression1");$<_t_postfix_expression>$=new CAst::postfix_expression1("[postfix_expression,'[',expression,']']",$<_t_postfix_expression>1, $<_t_expression>3);}
	|postfix_expression '(' argument_expression_list ')'                                {RULE_MARKER(         "postfix_expression2");$<_t_postfix_expression>$=new CAst::postfix_expression2("[postfix_expression,'(',argument_expression_list,')']",$<_t_postfix_expression>1, $<_t_argument_expression_list>3);}
	|postfix_expression '(' ')'                                                         {RULE_MARKER(         "postfix_expression2");$<_t_postfix_expression>$=new CAst::postfix_expression2("[postfix_expression,'(',')']",$<_t_postfix_expression>1, NULL);}
	|postfix_expression '.' IDENTIFIER                                                  {RULE_MARKER(         "postfix_expression3");$<_t_postfix_expression>$=new CAst::postfix_expression3("[postfix_expression,'.',IDENTIFIER]",$<_t_postfix_expression>1, CAst::GetToken('.',$<_t_str>2), CAst::GetToken(IDENTIFIER,$<_t_str>3));}
	|postfix_expression PTR_OP IDENTIFIER                                               {RULE_MARKER(         "postfix_expression3");$<_t_postfix_expression>$=new CAst::postfix_expression3("[postfix_expression,PTR_OP,IDENTIFIER]",$<_t_postfix_expression>1, CAst::GetToken('.',$<_t_str>2), CAst::GetToken(IDENTIFIER,$<_t_str>3));}
	|postfix_expression INC_OP                                                          {RULE_MARKER(         "postfix_expression4");$<_t_postfix_expression>$=new CAst::postfix_expression4("[postfix_expression,INC_OP]",$<_t_postfix_expression>1, CAst::GetToken(INC_OP,$<_t_str>2));}
	|postfix_expression DEC_OP                                                          {RULE_MARKER(         "postfix_expression4");$<_t_postfix_expression>$=new CAst::postfix_expression4("[postfix_expression,DEC_OP]",$<_t_postfix_expression>1, CAst::GetToken(INC_OP,$<_t_str>2));}
	|primary_expression                                                                 {RULE_MARKER(         "postfix_expression5");$<_t_postfix_expression>$=new CAst::postfix_expression5("[primary_expression]",$<_t_primary_expression>1);}
	;


and_expression
	:and_expression '&' equality_expression                                             {RULE_MARKER(              "and_expression");CAST_PTR(and_expression,$<_t_and_expression>1)->append("[and_expression,'&',equality_expression]", $<_t_equality_expression>3);$<_t_and_expression>$=$<_t_and_expression>1;}
	|equality_expression                                                                {RULE_MARKER(              "and_expression");$<_t_and_expression>$=new CAst::and_expression("[equality_expression]",$<_t_equality_expression>1);}
	;


statement
	:labeled_statement                                                                  {RULE_MARKER(                  "statement1");$<_t_statement>$=new CAst::statement1("[labeled_statement]",$<_t_labeled_statement>1);}
	|compound_statement                                                                 {RULE_MARKER(                  "statement2");$<_t_statement>$=new CAst::statement2("[compound_statement]",$<_t_compound_statement>1);}
	|expression_statement                                                               {RULE_MARKER(                  "statement3");$<_t_statement>$=new CAst::statement3("[expression_statement]",$<_t_expression_statement>1);}
	|selection_statement                                                                {RULE_MARKER(                  "statement4");$<_t_statement>$=new CAst::statement4("[selection_statement]",$<_t_selection_statement>1);}
	|iteration_statement                                                                {RULE_MARKER(                  "statement5");$<_t_statement>$=new CAst::statement5("[iteration_statement]",$<_t_iteration_statement>1);}
	|jump_statement                                                                     {RULE_MARKER(                  "statement6");$<_t_statement>$=new CAst::statement6("[jump_statement]",$<_t_jump_statement>1);}
	;


cast_expression
	:'(' type_name ')' cast_expression                                                  {RULE_MARKER(            "cast_expression1");$<_t_cast_expression>$=new CAst::cast_expression1("['(',type_name,')',cast_expression]",$<_t_type_name>2, $<_t_cast_expression>4);}
	|unary_expression                                                                   {RULE_MARKER(            "cast_expression2");$<_t_cast_expression>$=new CAst::cast_expression2("[unary_expression]",$<_t_unary_expression>1);}
	;


init_declarator
	:declarator '=' initializer                                                         {RULE_MARKER(             "init_declarator");$<_t_init_declarator>$=new CAst::init_declarator("[declarator,'=',initializer]",$<_t_declarator>1, CAst::GetToken('=',$<_t_str>2), $<_t_initializer>3);}
	|declarator                                                                         {RULE_MARKER(             "init_declarator");$<_t_init_declarator>$=new CAst::init_declarator("[declarator]",$<_t_declarator>1, NULL, NULL);}
	;


struct_declarator_list
	:struct_declarator_list ',' struct_declarator                                       {RULE_MARKER(      "struct_declarator_list");CAST_PTR(struct_declarator_list,$<_t_struct_declarator_list>1)->append("[struct_declarator_list,',',struct_declarator]", $<_t_struct_declarator>3);$<_t_struct_declarator_list>$=$<_t_struct_declarator_list>1;}
	|struct_declarator                                                                  {RULE_MARKER(      "struct_declarator_list");$<_t_struct_declarator_list>$=new CAst::struct_declarator_list("[struct_declarator]",$<_t_struct_declarator>1);}
	;


logical_or_expression
	:logical_or_expression OR_OP logical_and_expression                                 {RULE_MARKER(       "logical_or_expression");CAST_PTR(logical_or_expression,$<_t_logical_or_expression>1)->append("[logical_or_expression,OR_OP,logical_and_expression]", $<_t_logical_and_expression>3);$<_t_logical_or_expression>$=$<_t_logical_or_expression>1;}
	|logical_and_expression                                                             {RULE_MARKER(       "logical_or_expression");$<_t_logical_or_expression>$=new CAst::logical_or_expression("[logical_and_expression]",$<_t_logical_and_expression>1);}
	;


unary_operator
	:'&'                                                                                {RULE_MARKER(              "unary_operator");$<_t_unary_operator>$=new CAst::unary_operator("['&']",CAst::GetToken('&',$<_t_str>1));}
	|'*'                                                                                {RULE_MARKER(              "unary_operator");$<_t_unary_operator>$=new CAst::unary_operator("['*']",CAst::GetToken('&',$<_t_str>1));}
	|'+'                                                                                {RULE_MARKER(              "unary_operator");$<_t_unary_operator>$=new CAst::unary_operator("['+']",CAst::GetToken('&',$<_t_str>1));}
	|'-'                                                                                {RULE_MARKER(              "unary_operator");$<_t_unary_operator>$=new CAst::unary_operator("['-']",CAst::GetToken('&',$<_t_str>1));}
	|'~'                                                                                {RULE_MARKER(              "unary_operator");$<_t_unary_operator>$=new CAst::unary_operator("['~']",CAst::GetToken('&',$<_t_str>1));}
	|'!'                                                                                {RULE_MARKER(              "unary_operator");$<_t_unary_operator>$=new CAst::unary_operator("['!']",CAst::GetToken('&',$<_t_str>1));}
	;


relational_expression
	:relational_expression '<' shift_expression                                         {RULE_MARKER(       "relational_expression");CAST_PTR(relational_expression,$<_t_relational_expression>1)->append("[relational_expression,'<',shift_expression]", CAst::GetToken('<',$<_t_str>2), $<_t_shift_expression>3);$<_t_relational_expression>$=$<_t_relational_expression>1;}
	|relational_expression '>' shift_expression                                         {RULE_MARKER(       "relational_expression");CAST_PTR(relational_expression,$<_t_relational_expression>1)->append("[relational_expression,'>',shift_expression]", CAst::GetToken('<',$<_t_str>2), $<_t_shift_expression>3);$<_t_relational_expression>$=$<_t_relational_expression>1;}
	|relational_expression LE_OP shift_expression                                       {RULE_MARKER(       "relational_expression");CAST_PTR(relational_expression,$<_t_relational_expression>1)->append("[relational_expression,LE_OP,shift_expression]", CAst::GetToken('<',$<_t_str>2), $<_t_shift_expression>3);$<_t_relational_expression>$=$<_t_relational_expression>1;}
	|relational_expression GE_OP shift_expression                                       {RULE_MARKER(       "relational_expression");CAST_PTR(relational_expression,$<_t_relational_expression>1)->append("[relational_expression,GE_OP,shift_expression]", CAst::GetToken('<',$<_t_str>2), $<_t_shift_expression>3);$<_t_relational_expression>$=$<_t_relational_expression>1;}
	|shift_expression                                                                   {RULE_MARKER(       "relational_expression");$<_t_relational_expression>$=new CAst::relational_expression("[shift_expression]",$<_t_shift_expression>1);}
	;


struct_or_union
	:STRUCT                                                                             {RULE_MARKER(             "struct_or_union");$<_t_struct_or_union>$=new CAst::struct_or_union("[STRUCT]",CAst::GetToken(STRUCT,$<_t_str>1));}
	|UNION                                                                              {RULE_MARKER(             "struct_or_union");$<_t_struct_or_union>$=new CAst::struct_or_union("[UNION]",CAst::GetToken(STRUCT,$<_t_str>1));}
	;


enumerator
	:IDENTIFIER '=' constant_expression                                                 {RULE_MARKER(                  "enumerator");$<_t_enumerator>$=new CAst::enumerator("[IDENTIFIER,'=',constant_expression]",CAst::GetToken(IDENTIFIER,$<_t_str>1), CAst::GetToken('=',$<_t_str>2), $<_t_constant_expression>3);}
	|IDENTIFIER                                                                         {RULE_MARKER(                  "enumerator");$<_t_enumerator>$=new CAst::enumerator("[IDENTIFIER]",CAst::GetToken(IDENTIFIER,$<_t_str>1), NULL, NULL);}
	;


assignment_expression
	:unary_expression assignment_operator assignment_expression                         {RULE_MARKER(      "assignment_expression1");$<_t_assignment_expression>$=new CAst::assignment_expression1("[unary_expression,assignment_operator,assignment_expression]",$<_t_unary_expression>1, $<_t_assignment_operator>2, $<_t_assignment_expression>3);}
	|conditional_expression                                                             {RULE_MARKER(      "assignment_expression2");$<_t_assignment_expression>$=new CAst::assignment_expression2("[conditional_expression]",$<_t_conditional_expression>1);}
	;


parameter_type_list
	:parameter_list ',' ELLIPSIS                                                        {RULE_MARKER(         "parameter_type_list");$<_t_parameter_type_list>$=new CAst::parameter_type_list("[parameter_list,',',ELLIPSIS]",$<_t_parameter_list>1, CAst::GetToken(',',$<_t_str>2), CAst::GetToken(ELLIPSIS,$<_t_str>3));}
	|parameter_list                                                                     {RULE_MARKER(         "parameter_type_list");$<_t_parameter_type_list>$=new CAst::parameter_type_list("[parameter_list]",$<_t_parameter_list>1, NULL, NULL);}
	;


parameter_declaration
	:declaration_specifiers declarator                                                  {RULE_MARKER(      "parameter_declaration1");$<_t_parameter_declaration>$=new CAst::parameter_declaration1("[declaration_specifiers,declarator]",$<_t_declaration_specifiers>1, $<_t_declarator>2);}
	|declaration_specifiers abstract_declarator                                         {RULE_MARKER(      "parameter_declaration2");$<_t_parameter_declaration>$=new CAst::parameter_declaration2("[declaration_specifiers,abstract_declarator]",$<_t_declaration_specifiers>1, $<_t_abstract_declarator>2);}
	|declaration_specifiers                                                             {RULE_MARKER(      "parameter_declaration1");$<_t_parameter_declaration>$=new CAst::parameter_declaration1("[declaration_specifiers]",$<_t_declaration_specifiers>1, NULL);}
	;


multiplicative_expression
	:multiplicative_expression '*' cast_expression                                      {RULE_MARKER(   "multiplicative_expression");CAST_PTR(multiplicative_expression,$<_t_multiplicative_expression>1)->append("[multiplicative_expression,'*',cast_expression]", CAst::GetToken('*',$<_t_str>2), $<_t_cast_expression>3);$<_t_multiplicative_expression>$=$<_t_multiplicative_expression>1;}
	|multiplicative_expression '/' cast_expression                                      {RULE_MARKER(   "multiplicative_expression");CAST_PTR(multiplicative_expression,$<_t_multiplicative_expression>1)->append("[multiplicative_expression,'/',cast_expression]", CAst::GetToken('*',$<_t_str>2), $<_t_cast_expression>3);$<_t_multiplicative_expression>$=$<_t_multiplicative_expression>1;}
	|multiplicative_expression '%' cast_expression                                      {RULE_MARKER(   "multiplicative_expression");CAST_PTR(multiplicative_expression,$<_t_multiplicative_expression>1)->append("[multiplicative_expression,'%',cast_expression]", CAst::GetToken('*',$<_t_str>2), $<_t_cast_expression>3);$<_t_multiplicative_expression>$=$<_t_multiplicative_expression>1;}
	|cast_expression                                                                    {RULE_MARKER(   "multiplicative_expression");$<_t_multiplicative_expression>$=new CAst::multiplicative_expression("[cast_expression]",$<_t_cast_expression>1);}
	;


type_qualifier_list
	:type_qualifier_list type_qualifier                                                 {RULE_MARKER(         "type_qualifier_list");CAST_PTR(type_qualifier_list,$<_t_type_qualifier_list>1)->append("[type_qualifier_list,type_qualifier]", $<_t_type_qualifier>2);$<_t_type_qualifier_list>$=$<_t_type_qualifier_list>1;}
	|type_qualifier                                                                     {RULE_MARKER(         "type_qualifier_list");$<_t_type_qualifier_list>$=new CAst::type_qualifier_list("[type_qualifier]",$<_t_type_qualifier>1);}
	;


argument_expression_list
	:argument_expression_list ',' assignment_expression                                 {RULE_MARKER(    "argument_expression_list");CAST_PTR(argument_expression_list,$<_t_argument_expression_list>1)->append("[argument_expression_list,',',assignment_expression]", $<_t_assignment_expression>3);$<_t_argument_expression_list>$=$<_t_argument_expression_list>1;}
	|assignment_expression                                                              {RULE_MARKER(    "argument_expression_list");$<_t_argument_expression_list>$=new CAst::argument_expression_list("[assignment_expression]",$<_t_assignment_expression>1);}
	;


direct_abstract_declarator
	:direct_abstract_declarator '[' constant_expression ']'                             {RULE_MARKER( "direct_abstract_declarator1");$<_t_direct_abstract_declarator>$=new CAst::direct_abstract_declarator1("[direct_abstract_declarator,'[',constant_expression,']']",$<_t_direct_abstract_declarator>1, $<_t_constant_expression>3);}
	|direct_abstract_declarator '(' parameter_type_list ')'                             {RULE_MARKER( "direct_abstract_declarator2");$<_t_direct_abstract_declarator>$=new CAst::direct_abstract_declarator2("[direct_abstract_declarator,'(',parameter_type_list,')']",$<_t_direct_abstract_declarator>1, $<_t_parameter_type_list>3);}
	|'(' abstract_declarator ')'                                                        {RULE_MARKER( "direct_abstract_declarator3");$<_t_direct_abstract_declarator>$=new CAst::direct_abstract_declarator3("['(',abstract_declarator,')']",$<_t_abstract_declarator>2);}
	|'[' constant_expression ']'                                                        {RULE_MARKER( "direct_abstract_declarator1");$<_t_direct_abstract_declarator>$=new CAst::direct_abstract_declarator1("['[',constant_expression,']']",NULL, $<_t_constant_expression>2);}
	|direct_abstract_declarator '[' ']'                                                 {RULE_MARKER( "direct_abstract_declarator1");$<_t_direct_abstract_declarator>$=new CAst::direct_abstract_declarator1("[direct_abstract_declarator,'[',']']",$<_t_direct_abstract_declarator>1, NULL);}
	|'(' parameter_type_list ')'                                                        {RULE_MARKER( "direct_abstract_declarator2");$<_t_direct_abstract_declarator>$=new CAst::direct_abstract_declarator2("['(',parameter_type_list,')']",NULL, $<_t_parameter_type_list>2);}
	|direct_abstract_declarator '(' ')'                                                 {RULE_MARKER( "direct_abstract_declarator2");$<_t_direct_abstract_declarator>$=new CAst::direct_abstract_declarator2("[direct_abstract_declarator,'(',')']",$<_t_direct_abstract_declarator>1, NULL);}
	|'[' ']'                                                                            {RULE_MARKER( "direct_abstract_declarator1");$<_t_direct_abstract_declarator>$=new CAst::direct_abstract_declarator1("['[',']']",NULL, NULL);}
	|'(' ')'                                                                            {RULE_MARKER( "direct_abstract_declarator2");$<_t_direct_abstract_declarator>$=new CAst::direct_abstract_declarator2("['(',')']",NULL, NULL);}
	;


equality_expression
	:equality_expression EQ_OP relational_expression                                    {RULE_MARKER(         "equality_expression");CAST_PTR(equality_expression,$<_t_equality_expression>1)->append("[equality_expression,EQ_OP,relational_expression]", CAst::GetToken(EQ_OP,$<_t_str>2), $<_t_relational_expression>3);$<_t_equality_expression>$=$<_t_equality_expression>1;}
	|equality_expression NE_OP relational_expression                                    {RULE_MARKER(         "equality_expression");CAST_PTR(equality_expression,$<_t_equality_expression>1)->append("[equality_expression,NE_OP,relational_expression]", CAst::GetToken(EQ_OP,$<_t_str>2), $<_t_relational_expression>3);$<_t_equality_expression>$=$<_t_equality_expression>1;}
	|relational_expression                                                              {RULE_MARKER(         "equality_expression");$<_t_equality_expression>$=new CAst::equality_expression("[relational_expression]",$<_t_relational_expression>1);}
	;


primary_expression
	:'(' expression ')'                                                                 {RULE_MARKER(         "primary_expression1");$<_t_primary_expression>$=new CAst::primary_expression1("['(',expression,')']",$<_t_expression>2);}
	|IDENTIFIER                                                                         {RULE_MARKER(         "primary_expression2");$<_t_primary_expression>$=new CAst::primary_expression2("[IDENTIFIER]",CAst::GetToken(IDENTIFIER,$<_t_str>1));}
	|CONSTANT                                                                           {RULE_MARKER(         "primary_expression2");$<_t_primary_expression>$=new CAst::primary_expression2("[CONSTANT]",CAst::GetToken(IDENTIFIER,$<_t_str>1));}
	|STRING_LITERAL                                                                     {RULE_MARKER(         "primary_expression2");$<_t_primary_expression>$=new CAst::primary_expression2("[STRING_LITERAL]",CAst::GetToken(IDENTIFIER,$<_t_str>1));}
	;


declaration_specifiers
	:storage_class_specifier declaration_specifiers                                     {RULE_MARKER(     "declaration_specifiers1");CAST_PTR(declaration_specifiers1,$<_t_declaration_specifiers>2)->append("[storage_class_specifier,declaration_specifiers]", $<_t_storage_class_specifier>1);$<_t_declaration_specifiers>$=$<_t_declaration_specifiers>2;}
	|type_specifier declaration_specifiers                                              {RULE_MARKER(     "declaration_specifiers2");CAST_PTR(declaration_specifiers2,$<_t_declaration_specifiers>2)->append("[type_specifier,declaration_specifiers]", $<_t_type_specifier>1);$<_t_declaration_specifiers>$=$<_t_declaration_specifiers>2;}
	|type_qualifier declaration_specifiers                                              {RULE_MARKER(     "declaration_specifiers3");CAST_PTR(declaration_specifiers3,$<_t_declaration_specifiers>2)->append("[type_qualifier,declaration_specifiers]", $<_t_type_qualifier>1);$<_t_declaration_specifiers>$=$<_t_declaration_specifiers>2;}
	|storage_class_specifier                                                            {RULE_MARKER(     "declaration_specifiers1");$<_t_declaration_specifiers>$=new CAst::declaration_specifiers1("[storage_class_specifier]",$<_t_storage_class_specifier>1);}
	|type_specifier                                                                     {RULE_MARKER(     "declaration_specifiers2");$<_t_declaration_specifiers>$=new CAst::declaration_specifiers2("[type_specifier]",$<_t_type_specifier>1);}
	|type_qualifier                                                                     {RULE_MARKER(     "declaration_specifiers3");$<_t_declaration_specifiers>$=new CAst::declaration_specifiers3("[type_qualifier]",$<_t_type_qualifier>1);}
	;


declaration
	:declaration_specifiers init_declarator_list ';'                                    {RULE_MARKER(                 "declaration");$<_t_declaration>$=new CAst::declaration("[declaration_specifiers,init_declarator_list,';']",$<_t_declaration_specifiers>1, $<_t_init_declarator_list>2);}
	|declaration_specifiers ';'                                                         {RULE_MARKER(                 "declaration");$<_t_declaration>$=new CAst::declaration("[declaration_specifiers,';']",$<_t_declaration_specifiers>1, NULL);}
	;


direct_declarator
	:direct_declarator '[' constant_expression ']'                                      {RULE_MARKER(          "direct_declarator1");$<_t_direct_declarator>$=new CAst::direct_declarator1("[direct_declarator,'[',constant_expression,']']",$<_t_direct_declarator>1, $<_t_constant_expression>3);}
	|direct_declarator '(' parameter_type_list ')'                                      {RULE_MARKER(          "direct_declarator2");$<_t_direct_declarator>$=new CAst::direct_declarator2("[direct_declarator,'(',parameter_type_list,')']",$<_t_direct_declarator>1, $<_t_parameter_type_list>3);}
	|direct_declarator '(' identifier_list ')'                                          {RULE_MARKER(          "direct_declarator3");$<_t_direct_declarator>$=new CAst::direct_declarator3("[direct_declarator,'(',identifier_list,')']",$<_t_direct_declarator>1, $<_t_identifier_list>3);}
	|'(' declarator ')'                                                                 {RULE_MARKER(          "direct_declarator4");$<_t_direct_declarator>$=new CAst::direct_declarator4("['(',declarator,')']",$<_t_declarator>2);}
	|direct_declarator '[' ']'                                                          {RULE_MARKER(          "direct_declarator1");$<_t_direct_declarator>$=new CAst::direct_declarator1("[direct_declarator,'[',']']",$<_t_direct_declarator>1, NULL);}
	|direct_declarator '(' ')'                                                          {RULE_MARKER(          "direct_declarator2");$<_t_direct_declarator>$=new CAst::direct_declarator2("[direct_declarator,'(',')']",$<_t_direct_declarator>1, NULL);}
	|IDENTIFIER                                                                         {RULE_MARKER(          "direct_declarator5");$<_t_direct_declarator>$=new CAst::direct_declarator5("[IDENTIFIER]",CAst::GetToken(IDENTIFIER,$<_t_str>1));}
	;


logical_and_expression
	:logical_and_expression AND_OP inclusive_or_expression                              {RULE_MARKER(      "logical_and_expression");CAST_PTR(logical_and_expression,$<_t_logical_and_expression>1)->append("[logical_and_expression,AND_OP,inclusive_or_expression]", $<_t_inclusive_or_expression>3);$<_t_logical_and_expression>$=$<_t_logical_and_expression>1;}
	|inclusive_or_expression                                                            {RULE_MARKER(      "logical_and_expression");$<_t_logical_and_expression>$=new CAst::logical_and_expression("[inclusive_or_expression]",$<_t_inclusive_or_expression>1);}
	;


init_declarator_list
	:init_declarator_list ',' init_declarator                                           {RULE_MARKER(        "init_declarator_list");CAST_PTR(init_declarator_list,$<_t_init_declarator_list>1)->append("[init_declarator_list,',',init_declarator]", $<_t_init_declarator>3);$<_t_init_declarator_list>$=$<_t_init_declarator_list>1;}
	|init_declarator                                                                    {RULE_MARKER(        "init_declarator_list");$<_t_init_declarator_list>$=new CAst::init_declarator_list("[init_declarator]",$<_t_init_declarator>1);}
	;


shift_expression
	:shift_expression LEFT_OP additive_expression                                       {RULE_MARKER(            "shift_expression");CAST_PTR(shift_expression,$<_t_shift_expression>1)->append("[shift_expression,LEFT_OP,additive_expression]", CAst::GetToken(LEFT_OP,$<_t_str>2), $<_t_additive_expression>3);$<_t_shift_expression>$=$<_t_shift_expression>1;}
	|shift_expression RIGHT_OP additive_expression                                      {RULE_MARKER(            "shift_expression");CAST_PTR(shift_expression,$<_t_shift_expression>1)->append("[shift_expression,RIGHT_OP,additive_expression]", CAst::GetToken(LEFT_OP,$<_t_str>2), $<_t_additive_expression>3);$<_t_shift_expression>$=$<_t_shift_expression>1;}
	|additive_expression                                                                {RULE_MARKER(            "shift_expression");$<_t_shift_expression>$=new CAst::shift_expression("[additive_expression]",$<_t_additive_expression>1);}
	;


identifier_list
	:identifier_list ',' IDENTIFIER                                                     {RULE_MARKER(             "identifier_list");CAST_PTR(identifier_list,$<_t_identifier_list>1)->append("[identifier_list,',',IDENTIFIER]", CAst::GetToken(IDENTIFIER,$<_t_str>3));$<_t_identifier_list>$=$<_t_identifier_list>1;}
	|IDENTIFIER                                                                         {RULE_MARKER(             "identifier_list");$<_t_identifier_list>$=new CAst::identifier_list("[IDENTIFIER]",CAst::GetToken(IDENTIFIER,$<_t_str>1));}
	;


jump_statement
	:GOTO IDENTIFIER ';'                                                                {RULE_MARKER(             "jump_statement1");$<_t_jump_statement>$=new CAst::jump_statement1("[GOTO,IDENTIFIER,';']",CAst::GetToken(IDENTIFIER,$<_t_str>2));}
	|RETURN expression ';'                                                              {RULE_MARKER(             "jump_statement2");$<_t_jump_statement>$=new CAst::jump_statement2("[RETURN,expression,';']",$<_t_expression>2);}
	|CONTINUE ';'                                                                       {RULE_MARKER(             "jump_statement3");$<_t_jump_statement>$=new CAst::jump_statement3("[CONTINUE,';']",CAst::GetToken(CONTINUE,$<_t_str>1));}
	|BREAK ';'                                                                          {RULE_MARKER(             "jump_statement3");$<_t_jump_statement>$=new CAst::jump_statement3("[BREAK,';']",CAst::GetToken(CONTINUE,$<_t_str>1));}
	|RETURN ';'                                                                         {RULE_MARKER(             "jump_statement2");$<_t_jump_statement>$=new CAst::jump_statement2("[RETURN,';']",NULL);}
	;


struct_declarator
	:declarator ':' constant_expression                                                 {RULE_MARKER(           "struct_declarator");$<_t_struct_declarator>$=new CAst::struct_declarator("[declarator,':',constant_expression]",$<_t_declarator>1, CAst::GetToken(':',$<_t_str>2), $<_t_constant_expression>3);}
	|':' constant_expression                                                            {RULE_MARKER(           "struct_declarator");$<_t_struct_declarator>$=new CAst::struct_declarator("[':',constant_expression]",NULL, CAst::GetToken(':',$<_t_str>1), $<_t_constant_expression>2);}
	|declarator                                                                         {RULE_MARKER(           "struct_declarator");$<_t_struct_declarator>$=new CAst::struct_declarator("[declarator]",$<_t_declarator>1, NULL, NULL);}
	;


function_definition
	:declaration_specifiers declarator declaration_list compound_statement              {RULE_MARKER(         "function_definition");$<_t_function_definition>$=new CAst::function_definition("[declaration_specifiers,declarator,declaration_list,compound_statement]",$<_t_declaration_specifiers>1, $<_t_declarator>2, $<_t_declaration_list>3, $<_t_compound_statement>4);}
	|declaration_specifiers declarator compound_statement                               {RULE_MARKER(         "function_definition");$<_t_function_definition>$=new CAst::function_definition("[declaration_specifiers,declarator,compound_statement]",$<_t_declaration_specifiers>1, $<_t_declarator>2, NULL, $<_t_compound_statement>3);}
	|declarator declaration_list compound_statement                                     {RULE_MARKER(         "function_definition");$<_t_function_definition>$=new CAst::function_definition("[declarator,declaration_list,compound_statement]",NULL, $<_t_declarator>1, $<_t_declaration_list>2, $<_t_compound_statement>3);}
	|declarator compound_statement                                                      {RULE_MARKER(         "function_definition");$<_t_function_definition>$=new CAst::function_definition("[declarator,compound_statement]",NULL, $<_t_declarator>1, NULL, $<_t_compound_statement>2);}
	;


parameter_list
	:parameter_list ',' parameter_declaration                                           {RULE_MARKER(              "parameter_list");CAST_PTR(parameter_list,$<_t_parameter_list>1)->append("[parameter_list,',',parameter_declaration]", $<_t_parameter_declaration>3);$<_t_parameter_list>$=$<_t_parameter_list>1;}
	|parameter_declaration                                                              {RULE_MARKER(              "parameter_list");$<_t_parameter_list>$=new CAst::parameter_list("[parameter_declaration]",$<_t_parameter_declaration>1);}
	;


enum_specifier
	:ENUM IDENTIFIER '{' enumerator_list '}'                                            {RULE_MARKER(              "enum_specifier");$<_t_enum_specifier>$=new CAst::enum_specifier("[ENUM,IDENTIFIER,'{',enumerator_list,'}']",CAst::GetToken(IDENTIFIER,$<_t_str>2), CAst::GetToken('{',$<_t_str>3), $<_t_enumerator_list>4, CAst::GetToken('}',$<_t_str>5));}
	|ENUM '{' enumerator_list '}'                                                       {RULE_MARKER(              "enum_specifier");$<_t_enum_specifier>$=new CAst::enum_specifier("[ENUM,'{',enumerator_list,'}']",NULL, CAst::GetToken('{',$<_t_str>2), $<_t_enumerator_list>3, CAst::GetToken('}',$<_t_str>4));}
	|ENUM IDENTIFIER                                                                    {RULE_MARKER(              "enum_specifier");$<_t_enum_specifier>$=new CAst::enum_specifier("[ENUM,IDENTIFIER]",CAst::GetToken(IDENTIFIER,$<_t_str>2), NULL, NULL, NULL);}
	;


type_qualifier
	:CONST                                                                              {RULE_MARKER(              "type_qualifier");$<_t_type_qualifier>$=new CAst::type_qualifier("[CONST]",CAst::GetToken(CONST,$<_t_str>1));}
	|VOLATILE                                                                           {RULE_MARKER(              "type_qualifier");$<_t_type_qualifier>$=new CAst::type_qualifier("[VOLATILE]",CAst::GetToken(CONST,$<_t_str>1));}
	;


enumerator_list
	:enumerator_list ',' enumerator                                                     {RULE_MARKER(             "enumerator_list");CAST_PTR(enumerator_list,$<_t_enumerator_list>1)->append("[enumerator_list,',',enumerator]", $<_t_enumerator>3);$<_t_enumerator_list>$=$<_t_enumerator_list>1;}
	|enumerator                                                                         {RULE_MARKER(             "enumerator_list");$<_t_enumerator_list>$=new CAst::enumerator_list("[enumerator]",$<_t_enumerator>1);}
	;


labeled_statement
	:CASE constant_expression ':' statement                                             {RULE_MARKER(          "labeled_statement1");$<_t_labeled_statement>$=new CAst::labeled_statement1("[CASE,constant_expression,':',statement]",$<_t_constant_expression>2, $<_t_statement>4);}
	|IDENTIFIER ':' statement                                                           {RULE_MARKER(          "labeled_statement2");$<_t_labeled_statement>$=new CAst::labeled_statement2("[IDENTIFIER,':',statement]",CAst::GetToken(IDENTIFIER,$<_t_str>1), $<_t_statement>3);}
	|DEFAULT ':' statement                                                              {RULE_MARKER(          "labeled_statement2");$<_t_labeled_statement>$=new CAst::labeled_statement2("[DEFAULT,':',statement]",CAst::GetToken(IDENTIFIER,$<_t_str>1), $<_t_statement>3);}
	;


declaration_list
	:declaration_list declaration                                                       {RULE_MARKER(            "declaration_list");CAST_PTR(declaration_list,$<_t_declaration_list>1)->append("[declaration_list,declaration]", $<_t_declaration>2);$<_t_declaration_list>$=$<_t_declaration_list>1;}
	|declaration                                                                        {RULE_MARKER(            "declaration_list");$<_t_declaration_list>$=new CAst::declaration_list("[declaration]",$<_t_declaration>1);}
	;


specifier_qualifier_list
	:type_specifier specifier_qualifier_list                                            {RULE_MARKER(   "specifier_qualifier_list1");CAST_PTR(specifier_qualifier_list1,$<_t_specifier_qualifier_list>2)->append("[type_specifier,specifier_qualifier_list]", $<_t_type_specifier>1);$<_t_specifier_qualifier_list>$=$<_t_specifier_qualifier_list>2;}
	|type_qualifier specifier_qualifier_list                                            {RULE_MARKER(   "specifier_qualifier_list2");CAST_PTR(specifier_qualifier_list2,$<_t_specifier_qualifier_list>2)->append("[type_qualifier,specifier_qualifier_list]", $<_t_type_qualifier>1);$<_t_specifier_qualifier_list>$=$<_t_specifier_qualifier_list>2;}
	|type_specifier                                                                     {RULE_MARKER(   "specifier_qualifier_list1");$<_t_specifier_qualifier_list>$=new CAst::specifier_qualifier_list1("[type_specifier]",$<_t_type_specifier>1);}
	|type_qualifier                                                                     {RULE_MARKER(   "specifier_qualifier_list2");$<_t_specifier_qualifier_list>$=new CAst::specifier_qualifier_list2("[type_qualifier]",$<_t_type_qualifier>1);}
	;


translation_unit
	:translation_unit external_declaration                                              {RULE_MARKER(            "translation_unit");CAST_PTR(translation_unit,$<_t_translation_unit>1)->append("[translation_unit,external_declaration]", $<_t_external_declaration>2);$<_t_translation_unit>$=$<_t_translation_unit>1;}
	|external_declaration                                                               {RULE_MARKER(            "translation_unit");$<_t_translation_unit>$=new CAst::translation_unit("[external_declaration]",$<_t_external_declaration>1);root=$<_t_translation_unit>$;}
	;


constant_expression
	:conditional_expression                                                             {RULE_MARKER(         "constant_expression");$<_t_constant_expression>$=new CAst::constant_expression("[conditional_expression]",$<_t_conditional_expression>1);}
	;


initializer_list
	:initializer_list ',' initializer                                                   {RULE_MARKER(            "initializer_list");CAST_PTR(initializer_list,$<_t_initializer_list>1)->append("[initializer_list,',',initializer]", $<_t_initializer>3);$<_t_initializer_list>$=$<_t_initializer_list>1;}
	|initializer                                                                        {RULE_MARKER(            "initializer_list");$<_t_initializer_list>$=new CAst::initializer_list("[initializer]",$<_t_initializer>1);}
	;


statement_list
	:statement_list statement                                                           {RULE_MARKER(              "statement_list");CAST_PTR(statement_list,$<_t_statement_list>1)->append("[statement_list,statement]", $<_t_statement>2);$<_t_statement_list>$=$<_t_statement_list>1;}
	|statement                                                                          {RULE_MARKER(              "statement_list");$<_t_statement_list>$=new CAst::statement_list("[statement]",$<_t_statement>1);}
	;


expression
	:expression ',' assignment_expression                                               {RULE_MARKER(                  "expression");CAST_PTR(expression,$<_t_expression>1)->append("[expression,',',assignment_expression]", $<_t_assignment_expression>3);$<_t_expression>$=$<_t_expression>1;}
	|assignment_expression                                                              {RULE_MARKER(                  "expression");$<_t_expression>$=new CAst::expression("[assignment_expression]",$<_t_assignment_expression>1);}
	;


declarator
	:pointer direct_declarator                                                          {RULE_MARKER(                  "declarator");$<_t_declarator>$=new CAst::declarator("[pointer,direct_declarator]",$<_t_pointer>1, $<_t_direct_declarator>2);}
	|direct_declarator                                                                  {RULE_MARKER(                  "declarator");$<_t_declarator>$=new CAst::declarator("[direct_declarator]",NULL, $<_t_direct_declarator>1);}
	;



%%

#include <stdio.h>
#include "CAst.h"
#define RULE_MARKER(txt) printf("\t\t\t\t\033[36m%s:%d\033[0m: %s\n",__FILE__,__LINE__,txt)
#define CAST_PTR(TYPE,PTR) dynamic_cast<CAst::TYPE*>(PTR)
extern char yytext[];
extern int column;
extern "C" {
        int yylex(void);  
	int yyerror(const char *s)
	{
		fflush(stdout);
		printf("\n%*s\n%*s\n", column, "^", column, s);
	}
	int yylex_destroy();
}
