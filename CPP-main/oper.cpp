#include<iostream>
using namespace std;
class complex{
    int real,img;
    public: complex()
    {
        real=0;
        img=0;
    }
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex operator+(complex&deep)
    {
        complex temp;
        temp.real=real+deep.real;
        temp.img=img+deep.img;
        return temp;
    }
};
int main()
{
    complex obj1(2,3),obj2(8,6);
    complex obj3;
    obj3=obj1+obj2;
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
