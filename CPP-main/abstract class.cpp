#include<iostream>
using namespace std;
class shape{
	public: int a,b;
	shape(){
		a=2;
		b=7;
	}
	virtual void area()=0;
};
class square:public shape{
	public:
		void area()
		{
			cout<<"area of square is: "<<a*a<<endl;
		}
};
class rectangle:public shape{
	public:
		void area()
		{
			cout<<"area of rectangle is: "<<a*b<<endl;
		}
};
int main()
{
	square s;
	s.area();
	rectangle r;
	r.area();
	shape sh;
	sh.area();
	return 0;
}
