#include <iostream>
using namespace std;

/*

#### Key Concept:
When an array is passed to a function in C++, it **decays into
a pointer** to its first element. This means that the function does
not receive the actual array but instead receives a pointer
to the first element of the array.

#### Key Points:
1. **Array Decay:**
   - Arrays decay into pointers when passed to functions.
   - The function loses information about the size of the array.

2. **`sizeof` Behavior:**
   - `sizeof` works correctly only in the scope where the array is declared.
   - Once the array decays into a pointer, `sizeof`
    gives the size of the pointer, not the array.

3. **Best Practice:**
   - Always pass the size of the array explicitly to
   functions if you need to work with
the array's size.

*/

void print(int num[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << num[i] << endl;
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    print(arr, n);

    return 0;
}
