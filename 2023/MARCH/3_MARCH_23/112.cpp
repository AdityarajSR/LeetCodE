#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
};


class Solution {
public:
    bool hasPathSum(TreeNode *root, int targetSum) {
        if (root == NULL) return false;
        if (root->val == targetSum && root->left ==  NULL && root->right == NULL) return true;
        return hasPathSum(root->left, targetSum-root->val) || hasPathSum(root->right, targetSum-root->val);
    }
};

int main(){
    
    return 0;
}