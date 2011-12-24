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
%start translation_unit
%%

storage_class_specifier
	:TYPEDEF                                                                            {RULE_MARKER(     "storage_class_specifier");$$=(CAst::CAst*)(new CAst::storage_class_specifier("[TYPEDEF]",CAST_PTR(Token,$1)));}
	|EXTERN                                                                             {RULE_MARKER(     "storage_class_specifier");$$=(CAst::CAst*)(new CAst::storage_class_specifier("[EXTERN]",CAST_PTR(Token,$1)));}
	|STATIC                                                                             {RULE_MARKER(     "storage_class_specifier");$$=(CAst::CAst*)(new CAst::storage_class_specifier("[STATIC]",CAST_PTR(Token,$1)));}
	|AUTO                                                                               {RULE_MARKER(     "storage_class_specifier");$$=(CAst::CAst*)(new CAst::storage_class_specifier("[AUTO]",CAST_PTR(Token,$1)));}
	|REGISTER                                                                           {RULE_MARKER(     "storage_class_specifier");$$=(CAst::CAst*)(new CAst::storage_class_specifier("[REGISTER]",CAST_PTR(Token,$1)));}
	;


expression_statement
	:expression, ';'                                                                    {RULE_MARKER(        "expression_statement");$$=(CAst::CAst*)(new CAst::expression_statement("[expression,';']",CAST_PTR(expression,$1)));}
	|';'                                                                                {RULE_MARKER(        "expression_statement");$$=(CAst::CAst*)(new CAst::expression_statement("[';']",NULL));}
	;


type_name
	:specifier_qualifier_list, abstract_declarator                                      {RULE_MARKER(                   "type_name");$$=(CAst::CAst*)(new CAst::type_name("[specifier_qualifier_list,abstract_declarator]",CAST_PTR(specifier_qualifier_list,$1), CAST_PTR(abstract_declarator,$2)));}
	|specifier_qualifier_list                                                           {RULE_MARKER(                   "type_name");$$=(CAst::CAst*)(new CAst::type_name("[specifier_qualifier_list]",CAST_PTR(specifier_qualifier_list,$1), NULL));}
	;


unary_expression
	:SIZEOF, '(', type_name, ')'                                                        {RULE_MARKER(           "unary_expression1");$$=(CAst::CAst*)(new CAst::unary_expression1("[SIZEOF,'(',type_name,')']",CAST_PTR(type_name,$3)));}
	|INC_OP, unary_expression                                                           {RULE_MARKER(           "unary_expression2");$$=(CAst::CAst*)(new CAst::unary_expression2("[INC_OP,unary_expression]",CAST_PTR(Token,$1), CAST_PTR(unary_expression,$2)));}
	|DEC_OP, unary_expression                                                           {RULE_MARKER(           "unary_expression2");$$=(CAst::CAst*)(new CAst::unary_expression2("[DEC_OP,unary_expression]",CAST_PTR(Token,$1), CAST_PTR(unary_expression,$2)));}
	|unary_operator, cast_expression                                                    {RULE_MARKER(           "unary_expression3");$$=(CAst::CAst*)(new CAst::unary_expression3("[unary_operator,cast_expression]",CAST_PTR(unary_operator,$1), CAST_PTR(cast_expression,$2)));}
	|SIZEOF, unary_expression                                                           {RULE_MARKER(           "unary_expression2");$$=(CAst::CAst*)(new CAst::unary_expression2("[SIZEOF,unary_expression]",CAST_PTR(Token,$1), CAST_PTR(unary_expression,$2)));}
	|postfix_expression                                                                 {RULE_MARKER(           "unary_expression4");$$=(CAst::CAst*)(new CAst::unary_expression4("[postfix_expression]",CAST_PTR(postfix_expression,$1)));}
	;


conditional_expression
	:logical_or_expression, '?', expression, ':', conditional_expression                {RULE_MARKER(      "conditional_expression");CAST_PTR(conditional_expression,$5)->append("[logical_or_expression,'?',expression,':',conditional_expression]", CAST_PTR(logical_or_expression,$1), CAST_PTR(expression,$3));$$=$5;}
	|logical_or_expression                                                              {RULE_MARKER(      "conditional_expression");$$=(CAst::CAst*)(new CAst::conditional_expression("[logical_or_expression]",CAST_PTR(logical_or_expression,$1)));}
	;


struct_or_union_specifier
	:struct_or_union, IDENTIFIER, '{', struct_declaration_list, '}'                     {RULE_MARKER(   "struct_or_union_specifier");$$=(CAst::CAst*)(new CAst::struct_or_union_specifier("[struct_or_union,IDENTIFIER,'{',struct_declaration_list,'}']",CAST_PTR(struct_or_union,$1), CAST_PTR(Token,$2), CAST_PTR(Token,$3), CAST_PTR(struct_declaration_list,$4), CAST_PTR(Token,$5)));}
	|struct_or_union, '{', struct_declaration_list, '}'                                 {RULE_MARKER(   "struct_or_union_specifier");$$=(CAst::CAst*)(new CAst::struct_or_union_specifier("[struct_or_union,'{',struct_declaration_list,'}']",CAST_PTR(struct_or_union,$1), NULL, CAST_PTR(Token,$2), CAST_PTR(struct_declaration_list,$3), CAST_PTR(Token,$4)));}
	|struct_or_union, IDENTIFIER                                                        {RULE_MARKER(   "struct_or_union_specifier");$$=(CAst::CAst*)(new CAst::struct_or_union_specifier("[struct_or_union,IDENTIFIER]",CAST_PTR(struct_or_union,$1), CAST_PTR(Token,$2), NULL, NULL, NULL));}
	;


exclusive_or_expression
	:exclusive_or_expression, '^', and_expression                                       {RULE_MARKER(     "exclusive_or_expression");CAST_PTR(exclusive_or_expression,$1)->append("[exclusive_or_expression,'^',and_expression]", CAST_PTR(and_expression,$3));$$=$1;}
	|and_expression                                                                     {RULE_MARKER(     "exclusive_or_expression");$$=(CAst::CAst*)(new CAst::exclusive_or_expression("[and_expression]",CAST_PTR(and_expression,$1)));}
	;


initializer
	:'{', initializer_list, ',', '}'                                                    {RULE_MARKER(                "initializer1");$$=(CAst::CAst*)(new CAst::initializer1("['{',initializer_list,',','}']",CAST_PTR(initializer_list,$2), CAST_PTR(Token,$3)));}
	|'{', initializer_list, '}'                                                         {RULE_MARKER(                "initializer1");$$=(CAst::CAst*)(new CAst::initializer1("['{',initializer_list,'}']",CAST_PTR(initializer_list,$2), NULL));}
	|assignment_expression                                                              {RULE_MARKER(                "initializer2");$$=(CAst::CAst*)(new CAst::initializer2("[assignment_expression]",CAST_PTR(assignment_expression,$1)));}
	;


