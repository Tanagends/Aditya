#include<iostream>
using namespace std;
class A{
	int a=5;
	class B{
		int b=10;
		public: void printb()
		{
			cout<<b<<endl;
		 } 
	};
	public: class C{
	int c=20;
	public: void printc()
	{
		cout<<"through c"<<endl;
			B objb;
	  	objb.printb();
	 }
	  };
	  void printviaa()
	  {
	  	cout<<"through A"<<endl;
	  	B objb;
	  	objb.printb();
	  }
};
int main()
{
	A::C objc;
	objc.printc();
	A obja;
	obja.printviaa();
	return 0;
}
