#include <iostream>
using namespace std ; 

/*
✅ Virtual Function – Simple Definition:

➤ A virtual function is a member function in the base class which is 
overridden in the derived class, and it is declared using the virtual keyword.

> It enables Runtime Polymorphism.

💡 Purpose of Virtual Function:

So that when we call a function using a base class pointer, the derived 
class’s function gets called,not the base class one, if the object is of
 derived type.
 
If you don’t use virtual, then even if pointer is pointing to child object, 
base class ka function hi call hota hai:

# Properties of virtual function 

> Virtual functions are Dynamic in nature.
> Defined by the keyword "virtual" inside a base class and are always
  declared with a base class and overridden in a child class.
> A virtual function is called during Runtime
*/

class Parent {
public:
    virtual void show() {   // 👈 virtual function
        cout << "Parent show()" << endl;
    }
};

class Child : public Parent {
public:
    void show() override {  // 👈 overrides base class function
        cout << "Child show()" << endl;
    }
};

int main() {
    Child c;
    Parent *ptr = &c;      // base class pointer to derived class object
    ptr->show();           // ✅ Output: Child show()
}