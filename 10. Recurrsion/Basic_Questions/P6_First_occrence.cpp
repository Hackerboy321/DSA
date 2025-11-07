#include <iostream>
#include <vector>
using namespace std ;

int search(vector<int> &arr, int target, int i) 
{
    if( i == arr.size() ) return  -1 ; 

    if( arr[i] == target ) return i ; 

return search(arr, target , i+1) ; 

}

int main()
{
    int target = 8 ; 
     vector<int> arr = {1,2,3,4,5,5} ; 
    cout<<search(arr,target, 0 ) ; 

}