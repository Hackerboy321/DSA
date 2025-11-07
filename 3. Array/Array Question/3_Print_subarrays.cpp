#include <iostream>
using namespace std;

//Bruteforce Approch Time Compecity of O(n^3).

void sub_array(int *arr, int m)
{
    for (int start = 0; start < m; start++)
    {
        for (int end = start; end < m; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }

            cout << ", ";
        }

        cout << endl;
    }
}

//Little Bit Better Approch With Time Complacity of O(n^2).


int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int);
    
    sub_array(arr, n);
}