#include "Paths.h"
#include <iostream>

template<int A,int B>
std::string conv(const std::string &a)
{
	std::cout<<A<<" Convert to "<<B<<"\n";
	return a;
}
int main()
{
	Graphs::Paths<int,std::string> paths;
	paths.addEdge(0,1,&conv<0,1>);
	paths.addEdge(0,2,&conv<0,2>);
	paths.addEdge(2,4,&conv<2,4>);
	paths.addEdge(4,3,&conv<4,3>);
	paths.addEdge(3,4,&conv<3,4>);
	paths.addEdge(1,3,&conv<1,3>);
	paths.addEdge(5,6,&conv<5,6>);
	paths.addEdge(4,7,&conv<4,7>);
	paths.addEdge(4,5,&conv<4,5>);
	paths.addEdge(5,8,&conv<5,8>);
	paths.addEdge(3,6,&conv<3,6>);

	std::cout<<paths.parse(0,6,"test");

}
