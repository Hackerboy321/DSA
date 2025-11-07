#include <iostream>
using namespace std ;

void palandrom(string str) {

    int start = 0 , end = str.length() - 1 ;
    bool check = true; 
    while( start <= end) {
         if( str[start++] != str[end--]) {
           check = false ;  
         }
    }
    if(check) {
        cout<<"this string is palandrom" ;
    } 

    else {
        cout<<"this string is not palandrom" ; 
    }
}

int main() {
   string str = "tenet" ;
   palandrom(str) ;

    return 0 ; 
}