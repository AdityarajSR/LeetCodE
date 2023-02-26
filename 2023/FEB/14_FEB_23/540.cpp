#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size = nums.size();
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;        
    }
};

int main(){
    
    return 0;
}