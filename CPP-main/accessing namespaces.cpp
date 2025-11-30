#include<iostream>
using namespace std;
namespace Math{
	int value=10;
	void test()
	{
		cout<<"hello"<<endl;
	}
} 
int main()
{
cout<<Math::value<<endl;
Math::test();
	
		return 0;
}

