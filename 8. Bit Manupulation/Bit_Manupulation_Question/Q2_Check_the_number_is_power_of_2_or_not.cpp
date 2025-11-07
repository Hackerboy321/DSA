#include <iostream>
using namespace std ;

void check(int n ) 
{
    if(!(n & (n-1))) 
    {
        cout<<"yes the number is in the power of 2 " ;
    }
    else 
    {
        cout<<"No, the number is not in the power of 2" ; 
    }
}

int main() 
{
    int n ;
    cout<<"Enter the number = " ;
    cin>>n ; 
    check(n) ; 
}