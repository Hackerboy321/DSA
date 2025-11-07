#include <iostream>
using namespace std ;

// pass by referance by alias ...

void fucn(int &b) {
    b = 20 ;
}


int main() {
    int a = 10 ;
    fucn(a);
    cout<< "the value of a is :- "<< a;
    return 0 ; 

}