#include <iostream>
using namespace std;

template <typename T>
T add(T x, T y) {
	return x + y;
}

int main ()
{
	int num1 = 10, num2 = 20;
	cout << add(num1, num2) << endl;

	double num3 = 10.52, num4 = 20.24;
	cout << add(num3, num4)	<< endl;
}




/*
template <class T>
class Test
{
	public:
		Test();
		~Test();

		T Data(T);
};

template <T>
Test<T>::Test()
{cout<<"Constructor, allocate..." << endl;}
*/
