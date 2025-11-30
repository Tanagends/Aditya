#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter n value: "<<endl;
	cin>>n;
    while(n!=0)
    {
    	if(sum==0)
    	sum=sum+n;
    	else
    	sum=sum*n;
    	n=n-1;
	}
	cout<<"the factorial is: "<<sum;
		return 0;
}
