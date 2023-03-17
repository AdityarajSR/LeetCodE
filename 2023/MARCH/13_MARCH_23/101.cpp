#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* right;
    TreeNode* left;
};


class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return helper(root->left, root->right);
    }

    bool helper(TreeNode* leftTree, TreeNode* rightTree){
        if(!leftTree && !rightTree) return true;
        if(!leftTree || !rightTree) return false;
        if(leftTree->val != rightTree->val) return false;
        return helper(leftTree->left, rightTree->right) && helper(leftTree->right, rightTree->left);
    }
};

int main(){
    
    return 0;
}