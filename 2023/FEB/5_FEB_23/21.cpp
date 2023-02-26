#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void findCombination(int ind, int target, vector<int> &arr, set<vector<int>> &ans, vector<int> & ds){
        if(ind == arr.size()){
            if(target == 0){
                sort(ds.begin(), ds.end());
                ans.insert(ds);
            }
            return;
        }
        // 2 Pickup the current element 
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            findCombination(ind+1, target-arr[ind], arr, ans, ds);
            ds.pop_back();
        }

        // 2 Not pickup the cuurent element 
        findCombination(ind+1, target, arr, ans, ds);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, candidates, ans, ds);
        vector<vector<int>> myans;
        
        for(auto it : ans){
            myans.push_back(it);
        }
        return myans;
    }
};

int main(){
    
    return 0;
}