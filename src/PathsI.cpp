#include "Paths.h"
#include <set>
#include <iostream>
#include <sstream>
#include <algorithm>

namespace Graphs
{

template<typename NodeType,typename F>
Paths<NodeType,F>::Paths()
{
}
template<typename NodeType,typename F>
void Paths<NodeType,F>::addEdge(NodeType a,NodeType b,ConverterFunctionType f)
{
	EdgeType e(a,b,f);
	_graph.push_back(e);
}

template<typename NodeType,typename F>
typename Paths<NodeType,F>::NodeListType Paths<NodeType,F>::_edgesFrom(NodeType a)const
{
	NodeListType nodeList;
	for(typename DirectedGraphType::const_iterator i=_graph.begin();i!=_graph.end();i++)
	{
		if(i->first==a)
			nodeList.push_back(i->second);
	}
	return nodeList;
}
template<typename NodeType,typename F>
std::string Paths<NodeType,F>::getRouteDot(NodeType a,NodeType b)const
{
	std::stringstream stream;
	RouteType r=getRoute(a,b);
	NodeType p;
	DirectedGraphType gg=_graph;
	stream<<"digraph G\n{\n";
	stream<<"\tedge [color=red]\n";
	for(typename RouteType::iterator n=r.begin();n!=r.end();n++)
	{
		if(n==r.begin())
		{
		}
		else
		{
			stream<<"\t"<<p<<"->"<<*n<<";\n";
			typename DirectedGraphType::iterator di=std::find(gg.begin(),gg.end(),EdgeType(p,*n,NULL));
			gg.erase(di);
		}
		p=*n;
	}
	stream<<"\tedge [color=black]\n";
	for(typename DirectedGraphType::iterator e=gg.begin();e!=gg.end();e++)
	{
		stream<<"\t"<<e->first<<"->"<<e->second<<";\n";
	}
	stream<<"}";
	return stream.str();
}
template<typename NodeType,typename F>
F  Paths<NodeType,F>::parse(NodeType a,NodeType b,F f)const
{
	RouteType r=getRoute(a,b);
	NodeType p;
	for(typename RouteType::iterator n=r.begin();n!=r.end();n++)
	{
		if(n==r.begin())
		{
		}
		else
		{
			typename DirectedGraphType::const_iterator di=std::find(_graph.begin(),_graph.end(),EdgeType(p,*n,NULL));
			EdgeType edge=*di;
			f=edge(f);
		}
		p=*n;
	}
	return f;
}
template<typename NodeType,typename F>
typename Paths<NodeType,F>::RouteType Paths<NodeType,F>::getRoute(NodeType a,NodeType b)const
{
	typedef std::list<RouteType> RouteList;
	std::set<NodeType> doneNodes;
	RouteList prev,current;
	RouteType init;
	init.push_back(a);
	prev.push_back(init);
	doneNodes.insert(a);
	while(1)
	{
		for(typename RouteList::iterator r=prev.begin();r!=prev.end();r++)
		{
			typename RouteType::iterator rr=r->end();rr--;
			//std::cout<<" Nodes from"<<*rr<<"\n";
			NodeListType nodes=_edgesFrom(*rr);
			for(typename NodeListType::iterator n=nodes.begin();n!=nodes.end();n++)
			{
				if(doneNodes.count(*n))
				{
					//std::cout<<"ignoring "<<*rr<<" -> "<<*n<<"\n";
					continue;
				}
				else
				{
					//std::cout<<"adding "<<*rr<<" -> "<<*n<<"\n";
				}
				doneNodes.insert(*n);
				RouteType cr=*r;
				cr.push_back(*n);
				//std::cout<<"Retained route:"<<cr<<"\n";
				if(*n==b)return cr;
				current.push_back(cr);
			}
		}
		if(!current.size())return RouteType();
		prev=current;
		current.clear();
		//std::cout<<"Current RouteList:\n";
		//for(RouteList::iterator r=prev.begin();r!=prev.end();r++)std::cout<<"\t"<<*r<<"\n";
		//std::cout<<"\n";
		
	}
}

template<typename NodeType,typename F>
std::ostream& operator<<(std::ostream& stream,const typename Paths<NodeType,F>::RouteType& route)
{
	for (typename Paths<NodeType,F>::RouteType::const_iterator i=route.begin();i!=route.end();i++)
	{
		if(i!=route.begin())stream<<" -> ";
		stream<<(*i);
	}
	return stream;
}
}

