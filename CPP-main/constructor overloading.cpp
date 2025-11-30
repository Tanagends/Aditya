#include<iostream>
using namespace std;
class A
{
	int a;
	public: A()
	{
		a=10;
		cout<<"the value of a in default constructor is: "<<a<<endl;
	}
	A(int b)
	{
		a=a+b;
		cout<<"the value of a+b is: "<<a<<endl;
	}
	A(int c,int d)
	{
		a=a+c+d;
		cout<<"the value of a+c+d is: "<<a<<endl;
	}
};
int main()
{
	A obj1,obj2(20),obj3(30,40);
	return 0;
}
