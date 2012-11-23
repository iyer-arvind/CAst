
#include <iostream>
#include <cstdio>
#include "CAst.h"



extern FILE* yyin;

int main(int argc,char **argv)
{

	CAst::ReferenceCountedAutoPointer<CAst::translation_unit> root=parseFile(argv[1]);
	yyin=fopen(argv[1],"r");
	yyparse();
	std::cout<<"\n"<<root->graph()<<"\n";

	//CAst::multiplicative_expression_item a({_T("*"),_V("10")});
	//CAst::Ptr::multiplicative_expression_item mi({_T("*"),_V("10")});
	//CAst::Ptr::multiplicative_expression m(_V("a"));m->append(mi);
	//CAst::Ptr::argument_expression_list ael(_V("\"\%d\""));ael->append(new CAst::argument_expression_list_item(_T(","),m));
	//CAst::Ptr::function_call pe(new CAst::function_call(_V("printf"),ael));
	//CAst::Ptr::CAst root=pe;
	
	std::cout<<root->graph();
	return 0;
}

