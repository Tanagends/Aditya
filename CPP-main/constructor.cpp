#include<iostream>
using namespace std;
class A
{
	private: int a;
	public: A()
	{
		cout<<"this is A constructor"<<endl;
		cout<<"enter a"<<endl;
		cin>>a;
	}
	int getA() const
	{
		return a;
	}
};
int main()
{
	A a1;
	cout<<"variable a is: "<<a1.getA()<<endl;
	return 0;
}
