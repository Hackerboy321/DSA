#include <iostream>
using namespace std;

/*

#  Basic Definition

   > A destructor is a special member function of a class which deallocate the DMA memory.
   > It is automatically called when an object goes out of scope or is deleted.
   > Its main job is to release memory or other resources.

# Syntax

    ~ClassName() {
    // cleanup code }
    > Starts with ~ (tilde) followed by the class name.
    > No return type (not even void).
    > Takes no parameters.
    > cannot be overloded one allow for one calss 

# Why Do We Need a Destructor?

    > To free dynamically allocated memory (e.g., created using new).
    > To avoid memory leaks.
    > To close files or release other resources (e.g., network, file handles).




*/

class student {
public:
  string name;
  int *age;

  student(string name) // parameterized constructor
  {
    this->name = name;
    age = new int; // dynamic memory allocation
    *age = 19;
  }

  ~student() // distructor
  {
    cout << " automatically calling of distructor ";
    if (age != NULL) {
      delete age;
      age = NULL ;
    }
  }
};

int main() 
{
    student s1("deepanshu " ) ; 
    cout<<s1.name<<endl ; 
    cout<<*s1.age<<endl ; 

}