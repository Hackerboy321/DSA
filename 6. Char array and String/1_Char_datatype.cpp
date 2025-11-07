#include <iostream>
using namespace std ; 

int main() {

    char  hii = 'g' ;
    char backslash =  '\n' ; 

    // To find the position of any letter from A to Z. 
    // we use ASCII ( american standerd code for information exchange ).

    // let's say we have to find position of "g ".

    char character = 'g' ;
    int position = character - 'a' ;
    cout<<position; 

    return 0 ; 
}