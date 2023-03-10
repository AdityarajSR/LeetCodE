#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution {
private: 
    void help_me(TreeNode* root, int targetSum, vector<int> &subans, vector<vector<int>> &ans){
        if(root == NULL) return;
        subans.push_back(root->val);
        if (root->val == targetSum && root->left ==  NULL && root->right == NULL){
            ans.push_back(subans);
        }
        help_me(root->left, targetSum-root->val, subans, ans);
        help_me(root->right, targetSum-root->val, subans, ans);
        subans.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> v;
        vector<int> subv;
        help_me(root, targetSum, subv, v);
        return v;
    }
};

int main()
{

    return 0;
}
