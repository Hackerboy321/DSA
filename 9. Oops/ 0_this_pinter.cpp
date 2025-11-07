#include <iostream>
using namespace std;

/*
> this is a special pointer available inside non-static member functions
 of a class, which holds the address of the current object.

> this pointer points to the calling object of the member function.

>It is useful to differentiate between member variables and parameters
when their names are same (especially in constructors).

> It is automatically passed to all non-static member functions.


*/

class Demo {
public:
    void showAddress() {
        cout << "Address of current object (this): " << this << endl;
    }
};

int main() {
    Demo obj1, obj2;

    cout << "Address of obj1: " << &obj1 << endl;
    obj1.showAddress();  // this -> points to obj1

    cout << "Address of obj2: " << &obj2 << endl;
    obj2.showAddress();  // this -> points to obj2

    return 0;
}