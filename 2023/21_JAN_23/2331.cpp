#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
}:

class Solution {
private:
    void dfs(TreeNode* root, vector<int>& v){
        if(root == NULL) return;
        dfs(root->left, v);
        v.push_back(root->val);
        dfs(root->right, v);

    }
public:
    bool evaluateTree(TreeNode* root) {
        

    }
};

int main(){
    
    return 0;
}