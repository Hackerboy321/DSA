#include <iostream>
using namespace std ; 
/* setbit means if the bit is 0 make it 1 and if the bit is 1 let remains it 1 
so if want to set bit at ith place for that we have to use bitmask and OR ( | ) opration */

int setbit(int n , int i ) 
{
    int bitmask = 1 << i ; // creating a bitmask
    n = bitmask | n ; 
    return n ; 

}

int main() 
{
    int n , i ; 
    cout<<"enter the number = " ;
    cin>>n ; 
    cout<<"enter the ith place = " ;
    cin>>i; 
   cout<<setbit( n , i ) ; 
}