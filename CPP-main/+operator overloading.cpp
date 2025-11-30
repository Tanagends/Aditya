#include<iostream>
using namespace std;
class A{
	private: int a,b;
	public: A()
	{
		a=0;
		b=0;
	}
	A(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<a<<","<<b<<endl;
	}
	A operator+(A&upd)
	{
		A temp;
		temp.a=a+upd.a;
		temp.b=b+upd.b;
		return temp;
	}
	A operator-(A&upd)
	{
		A temp;
		temp.a=a-upd.a;
		temp.b=b-upd.b;
		return temp;
	}
};
int main()
{
	A obj1(2,3),obj2(8,9);
	A obj3=obj1+obj2;
    A obj4=obj1-obj2;

	obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();
	return 0;
}
