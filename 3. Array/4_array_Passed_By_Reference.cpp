#include <iostream>
using namespace std ;

void funcabc(int* arr, int n) //here the pass by refrence int arr[] or int* arr
{
    for(int i = 0 ; i < n ; i++) 
    {
        cout<<arr[i]<<"," ; 
    }

}

int main() 
{
    int arr[] = { 1,2,3,4,5} ;
    int n =  sizeof(arr) / sizeof(int) ; 
    funcabc(arr, n ) ;
    return 0 ;
}

/*In array the pass by value is not possible so the only pass by refrece happens*/