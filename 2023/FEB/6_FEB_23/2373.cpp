#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> myans;
        int r = grid.size();
        int c = grid[0].size();
        for (int i = 0; i < r-2; i++)
        {
            vector<int> ds;
            for (int j = 0; j < c-2; j++)
            {
                int mx = INT_MIN;
                for (int I = i; I < i+3; I++)
                {
                    for (int J = j; J < j+3; J++)
                    {
                        if(grid[I][J]>mx){
                            mx = grid[I][J];
                        }
                    }  
                }
                ds.push_back(mx);
            }
            myans.push_back(ds);
        }
        return myans;
    }
};

int main(){
    // vector<vector<int>> gridis = {{9,9,8,1}, {5,6,2,6}, {8,2,6,4}, {6,2,2,2}};
    // vector<vector<int>> m = largestLocal(gridis);
    // for (int i = 0; i < m.size(); i++)
    // {
    //     for (int j = 0; j < m[0].size(); j++)
    //     {
    //         cout<<m[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    
    return 0;
}