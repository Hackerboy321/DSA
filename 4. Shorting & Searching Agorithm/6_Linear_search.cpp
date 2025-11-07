#include <iostream>
using namespace std;

int linearS(int *arr, int m, int k)
{
    for (int i = 0; i < m; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int key = 8;
    int arr[] = {1, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    cout << linearS(arr, n, key);
    return 0;
}