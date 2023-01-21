#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int count = heights.size();
        map<int, string> mp;
        for (int i = 0; i < count; i++)
        {
            // mp.insert(make_pair(heights[i]), names[i]);
            mp[heights[i]] = names[i];
        }

        vector<string> v;
        for(auto it : mp){
             v.push_back(it.second);
        }
        
        return v;
    }
};

int main(){
    
    return 0;
}