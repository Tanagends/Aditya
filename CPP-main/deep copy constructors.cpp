#include<iostream>
using namespace std;
class A{
	int a,*b;
	public: A(int x,int y)
	{
		a=x;
		b=new int;
		*b=y;
	}
	void display()
	{
		cout<<a<<" "<<*b<<endl;
	}
	void updateb(int z)
	{
	*b=z;
	}
};
int main()
{
	A obj1(10,20);
	obj1.display();
	A obj2=obj1;
	obj2.display();
	obj1.updateb(800);
	cout<<"after modification....."<<endl;
	obj1.display();
	obj2.display();
	return 0;
}
