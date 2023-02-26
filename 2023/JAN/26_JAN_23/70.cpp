#include <bits/stdc++.h>
using namespace std;


// T.L.E

class Solution {
public:
    
    int helper(int n,vector<int> &v){
        if(n==0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        // if(n==2){
        //     return 2;
        // }
        if(v[n]!=-1){
            return v[n];
        }
        return v[n]=helper(n-1,v) + helper(n-2,v);
    }
    
    int climbStairs(int n) {
        //  Memoized
        
        vector<int> dp(n+1, -1);
        return helper(n,dp);
    }
};
////////////////////////////////////////////////////////////////////////////////////////////

// T.L.E

class Solution {
private:
    int helper(int n, vector<int> &v){
        if(n==0) return v[0];
        if(n==1) return v[1];
        if(v[n]!=-1) return v[n];
        return v[n] = helper(n-1, v)+helper(n-2, v);
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        dp[0] = dp[1] = 1;
        return helper(n, dp);
    }
};
////////////////////////////////////////////////////////////////////////////////////////////
int main(){
    
    return 0;
}