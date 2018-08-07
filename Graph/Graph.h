#include <iostream>
#include "llqueue.h"
#include <stack>
using namespace std;

template <class T>
class GraphType {
	// A graph consists of a set of vertices and a set of 
	// weighted edges that connect some or all of the vertices to one another
public:
	GraphType();		// Default is 50 vertices
	GraphType(int);
	GraphType(const GraphType<T>&);
	void operator =(const GraphType<T>&);
	~GraphType();
	void MakeEmpty();
	bool IsEmpty();
	bool IsFull();
	void AddVertex(T);
	void DeleteVertex(T);
	void AddEdge(T, T, int);
	void DeleteEdge(T, T);
	int GetWeight(T, T);
	void GetToVertices(T, llqueue<T>&);
	void ClearMarks();
	void MarkVertex(T);
	bool IsMarked(T);
private:
	const int NULL_EDGE = 0;
	int numVertices;
	int maxVertices;
	T* vertices;
	int **edges;
	bool* marks;		// marks[i] is the mark for vertices[i]

	int IndexIs(T*, T);
};

template <class T>
void DepthFirstSearch(GraphType<T>, T, T);
template <class T>
void BreadthFirstSearch(GraphType<T>, T, T);

#include "Graph.template"