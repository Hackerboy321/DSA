#include <iostream>
using namespace std ; 

void trapped_water(int *bar_hight, int m ) {

    
    int left_max[20000] ;
    int right_max[20000] ;
    int total_water_trapped = 0 ;

    left_max[0] = bar_hight[0] ;
    right_max[m-1] = bar_hight[m-1] ;

    for ( int i = 1 ; i < m ; i++) {

        left_max[i] = max( left_max[i-1], bar_hight[i-1] ) ;
        

    }


    for ( int i = m-2 ; i >= 0 ; i-- ){

        right_max[i] = max( right_max[i + 1] , bar_hight[ i +1 ] ) ;
    }

    for( int i = 0 ; i < m  ; i++) {

        int current_water = min( left_max[i], right_max[i] ) - bar_hight[i] ;
        if ( current_water > 0 ) {

            total_water_trapped += current_water ;  
        }
    }

    cout<<"the total water trapped inside the bar is = "<<total_water_trapped;
}


int main() {

    int bar_hight[] = {4,2,0,6,3,2,5} ;

    int n = sizeof(bar_hight) / sizeof(int) ;

    trapped_water(bar_hight, n) ;

    return 0 ; 
}