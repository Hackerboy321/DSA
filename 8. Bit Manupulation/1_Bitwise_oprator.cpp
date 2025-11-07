#include <iostream>
using namespace std ;

int main() {

    /*there are 3 type of bitwise oprator and their opration is very 
    similar to the logical opration.

    1. & - bitwise and. 
    2. | - bitwise or.
    3. ^ - bitwise XOR.
    */ 
/*-----------------------------------------------------   */
    /* &   if  5 = 101
                 &
               3 = 011
                 = 001
    */
   //cout<<(5 & 3 )<<endl ;
   //cout<<(105 & 13 ) ;  
/*-----------------------------------------------------   */

   /* | if 105 = 1101001
          13  =  0001101
              =  1101101
   */
   //cout<<(105 | 13 ) ; 
/*-----------------------------------------------------   */

    /* ^ if 105 = 1101001
                   ^
             13 = 0001011
                = 1100010      
              */
   //cout<<(105 ^ 13) ; 

    return 0 ; 
}