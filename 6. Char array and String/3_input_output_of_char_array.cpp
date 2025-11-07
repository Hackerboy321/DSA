#include <iostream>
using namespace std ;

int main() {

    char arr[10] ;
    cout<<"enter your string = ";
    cin>>arr;              // input hii my name is deepanshu
    cout<<arr;            //  output = hii
    return 0 ;           /* beacuse cin funtion ignore the input after 
                            first space so to aviod this problem we 
                             "cin.getlien(array, size of the arry )". */
    char arr2[50] ;
    cin.getline(arr2, 50) ; // hii my name is deepanshu 
    cout<<arr2 ; // hii my name is deepanshu  
}  