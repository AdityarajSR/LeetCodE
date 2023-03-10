#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int org_ladder = ladders;
        int ans;
        int size = heights.size();
        for (int i = 0; i < size-1; i++)
        {
            if(heights[i+1]>heights[i]){
                heights[i] = heights[i+1] - heights[i];
            }else{
                heights[i] = 0;
            }
        }
        heights[size-1] = 0;
        priority_queue<int> max_heap;
        int bricks_used = 0;
        for (int i = 0; i < size; i++)
        {
            max_heap.push(heights[i]);
            bricks_used += heights[i];

            if(bricks_used>bricks){
                bricks_used = bricks_used - max_heap.top();
                max_heap.pop();
                ladders--;
            }

            if(ladders == -1){
                return max_heap.size() + org_ladder;
                break;
            }
        }
        return size-1;
    }
};

int main(){
    
    return 0;
}