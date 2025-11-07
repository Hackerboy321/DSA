#include <iostream>
using namespace std;

class deep {
public:
  string name;
  int *age;

  deep(string name) // parameterized constructor
  {
    this->name = name;
    age = new int;
    *age = 19;
  }

  deep(deep &s1) // custom copy constructor
  {
    name = s1.name;
    age = new int;
    *age = 20; // so this custom copy constructor create a new duplicate memory
               // in heap
  }
};

int main() {
  deep s1("deeapnshu ");
  deep s2(s1); // calling of custom copy constructor
  cout << s1.name << endl; // deepanshu 
  cout << *s1.age << endl; // 19 
  cout << s2.name << endl; // deepanshu 
  cout << *s2.age << endl; // 20 
return 0 ; 
}