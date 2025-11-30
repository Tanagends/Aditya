#include<iostream>
using namespace std;
int main()
{
	int n,i,j,count;
	cout<<"enter n value: "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
			if(count==2)
			cout<<i<<endl;
}
			
				return 0;
}
