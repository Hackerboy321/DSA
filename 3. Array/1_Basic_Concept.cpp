#include <iostream>
using namespace std ;

/*linear collection of same type of element
that are stored together in contigous memory
space.*/


int main() {
    /*1st way to create an array*/
     int array1[83];
     cout<<array1[50];
    /*so in this case we only create an array 
    but not define any value to index so
    all the index has any garbge value /

    /*2nd way to create an array */
     int array2 [50] = {1,3,4,5};
    cout<<array2[10];
    /*so in this type the size of array is 50
    but only the first index  4 has assinge 
    some value so all remaning index has value
    of 0 by defulte. */

    /*3rd way to create an array*/ 
    int array3[] = {1,2,3,4,5};
    /* in this we not define the size of 
    the  but the total index which his 
    some value of is become the size of 
    the array*/

    return 0 ;
}

/*NOTE :-  In array the memory is 
statically allocated i.e memory allocate in 
the time of compile time ( matbal ki jaise hi array ko declear 
kiya waise hi memory me usko ek memory adderss locate ho jayega. )*/