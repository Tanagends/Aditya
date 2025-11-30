#include<iostream>
using namespace std;
class bc{public : int a;
              bc() { a=10; }
              void display()
              {
              	 cout<<" this is in base class "<<endl; 
			  }
	  };
class dc1 : virtual public bc{ public: int b; 
            dc1() { b=20;}
              void print1()
              {
              	 cout<<" this is in derived class 1 "<<endl; 
			  }
};
class dc2: virtual public bc { public: int c;
               dc2() { c=30;  }
              void print2()
              {
              	 cout<<" this is in derived class 2 "<<endl; 
			  }
};

class dc3: public dc1, public dc2{ public: int total; 
                         void calculate()
                         {    total = a+b+c;
                         	  cout<<" Sum of the numbers is : "<<total<<endl;
						 }
	                            };
int main()
{
	dc3 obj1;
	obj1.calculate();
	obj1.display();
	obj1.print1();
	obj1.print2();
	return 0; 
}
//EXAMPLE PROGRAM FOR DIAMOND PROBLEM
