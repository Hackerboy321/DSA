#include <iostream>
using namespace std ; 

int fab(int n)
{
    if( n == 0 || n == 1 ) return n ; // base case or the smallest problem of
                                      // that big problem which know know allready 

    return fab( n -1 ) + fab( n -2 ) ; // racrace relation 
}

int main()
{
    cout<<fab(5) ; 
}