struct_declaration_list
	:struct_declaration_list, struct_declaration                                        {RULE_MARKER(     "struct_declaration_list");CAST_PTR(struct_declaration_list,$1)->append("[struct_declaration_list,struct_declaration]", CAST_PTR(struct_declaration,$2));$$=$1;}
	|struct_declaration                                                                 {RULE_MARKER(     "struct_declaration_list");$$=(CAst::CAst*)(new CAst::struct_declaration_list("[struct_declaration]",CAST_PTR(struct_declaration,$1)));}
	;


assignment_operator
	:'='                                                                                {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("['=']",CAST_PTR(Token,$1)));}
	|MUL_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("[MUL_ASSIGN]",CAST_PTR(Token,$1)));}
	|DIV_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("[DIV_ASSIGN]",CAST_PTR(Token,$1)));}
	|MOD_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("[MOD_ASSIGN]",CAST_PTR(Token,$1)));}
	|ADD_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("[ADD_ASSIGN]",CAST_PTR(Token,$1)));}
	|SUB_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("[SUB_ASSIGN]",CAST_PTR(Token,$1)));}
	|LEFT_ASSIGN                                                                        {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("[LEFT_ASSIGN]",CAST_PTR(Token,$1)));}
	|RIGHT_ASSIGN                                                                       {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("[RIGHT_ASSIGN]",CAST_PTR(Token,$1)));}
	|AND_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("[AND_ASSIGN]",CAST_PTR(Token,$1)));}
	|XOR_ASSIGN                                                                         {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("[XOR_ASSIGN]",CAST_PTR(Token,$1)));}
	|OR_ASSIGN                                                                          {RULE_MARKER(         "assignment_operator");$$=(CAst::CAst*)(new CAst::assignment_operator("[OR_ASSIGN]",CAST_PTR(Token,$1)));}
	;


struct_declaration
	:specifier_qualifier_list, struct_declarator_list, ';'                              {RULE_MARKER(          "struct_declaration");$$=(CAst::CAst*)(new CAst::struct_declaration("[specifier_qualifier_list,struct_declarator_list,';']",CAST_PTR(specifier_qualifier_list,$1), CAST_PTR(struct_declarator_list,$2)));}
	;


abstract_declarator
	:pointer, direct_abstract_declarator                                                {RULE_MARKER(         "abstract_declarator");$$=(CAst::CAst*)(new CAst::abstract_declarator("[pointer,direct_abstract_declarator]",CAST_PTR(pointer,$1), CAST_PTR(direct_abstract_declarator,$2)));}
	|pointer                                                                            {RULE_MARKER(         "abstract_declarator");$$=(CAst::CAst*)(new CAst::abstract_declarator("[pointer]",CAST_PTR(pointer,$1), NULL));}
	|direct_abstract_declarator                                                         {RULE_MARKER(         "abstract_declarator");$$=(CAst::CAst*)(new CAst::abstract_declarator("[direct_abstract_declarator]",NULL, CAST_PTR(direct_abstract_declarator,$1)));}
	;


iteration_statement
	:DO, statement, WHILE, '(', expression, ')', ';'                                    {RULE_MARKER(        "iteration_statement1");$$=(CAst::CAst*)(new CAst::iteration_statement1("[DO,statement,WHILE,'(',expression,')',';']",CAST_PTR(statement,$2), CAST_PTR(expression,$5)));}
	|FOR, '(', expression_statement, expression_statement, expression, ')', statement   {RULE_MARKER(        "iteration_statement2");$$=(CAst::CAst*)(new CAst::iteration_statement2("[FOR,'(',expression_statement,expression_statement,expression,')',statement]",CAST_PTR(expression_statement,$3), CAST_PTR(expression_statement,$4), CAST_PTR(expression,$5), CAST_PTR(statement,$7)));}
	|FOR, '(', expression_statement, expression_statement, ')', statement               {RULE_MARKER(        "iteration_statement2");$$=(CAst::CAst*)(new CAst::iteration_statement2("[FOR,'(',expression_statement,expression_statement,')',statement]",CAST_PTR(expression_statement,$3), CAST_PTR(expression_statement,$4), NULL, CAST_PTR(statement,$6)));}
	|WHILE, '(', expression, ')', statement                                             {RULE_MARKER(        "iteration_statement3");$$=(CAst::CAst*)(new CAst::iteration_statement3("[WHILE,'(',expression,')',statement]",CAST_PTR(expression,$3), CAST_PTR(statement,$5)));}
	;


and_expression
	:and_expression, '&', equality_expression                                           {RULE_MARKER(              "and_expression");CAST_PTR(and_expression,$1)->append("[and_expression,'&',equality_expression]", CAST_PTR(equality_expression,$3));$$=$1;}
	|equality_expression                                                                {RULE_MARKER(              "and_expression");$$=(CAst::CAst*)(new CAst::and_expression("[equality_expression]",CAST_PTR(equality_expression,$1)));}
	;


external_declaration
	:function_definition                                                                {RULE_MARKER(       "external_declaration1");$$=(CAst::CAst*)(new CAst::external_declaration1("[function_definition]",CAST_PTR(function_definition,$1)));}
	|declaration                                                                        {RULE_MARKER(       "external_declaration2");$$=(CAst::CAst*)(new CAst::external_declaration2("[declaration]",CAST_PTR(declaration,$1)));}
	;


type_specifier
	:VOID                                                                               {RULE_MARKER(             "type_specifier1");$$=(CAst::CAst*)(new CAst::type_specifier1("[VOID]",CAST_PTR(Token,$1)));}
	|CHAR                                                                               {RULE_MARKER(             "type_specifier1");$$=(CAst::CAst*)(new CAst::type_specifier1("[CHAR]",CAST_PTR(Token,$1)));}
	|SHORT                                                                              {RULE_MARKER(             "type_specifier1");$$=(CAst::CAst*)(new CAst::type_specifier1("[SHORT]",CAST_PTR(Token,$1)));}
	|INT                                                                                {RULE_MARKER(             "type_specifier1");$$=(CAst::CAst*)(new CAst::type_specifier1("[INT]",CAST_PTR(Token,$1)));}
	|LONG                                                                               {RULE_MARKER(             "type_specifier1");$$=(CAst::CAst*)(new CAst::type_specifier1("[LONG]",CAST_PTR(Token,$1)));}
	|FLOAT                                                                              {RULE_MARKER(             "type_specifier1");$$=(CAst::CAst*)(new CAst::type_specifier1("[FLOAT]",CAST_PTR(Token,$1)));}
	|DOUBLE                                                                             {RULE_MARKER(             "type_specifier1");$$=(CAst::CAst*)(new CAst::type_specifier1("[DOUBLE]",CAST_PTR(Token,$1)));}
	|SIGNED                                                                             {RULE_MARKER(             "type_specifier1");$$=(CAst::CAst*)(new CAst::type_specifier1("[SIGNED]",CAST_PTR(Token,$1)));}
	|UNSIGNED                                                                           {RULE_MARKER(             "type_specifier1");$$=(CAst::CAst*)(new CAst::type_specifier1("[UNSIGNED]",CAST_PTR(Token,$1)));}
	|struct_or_union_specifier                                                          {RULE_MARKER(             "type_specifier2");$$=(CAst::CAst*)(new CAst::type_specifier2("[struct_or_union_specifier]",CAST_PTR(struct_or_union_specifier,$1)));}
	|enum_specifier                                                                     {RULE_MARKER(             "type_specifier3");$$=(CAst::CAst*)(new CAst::type_specifier3("[enum_specifier]",CAST_PTR(enum_specifier,$1)));}
	|TYPE_NAME                                                                          {RULE_MARKER(             "type_specifier1");$$=(CAst::CAst*)(new CAst::type_specifier1("[TYPE_NAME]",CAST_PTR(Token,$1)));}
	;


