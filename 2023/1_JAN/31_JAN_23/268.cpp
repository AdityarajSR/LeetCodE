#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }

        int n = nums.size()-1;
        if(!binary_search(nums.begin(), nums.end(), n)) return n;

        int ans;
        for (int i = 0; i < n; i++)
        {
            if(m[i] != 1){
                ans = i;
                break;
            }
        }
        return ans;  
    }
};

int main(){
    
    return 0;
}