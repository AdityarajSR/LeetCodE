#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
};


class Solution {
private:
    void help(TreeNode* root){
        if(root == NULL){
            return;
        }
        help(root->left);
        help(root->right);
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
            help(root);
            return root;
    }
};

int main(){
    
    return 0;
}