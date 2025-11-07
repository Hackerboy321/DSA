#include <iostream>
#include <math.h>
using namespace std;

// my first approch not so opital 

// Doing the sum of set digit.

int Sum_of_set_digit(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int last_digit = num % 10; // getting the last digit
        num = num / 10;            // getting the  number excluding last digit
        sum += last_digit;         // count the last digit if it is set digit
    }                              // the sum of the set digit = number of set digit 
    return sum;
}

// converting the decimal number to dinary number

void Decimal_to_binary(int num)
{
    int ans = 0;
    int power = 0;
    while (num > 0)
    {
        int rem = num % 2;
        num = num / 2;
        ans += rem * pow(10, power);
        power++;
    }
    cout << Sum_of_set_digit(ans) ;
}

/*----------------------------------------------------------------------------*/

// 2nd and most optimal approch 

int CountSetBit( int num )
{
    int sum = 0 ; 
    while(num > 0 )
    {
        int last_digit = num & 1 ;
        sum += last_digit ; 
        num = num >> 1 ;  
    }
return sum ; 

}


int main()
{
    int num;
    cout << "enter any number = ";
    cin >> num;
    //Decimal_to_binary(num);
    cout<<CountSetBit(num ) ; 
    return 0;
}
