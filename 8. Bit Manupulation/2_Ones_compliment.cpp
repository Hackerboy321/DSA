#include <iostream>
using namespace std ;

/*Bitwise NOT (~) Operator - Explained Simply
It is also called One's Complement.
When we do ~ of a number, all its binary bits get flipped:
0 becomes 1
1 becomes 0

Example: Find ~6

Step 1: Write binary of 6 in 8-bits (Assuming 8-bit system)
6 = 00000110
Step 2: Apply Bitwise NOT (~6) → Flip all bits
~6 = 11111001
Step 3: Interpret the result using 2's complement rule
Since the MSB (Most Significant Bit) is 1, it means the number is negative.
Step 4: To find the magnitude:
Take 2's complement of 11111001
First flip all bits: 00000110
Add 1: 00000111
So, magnitude is 7 and sign is negative → Final answer is -7.

----------------------------------------------------------------
Note:
Internally, the system uses 2's complement representation to 
store negative numbers.

On a 32-bit system, same concept applies but with 32 bits.*/

int main() {
    
    cout<<(~6);
    cout<<(~22) ; 

    return 0; 
}