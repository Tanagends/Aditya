#include<iostream>
using namespace std;
int a=1;
void test()
{
	int a=2;
	cout<<"global variable is: "<<::a<<endl;
	cout<<"local variable is: "<<a<<endl;
}
main()
{
	test();
}
