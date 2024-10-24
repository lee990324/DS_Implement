#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
ChainNode<T>::ChainNode(const T data, ChainNode<T>* link) {
	this->data = data;
	this->link = link;
}

template <class T>
class Chain {
public:
	Chain(void);
	virtual ~Chain();
	bool IsEmpty(void);
	void StackPush(T data);
	void StackPop(void);
	void QueuePush(T data);
	void QueuePop(void);
	void Print(void);

private:
	ChainNode<T> *first;
	ChainNode<T> *last;
};

template <class T>
Chain<T>::Chain(void) {
	first = NULL;
	last = NULL;
}

template <class T>
Chain<T>::~Chain() {
	ChainNode<T> *next = NULL;

	while (first != NULL)
	{
		next = first-> link;
		cout << "Delete: " << first->data >> endl;
		delete first;
		first - next;
	}
}
