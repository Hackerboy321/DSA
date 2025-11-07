#include <iostream>
using namespace std ;

void Insertion_short( int *arr, int m ) {

    for( int i = 0 ; i < m  ; i++) {

        int current = arr[i] ;

        int prev = i - 1 ; 
        
        while ( prev >= 0 && arr[prev] > current) {

            swap( arr[prev] , arr[ prev +1] ) ;

            prev-- ;
        }

        arr[prev+1] = current ; 

    }
 for ( int i = 0 ; i < m ; i++) {

    cout<< arr[i]<< ", ";
 }

}

int main() {

    int arr[] = { 5,4,3,2,1} ;

    int n = sizeof(arr) / sizeof(int) ;

    Insertion_short(arr, n) ;

    return 0 ; 
}