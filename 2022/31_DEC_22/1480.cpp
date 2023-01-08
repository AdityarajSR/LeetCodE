// Running Sum of 1D array
// 1480@leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            a += nums[i];
            ans[i] = a;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}