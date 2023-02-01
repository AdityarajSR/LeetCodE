#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while (high>=low)
        {
            int mid = low + (high-low)/2;
            if(target > nums[mid]){
                low = mid+1;
            }else if(target < nums[mid]){
                high = mid-1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};

int main(){
    vector<int> a = {-1,0,3,5,9,12};
    int t = 2;
    // int ans = search(a, t);
    // cout<<ans;
    return 0;
}