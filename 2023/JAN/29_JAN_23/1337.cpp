#include <bits/stdc++.h>
using namespace std;



                                        //   nhi chal rha  //
                //////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
    void kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> vp;
        for (int i = 0; i < mat.size(); i++)
        {
            int lb = lower_bound(mat[i].rbegin(), mat[i].rend(), 1) - mat[i].rbegin();
            // cout<<lb<<endl;
            if(lb != mat.size() && mat.size()-lb-1 >= 0){
                if(mat[i][mat[i].size()-lb-1] == 1){
                    lb = lb;
                }
                else{
                    lb = -1;
                }
            }else{
                lb = -1;
            }
            // cout<<"lb "<<lb<<endl;

            int ub = upper_bound(mat[i].rbegin(), mat[i].rend(), 1) - mat[i].rbegin();
            // cout<<ub<<endl;
            if(ub <= mat[i].size() && mat[i][mat[i].size()-ub] == 1){
                ub = ub-1;
            }else{
                ub = -1;
            }
            // cout<<endl;
            // cout<<"ub "<<ub<<endl;
            // cout<<endl;

            if(lb == -1 && ub == -1){
                vp.push_back(make_pair(0, i));
            }else{
                vp.push_back(make_pair(ub-lb+1, i));
            }
        }

        sort(vp.begin(), vp.end());
        for (int i = 0; i < vp.size(); i++)
        {
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }
        cout<<endl;
        

        vector<int> a;
        for (int i = 0; i < k; i++)
        {
            a.push_back(vp[i].first);
        }

        // for (int i = 0; i < a.size(); i++)
        // {
        //     cout<<a[i]<<endl;
        // }
        
        
    }
// };

int main(){
    // vector<vector<int>> h = {{1, 1, 0, 0, 0}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 0}, {1, 1, 0, 0, 0}, {1, 1, 1, 1, 1}};
    // vector<vector<int>> h = {{1,0},{1,0},{1,0},{1,1}};
    vector<vector<int>> h = {{1,0},{0,0},{1,0}};
    // vector<vector<int>> h = {{1,1,1,0,0,0,0},{1,1,1,1,1,1,0},{0,0,0,0,0,0,0}, {1,1,1,0,0,0,0}, {1,1,1,1,1,1,1}};
    int kis = 3;
    kWeakestRows(h, kis);
    
    
    return 0;
}