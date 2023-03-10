#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int size = nums.size();
        priority_queue<int, vector<int>, greater<int>> minheap;
        for (int i = 0; i < size; i++)
        {
            minheap.push(nums[i]);
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        return minheap.top();
        
    }
};

int main(){
    
    return 0;
}