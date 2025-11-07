#include <iostream>
using namespace std ;

// Bruatforce Approch 

void BT_reverseArray(int arr[] , int n ) 
{
     int copyA[n];
     for (int i = 0 ; i < n ; i++) {
        int j = n-i-1;
        copyA[i] = arr[j] ;
     }
    
    for( int i = 0 ; i < n ; i++) {
     cout<<copyA[i]<<",";
    }
cout<<endl; 

}

// approch without using extra space 

void OP_reverseArray(int arr[] , int n ) 
{
    int st = 0;
    int ed = n - 1;
    while (st < ed)
    {
        swap(arr[st], arr[ed]);
        st++;
        ed--;
    }

    for ( int i = 0 ; i < n ; i++) 
    {
        cout<<arr[i]<<","; 
    }
}


int main()
{
    int arr[] = {1,2,3,4,5}; 
    int n = sizeof(arr) / sizeof(int) ; 
    //BT_reverseArray(arr, n )  ; 
    OP_reverseArray(arr, n )  ; 

    return 0 ; 
}