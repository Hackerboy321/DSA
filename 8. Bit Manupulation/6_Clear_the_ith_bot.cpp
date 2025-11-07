#include <iostream>
using namespace std ; 

/* Clear the bit means it is just opposite of sit the bit if the bit is 1 
then make it 0 and if the bit is 0 so let's remains it 0. */

int ClearithBit(int n , int i ) 
{
    int bitmask = ~(1 << i ) ;
    return (bitmask & n ) ;  
}

int main() 
{
    int n , i ; 
    cout<<"enter the number =  " ;
    cin>>n ; 
    cout<<"enter the ith place = " ;
    cin>>i ; 
    cout<<ClearithBit(n , i ) ; 

return 0 ; 

}