#include <iostream>
using namespace std ; 

int CleariBit(int num , int i) 
{
    int bitmask = ~0 << i ; 
    num = num & bitmask ; 
    return num ; 
}

int main() 
{
    cout<<CleariBit(7,2) ;
}