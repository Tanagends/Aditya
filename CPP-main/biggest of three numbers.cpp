#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter 3 numbers: "<<endl;
	cin>>a>>b>>c;
	if(a>b&&a>c)
	cout<<"a is biggest: "<<endl;
	else if(b>a&&b>c)
	cout<<"b is biggest: "<<endl;
	else
	cout<<"c is biggest: "<<endl;
		return 0;
}
