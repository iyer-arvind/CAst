
#include <iostream>
#include <cstdio>
#include "CAst.h"





int main(int argc,char **argv)
{

	CAst::translation_unit* root=CAst::parseFile(argv[1]);
	
//	yyin=fopen(argv[1],"r");
//	yyparse();
	std::cerr<<root->getPropertiesList()<<"\n";


	std::cout<<root->code();
	delete root;
	root=0;
////	std::cout<<"deleted\n\n";
	return 0;
}

