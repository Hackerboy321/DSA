#include <iostream>
using namespace std ; 

int coutDigit(int num )
{
    int count = 0  ; 
    while(num > 0 )
    {
        num /= 10 ;
        count++ ; 
    }
    return count; 
}

int main() 
{
    int num = 3423894; 
    cout<<coutDigit( num) ;
}