#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        float i = 0;
        float j = 0;
        float sum = 0;
        float mx = INT_MIN;

        if(nums.size() ==  1) return nums[0];
        if(k == 1) return *max_element(nums.begin(), nums.end());

        while (j<nums.size())
        {
            if(j-i+1<k){
                sum += nums[j];
                j++;
            }else if(j-i+1 == k){
                sum += nums[j];
                if(sum>mx){
                    mx = sum;
                }
                sum -= nums[i];
                i++;
                j++;
            }
        }
        return mx/k;
    }
};

int main(){
    
    return 0;
}