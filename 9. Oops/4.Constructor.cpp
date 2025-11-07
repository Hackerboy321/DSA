#include <iostream>
using namespace std ; 

/* # this-> oprator

    > *this is spcial pointer which hold the address current object( i.e the object which is calling ) ( this->name and (*this).name ).
    > and also can by used in diffreciate b/w member properties of class and
    constructor parameters ;  
  */

class student 
{
    public :
        student() // defualte constructor 
        {
            cout<<"calling of non parameterized constructor\n" ; 

        } ;      // non parameterized costructor 
        student( string name , string branch )      // parameterized constructor 
        {
            (*this).name = name ;     // this -> is a special pointer that pointes the current  
            this->branch = branch ; // object  this->prop == *(this.prop) .
            cout<<"calling of parameterized constructor\n" ;  
        }

        string name ; 
        string branch ;
} ; 

int main() 
{
    student s1 ;    // declearting of object s1 = calling of  non parameteriesd constructor
    student s2("Deepanshu"  , "CSE") ; // declearating of object s1 = calling of parameterised constructor 




}


/* 
# What is a Constructor?

A constructor is a special function in a class that gets 
automatically called when an object of that class is created.

---------------------------------------------------------------------------------

# Why is Constructor Used ?

> To initialize object’s data members(variable) when the object is created.
> It helps you avoid writing extra code to manually set values after
  creating an object.

----------------------------------------------------------------------------------

# Key Properties of Constructor :

> Name                   -   same as class name
> Return type            -   No return type ( not even void) 
> called automatically   -   when object is created 
> overloading allowed    -   yes can create same name of multiple constructor 

----------------------------------------------------------------------------------

# Type of Constructor 

1. Non Parameterized Constructor (defaulte constructor)

    > has no parameter. 
    > get automatically created by complier if not define.

2. Parameterized Constructor 

    > Take parameters to initialize object with custom values 

3. Copy Constructor 

    > creates a new object as a copy of an existing object.
    
*/