#include<iostream>
using namespace std;
int main()
{
	int n,pal=0;
	cout<<"enter n value: "<<endl;
	cin>>n;
	int temp=n;
	while(n!=0)
	{
		int rem=n%10;
		pal=rem+(pal*10);
		n=n/10;
	}
	if(temp==pal)
	cout<<"Palndrome number: "<<endl;
	else
	cout<<"Not Palindrome: "<<endl;
		return 0;
}
