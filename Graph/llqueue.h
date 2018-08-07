using namespace std;

template <class T>
struct NodeType{
	T info;
	NodeType<T>* next;
};


template <class T>
class llqueue
{
public:
	llqueue();
	//	Pre:	None
	//	Post:	Queue is initialized to an empty state

	~llqueue();
	//	Pre:	None
	//	Post:	Data is removed

	llqueue(const llqueue<T> & acopy);

	void operator = (const llqueue<T> & acopy);

	bool isFull() const;
	//	Pre:	None
	//	Post:	Returns true if queue is full, false otherwise

	bool isEmpty() const;
	//	Pre:	None
	//	Post:	Returns true if queue is empty, false otherwise

	void Enqueue(T);
	//	Pre:	Not full
	//	Post:	Item is added to the queue

	void Dequeue(T&);
	//	Pre:	Not Empty
	//	Post:	The first item in the queue is removed and returned

	void makeEmpty();
	//	Pre:	None
	//	Post:	Queue is empty

	T peek() const;
	//	Pre:	Queue is not empty
	//	Post:	Return the first item without removing it

	int getLength() const;
	//	Pre:	None
	//	Post:	Returns the number of items in the queue


private:
	NodeType<T>* qFront;	// pointer to queue front
	NodeType<T>* qRear;		// pointer to queue rear
	int length;				// holds current length of queue
	
};

#include "llqueue.template"