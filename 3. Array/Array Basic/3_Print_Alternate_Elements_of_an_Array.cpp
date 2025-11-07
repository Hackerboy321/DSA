#include <iostream>
using namespace std ;

int main() 
{
    int arr[] ={ 1,2,3,4,5,6,7,8,9,10,11} ;
    int n = sizeof(arr) / sizeof(int) ;
    for(int i = 0 ; i < n ; i = i + 2) 
    {
        cout<<arr[i]<<", ";  
    }
    return 0 ; 
}