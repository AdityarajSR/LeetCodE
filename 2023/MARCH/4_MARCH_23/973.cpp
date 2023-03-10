#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int size = points.size();
        priority_queue<pair<float, int>> max_heap;
        for (int i = 0; i < size; i++)
        {
            float dist = (points[i][0])*(points[i][0]) + (points[i][1])*(points[i][1]);
            dist = sqrt(dist);
            max_heap.push(make_pair(dist, i));
            if(max_heap.size()>k){
                max_heap.pop();
            }
        }
        vector<vector<int>> v;
        while (k)
        {
            vector<int> vv;
            vv.push_back(points[max_heap.top().second][0]);
            vv.push_back(points[max_heap.top().second][1]);
            max_heap.pop();
            v.push_back(vv);
            k--;
        }
        return v;        
    }
};

int main(){
    
    return 0;
}