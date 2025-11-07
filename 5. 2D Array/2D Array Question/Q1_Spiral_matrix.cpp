#include <iostream>
using namespace std ;

void spiralMatrix(int arr[][4], int row , int col ) {

    int Srow = 0 , Scol = 0 ; 
    int Erow = row -1 , Ecol = col - 1 ;
    
    while ( Srow <= Erow && Scol <= Ecol ) { 

        //top 
        for ( int j = Scol ; j <= Ecol ; j++ ) {
            cout<<arr[Srow][j]<<" "; 
        }

        //right 
        for( int i = Srow + 1 ;  i <= Erow ; i++ ) {
            cout<<arr[i][Ecol]<<" " ;
        }

        //bottem
        for( int j = Ecol -1 ; j >= Srow ; j--) {
            if( Srow == Erow ) {
                break ; 
            }
            cout<<arr[Erow][j]<<" " ;
        }
       
        // lift 
        for( int i = Erow -1 ; i >= Srow +1 ; i--) {
            if( Scol == Ecol ) {
                break; 
            }
            cout<<arr[i][Scol]<<" ";
        }

        Srow++, Scol++ ;
        Erow-- , Ecol-- ; 
    }
}

int main() {

    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9,10, 11,12}} ;

    spiralMatrix(arr, 3, 4) ; 
    return 0 ; 
}