compound_statement
	:'{', declaration_list, statement_list, '}'                                         {RULE_MARKER(          "compound_statement");$$=(CAst::CAst*)(new CAst::compound_statement("['{',declaration_list,statement_list,'}']",CAST_PTR(declaration_list,$2), CAST_PTR(statement_list,$3)));}
	|'{', statement_list, '}'                                                           {RULE_MARKER(          "compound_statement");$$=(CAst::CAst*)(new CAst::compound_statement("['{',statement_list,'}']",NULL, CAST_PTR(statement_list,$2)));}
	|'{', declaration_list, '}'                                                         {RULE_MARKER(          "compound_statement");$$=(CAst::CAst*)(new CAst::compound_statement("['{',declaration_list,'}']",CAST_PTR(declaration_list,$2), NULL));}
	|'{', '}'                                                                           {RULE_MARKER(          "compound_statement");$$=(CAst::CAst*)(new CAst::compound_statement("['{','}']",NULL, NULL));}
	;


inclusive_or_expression
	:inclusive_or_expression, '|', exclusive_or_expression                              {RULE_MARKER(     "inclusive_or_expression");CAST_PTR(inclusive_or_expression,$1)->append("[inclusive_or_expression,'|',exclusive_or_expression]", CAST_PTR(exclusive_or_expression,$3));$$=$1;}
	|exclusive_or_expression                                                            {RULE_MARKER(     "inclusive_or_expression");$$=(CAst::CAst*)(new CAst::inclusive_or_expression("[exclusive_or_expression]",CAST_PTR(exclusive_or_expression,$1)));}
	;


pointer
	:'*', type_qualifier_list, pointer                                                  {RULE_MARKER(                     "pointer");CAST_PTR(pointer,$3)->append("['*',type_qualifier_list,pointer]", CAST_PTR(type_qualifier_list,$2));$$=$3;}
	|'*', type_qualifier_list                                                           {RULE_MARKER(                     "pointer");$$=(CAst::CAst*)(new CAst::pointer("['*',type_qualifier_list]",CAST_PTR(type_qualifier_list,$2)));}
	|'*', pointer                                                                       {RULE_MARKER(                     "pointer");CAST_PTR(pointer,$2)->append("['*',pointer]", NULL);$$=$2;}
	|'*'                                                                                {RULE_MARKER(                     "pointer");$$=(CAst::CAst*)(new CAst::pointer("['*']",NULL));}
	;


selection_statement
	:IF, '(', expression, ')', statement, ELSE, statement                               {RULE_MARKER(        "selection_statement1");$$=(CAst::CAst*)(new CAst::selection_statement1("[IF,'(',expression,')',statement,ELSE,statement]",CAST_PTR(expression,$3), CAST_PTR(statement,$5), CAST_PTR(Token,$6), CAST_PTR(statement,$7)));}
	|IF, '(', expression, ')', statement                                                {RULE_MARKER(        "selection_statement1");$$=(CAst::CAst*)(new CAst::selection_statement1("[IF,'(',expression,')',statement]",CAST_PTR(expression,$3), CAST_PTR(statement,$5), NULL, NULL));}
	|SWITCH, '(', expression, ')', statement                                            {RULE_MARKER(        "selection_statement2");$$=(CAst::CAst*)(new CAst::selection_statement2("[SWITCH,'(',expression,')',statement]",CAST_PTR(expression,$3), CAST_PTR(statement,$5)));}
	;


postfix_expression
	:postfix_expression, '[', expression, ']'                                           {RULE_MARKER(         "postfix_expression1");$$=(CAst::CAst*)(new CAst::postfix_expression1("[postfix_expression,'[',expression,']']",CAST_PTR(postfix_expression,$1), CAST_PTR(expression,$3)));}
	|postfix_expression, '(', argument_expression_list, ')'                             {RULE_MARKER(         "postfix_expression2");$$=(CAst::CAst*)(new CAst::postfix_expression2("[postfix_expression,'(',argument_expression_list,')']",CAST_PTR(postfix_expression,$1), CAST_PTR(argument_expression_list,$3)));}
	|postfix_expression, '(', ')'                                                       {RULE_MARKER(         "postfix_expression2");$$=(CAst::CAst*)(new CAst::postfix_expression2("[postfix_expression,'(',')']",CAST_PTR(postfix_expression,$1), NULL));}
	|postfix_expression, '.', IDENTIFIER                                                {RULE_MARKER(         "postfix_expression3");$$=(CAst::CAst*)(new CAst::postfix_expression3("[postfix_expression,'.',IDENTIFIER]",CAST_PTR(postfix_expression,$1), CAST_PTR(Token,$2), CAST_PTR(Token,$3)));}
	|postfix_expression, PTR_OP, IDENTIFIER                                             {RULE_MARKER(         "postfix_expression3");$$=(CAst::CAst*)(new CAst::postfix_expression3("[postfix_expression,PTR_OP,IDENTIFIER]",CAST_PTR(postfix_expression,$1), CAST_PTR(Token,$2), CAST_PTR(Token,$3)));}
	|postfix_expression, INC_OP                                                         {RULE_MARKER(         "postfix_expression4");$$=(CAst::CAst*)(new CAst::postfix_expression4("[postfix_expression,INC_OP]",CAST_PTR(postfix_expression,$1), CAST_PTR(Token,$2)));}
	|postfix_expression, DEC_OP                                                         {RULE_MARKER(         "postfix_expression4");$$=(CAst::CAst*)(new CAst::postfix_expression4("[postfix_expression,DEC_OP]",CAST_PTR(postfix_expression,$1), CAST_PTR(Token,$2)));}
	|primary_expression                                                                 {RULE_MARKER(         "postfix_expression5");$$=(CAst::CAst*)(new CAst::postfix_expression5("[primary_expression]",CAST_PTR(primary_expression,$1)));}
	;


