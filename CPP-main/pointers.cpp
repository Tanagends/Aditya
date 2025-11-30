#include<iostream>
using namespace std;
class base{
	public:
		virtual void print(){
			cout<<"print in base...... "<<endl;
		}
		void display(){
			cout<<"display base.... "<<endl;
		}
};
class derived:public base{
	public:
			void print(){
			cout<<"print in derived...... "<<endl;
		}
		void display(){
			cout<<"display derived.... "<<endl;
		}
};
int main(){
	base * ptr;
	derived objd;
	ptr=&objd;
	ptr->print();
	ptr->display();
	return 0;
}
