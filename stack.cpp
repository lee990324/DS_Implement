#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
class Stack
{
	public:
		Stack(int stackCapacity = 10);
		~Stack() {delete [] stack;}
		bool IsEmpty() const;
		T& Top() const;
		void Push(const T& item);
		void Pop();
	private:
		T *stack;
		int top;
		int capacity;
};

template<class T>
Stack<T>::Stack(int stackCapacity):capacity(stackCapacity)
{
	if (capacity < 1)
		throw "Stack capacity must be > 0";
	stack = new T[capacity];
	top = -1;	
}
template<class T>
inline bool Stack<T>::IsEmpty() const
	{return top == -1;}

template<class T>
inline T& Stack<T>::Top() const
{
	if (IsEmpty())
		throw "Stack is empty";
	return stack[top];
}
template<class T>
void Stack<T>::Push(const T& x)
{
	if (top == capacity - 1)
	       throw "Full!";
	stack[++top] = x;
}
template <class T>
void Stack<T>::Pop()
{
	if (IsEmpty())
		throw "Stack is empty. Cannot delete.";
	stack[top--].~T();
}


int main()
{
	Stack<int> stack(5);
	stack.Push(5);
	stack.Push(3);	
	stack.Push(5);
	stack.Push(4);	
	cout << stack.Top() << endl;

}














