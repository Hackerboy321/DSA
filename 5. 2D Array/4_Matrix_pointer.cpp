#include <iostream>
using namespace std ; 

int main() {

    /* In a 2D array the name of the array 
    represent the row pointer i.e the "arr" first row of 
    the matrix and "arr+1" represent the second row of array   
    more spacificlly store the address of the first element of 
    the array */ 

    int arr[3][3] = { {1,2,3},
                      {4,5,6},
                      {7,8,9}     
                    } ;
    cout<<**(arr)+1<<endl;  //to acess each element of the array.
    cout<<**(arr+1)+1<<endl;  
    //cout<<arr<<"=="<<&arr[0][0] ;
    // cout<<arr+1<<"=="<<&arr[1][0] ;
    // cout<<*(arr+1)<<endl; //2nd whole  row
    // cout<<*(*(arr+1) + 1 )<<endl;
    // cout<<arr[1][1]<<"=="<<*(*(arr +1 ) +1 ) ;
    return 0 ;
}