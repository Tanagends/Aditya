#include<iostream>
using namespace std;
class mine
{
	public:
		int a,b;
		void add();
};
void mine::add(){
	
	cin>>a>>b;
	int c=a+b;
	cout<<c;
}
int main()
{
	mine obj1;
	obj1.add();
}
