// Build array from permutation
// 1920@leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[nums[i]];
        }
        
        return ans;
    }
};

int main(){
    
    return 0;
}