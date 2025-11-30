#include<iostream>
using namespace std;
class B;
class A
{
	private: int a;
	public: void geta()
	{
		cout<<"enter value of a"<<endl;
		cin>>a;
	}
	friend void product(A,B);
};

class B
{
	private: int b;
	public: void getb()
	{
		cout<<"enter b value"<<endl;
		cin>>b;
	}
friend void product(A,B);	
};

void product(A obj1,B obj2)
{

		cout<<"Product is : "<<obj1.a*obj2.b<<endl;
	
};

int main()
{
	A a1;
	B b1;
	a1.geta();
	b1.getb();
    product(a1,b1);
	return 0;
}
