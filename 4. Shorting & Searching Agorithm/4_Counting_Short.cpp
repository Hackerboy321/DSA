#include <iostream>
using namespace std; 

void Counting_short( int arr[] , int m ) {

    int freq[100000] ;

    int min_value = INT16_MIN, max_value = INT16_MAX ;


    for ( int i = 0 ;  i < m ; i++) {

        freq[arr[i]]++;

        min_value = min( min_value , arr[i]) ;

        max_value = max( max_value , arr[i] ) ;

         }
    for( int i = min_value , j=0 ; i <= max_value ; i++) {

        while( freq[i] > 0) {

            arr[j++] = i  ;

            freq[i]-- ;
        }
    }

    for( int i = 0 ; i < m ; i++ ) {

        cout<<arr[i]<<", " ;
    }

}
int main() {

    int arr[] ={ 5,4,1,3,2} ;

    int n = sizeof(arr) / sizeof(int) ;

    Counting_short( arr, n) ;

    return 0 ;
}