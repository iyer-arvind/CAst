
#include <iostream>
#include <cstdio>
#include "CAst.h"



extern FILE* yyin;

int main(int argc,char **argv)
{

	//CAst::ReferenceCountedAutoPointer<CAst::translation_unit> root=parseFile(argv[1]);
      
	//yyin=fopen(argv[1],"r");
	//yyparse();
	//std::cout<<"\n"<<root->graph()<<"\n";

	CAst::Ptr::multiplicative_expression_item mi(new CAst::multiplicative_expression_item(_T("*"),_T("10",true)));
	CAst::Ptr::multiplicative_expression m(_T("a",true));m->append(mi);
	CAst::Ptr::argument_expression_list ael(_T("\"\%d\"",true));ael->append(new CAst::argument_expression_list_item(_T(","),m));
	CAst::Ptr::postfix_expression_1 pe(new CAst::postfix_expression_1(_T("printf",true),ael));
	

	//CAst::Ptr::storage_class_specifier scs(_T("register"));
	//CAst::Ptr::declaration_specifiers ts(_T("register"));
	//ts->append(_T("int"));
	CAst::Ptr::CAst r=pe;
	std::cout<<r->code();
	return 0;
}

