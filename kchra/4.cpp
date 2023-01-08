#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v;
    v.push_back({3, 2});
    v.push_back({9, 8});
    v.push_back({4, 1});
    v.push_back({7, 3});

    sort(v.begin(), v.end());
    int a = v.size();
    int b = v[0].size();

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}