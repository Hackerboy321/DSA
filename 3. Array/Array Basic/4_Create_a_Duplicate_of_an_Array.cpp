#include <iostream>
#include <vector>
using namespace std ;

// First approch is using the dynamic arry .
//---------------------------------------------

void duplicate_array(int* arr , int n ) 
{
   int* copy_arr = new int[n] ; 

   for( int i = 0 ; i < n ; i++) 
   {
        copy_arr[i] = arr[i] ;
   }

   for(int i = 0 ; i < n ; i++) 
   {
        cout<<copy_arr[i]<<", ";
   }
delete[] copy_arr ; 
}

/*-----------------------------------------------------------------------*/

//second approch is to use arrtor 

void dup_arr(vector<int> arr )
{
    vector<int> copy_arr = arr ; 

    for( int i = 0  ; i < arr.size() ; i++) 
    {
        cout<<arr[i]<<", " ; 
    }
}


int main() 
{
    int arr[] = {1,2,3,4,5} ;
    int n = sizeof(arr) / sizeof(int) ; 
    //duplicate_array(arr, n) ;

    vector<int> array = {1,2,3,4,5,6,7,8,9,10} ;
    dup_arr(array) ; 
    
}