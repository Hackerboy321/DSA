#include <iostream>
using namespace  std ; 


int main() {

    int row = 0 , col = 0 ; 
    cout<<"enter the number of rows = " ;
    cin>>row;
    cout<<"enter the number of colums = " ; 
    cin>>col ; 
    int arr[row][col] ;
    for( int i = 0 ; i < row ; i++) {
        for( int j = 0 ; j < col ; j++){
            cin>>arr[i][j] ;

        }
    }
    for( int i = 0 ; i < row ; i++) {
        for( int j = 0 ; j < col ; j++){
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
    }

return 0 ;

}
