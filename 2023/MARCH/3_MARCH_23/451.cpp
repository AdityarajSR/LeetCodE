#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            mp[s[i]]++;
        }
        
        vector<pair<int, char>> v;
        for(auto it : mp){
            v.push_back(make_pair(it.second, it.first));
        }
        sort(v.rbegin(), v.rend());
        
        int ct = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[i].first; j++)
            {
                s[ct] = v[i].second;
                ct++;
            }
        }
        return s;
        
    }
};

int main(){
    
    return 0;
}