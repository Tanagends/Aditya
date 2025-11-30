#include<iostream>
using namespace std;
class myclass
{
	public:
	void show();
};

void myclass::show()
{
	cout<<"inside show()"<<endl;
}

int main()
{
	myclass obj;
	obj.show();
	return 0;
}