additive_expression
	:additive_expression, '+', multiplicative_expression                                {RULE_MARKER(         "additive_expression");CAST_PTR(additive_expression,$1)->append("[additive_expression,'+',multiplicative_expression]", CAST_PTR(Token,$2), CAST_PTR(multiplicative_expression,$3));$$=$1;}
	|additive_expression, '-', multiplicative_expression                                {RULE_MARKER(         "additive_expression");CAST_PTR(additive_expression,$1)->append("[additive_expression,'-',multiplicative_expression]", CAST_PTR(Token,$2), CAST_PTR(multiplicative_expression,$3));$$=$1;}
	|multiplicative_expression                                                          {RULE_MARKER(         "additive_expression");$$=(CAst::CAst*)(new CAst::additive_expression("[multiplicative_expression]",CAST_PTR(multiplicative_expression,$1)));}
	;


statement
	:labeled_statement                                                                  {RULE_MARKER(                  "statement1");$$=(CAst::CAst*)(new CAst::statement1("[labeled_statement]",CAST_PTR(labeled_statement,$1)));}
	|compound_statement                                                                 {RULE_MARKER(                  "statement2");$$=(CAst::CAst*)(new CAst::statement2("[compound_statement]",CAST_PTR(compound_statement,$1)));}
	|expression_statement                                                               {RULE_MARKER(                  "statement3");$$=(CAst::CAst*)(new CAst::statement3("[expression_statement]",CAST_PTR(expression_statement,$1)));}
	|selection_statement                                                                {RULE_MARKER(                  "statement4");$$=(CAst::CAst*)(new CAst::statement4("[selection_statement]",CAST_PTR(selection_statement,$1)));}
	|iteration_statement                                                                {RULE_MARKER(                  "statement5");$$=(CAst::CAst*)(new CAst::statement5("[iteration_statement]",CAST_PTR(iteration_statement,$1)));}
	|jump_statement                                                                     {RULE_MARKER(                  "statement6");$$=(CAst::CAst*)(new CAst::statement6("[jump_statement]",CAST_PTR(jump_statement,$1)));}
	;


cast_expression
	:'(', type_name, ')', cast_expression                                               {RULE_MARKER(            "cast_expression1");$$=(CAst::CAst*)(new CAst::cast_expression1("['(',type_name,')',cast_expression]",CAST_PTR(type_name,$2), CAST_PTR(cast_expression,$4)));}
	|unary_expression                                                                   {RULE_MARKER(            "cast_expression2");$$=(CAst::CAst*)(new CAst::cast_expression2("[unary_expression]",CAST_PTR(unary_expression,$1)));}
	;


init_declarator
	:declarator, '=', initializer                                                       {RULE_MARKER(             "init_declarator");$$=(CAst::CAst*)(new CAst::init_declarator("[declarator,'=',initializer]",CAST_PTR(declarator,$1), CAST_PTR(Token,$2), CAST_PTR(initializer,$3)));}
	|declarator                                                                         {RULE_MARKER(             "init_declarator");$$=(CAst::CAst*)(new CAst::init_declarator("[declarator]",CAST_PTR(declarator,$1), NULL, NULL));}
	;


struct_declarator_list
	:struct_declarator_list, ',', struct_declarator                                     {RULE_MARKER(      "struct_declarator_list");CAST_PTR(struct_declarator_list,$1)->append("[struct_declarator_list,',',struct_declarator]", CAST_PTR(struct_declarator,$3));$$=$1;}
	|struct_declarator                                                                  {RULE_MARKER(      "struct_declarator_list");$$=(CAst::CAst*)(new CAst::struct_declarator_list("[struct_declarator]",CAST_PTR(struct_declarator,$1)));}
	;


logical_or_expression
	:logical_or_expression, OR_OP, logical_and_expression                               {RULE_MARKER(       "logical_or_expression");CAST_PTR(logical_or_expression,$1)->append("[logical_or_expression,OR_OP,logical_and_expression]", CAST_PTR(logical_and_expression,$3));$$=$1;}
	|logical_and_expression                                                             {RULE_MARKER(       "logical_or_expression");$$=(CAst::CAst*)(new CAst::logical_or_expression("[logical_and_expression]",CAST_PTR(logical_and_expression,$1)));}
	;


translation_unit
	:translation_unit, external_declaration                                             {RULE_MARKER(            "translation_unit");CAST_PTR(translation_unit,$1)->append("[translation_unit,external_declaration]", CAST_PTR(external_declaration,$2));$$=$1;}
	|external_declaration                                                               {RULE_MARKER(            "translation_unit");$$=(CAst::CAst*)(new CAst::translation_unit("[external_declaration]",CAST_PTR(external_declaration,$1)));root=$$;}
	;


relational_expression
	:relational_expression, '<', shift_expression                                       {RULE_MARKER(       "relational_expression");CAST_PTR(relational_expression,$1)->append("[relational_expression,'<',shift_expression]", CAST_PTR(Token,$2), CAST_PTR(shift_expression,$3));$$=$1;}
	|relational_expression, '>', shift_expression                                       {RULE_MARKER(       "relational_expression");CAST_PTR(relational_expression,$1)->append("[relational_expression,'>',shift_expression]", CAST_PTR(Token,$2), CAST_PTR(shift_expression,$3));$$=$1;}
	|relational_expression, LE_OP, shift_expression                                     {RULE_MARKER(       "relational_expression");CAST_PTR(relational_expression,$1)->append("[relational_expression,LE_OP,shift_expression]", CAST_PTR(Token,$2), CAST_PTR(shift_expression,$3));$$=$1;}
	|relational_expression, GE_OP, shift_expression                                     {RULE_MARKER(       "relational_expression");CAST_PTR(relational_expression,$1)->append("[relational_expression,GE_OP,shift_expression]", CAST_PTR(Token,$2), CAST_PTR(shift_expression,$3));$$=$1;}
	|shift_expression                                                                   {RULE_MARKER(       "relational_expression");$$=(CAst::CAst*)(new CAst::relational_expression("[shift_expression]",CAST_PTR(shift_expression,$1)));}
	;


struct_or_union
	:STRUCT                                                                             {RULE_MARKER(             "struct_or_union");$$=(CAst::CAst*)(new CAst::struct_or_union("[STRUCT]",CAST_PTR(Token,$1)));}
	|UNION                                                                              {RULE_MARKER(             "struct_or_union");$$=(CAst::CAst*)(new CAst::struct_or_union("[UNION]",CAST_PTR(Token,$1)));}
	;


