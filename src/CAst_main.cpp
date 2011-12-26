
#include <iostream>
#include <cstdio>
#include "CAst.h"
int yyparse(void);
extern FILE* yyin;
CAst::translation_unit *root;

int main(int argc,char **argv)
{
	root=0;
	yyin=fopen(argv[1],"r");
	yyparse();
	
	std::cout<<"yyval:"<<root<<"\n";
	delete root;
//	std::cout<<"deleted\n\n";
	return 0;
}

