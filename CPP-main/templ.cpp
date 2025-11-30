#include <iostream>

template <typename T1, typename T2>
class Adder {
    
    private:
        T1 a;
        T2 b;
    
    public:
        Adder (T1 x, T2 y)
        {
            a = x;
            b = y;
        }

        auto add () { return a+b; }
};

int main (void) {
    Adder<int, int> obj1(10, 20);
    std::cout << "Addition of int and int is " << obj1.add() << std::endl;

    Adder<int, float> obj2(5, 2.5f);
    std::cout << "Addition of int and float is " << obj2.add() << std::endl;

    Adder<double, int> obj3(3.5, 4);
    std::cout << "Addition of double and int is " << obj3.add() << std::endl;
}
