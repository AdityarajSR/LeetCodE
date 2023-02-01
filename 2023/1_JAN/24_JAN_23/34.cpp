#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     vector<int> searchRange(vector<int> &nums, int target)
//     {
//         vector<int> ans;

//         if(nums.size() == 0){
//         ans.push_back(-1);
//         ans.push_back(-1);
//         return ans;
//     }

//         int lower_index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
//         if (lower_index != nums.size() && nums[lower_index] == target)
//         {
//             ans.push_back(lower_index);
//         }
//         else
//         {
//             ans.push_back(-1);
//         }

//         int upper_index = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
//         if (upper_index >= 0 && nums[upper_index - 1] == target)
//         {
//             ans.push_back(upper_index - 1);
//         }
//         else
//         {
//             ans.push_back(-1);
//         }
//         return ans;
//     }
// };

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    if(nums.size() == 0){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }

    int lower_index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (lower_index != nums.size() && nums[lower_index] == target)
    {
        ans.push_back(lower_index);
    }
    else
    {
        ans.push_back(-1);
    }

    int upper_index = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (upper_index > 0 && nums[upper_index - 1] == target)
    {
        ans.push_back(upper_index - 1);
    }
    else
    {
        ans.push_back(-1);
    }

    return ans;
}

int main()
{
    // vector<int> v = {5, 7, 7, 8, 8, 10};
    vector<int> v = {};
    int mytarget = 0;
    vector<int> p = searchRange(v, mytarget);
    for (auto it : p)
    {
        cout << it << endl;
    }

    return 0;
}