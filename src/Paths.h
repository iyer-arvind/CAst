#ifndef DIJKSTRA_H_INCLUDED
#define DIJKSTRA_H_INCLUDED

#include <utility>
#include <list>
#include <ostream>

namespace Graphs
{




template<typename NODETYPE,typename F>
class Paths
{
	public:
		typedef NODETYPE NodeType;
		typedef F(*ConverterFunctionType)(const F&);

		class EdgeType:public std::pair<NodeType,NodeType>
		{
			private:
				ConverterFunctionType _f;
			public:
				EdgeType(NodeType a,NodeType b,ConverterFunctionType f):
					std::pair<NodeType,NodeType>(a,b),
					_f(f)
				{}
				F operator()(const F& n)const
				{return _f(n);}
		};
		typedef std::list< EdgeType > DirectedGraphType;
		typedef std::list< NodeType > NodeListType;
		typedef std::list< NodeType > RouteType;

	private:
		DirectedGraphType _graph;
		NodeListType _edgesFrom(NodeType)const;
	public:
		Paths();
		void addEdge(NodeType,NodeType,ConverterFunctionType f);
		RouteType getRoute(NodeType,NodeType)const;
		std::string getRouteDot(NodeType,NodeType)const;
		F parse(NodeType,NodeType,F)const;
};

template<typename T,typename F>
std::ostream& operator<<(std::ostream& stream,const typename Paths<T,F>::RouteType& route);

}

#include "PathsI.cpp"

#endif
