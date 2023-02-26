#include <bits/stdc++.h>
using namespace std;

// class Solution {
// private:
    void helper(int ind, vector<int> &ds, int s, int sum, vector<int> &arr, int n, int &ct){
        
        if(ind == n && ds.size() != 0){
            sort(ds.begin(), ds.end());
            if(ds[0] + ds[ds.size()-1] <= sum){
                ++ct;
            }
            return;
        }
        
        ds.push_back(arr[ind]);
        s += arr[ind];                                                           
        helper(ind + 1, ds, s, sum, arr, n, ct);
        s -= arr[ind];
        ds.pop_back();
        helper(ind+1, ds, s, sum, arr, n, ct);
    }
// public:
    int numSubseq(vector<int>& nums, int target) {
        int count = 0;
        // int ind_is = 0;
        // int s_is = 0;
        int n = nums.size();
        vector<int> ds;
        helper(0, ds, 0, target, nums, n, count);
        return count % 1000000007;
    }
// };

int main(){
    
    vector<int> v;
    v = {3, 5, 6, 7};
    int target = 9;
    int a = numSubseq(v, target);
    cout<<a<<endl;
    return 0;
}