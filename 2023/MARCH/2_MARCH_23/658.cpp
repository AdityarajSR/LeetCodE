#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int size = arr.size();
        priority_queue<pair<int, int>> max_heap;
        vector<int> v;
        for (int i = 0; i < size; i++)
        {
            max_heap.push(make_pair(abs(x - arr[i]), arr[i]));
            if(max_heap.size() > k){
                max_heap.pop();
            }
        }

        int heap_size = max_heap.size();
        while (k)
        {
            v.push_back(max_heap.top().second);
            max_heap.pop();
            --k;
        }
        return v;
    }
};

int main(){
    
    return 0;
}