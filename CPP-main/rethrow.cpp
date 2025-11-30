#include<iostream>
using namespace std;
int main(){
	int a=1;
	try{
		try
		{
			throw a;
		}
		catch(int x)
		{
			cout<<"Exception caught in inner block!!"<<endl;
			throw x;
		}
	}
	catch(int n){
		cout<<"\nException caught in outer block!!"<<endl;
	}
}
