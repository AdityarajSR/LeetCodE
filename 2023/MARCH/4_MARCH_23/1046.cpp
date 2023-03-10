#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int size = stones.size();
        
        priority_queue<int> pq;
        for (int i = 0; i < size; i++)
        {
            pq.push(stones[i]);
        }
        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            if(b == a){
                pq.pop();
            }else{
                pq.pop();
                pq.push(b-a);
            }
        }
        if(pq.size() == 1){
            return pq.top();
        }
        return 0;
    }
};

int main(){
    
    return 0;
}