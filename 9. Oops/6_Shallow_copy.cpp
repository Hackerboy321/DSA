#include <iostream>
using namespace std ;
/* 
# Shallow Copy

    > When you create a shallow copy of an object that has dynamic memory 
    (like arrays or pointers), only the pointer address is copied, not the actual data.

    > So both the original and the copied object point to the same memory.

    > If one modifies the data, the other sees the change too.

    > The compiler provides a default copy constructor which does a shallow copy.

    > It copies each member as-is, so if any member is a pointer, only the pointer
      address is copied.

# Deep copy 

   > A deep copy means not just copying the pointer, but creating a new memory block, and
    copying the actual contents into it.

   > Now the original and the copied object are fully independent.

   > If your class uses new for memory allocation (e.g., an array in heap), and you want a 
     true duplicate object, you must write your own copy constructor and handle memory allocation
     and copying manually.
*/

class shallow
{
    public :

        string name ;
        int *age ; 

    shallow(string name ) // parameterized construtor 
    {
        this->name = name ;
        age =  new int ; 
        *age = 19 ; 

    }



} ; 

int main() 
{
    shallow s1("dkbose") ;
    shallow s2(s1) ; // calling of defult copy constructor
    cout<<s1.name<<endl ;  
    cout<<*s1.age<<endl ;
    cout<<*s2.age<<endl  ;
    *s2.age = 20 ; 
    cout<<*s1.age<<endl  ; 
    cout<<*s2.age ;

}
