#include <iostream>
using namespace std ;

/*In C++, a 2D array is stored in **row-major order** in memory.
 This means all elements of the first row are stored in 
 contiguous memory locations, followed by all elements
  of the second row, and so on.

**Key points:**
- 2D arrays are arrays of arrays.
- Memory is contiguous for built-in arrays.
- Accessing `arr[i][j]` is equivalent to `*(arr + i * num_cols + j)`.
*/

int main() {
    int arr[3][4] = { 
        { 0, 1, 2, 3 },
        { 4, 5, 6, 7 },
        { 8, 9, 10, 11 } 
    } ;

    cout << arr[0][0] << ", " << arr[0][1] << ", " << arr[0][2] << ", " << arr[0][3] << ",\n"
         << arr[1][0] << ", " << arr[1][1] << ", " << arr[1][2] << ", " << arr[1][3] << ",\n"
         << arr[2][0] << ", " << arr[2][1] << ", " << arr[2][2] << ", " << arr[2][3] << endl;

    return 0 ; 
}