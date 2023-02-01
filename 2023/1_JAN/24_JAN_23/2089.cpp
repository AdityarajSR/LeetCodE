#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> myvec;

        sort(nums.begin(), nums.end());
        int lower_index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(lower_index != nums.size() && nums[lower_index] == target){
            lower_index = lower_index;
        }else{
            lower_index = -1;
        }

        
        int upper_index = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (upper_index > 0 && nums[upper_index - 1] == target)
        {
            upper_index = upper_index;
        }
        else
        {
            upper_index = -1;
        }

        if(lower_index == -1){
            return myvec;
        }else{
            for (int i = lower_index; i <= upper_index; i++)
            {
                myvec.push_back(i);
            }
            return myvec;
        }
    }
};

int main(){
    
    return 0;
}