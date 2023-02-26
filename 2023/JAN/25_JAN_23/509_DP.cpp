#include <bits/stdc++.h>
using namespace std;

// Memoization

class Solution {
public:
    int fibHelper(int n, vector<int> &dp) {
        if(n == 0 || n == 1) return n;

        if(dp[n] != -1) return dp[n];

        return dp[n] = fibHelper(n-1, dp) + fibHelper(n-2, dp);
    }

    int fib(int n) {
        vector<int> dp(n+1, -1);
        return fibHelper(n, dp);
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////

// Tabulation

class Solution {
    int fibhelper(int n, vector<int> &dp){
        // if(n == 0 || n == 1){
        //     dp[n] = n;
        //     return dp[n];
        // }

        if(n == 0) return dp[0] = 0;
        if(n == 1) return dp[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
public:
    int fib(int n) {
        vector<int> dp(n+1, -1);
        return fibhelper(n, dp);
    }
};



////////////////////////////////////////////////////////////////////////////////////////////////
// YE IG ISLIYE GALAT HO SAKTA HAI KYOKI MAY BE 
// THE TIME IS BEING CONSUMED BY THE DECLARATION OF ARRAY AGAIN AND 
// AGAIN WHEN THE RECURSIVE CALL OF fib(n) IS BEING MADE

// class Solution {
// public:
//     int fib(int n) {
//         vector<int> dp(n+1, -1);
//         if(n == 0 || n == 1) return n;
//         if(dp[n] != -1) return dp[n];
//         return dp[n] = fib(n-1) + fib(n-2);
//         // return fib(n-1) + fib(n-2);
//     }
// };



int main(){
    
    return 0;
}