#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int a = nums.size();
        vector<int> v;

        map<int, int> s;
        for (int i = 0; i < a; i++)
        {
            s[nums[i]]++;
        }
              
        for (int i = 0; i < a; i++)
        {
            int count = 0;
            for(auto it : s){
                if(it.first == nums[i]){
                    v.push_back(count);
                    break;
                }else{
                    count += it.second;
                }
            }
        }
        return v;
    }
};

int main(){

    return 0;
}