#include <iostream>
#include <cstring>
using namespace std ; 

int main() {

    // 1 - strcpy
    char str1[100] = "hii my name " ; 
    char str2[100] ;
   // str1 = "hii my names is deepanshu " ;  we can't store a string litral in char data type to do we 
   // function "strcpy( destination string , source string )".
    strcpy(str2, str1) ; 
    cout<<str2<<"\n" ; 

    // 2 - strcat( string 1 , string 2 )  = to concatinate to string of same type.

    char str3[] = " hii my name is = ";
    char str4[] = " deepanshu" ;
    cout<<strcat(str3,str4)<<endl;

   //3 - strcmp ( string 1 , string 2 ) this function compair string based on comparision the value 
   // will be if both the string same = 0 , if str1 > str2 = +ve vaule , ans if str1 < str2 = -ve.
   char str5[100] = "abc";
   char str6[100] = "abc";
   char str7[100] = "xyz";
   cout<<strcmp( str5, str6 )<<"\n";
   cout<<strcmp(str5, str7)<< "\n";
   cout<<strcmp(str7 , str5)<<"\n"; 

  
    return 0 ; 
}

