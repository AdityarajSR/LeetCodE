#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++)
        {
            ump[nums[i]]++;
        }

        int ct = 0;
        for(auto it: ump){
            if(it.second > 1){
                ct += (it.second*(it.second-1))/2;
            }
        }
        return ct;
    }
};

int main(){
    
    return 0;
}