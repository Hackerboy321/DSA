#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << " Enter the row = ";
    cin >> rows;
    cout << "enter the col = ";
    cin >> cols;
    int **matrix = new int *[rows];

    for (int i = 0; i < 5; i++)
    {
        matrix[i] = new int[cols];
    }
    
    // storing the values in the matrix
    int x = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = x++;
            cout << matrix[i][j];
        }
        cout << endl;
    }
}