#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = upper_bound(nums.begin(), nums.end(), target) - nums.begin();


        
        if(nums[index-1] == target){
            return index-1;
        }else{
            return index;
        }
    }
};

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 6;

    // int a = searchInsert(nums, target);
    // cout<<a<<endl;
    return 0;
}