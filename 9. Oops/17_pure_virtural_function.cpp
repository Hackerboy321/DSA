#include <iostream>
using namespace std;

/*
# Definition of pure vitur:

    A pure virtual function is a virtual function in C++ that has no implementation
    in the base class and must be overridden in derived classes.

    Declared by assigning = 0 at the end of the function.

# Key Points:

    1. A class with at least one pure virtual function becomes an abstract class.

    2. You cannot create objects of an abstract class.

    3. Derived classes must implement the pure virtual function, or they too
    become abstract.

*/

class shape // this is abstract class
{
public:
  virtual void draw() = 0; // pure virtual function
};

class circle : public shape {
public:
  void draw() { cout << "draw the circle\n"; }
};

class rectangle : public shape {
public:
  void draw() { cout << "draw the rectangle\n"; }
};

int main() {
  shape *s;
  circle c;
  rectangle r;

  s = &c;
  s->draw();

  s = &r;
  s->draw();

  return 0;
}