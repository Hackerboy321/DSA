#include <iostream>
#include <string.h>
using namespace std ; 

int main() {

    char arr[] = { 'a' , 'b' ,'c'} ; 
    char array[5] = { 'h' ,'e', 'l', 'l','o' } ;

//  every char array should be terminate with null zero "\0". except 
//  string litrales arr[] = {" hello world"} ;

    cout<<arr<<endl;

    /* op = abc� (which is after array value some random charactor 
    this is happen cause we not terminate the char arr[] with null zero " \0".
    */ 

     char arr3[] = { 'a' , 'b' ,'c', '\0'} ;

    cout<<arr3<<endl; // opt - abc 

    //but we don't have to do this thing  in string litreals 

    char arr4[] = { "hii my name is deepanshhu"} ;

    // if you want to find the length of the arr u can use 
    // a in build function strlen().
    // it  count the \0 as character so the real length of array 
    //is strlen(arr) - 1 ; 

    cout<<strlen(arr);
    



    return 0 ; 
}