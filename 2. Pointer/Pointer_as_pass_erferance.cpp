#include <iostream>
using namespace std ;

// Pointer pass by referance in a function...

void fucn(int *p) {
    *p = 20 ;
}


int main() {
    int a = 10 ;
    fucn(&a);
    cout<< "the value of a is :- "<< a;
    return 0 ; 

}