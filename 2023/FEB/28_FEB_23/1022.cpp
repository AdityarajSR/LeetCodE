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
        int sumRootToLeaf(TreeNode* root, int val = 0) {
        if (!root) return 0;
        val = (val * 2 + root->val);
        return root->left == root->right ? val : sumRootToLeaf(root->left, val) + sumRootToLeaf(root->right, val);
    }
};


// Only for complete binary tree

// class Solution {
// public:
//     int heightis(TreeNode* root){
//         int ct = 0;
//         while (root)
//         {
//             root = root->left;
//             ct++;
//         }
//         return ct;        
//     }
// public:
//     int helper(TreeNode* root, int height, int level){
//         if(root == NULL) return 0;
//         int val = root->val*pow(2, height);
//         return level*val + helper(root->left, height -1, level/2) + helper(root->right, height -1, level/2);
//     }
// public:
//     int sumRootToLeaf(TreeNode* root) {
//         int h = heightis(root);
//         h = h-1;
//         int x = pow(2, h);
//         return helper(root, h, x);
//     }
// };

int main(){
    
    return 0;
}