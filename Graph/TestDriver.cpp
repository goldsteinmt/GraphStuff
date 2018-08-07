#include "Graph.h"

int main()
{
	GraphType<int> g1;			// Test default constructor
	GraphType<int> g2(100);		// Test constructor of custom max vertices
	GraphType<int> g3(g2);		// Test Copy Constructor
	GraphType<int> g4 = g3;		// Test operator overload of =

	g2.AddVertex(10);
	g2.AddVertex(12);
	g2.AddVertex(50);
	g2.AddEdge(10, 12, 15);

	g2.AddEdge(10, 50, 15);
	g2.AddEdge(12, 50, 50);

	DepthFirstSearch(g2, 10, 12);

	cin.ignore();
	return 0;
}