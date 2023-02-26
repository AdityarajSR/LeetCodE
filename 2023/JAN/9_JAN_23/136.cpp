#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = nums.size();
        int ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < a; i++)
        {
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second == 1){
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}