// Two sum Problem
// 1@leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        int a = nums.size();
        
        for (int i = 0; i < a; i++)
        {
            mp[nums[i]]++;
            if(mp.find(target - nums[i]) != mp.end()){
                auto it = mp.find(target - nums[i]);
                ans.push_back(i);
                break;
            };
        }


    }
};

int main(){
    
    return 0;
}
