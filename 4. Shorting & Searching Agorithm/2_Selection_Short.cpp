#include<iostream> 
using namespace std ;

void print_array(int *arr, int m ) {

    for ( int i = 0 ; i < m ; i++) {

        cout<<arr[i]<<", ";
    }
}

int main() {

    int arr[] = {5,3,6,9,7,2,1} ;

    int n = sizeof(arr) / sizeof(int) ;

    for ( int i = 0 ; i < n - 1 ; i++) {

        int min_value = i ; 

        for ( int j = i +1  ; j < n ; j++) {

            if ( arr[j] < arr[min_value] ) {

                min_value = j ;
            }

        }

        swap( arr[i] , arr[min_value]) ;



    }

    print_array( arr, n ) ;

    return 0 ; 
}