#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int ans = 0;
        for (const vector<int> &row : grid)
            ans += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
        return ans;
    }
};

int main()
{
    vector<vector<int>> v = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    // int a = countNegatives(v);

    int ans = 0;

    //////////////////////////////////////////////////////////////////////
    // Method x;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        for (auto i = it->rbegin(); i != it->rend(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
    }

    for (const vector<int> &row : v)
        cout<<upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin()<<endl;
    //////////////////////////////////////////////////////////////////////
    // Method x++;

    // for (int i = 0; i < v.size(); i++){
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //////////////////////////////////////////////////////////////////////
    // Method x++

    // for(auto it : v){
    //     for(auto i : it){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}