#include<iostream>
using namespace std;
class cse6{
	int a;
	public: cse6(int x)
	{
		a=x;
	 }
	 void display()
	 {
	 	cout<<"a= "<<a<<endl;
	  }
	  ~cse6(){
	  cout<<"Destructor is activated...."<<endl;
	  } 
};
int main()
{
	cse6 obj1(10);
	return 0;
}
