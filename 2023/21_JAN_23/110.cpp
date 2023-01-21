#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
private:
    int dfs(TreeNode* rootis){
        if(rootis == NULL) return;
        int a = dfs(rootis->left);
        if(a == -1) return -1;

        int b = dfs(rootis->right);
        if(b == -1) return -1;

        if(abs(a-b) > 1) return -1;

        return 1 + max(a, b);
    }
public:
    bool isBalanced(TreeNode* root) {
        

    }
};

int main(){
    
    return 0;
}