#include<iostream>
using namespace std;
int fact(int n)
{
	if(n=1)
		return 1;
	else
	    return n*fact(n-1);
}
main()
{
	int n,fact=1,i;
	cout<<"enter n value"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	   fact=fact*i;
	cout<<"factorial is:"<<fact<<endl;
}

