#include <iostream>
#include <string>
using namespace std ; 

void simple_loop( string  str) {
/* this is the simple loop in which we simply acess the element of the string by index value */

    for ( int i = 0 ; i < str.length() ; i++) {
        cout<<str[i] ; 
    }
}

void for_each_loop( string str )  {
/* this type of loop we can use when we only need the element of the array not the index */

    for( char ch : str ) {
        cout<<ch;
    }
}

int main() {

    string str = "hello world" ;

    simple_loop(str) ;
    for_each_loop(str) ;

    
return 0 ;
}