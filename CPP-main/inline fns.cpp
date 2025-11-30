#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	return a+b;
}
int main()
{
	int a=5,b=7;
	int sum=add(a,b);
	cout<<sum<<endl;
	return 0;
}
