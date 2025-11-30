#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"enter n value: "<<endl;
	cin>>n;
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	count++;
	}
	if(count==2)
	cout<<"Prime number: "<<endl;
	else
	cout<<"not prime number: "<<endl;
		return 0;
}
