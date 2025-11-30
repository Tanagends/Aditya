#include<iostream>
using namespace std;
namespace myclass
{
   int a=2;
   void inside()
   {
   	  cout<<"today"<<endl;
   }
}
int main()
{
	int a;
	cout<<myclass::a<<endl;
	myclass::inside();
	return 0;
}

