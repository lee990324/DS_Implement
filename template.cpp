#include <iostream>
using namespace std;
/*
// function template
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
*/
// class template
template <class T>
class Calcu
{
	private:
		T num1;
		T num2;
	public:
		Calcu(T num1, T num2) {
			this->num1 = num1;
			this->num2 = num2;
		}
		T GetAdd() {
			return num1 + num2;
		}
};

int main ()
{
	Calcu<int> calcu1(10, 20);
	cout << calcu1.GetAdd() << endl;

	
	Calcu<double> calcu2(10.52, 20.24);
	cout << calcu2.GetAdd() << endl;
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
