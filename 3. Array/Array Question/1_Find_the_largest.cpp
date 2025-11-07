#include <iostream>
using namespace std;

/* find the largest value in an array */

int main()
{
    
    int arr[5] = {5, 7, 3, 8, 2};
    int max = arr[0];
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] >= max )
        {
            max = arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}


// 2nd method 


int main() { 
    int arr[5] = {5, 7, 3, 8, 2};

    int max_number = arr[0];

    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++) {

        max_number = max(max_number , arr[i]) ;
    }
    cout<<"the maximum nubmer is ="<<max_number ;
}
