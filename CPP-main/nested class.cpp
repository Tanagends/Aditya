#include<iostream>
using namespace std;
class A{
	public: class B{
	int a;
 	public:B(int x)
	{
	a=x;	
	}
	void display()
	{
		cout<<"a= "<<a<<endl;
	}
	};
};
int main()
{
	A::B obj1(25);
	obj1.display();
	return 0;
}