enumerator
	:IDENTIFIER, '=', constant_expression                                               {RULE_MARKER(                  "enumerator");$$=(CAst::CAst*)(new CAst::enumerator("[IDENTIFIER,'=',constant_expression]",CAST_PTR(Token,$1), CAST_PTR(Token,$2), CAST_PTR(constant_expression,$3)));}
	|IDENTIFIER                                                                         {RULE_MARKER(                  "enumerator");$$=(CAst::CAst*)(new CAst::enumerator("[IDENTIFIER]",CAST_PTR(Token,$1), NULL, NULL));}
	;


assignment_expression
	:unary_expression, assignment_operator, assignment_expression                       {RULE_MARKER(      "assignment_expression1");$$=(CAst::CAst*)(new CAst::assignment_expression1("[unary_expression,assignment_operator,assignment_expression]",CAST_PTR(unary_expression,$1), CAST_PTR(assignment_operator,$2), CAST_PTR(assignment_expression,$3)));}
	|conditional_expression                                                             {RULE_MARKER(      "assignment_expression2");$$=(CAst::CAst*)(new CAst::assignment_expression2("[conditional_expression]",CAST_PTR(conditional_expression,$1)));}
	;


parameter_type_list
	:parameter_list, ',', ELLIPSIS                                                      {RULE_MARKER(         "parameter_type_list");$$=(CAst::CAst*)(new CAst::parameter_type_list("[parameter_list,',',ELLIPSIS]",CAST_PTR(parameter_list,$1), CAST_PTR(Token,$2), CAST_PTR(Token,$3)));}
	|parameter_list                                                                     {RULE_MARKER(         "parameter_type_list");$$=(CAst::CAst*)(new CAst::parameter_type_list("[parameter_list]",CAST_PTR(parameter_list,$1), NULL, NULL));}
	;


parameter_declaration
	:declaration_specifiers, declarator                                                 {RULE_MARKER(      "parameter_declaration1");$$=(CAst::CAst*)(new CAst::parameter_declaration1("[declaration_specifiers,declarator]",CAST_PTR(declaration_specifiers,$1), CAST_PTR(declarator,$2)));}
	|declaration_specifiers, abstract_declarator                                        {RULE_MARKER(      "parameter_declaration2");$$=(CAst::CAst*)(new CAst::parameter_declaration2("[declaration_specifiers,abstract_declarator]",CAST_PTR(declaration_specifiers,$1), CAST_PTR(abstract_declarator,$2)));}
	|declaration_specifiers                                                             {RULE_MARKER(      "parameter_declaration1");$$=(CAst::CAst*)(new CAst::parameter_declaration1("[declaration_specifiers]",CAST_PTR(declaration_specifiers,$1), NULL));}
	;


multiplicative_expression
	:multiplicative_expression, '*', cast_expression                                    {RULE_MARKER(   "multiplicative_expression");CAST_PTR(multiplicative_expression,$1)->append("[multiplicative_expression,'*',cast_expression]", CAST_PTR(Token,$2), CAST_PTR(cast_expression,$3));$$=$1;}
	|multiplicative_expression, '/', cast_expression                                    {RULE_MARKER(   "multiplicative_expression");CAST_PTR(multiplicative_expression,$1)->append("[multiplicative_expression,'/',cast_expression]", CAST_PTR(Token,$2), CAST_PTR(cast_expression,$3));$$=$1;}
	|multiplicative_expression, '%', cast_expression                                    {RULE_MARKER(   "multiplicative_expression");CAST_PTR(multiplicative_expression,$1)->append("[multiplicative_expression,'%',cast_expression]", CAST_PTR(Token,$2), CAST_PTR(cast_expression,$3));$$=$1;}
	|cast_expression                                                                    {RULE_MARKER(   "multiplicative_expression");$$=(CAst::CAst*)(new CAst::multiplicative_expression("[cast_expression]",CAST_PTR(cast_expression,$1)));}
	;


type_qualifier_list
	:type_qualifier_list, type_qualifier                                                {RULE_MARKER(         "type_qualifier_list");CAST_PTR(type_qualifier_list,$1)->append("[type_qualifier_list,type_qualifier]", CAST_PTR(type_qualifier,$2));$$=$1;}
	|type_qualifier                                                                     {RULE_MARKER(         "type_qualifier_list");$$=(CAst::CAst*)(new CAst::type_qualifier_list("[type_qualifier]",CAST_PTR(type_qualifier,$1)));}
	;


argument_expression_list
	:argument_expression_list, ',', assignment_expression                               {RULE_MARKER(    "argument_expression_list");CAST_PTR(argument_expression_list,$1)->append("[argument_expression_list,',',assignment_expression]", CAST_PTR(assignment_expression,$3));$$=$1;}
	|assignment_expression                                                              {RULE_MARKER(    "argument_expression_list");$$=(CAst::CAst*)(new CAst::argument_expression_list("[assignment_expression]",CAST_PTR(assignment_expression,$1)));}
	;


direct_abstract_declarator
	:direct_abstract_declarator, '[', constant_expression, ']'                          {RULE_MARKER( "direct_abstract_declarator1");$$=(CAst::CAst*)(new CAst::direct_abstract_declarator1("[direct_abstract_declarator,'[',constant_expression,']']",CAST_PTR(direct_abstract_declarator,$1), CAST_PTR(constant_expression,$3)));}
	|direct_abstract_declarator, '(', parameter_type_list, ')'                          {RULE_MARKER( "direct_abstract_declarator2");$$=(CAst::CAst*)(new CAst::direct_abstract_declarator2("[direct_abstract_declarator,'(',parameter_type_list,')']",CAST_PTR(direct_abstract_declarator,$1), CAST_PTR(parameter_type_list,$3)));}
	|'(', abstract_declarator, ')'                                                      {RULE_MARKER( "direct_abstract_declarator3");$$=(CAst::CAst*)(new CAst::direct_abstract_declarator3("['(',abstract_declarator,')']",CAST_PTR(abstract_declarator,$2)));}
	|'[', constant_expression, ']'                                                      {RULE_MARKER( "direct_abstract_declarator1");$$=(CAst::CAst*)(new CAst::direct_abstract_declarator1("['[',constant_expression,']']",NULL, CAST_PTR(constant_expression,$2)));}
	|direct_abstract_declarator, '[', ']'                                               {RULE_MARKER( "direct_abstract_declarator1");$$=(CAst::CAst*)(new CAst::direct_abstract_declarator1("[direct_abstract_declarator,'[',']']",CAST_PTR(direct_abstract_declarator,$1), NULL));}
	|'(', parameter_type_list, ')'                                                      {RULE_MARKER( "direct_abstract_declarator2");$$=(CAst::CAst*)(new CAst::direct_abstract_declarator2("['(',parameter_type_list,')']",NULL, CAST_PTR(parameter_type_list,$2)));}
	|direct_abstract_declarator, '(', ')'                                               {RULE_MARKER( "direct_abstract_declarator2");$$=(CAst::CAst*)(new CAst::direct_abstract_declarator2("[direct_abstract_declarator,'(',')']",CAST_PTR(direct_abstract_declarator,$1), NULL));}
	|'[', ']'                                                                           {RULE_MARKER( "direct_abstract_declarator1");$$=(CAst::CAst*)(new CAst::direct_abstract_declarator1("['[',']']",NULL, NULL));}
	|'(', ')'                                                                           {RULE_MARKER( "direct_abstract_declarator2");$$=(CAst::CAst*)(new CAst::direct_abstract_declarator2("['(',')']",NULL, NULL));}
	;


