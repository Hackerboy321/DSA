#include <iostream>
using namespace std ;
// static variable in function 

/*
Variables declared as static in a function are created & initialised once for
the lifetime of the programm
*/

void count()
{
    int  count = 0 ; 
    count++;
    cout<<count<<"\n";

}

void count2()
{
    static int count = 0 ;  // this line of code run only one time
    count++ ; 
    cout<<count<<"\n" ;
}

int main()
{
    cout<<"without static keyword\n" ;

    count() ;
    count() ;
    count() ;

    cout<<"with static keyword\n" ;

    count2() ; 
    count2() ; 
    count2() ; 

return 0 ; 

}