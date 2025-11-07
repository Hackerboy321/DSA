#include <iostream>
using namespace std;

/*A copy constructor is a special constructor that creates 
a new object by copying the data of an existing object.*/

class student {
public:
  string name;
  string branch;

  student(string name, string branch) // perameterized constructor
  {
    this->name = name;
    this->branch = branch;
  }

  student(student &orignal) // custom copy constructor 
  {
    cout<<" calling of custom copy constructor " ;

    name = orignal.name; 
    branch = orignal.branch ; 

  }

};

int main() {
  student s1("deepanshu ", "cse");
  student s2(s1);  // automatically created copy constructor
  student s3(s1) ; //creating a custom copy constructor 

  cout<<s3.name<<endl ; 
  cout<<s3.branch<<endl ;
}