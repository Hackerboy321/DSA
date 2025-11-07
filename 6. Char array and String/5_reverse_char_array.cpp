#include <iostream>
#include <string.h>
using namespace std ;

int main() {

    char arr[] = {"Deepanshu"} ;
    int start = 0 , end = strlen(arr) - 1 ;  
      while ( start <= end ) {
          swap( arr[start] , arr[end]) ;
          start++ ;
          end--; 
    }
    cout<<arr<<endl<<strlen(arr); 
    return 0 ; 
}