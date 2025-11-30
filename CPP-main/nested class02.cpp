#include<iostream>
using namespace std;
class A{
	private: 
	class B{
	int a;
	public: B(int x)
	{
	a=x;	
	}
	void displayb()
	{
		cout<<"a= "<<a<<endl;
	}
	};
	public: 
	class C{
	int b;
	B obj(45);
	public: C(int y)
	{
		b=y;
	}
	void displayc()
	{
		cout<<"b= "<<b<<endl;
		obj.displayb();
	}
	};
};
int main()
{
	A objecta;
	A::C object_c(87);
	object_c.displayc();
	return 0;
}
