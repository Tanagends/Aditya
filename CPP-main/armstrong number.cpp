#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,sum=0,count=0,rem;
	cout<<"enter n value: "<<endl;
	cin>>n;
    int temp=n;
    int temp2=n;
    while(n!=0)
    {
    	count++;
    	n=n/10;
	}
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp=temp/10;
	}
	if(temp2==sum)
	cout<<"armstrong number:"<<endl;
	else
	cout<<"not armstrong number:"<<endl;
		return 0;
}
