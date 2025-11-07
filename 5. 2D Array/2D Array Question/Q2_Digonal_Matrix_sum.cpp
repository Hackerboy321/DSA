#include <iostream>
using namespace std;

int digonal_Sum(int arr[][5], int row, int col)
{
    int scol = 0, ecol = col - 1;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        if (scol <= (col / 2) && ecol >= (col / 2))
        {
            scol++;
            ecol--;
        }
        else
        {
            scol--;
            ecol++;
        }
        sum += arr[i][scol] + arr[i][ecol];
    }
    if (row % 2 != 0 && col % 2 != 0)
    {
        sum = sum - arr[row / 2][col / 2];
    }
    return sum;
}

int main()
{
    int arr[5][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};

    cout << digonal_Sum(arr, 5, 5);
    return 0;
}