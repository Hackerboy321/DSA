#include <iostream>
using namespace std ;

int main() 
{
    int num ;
    cout<<"Enter The any number = " ; 
    cin>>num ; 
    if(!(num & 1))
    {
        cout<<num<<" is even number." ;
    }
    else 
    {
        cout<<num<<" is odd number." ; 
    }
}