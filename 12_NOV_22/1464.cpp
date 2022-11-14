// BRUTE FORCE APPROACH


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = *(nums.begin());
        int b = *(nums.begin())-1;

        return a*b;
    }
};

int main(){
    
    return 0;
}