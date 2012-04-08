
#include <iostream>
#include <cstdio>
#include "CAst.h"





int main(int argc,char **argv)
{

	CAst::ReferenceCountedAutoPointer<CAst::translation_unit> root=parseFile(argv[1]);
	
//	yyin=fopen(argv[1],"r");
//	yyparse();
//	std::cerr<<root->getPropertiesList()<<"\n";


//	std::cout<<root->code();
//	delete root;
//	root=0;
////	std::cout<<"deleted\n\n";
	std::cout<<"\n"<<root.refCount()<<"\n";
	root->codeStream(std::cout);
	return 0;
}

