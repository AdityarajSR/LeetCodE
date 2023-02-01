#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int hi = -1;
        int my;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == nums.size()){
                hi = nums[i];
                nums[i] = -1;
            }else{
                if(nums[i] != i){
                    swap(nums[i], nums[nums[i]]);
                }
            }
        }
        if(hi == -1){
            my = nums.size();
        }else{
            for (int i = 0; i < nums.size(); i++)
            {
                if(nums[i]!=i){
                    my = i;
                    break;
                }
            }
            
        }
        return my; 
    }
};

int main(){
    
    return 0;
}