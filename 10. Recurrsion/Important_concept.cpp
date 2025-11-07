#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> nums, int n, int ans)
{
    if (n < 0)
        return ans;

    ans += nums[n];
    sum(nums, n - 1, ans);
    return 0;
}

int sum2(vector<int> nums, int n, int ans)
{
    if (n < 0)
        return ans;

    ans += nums[n];

    return sum2(nums, n - 1, ans);
}

int sum3(vector<int> nums , int n ) 
{
    if( n < 0 ) return 0 ; 

    return nums[n] + sum3(nums, n-1) ; 
} 


int main()

{
    vector<int> nums = {1, 2, 3, 4, 5};
    int n = nums.size();
    cout << sum(nums, n, 0) << endl;
    cout << sum2(nums, n,0)<<endl;
    cout<<sum3(nums,n) ; 
}

/*The important concept demonstrated in this example is **recursion with proper return values**.

- It shows that for recursive functions to work correctly and return the expected result, you must return the value from the recursive call.
- If you forget to return the recursive call (as in `sum`), the function will not accumulate results and may always return a default value (like 0).
- This example also highlights how to pass and update an accumulator (`ans`) through recursive calls.

In summary:
**Always return the result of the recursive call if you want to accumulate or propagate values through recursion.*/