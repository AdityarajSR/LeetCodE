#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int s = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < s; i++)
        {
            mp.insert(make_pair(nums[i], i));
        }
        // vector<int> v;
        for (auto it : mp)
        {
            if (mp.find(target - it.first) != mp.end() && (mp.find(target - it.first))->second != (mp.find(it.first))->second)
            {
                // v.push_back(it.second);
                // v.push_back((mp.find(target - it.first))->second);
                return{it.second, (mp.find(target - it.first))->second};
                break;
            }
        }
    }
};

int main()
{

    return 0;
}