 #include<iostream>
using namespace std;
int main()
{
	int n,total=0,temp,sum,rem;
	cout<<"enter n value: "<<endl;
	cin>>n;
	temp=n;
	while(n!=0)
	{
		sum=0;
		rem=n%10;
		 while(rem!=0)
    {
    	if(sum==0)
    	sum=sum+rem;
    	else
    	sum=sum*rem;
    	rem=rem-1;
	}
	total=total+sum;
	n=n/10;
	}
	if(total==temp)
	cout<<"strong number: "<<endl;
	else
	cout<<"not strong number: "<<endl;
		return 0;
}
