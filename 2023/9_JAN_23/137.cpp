#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = nums.size();
        int ans;
        // unordered_map<int, int> mp;
        for (int i = 0; i < a-1; i++)
        {
            // mp[nums[i]]++;
            ans = nums[i]^nums[i+1];
        }
        
        return ans;
    }
};

int main(){
    
    return 0;
}