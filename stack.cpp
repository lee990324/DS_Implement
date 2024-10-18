#include <iostream>
using namespace std;

template<class T>
class Stack
{
	public:
		Stack(int stackCapacity = 10);
		~stack() {delete [] stack;}
		bool IsEmpty() const;
		T& Top() const;
		void Push(const T& item);
		void Pop();
	private:
		T *stack;
		int top;
		int capacity;
}

template<class T>
Stack<T>::stack(int stackCapacity)
		:capacity(stackCapacity)
{
	if (capacity < 1)
		throw "Stack capacity must be > 0";
		
}
