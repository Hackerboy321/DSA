#include <iostream>
using namespace std ;

/* 
Static variables in a class are created & initialised once.
They are shared by all the objects of the class
*/

class example 
{
    public:
        static int x  ; 
} ;

int example::x = 0 ;   

int main()
{
    example ex1;
    example ex2; 
    example ex3;

    cout<<ex1.x++<<endl; 
    cout<<ex2.x++<<endl;
    cout<<ex3.x++<<endl;

}