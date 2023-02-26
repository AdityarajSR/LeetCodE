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
    bool checkTree(TreeNode* root) {
        if(root->left->val + root->right->val == root->val){
            return true;
        }
        return false;
    }
};

int main(){
    
    return 0;
}