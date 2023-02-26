#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
// Set se karna chahiye tha
// unique elements the 

/////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;

        vector<int> v1;
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++)
        {
            m1[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            m2[nums2[i]]++;
        }
        for(auto it : m1){
            v1.push_back(it.first);
        }
        for (int i = 0; i < v1.size(); i++)
        {
            if(m2.find(v1[i]) != m2.end()){
                ans.push_back(v1[i]);
            }
        }
        return ans;
        
    }
// };

/////////////////////////////////////////////////////////////////////////////////////////////////////
// Slight improvement in code
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>mp;
        for(auto x:nums1)
        mp[x]=1;
        vector<int>ans;
        for(auto x:nums2)
        {
            if(mp[x]==1)
            {
                ans.push_back(x);
                mp[x]=0;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> vv = {1, 2, 2, 1};
    vector<int> vq = {2, 2};
    vector<int> m = intersection(vv, vq);
    for (int i = 0; i < m.size(); i++)
    {
        cout<<m[i]<<" ";
    }
    
    return 0;
}