#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"enter n value: "<<endl;
	cin>>n;
    for(i=1;i<n;i++)
    {
    	if(n%i==0)
    	{
    		sum=sum+i;
		}
	}
	if(sum==n)
	cout<<"perfect number: "<<endl;
	else
	cout<<"not perfect number: "<<endl;
		return 0;
}