constant_expression
	:conditional_expression                                                             {RULE_MARKER(         "constant_expression");$$=(CAst::CAst*)(new CAst::constant_expression("[conditional_expression]",CAST_PTR(conditional_expression,$1)));}
	;


equality_expression
	:equality_expression, EQ_OP, relational_expression                                  {RULE_MARKER(         "equality_expression");CAST_PTR(equality_expression,$1)->append("[equality_expression,EQ_OP,relational_expression]", CAST_PTR(Token,$2), CAST_PTR(relational_expression,$3));$$=$1;}
	|equality_expression, NE_OP, relational_expression                                  {RULE_MARKER(         "equality_expression");CAST_PTR(equality_expression,$1)->append("[equality_expression,NE_OP,relational_expression]", CAST_PTR(Token,$2), CAST_PTR(relational_expression,$3));$$=$1;}
	|relational_expression                                                              {RULE_MARKER(         "equality_expression");$$=(CAst::CAst*)(new CAst::equality_expression("[relational_expression]",CAST_PTR(relational_expression,$1)));}
	;


primary_expression
	:'(', expression, ')'                                                               {RULE_MARKER(         "primary_expression1");$$=(CAst::CAst*)(new CAst::primary_expression1("['(',expression,')']",CAST_PTR(expression,$2)));}
	|IDENTIFIER                                                                         {RULE_MARKER(         "primary_expression2");$$=(CAst::CAst*)(new CAst::primary_expression2("[IDENTIFIER]",CAST_PTR(Token,$1)));}
	|CONSTANT                                                                           {RULE_MARKER(         "primary_expression2");$$=(CAst::CAst*)(new CAst::primary_expression2("[CONSTANT]",CAST_PTR(Token,$1)));}
	|STRING_LITERAL                                                                     {RULE_MARKER(         "primary_expression2");$$=(CAst::CAst*)(new CAst::primary_expression2("[STRING_LITERAL]",CAST_PTR(Token,$1)));}
	;


declaration_specifiers
	:storage_class_specifier, declaration_specifiers                                    {RULE_MARKER(     "declaration_specifiers1");CAST_PTR(declaration_specifiers1,$2)->append("[storage_class_specifier,declaration_specifiers]", CAST_PTR(storage_class_specifier,$1));$$=$2;}
	|type_specifier, declaration_specifiers                                             {RULE_MARKER(     "declaration_specifiers2");CAST_PTR(declaration_specifiers2,$2)->append("[type_specifier,declaration_specifiers]", CAST_PTR(type_specifier,$1));$$=$2;}
	|type_qualifier, declaration_specifiers                                             {RULE_MARKER(     "declaration_specifiers3");CAST_PTR(declaration_specifiers3,$2)->append("[type_qualifier,declaration_specifiers]", CAST_PTR(type_qualifier,$1));$$=$2;}
	|storage_class_specifier                                                            {RULE_MARKER(     "declaration_specifiers1");$$=(CAst::CAst*)(new CAst::declaration_specifiers1("[storage_class_specifier]",CAST_PTR(storage_class_specifier,$1)));}
	|type_specifier                                                                     {RULE_MARKER(     "declaration_specifiers2");$$=(CAst::CAst*)(new CAst::declaration_specifiers2("[type_specifier]",CAST_PTR(type_specifier,$1)));}
	|type_qualifier                                                                     {RULE_MARKER(     "declaration_specifiers3");$$=(CAst::CAst*)(new CAst::declaration_specifiers3("[type_qualifier]",CAST_PTR(type_qualifier,$1)));}
	;


declaration
	:declaration_specifiers, init_declarator_list, ';'                                  {RULE_MARKER(                 "declaration");$$=(CAst::CAst*)(new CAst::declaration("[declaration_specifiers,init_declarator_list,';']",CAST_PTR(declaration_specifiers,$1), CAST_PTR(init_declarator_list,$2)));}
	|declaration_specifiers, ';'                                                        {RULE_MARKER(                 "declaration");$$=(CAst::CAst*)(new CAst::declaration("[declaration_specifiers,';']",CAST_PTR(declaration_specifiers,$1), NULL));}
	;


direct_declarator
	:direct_declarator, '[', constant_expression, ']'                                   {RULE_MARKER(          "direct_declarator1");$$=(CAst::CAst*)(new CAst::direct_declarator1("[direct_declarator,'[',constant_expression,']']",CAST_PTR(direct_declarator,$1), CAST_PTR(constant_expression,$3)));}
	|direct_declarator, '(', parameter_type_list, ')'                                   {RULE_MARKER(          "direct_declarator2");$$=(CAst::CAst*)(new CAst::direct_declarator2("[direct_declarator,'(',parameter_type_list,')']",CAST_PTR(direct_declarator,$1), CAST_PTR(parameter_type_list,$3)));}
	|direct_declarator, '(', identifier_list, ')'                                       {RULE_MARKER(          "direct_declarator3");$$=(CAst::CAst*)(new CAst::direct_declarator3("[direct_declarator,'(',identifier_list,')']",CAST_PTR(direct_declarator,$1), CAST_PTR(identifier_list,$3)));}
	|'(', declarator, ')'                                                               {RULE_MARKER(          "direct_declarator4");$$=(CAst::CAst*)(new CAst::direct_declarator4("['(',declarator,')']",CAST_PTR(declarator,$2)));}
	|direct_declarator, '[', ']'                                                        {RULE_MARKER(          "direct_declarator1");$$=(CAst::CAst*)(new CAst::direct_declarator1("[direct_declarator,'[',']']",CAST_PTR(direct_declarator,$1), NULL));}
	|direct_declarator, '(', ')'                                                        {RULE_MARKER(          "direct_declarator2");$$=(CAst::CAst*)(new CAst::direct_declarator2("[direct_declarator,'(',')']",CAST_PTR(direct_declarator,$1), NULL));}
	|IDENTIFIER                                                                         {RULE_MARKER(          "direct_declarator5");$$=(CAst::CAst*)(new CAst::direct_declarator5("[IDENTIFIER]",CAST_PTR(Token,$1)));}
	;


