#include <iostream>
using namespace std;

// base/parent/super/ class 

class student {
public:
  string name;

  void branch() { cout << "branch = cse \n"; }

  void group() { cout << "the student is from 2nd group\n"; }
};

// Drived/child/sub class 

class boy : public student {
public:
  string color;

  void hight() { cout << "the hight of the boy is 5'6 \n"; }
};

int main() {

    boy b1;                                                                                                                        

        b1.color = "white" ; 
        b1.hight() ; 
        b1.branch() ; // inharite properties form student class ; 
        b1.group(); // inharite properties form student class ; 
}

/*
-------------------------------
         Inheritance
-------------------------------
Modes of Inheritance:
→ public
→ protected
→ private

---------------------------------------------------------------
| Base class member  |         Type of Inheritance            |
| access specifier   |  Public   |  Protected  |   Private    |
---------------------------------------------------------------
| Public             |  Public   |  Protected  |   Private    |
| Protected          | Protected |  Protected  |   Private    |
| Private            |      Not accessible (Hidden)           |
---------------------------------------------------------------

# difference b/w private and protected access specifier 

    🔒 private Access Specifier:

1. Accessible within the same class only.
2. Not accessible in derived (child) classes.
3. Not accessible outside the class directly.
4. Used to hide sensitive data from outside interference or inheritance.

    🛡️ protected Access Specifier:

1. Accessible within the same class and derived (child) classes.
2. Not accessible from outside the class.
3. Useful when you want to allow inheritance access, but still hide from outside code.

*/