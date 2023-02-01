#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int a = nums.size();
        unordered_set<int> s;
        for (int i = 0; i < a; i++)
        {
            s.insert(nums[i]);
        }

        int count = 0;
        for(auto it : s){
            if(s.find(it + 2*diff) != s.end()){
                count++;
            }
        }
    return count;
    }
};

int main(){
    
    return 0;
}