logical_and_expression
	:logical_and_expression, AND_OP, inclusive_or_expression                            {RULE_MARKER(      "logical_and_expression");CAST_PTR(logical_and_expression,$1)->append("[logical_and_expression,AND_OP,inclusive_or_expression]", CAST_PTR(inclusive_or_expression,$3));$$=$1;}
	|inclusive_or_expression                                                            {RULE_MARKER(      "logical_and_expression");$$=(CAst::CAst*)(new CAst::logical_and_expression("[inclusive_or_expression]",CAST_PTR(inclusive_or_expression,$1)));}
	;


init_declarator_list
	:init_declarator_list, ',', init_declarator                                         {RULE_MARKER(        "init_declarator_list");CAST_PTR(init_declarator_list,$1)->append("[init_declarator_list,',',init_declarator]", CAST_PTR(init_declarator,$3));$$=$1;}
	|init_declarator                                                                    {RULE_MARKER(        "init_declarator_list");$$=(CAst::CAst*)(new CAst::init_declarator_list("[init_declarator]",CAST_PTR(init_declarator,$1)));}
	;


shift_expression
	:shift_expression, LEFT_OP, additive_expression                                     {RULE_MARKER(            "shift_expression");CAST_PTR(shift_expression,$1)->append("[shift_expression,LEFT_OP,additive_expression]", CAST_PTR(Token,$2), CAST_PTR(additive_expression,$3));$$=$1;}
	|shift_expression, RIGHT_OP, additive_expression                                    {RULE_MARKER(            "shift_expression");CAST_PTR(shift_expression,$1)->append("[shift_expression,RIGHT_OP,additive_expression]", CAST_PTR(Token,$2), CAST_PTR(additive_expression,$3));$$=$1;}
	|additive_expression                                                                {RULE_MARKER(            "shift_expression");$$=(CAst::CAst*)(new CAst::shift_expression("[additive_expression]",CAST_PTR(additive_expression,$1)));}
	;


identifier_list
	:identifier_list, ',', IDENTIFIER                                                   {RULE_MARKER(             "identifier_list");CAST_PTR(identifier_list,$1)->append("[identifier_list,',',IDENTIFIER]", CAST_PTR(Token,$3));$$=$1;}
	|IDENTIFIER                                                                         {RULE_MARKER(             "identifier_list");$$=(CAst::CAst*)(new CAst::identifier_list("[IDENTIFIER]",CAST_PTR(Token,$1)));}
	;


jump_statement
	:GOTO, IDENTIFIER, ';'                                                              {RULE_MARKER(             "jump_statement1");$$=(CAst::CAst*)(new CAst::jump_statement1("[GOTO,IDENTIFIER,';']",CAST_PTR(Token,$2)));}
	|RETURN, expression, ';'                                                            {RULE_MARKER(             "jump_statement2");$$=(CAst::CAst*)(new CAst::jump_statement2("[RETURN,expression,';']",CAST_PTR(expression,$2)));}
	|CONTINUE, ';'                                                                      {RULE_MARKER(             "jump_statement3");$$=(CAst::CAst*)(new CAst::jump_statement3("[CONTINUE,';']",CAST_PTR(Token,$1)));}
	|BREAK, ';'                                                                         {RULE_MARKER(             "jump_statement3");$$=(CAst::CAst*)(new CAst::jump_statement3("[BREAK,';']",CAST_PTR(Token,$1)));}
	|RETURN, ';'                                                                        {RULE_MARKER(             "jump_statement2");$$=(CAst::CAst*)(new CAst::jump_statement2("[RETURN,';']",NULL));}
	;


struct_declarator
	:declarator, ':', constant_expression                                               {RULE_MARKER(           "struct_declarator");$$=(CAst::CAst*)(new CAst::struct_declarator("[declarator,':',constant_expression]",CAST_PTR(declarator,$1), CAST_PTR(Token,$2), CAST_PTR(constant_expression,$3)));}
	|':', constant_expression                                                           {RULE_MARKER(           "struct_declarator");$$=(CAst::CAst*)(new CAst::struct_declarator("[':',constant_expression]",NULL, CAST_PTR(Token,$1), CAST_PTR(constant_expression,$2)));}
	|declarator                                                                         {RULE_MARKER(           "struct_declarator");$$=(CAst::CAst*)(new CAst::struct_declarator("[declarator]",CAST_PTR(declarator,$1), NULL, NULL));}
	;


function_definition
	:declaration_specifiers, declarator, declaration_list, compound_statement           {RULE_MARKER(         "function_definition");$$=(CAst::CAst*)(new CAst::function_definition("[declaration_specifiers,declarator,declaration_list,compound_statement]",CAST_PTR(declaration_specifiers,$1), CAST_PTR(declarator,$2), CAST_PTR(declaration_list,$3), CAST_PTR(compound_statement,$4)));}
	|declaration_specifiers, declarator, compound_statement                             {RULE_MARKER(         "function_definition");$$=(CAst::CAst*)(new CAst::function_definition("[declaration_specifiers,declarator,compound_statement]",CAST_PTR(declaration_specifiers,$1), CAST_PTR(declarator,$2), NULL, CAST_PTR(compound_statement,$3)));}
	|declarator, declaration_list, compound_statement                                   {RULE_MARKER(         "function_definition");$$=(CAst::CAst*)(new CAst::function_definition("[declarator,declaration_list,compound_statement]",NULL, CAST_PTR(declarator,$1), CAST_PTR(declaration_list,$2), CAST_PTR(compound_statement,$3)));}
	|declarator, compound_statement                                                     {RULE_MARKER(         "function_definition");$$=(CAst::CAst*)(new CAst::function_definition("[declarator,compound_statement]",NULL, CAST_PTR(declarator,$1), NULL, CAST_PTR(compound_statement,$2)));}
	;


parameter_list
	:parameter_list, ',', parameter_declaration                                         {RULE_MARKER(              "parameter_list");CAST_PTR(parameter_list,$1)->append("[parameter_list,',',parameter_declaration]", CAST_PTR(parameter_declaration,$3));$$=$1;}
	|parameter_declaration                                                              {RULE_MARKER(              "parameter_list");$$=(CAst::CAst*)(new CAst::parameter_list("[parameter_declaration]",CAST_PTR(parameter_declaration,$1)));}
	;


