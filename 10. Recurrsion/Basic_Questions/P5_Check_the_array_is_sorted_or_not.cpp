#include <iostream>
#include <vector> 
using namespace std ;

bool Is_sorted(vector<int> &arr , int i)
{
    if( i == arr.size() - 1  ) return true ; // base case 

    if ( arr[i] > arr[i+1] ) return false ; // smallest problem 

    return Is_sorted(arr, i+1) ;   
}

int main()
{
    vector<int> arr = {1,2,3,5} ;    
    cout<<Is_sorted(arr, 0) ; 
}