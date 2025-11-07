#include <iostream>
using namespace std ;

/* 
# What is polymorphism

   Polymorphism is the ability of objects of different classes related
   by inheritance to respond differently to the same function call.
   it is implemented as compile-time polymorphism using function/operator
   overloading and runtime polymorphism using virtual functions and pointers 
   or references.

------------------------------------------------------------------------------

# Type of Polymorphism 

1- compile - polymorphism (a.k.a. Static Polymorphism)

👉 Achieved using:

Function Overloading
Operator Overloading

2 - Runtime Polymorphism (a.k.a. Dynamic Polymorphism)

👉 Achieved using:

Inheritance + Virtual Functions

-------------------------------------------------------------------------------
*/

// > Function Overloading

class student 
{
   public:

      void show(int age) 
      {
         cout<<"the age is = "<<age<<endl ; 

      } 

      void show(string name) 
      {
         cout<<"the name is = "<<name<<endl ; 
      
      }

} ; 


int main()
{
   student s1 ;
      s1.show(19) ;
      s1.show("deepanshu") ;

return 0 ;

}