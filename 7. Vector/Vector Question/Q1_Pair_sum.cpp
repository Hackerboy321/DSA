#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approch

vector<int> BT_pairSum(vector<int> vec, int target)
{
    vector<int> vec2;
    for (int i = 0; i < vec.size(); i++)
    {
        int sum = vec[i];
        for (int j = 1 ; j < vec.size(); j++)
        {
            sum += vec[j];
            if (sum == target)
            {
                vec2.push_back(i);
                vec2.push_back(j);
            }
            else
            {
                sum = 0;
            }
        }
    }
    return vec2;
}

vector<int> pairSum(vector<int> vec, int target)
{
    int start = 0, end = vec.size() - 1;
    int sum = 0;
    vector<int> num;
    while (start < end)
    {
        sum = vec[start] + vec[end];
        if (sum == target)
        {
            num.push_back(start);
            num.push_back(end);
            return num;
        }
        else if (sum > target)
        {
            end--;
        }
        else if (sum < target)
        {
            start++;
        }
    }
    return num;
}

int main()
{

    vector<int> vec = {2, 7, 9, 11, 15};
    int target = 9;
   // vector<int> num = pairSum(vec, target);
    vector<int> num = BT_pairSum(vec , target) ;
    cout << num[0] << ", " << num[1];
    return 0;
}
