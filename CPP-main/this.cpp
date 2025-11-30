#include <iostream>

using namespace std;
//Pointer to class

class Box
{
    int length;

    public:
        void setLength (int l) {
            length = l;
        }
        void showLength() {
            cout << "Length is " << length << endl;
        }
};
int main () {
    Box b1;

    Box *ptr = &b1;
    ptr->setLength(5);
    ptr->showLength();

    return 0;
}
