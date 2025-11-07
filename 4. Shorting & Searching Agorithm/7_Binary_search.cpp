#include <iostream>
using namespace std;

// for acending order of array.

int Binary_search(int *arr, int m, int key)
{
    int start = 0;
    int end = m-1;
    while (start <= end)
    {
        int mid = start + (end - start ) / 2 ;
        if (arr[mid] == key) return mid;
        
        else if (arr[mid] < key) start = mid + 1;
        
        
        else end = mid - 1;
    }
    return -1 ; 
}


int main()
{
    int key = 14;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    cout<< Binary_search(arr, n, key);

    return 0;
}