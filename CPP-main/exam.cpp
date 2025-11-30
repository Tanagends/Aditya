#include <iostream>

using namespace std;
class Animal {

    public:
        virtual void makeSound() {
        cout << "Hoo hoo" << endl;
    }
};

class Cat : public Animal {

    public:
        void makeSound() override {
        cout << "Meow" << endl;
    }
};

int main (void) {
    Cat c;
    c.makeSound();
    return 0;

}
