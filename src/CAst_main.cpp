
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

	//CAst::Ptr::storage_class_specifier scs(_T("register"));
	//CAst::Ptr::declaration_specifiers ts(_T("register"));
	//ts->append(_T("int"));
	//std::cout<<ts->code();
	return 0;
}

