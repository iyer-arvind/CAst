
#include <iostream>
#include <cstdio>
#include "CAst.h"
int yyparse(void);
extern FILE* yyin;
YYSTYPE root;

int main(int argc,char **argv)
{
	root=0;
	yyin=fopen(argv[1],"r");
	yyparse();
	
	std::cout<<"yyval:"<<root<<"\n";
	CAst::translation_unit *yroot=dynamic_cast<CAst::translation_unit*>(root);
//	std::cout<<"delete\n\n";
	delete yroot;
//	std::cout<<"deleted\n\n";
	return 0;
}

