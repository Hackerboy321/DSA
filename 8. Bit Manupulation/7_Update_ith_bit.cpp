#include <iostream>
using namespace std; 

int UpdateBit(int num , int i , int val )
{
    num = num & ~(1<< i) ; // clearing the ith bit 
    num = num | (val << i ) ;  
    return num ;
}

int main() 
{
    cout<<UpdateBit(7 , 2 , 0) ;
}