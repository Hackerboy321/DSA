#include <iostream>
#include <vector>
using namespace std;

// first approch after seeing  the solution. 

void rotated_array(vector<int> &nums, int k)
{
    k = k % nums.size();
    int start = 0, end = nums.size() - 1, mid = k - 1;

    while (start <= end)
    {
        swap(nums[start++], nums[end--]);
    }

    start = 0;
    while (start <= mid)
    {
        swap(nums[start++], nums[mid--]);
    }

    mid = k, end = nums.size() - 1;

    while (mid <= end)
    {
        swap(nums[mid++], nums[end--]);
    }
}

//-----------------------------------------------------------------------

void rotated_array2(vector<int>&nums , int k ) 
{
    k = k % nums.size() ; 
    k = nums.size() - k ;  

    while ( k )
    {
        int n = nums[0] ;
        nums.erase(nums.begin() + 0) ;
        nums.push_back(n) ; 
        k--; 

    }
}

// my previous approches after learning small concept of rotated araay  k = k % nums.size() ; 
// this solution is also right but not optimal for only 1 leetcode tastcase. 

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 21;
   // rotated_array(nums, k);
    rotated_array2(nums ,k ) ; 
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}