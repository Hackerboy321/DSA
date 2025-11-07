#include <iostream>
using namespace std ;

// find the x to the power n.


// 1st recursive approch with the TC of O(n) .

int pow(int x , int n , int i )
{
    if( n==i) return 1 ;

    return x * pow(x, n , i+1) ; 

}

// 2nd recursive approch with TC log(n) . 

int pow2(int x, int n )
{
    //  base con

    if ( n == 0 ) return 1 ;

    int half_pow = pow2(x, n/2) ; 

if ( n % 2 != 0 ) return n * half_pow * half_pow ; 

/* Q how the time complecity is O(log n) ?

     > If in an algorithm, the problem size is divided by a constant factor (like 2) in each iteration or recursion step,
      then the time complexity will generally be O(log n).

*/

return half_pow * half_pow ; 

 }

int main() 
{
    //cout<<pow(2, 10 , 0 ) ; 
    cout<<pow2(2,10) ; 

}





