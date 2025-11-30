#include<iostream>
using namespace std;
class myclass
{
	private:
		int private_variable;
	protected:
		int protected_variable;
	public:
		myclass()//constructor name should be class name
		{
			private_variable=12;
			protected_variable=13;
		}
	
	friend void myfriend(myclass obj);//arguments
};
void myfriend(myclass obj)
{
	cout<<obj.private_variable<<endl;
	cout<<obj.protected_variable<<endl;
}
int main()
{
	myclass obj;
	myfriend(obj);
	return 0;
}
