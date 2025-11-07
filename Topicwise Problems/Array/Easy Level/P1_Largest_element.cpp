#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int find_max(vector<int> nums)
{
    int maxNum = nums[0] ; 
    
    for( int i = 1 ; i < nums.size() ; i++) 
    {
        if(nums[i] > maxNum ) maxNum = nums[i] ; 

    }
return maxNum ; 
}

int main() 
{
    vector<int> nums = {1,2,3,8,4,5} ; 
    cout<<find_max(nums) ; 
}