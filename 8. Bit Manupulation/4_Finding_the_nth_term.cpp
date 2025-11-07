#include <iostream>
using namespace std ;

int bit(int num, int i)   
{
    int bitmask = num << i ; 
    if( bitmask & 1 ) 
    {
        cout<<"The ith bit is 1 "; 
    }
    else 
    {
        cout<<"The ith bit is 0"; 
    }
}

int main()
{
    int num, i ;
    cout<<"enter the number = " ; 
    cin>>num; 
    cout<<"enter the ith place = " ; 
    cin>>i ; 
    bit( num , i ) ;  

}