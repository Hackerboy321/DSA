#include <iostream>
using namespace std; 

int main() {

    int a = 10 ; 
    int* ptr = &a ;
    int** ptr1 = &ptr ; //this is the pointer to pointer
    cout<< &a<<endl;
    cout<< ptr<<endl;
    cout<< &ptr<<endl;
    cout<< ptr1<<endl;
    return 0 ;         // which store address of first pointer 
}