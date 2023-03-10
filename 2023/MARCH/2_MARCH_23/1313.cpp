#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int size = nums.size();
        vector<int> v;

        for (int i = 0; i < size; i = i+2)
        {
            int temp = i;
            while (nums[temp] != 0)
            {
                v.push_back(nums[i+1]);
                nums[temp]--;
            }
        }
        return v;
    }
};

int main(){
    
    return 0;
}