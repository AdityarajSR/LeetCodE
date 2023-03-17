#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int> ump;

        for (int i = 0; i < size; i++)
        {
            ump[nums[i]]++;
        }

        int ans;

        for(auto it : ump){
            if(it.second > size/2) return it.first;
        }
        
    }
};

int main(){
    
    return 0;
}