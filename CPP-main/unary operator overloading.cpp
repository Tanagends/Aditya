#include<iostream>
using namespace std;
class A{
	private: int a;
	public:A()
	{
		a=0;
	}
	A(int x)
	{
		a=x;
	}
	void display()
	{
		cout<<"a is : "<<a<<endl;
	}
	A operator++(int)
	{
		a++;
	}
	A operator--(int)
	{
		a--;
	}
};
int main()
{
	A obj1(10),obj2(20);
	obj1++;
	obj2--;
	obj1.display();
	obj2.display();
	return 0;
}
