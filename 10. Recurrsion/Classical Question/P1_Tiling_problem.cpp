#include <iostream>
using namespace std ; 

int tiling(int n )
{
    // base conditon ( smallest problem )  
     
    /*  > when the board size is 2x1 so there will be only 1 way to fill the board.
        > but when the board size 2x0 so we ideally think that there will be 0 ways 
          to fill the board but here the instresing part comes if the borad size is 2x0
          there is 1 ways to fill it. 
    */
    if ( n == 0 || n == 1 ) return 1 ;


/*        horizontal tile   vertical tile                        */
    return tiling(n-1) + tiling(n-2) ;
}

int main() 
{
    int n = 5 ;

    cout<<tiling(n) ; 
}