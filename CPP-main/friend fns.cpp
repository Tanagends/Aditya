#include<iostream>
using namespace std;
class mee
{
	private:
		int private_variable;
	protected:
		int protected_variable;
	public:
		mee()
		{
			private_variable=9;
			protected_variable=10; 
		}
	friend void friendfn(mee obj);
};
void friendfn(mee obj)
{
	cout<<obj.private_variable<<endl;
	cout<<obj.protected_variable<<endl;
}
int main()
{
	mee obj;
	friendfn (obj);
	return 0;
}

