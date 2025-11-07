#include <iostream>
#include <vector> 
using namespace std ;

int count(vector<int> vec, int target) 
{
    int ans = 0 ; 
    for(int i = 0 ; i < vec.size() ; i++) 
    {
        if(vec[i] == target )
        {
            ans++ ; 
        }
    }
return ans ;    
}

int main() 
{
    vector<int> arr = {1,1,1,2,3,4,4,4,5} ;
    int target = 4 ;
    cout<<count(arr,target) ; 
}