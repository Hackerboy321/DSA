#include <iostream>
using namespace std ;

/* 
> Private - Private members can only be accessed inside the class.
   By default, all members of a class are private if you don't specify 
   an access specifier.

> Public - Public members can be accessed from outside the class 
   (e.g., in main()).
*/
class student
{
    string name ;                       // private  

    public :                            // public 
     int Roll_no ;
     int cgpa; 


} ; 

int main () 
{
    student s1 ; 
     // s1.name ; // gives an error cause it is private properties ;
     s1.Roll_no = 1;    
    return 0 ; 
}
