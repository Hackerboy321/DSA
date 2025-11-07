#include <iostream>
using namespace std ;

void changeA( int a) { //here eq. --- (1) ) 
    a = 20 ;
cout<<"value of a within the function "<< a <<endl; }

/*so what this happens here when we call the function in eq. (1)
so the fuction creates a dublicate of variable a which means 
the change we do in changeA function it only happing  with the 
duplicated value of a. but inside the main function the value of
that orignal argument not changes. */

int main ( ){
    int a = 10 ;
    changeA(a);
    cout<<"value of a in the main function "<< a <<endl;
    return 0;
}