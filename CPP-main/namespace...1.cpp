#include<iostream>
using namespace std;
int x=100;
void test()
	{
		int x=34;
		cout<<x<<endl;
		cout<<::x;
	}
int main()
{
	test();
	
		return 0;
}

