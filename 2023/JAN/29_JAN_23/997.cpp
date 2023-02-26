#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int, int> a;
        unordered_map<int, int> b;
        for (int i = 0; i < trust.size(); i++)
        {
            a[trust[i][0]]++;
            b[trust[i][1]]++;
        }

        // vector<int> x;
        vector<int> y;
        // for(auto it : a){
        //     x.push_back(it.first);
        // }
        for(auto it : b){
            y.push_back(it.first);
        }

        int ans = -1;
        // int r = x.size();
        int s = y.size();

        if(s == 0) return -1;
        for (int i = 0; i < s; i++)
        {
            if(a.find(y[i]) == a.end()){
                ans = y[i];
                break;
            }
        }
        return ans;        
    }
// };

int main(){
    
    int nis = 3;
    vector<vector<int>> v = {{1, 2}, {2, 3}};
    int ii = findJudge(nis, v);
    cout<<ii<<endl;
    return 0;
}