enum_specifier
	:ENUM, IDENTIFIER, '{', enumerator_list, '}'                                        {RULE_MARKER(              "enum_specifier");$$=(CAst::CAst*)(new CAst::enum_specifier("[ENUM,IDENTIFIER,'{',enumerator_list,'}']",CAST_PTR(Token,$2), CAST_PTR(Token,$3), CAST_PTR(enumerator_list,$4), CAST_PTR(Token,$5)));}
	|ENUM, '{', enumerator_list, '}'                                                    {RULE_MARKER(              "enum_specifier");$$=(CAst::CAst*)(new CAst::enum_specifier("[ENUM,'{',enumerator_list,'}']",NULL, CAST_PTR(Token,$2), CAST_PTR(enumerator_list,$3), CAST_PTR(Token,$4)));}
	|ENUM, IDENTIFIER                                                                   {RULE_MARKER(              "enum_specifier");$$=(CAst::CAst*)(new CAst::enum_specifier("[ENUM,IDENTIFIER]",CAST_PTR(Token,$2), NULL, NULL, NULL));}
	;


type_qualifier
	:CONST                                                                              {RULE_MARKER(              "type_qualifier");$$=(CAst::CAst*)(new CAst::type_qualifier("[CONST]",CAST_PTR(Token,$1)));}
	|VOLATILE                                                                           {RULE_MARKER(              "type_qualifier");$$=(CAst::CAst*)(new CAst::type_qualifier("[VOLATILE]",CAST_PTR(Token,$1)));}
	;


enumerator_list
	:enumerator_list, ',', enumerator                                                   {RULE_MARKER(             "enumerator_list");CAST_PTR(enumerator_list,$1)->append("[enumerator_list,',',enumerator]", CAST_PTR(enumerator,$3));$$=$1;}
	|enumerator                                                                         {RULE_MARKER(             "enumerator_list");$$=(CAst::CAst*)(new CAst::enumerator_list("[enumerator]",CAST_PTR(enumerator,$1)));}
	;


labeled_statement
	:CASE, constant_expression, ':', statement                                          {RULE_MARKER(          "labeled_statement1");$$=(CAst::CAst*)(new CAst::labeled_statement1("[CASE,constant_expression,':',statement]",CAST_PTR(constant_expression,$2), CAST_PTR(statement,$4)));}
	|IDENTIFIER, ':', statement                                                         {RULE_MARKER(          "labeled_statement2");$$=(CAst::CAst*)(new CAst::labeled_statement2("[IDENTIFIER,':',statement]",CAST_PTR(Token,$1), CAST_PTR(statement,$3)));}
	|DEFAULT, ':', statement                                                            {RULE_MARKER(          "labeled_statement2");$$=(CAst::CAst*)(new CAst::labeled_statement2("[DEFAULT,':',statement]",CAST_PTR(Token,$1), CAST_PTR(statement,$3)));}
	;


declaration_list
	:declaration_list, declaration                                                      {RULE_MARKER(            "declaration_list");CAST_PTR(declaration_list,$1)->append("[declaration_list,declaration]", CAST_PTR(declaration,$2));$$=$1;}
	|declaration                                                                        {RULE_MARKER(            "declaration_list");$$=(CAst::CAst*)(new CAst::declaration_list("[declaration]",CAST_PTR(declaration,$1)));}
	;


specifier_qualifier_list
	:type_specifier, specifier_qualifier_list                                           {RULE_MARKER(   "specifier_qualifier_list1");CAST_PTR(specifier_qualifier_list1,$2)->append("[type_specifier,specifier_qualifier_list]", CAST_PTR(type_specifier,$1));$$=$2;}
	|type_qualifier, specifier_qualifier_list                                           {RULE_MARKER(   "specifier_qualifier_list2");CAST_PTR(specifier_qualifier_list2,$2)->append("[type_qualifier,specifier_qualifier_list]", CAST_PTR(type_qualifier,$1));$$=$2;}
	|type_specifier                                                                     {RULE_MARKER(   "specifier_qualifier_list1");$$=(CAst::CAst*)(new CAst::specifier_qualifier_list1("[type_specifier]",CAST_PTR(type_specifier,$1)));}
	|type_qualifier                                                                     {RULE_MARKER(   "specifier_qualifier_list2");$$=(CAst::CAst*)(new CAst::specifier_qualifier_list2("[type_qualifier]",CAST_PTR(type_qualifier,$1)));}
	;


unary_operator
	:'&'                                                                                {RULE_MARKER(              "unary_operator");$$=(CAst::CAst*)(new CAst::unary_operator("['&']",CAST_PTR(Token,$1)));}
	|'*'                                                                                {RULE_MARKER(              "unary_operator");$$=(CAst::CAst*)(new CAst::unary_operator("['*']",CAST_PTR(Token,$1)));}
	|'+'                                                                                {RULE_MARKER(              "unary_operator");$$=(CAst::CAst*)(new CAst::unary_operator("['+']",CAST_PTR(Token,$1)));}
	|'-'                                                                                {RULE_MARKER(              "unary_operator");$$=(CAst::CAst*)(new CAst::unary_operator("['-']",CAST_PTR(Token,$1)));}
	|'~'                                                                                {RULE_MARKER(              "unary_operator");$$=(CAst::CAst*)(new CAst::unary_operator("['~']",CAST_PTR(Token,$1)));}
	|'!'                                                                                {RULE_MARKER(              "unary_operator");$$=(CAst::CAst*)(new CAst::unary_operator("['!']",CAST_PTR(Token,$1)));}
	;


initializer_list
	:initializer_list, ',', initializer                                                 {RULE_MARKER(            "initializer_list");CAST_PTR(initializer_list,$1)->append("[initializer_list,',',initializer]", CAST_PTR(initializer,$3));$$=$1;}
	|initializer                                                                        {RULE_MARKER(            "initializer_list");$$=(CAst::CAst*)(new CAst::initializer_list("[initializer]",CAST_PTR(initializer,$1)));}
	;


statement_list
	:statement_list, statement                                                          {RULE_MARKER(              "statement_list");CAST_PTR(statement_list,$1)->append("[statement_list,statement]", CAST_PTR(statement,$2));$$=$1;}
	|statement                                                                          {RULE_MARKER(              "statement_list");$$=(CAst::CAst*)(new CAst::statement_list("[statement]",CAST_PTR(statement,$1)));}
	;


expression
	:expression, ',', assignment_expression                                             {RULE_MARKER(                  "expression");CAST_PTR(expression,$1)->append("[expression,',',assignment_expression]", CAST_PTR(assignment_expression,$3));$$=$1;}
	|assignment_expression                                                              {RULE_MARKER(                  "expression");$$=(CAst::CAst*)(new CAst::expression("[assignment_expression]",CAST_PTR(assignment_expression,$1)));}
	;


declarator
	:pointer, direct_declarator                                                         {RULE_MARKER(                  "declarator");$$=(CAst::CAst*)(new CAst::declarator("[pointer,direct_declarator]",CAST_PTR(pointer,$1), CAST_PTR(direct_declarator,$2)));}
	|direct_declarator                                                                  {RULE_MARKER(                  "declarator");$$=(CAst::CAst*)(new CAst::declarator("[direct_declarator]",NULL, CAST_PTR(direct_declarator,$1)));}
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
