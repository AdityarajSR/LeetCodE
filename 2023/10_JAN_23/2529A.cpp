#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int x = nums.size();
        int a = 0;
        int b = 0;
        int c = 0;

        for (int i = 0; i < x; i++)
        {
            if(nums[i]>0){
                a++;
            }else if(nums[i]<0){
                b++;
            }else{
                c++;
            }
        }

        if(a>b){
            return a;
        }else{
            return b;
        }
        
    }
};

int main(){
    
    return 0;
}