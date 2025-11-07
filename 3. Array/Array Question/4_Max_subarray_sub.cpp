#include <iostream>
using namespace std;

// brutforce method to find the maximum sum of an subarray in a array TC of O(n^3)

void max_sum(int *arr, int m)

{
    int maximum_sum = INT16_MIN;

    for (int start = 0; start < m; start++)
    {
        int sum = 0;

        for (int end = start; end < m; end++)
        {
            for (int i = start; i <= end; i++)
            {
                sum += arr[i];
                maximum_sum = max(maximum_sum, sum);
            }
        }
    }
    cout << "the maximum sum of subarray -: " << maximum_sum << endl;
}
/*--------------------------------------------------------------------------------------*/

// 2nd approch to find maximum sum of a subarray in an array TC of O(n^2).

void max_sum2(int *arr, int m)
{
    int maximum = INT16_MIN;
    for (int start = 0; start < m; start++)
    {
        int current_sum = 0;

        for (int end = start; end < m; end++)
        {
            current_sum += arr[end];
            maximum = max(maximum, current_sum);
        }
    }
    cout << "the maximum sum of subarray -: " << maximum << endl;
}
/*----------------------------------------------------------------------------------------*/

// Most Optimal Approch Is "Kadans Algorithms" with the TC of O(n).

void kadans_algo(int *arr, int m)
{
    int maximum = INT16_MIN;
    int current_sum = 0;

    for (int i = 0; i < m; i++)
    {
        current_sum += arr[i];
        maximum = max(maximum, current_sum);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    cout << "the sum of maxi subarray is -: " << maximum << endl;
}

/*-------------------------------------------------------------------------------------------*/

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    max_sum(arr, n);
    max_sum2(arr, n);
    kadans_algo(arr, n);
    return 0;
}