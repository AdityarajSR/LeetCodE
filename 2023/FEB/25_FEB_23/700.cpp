#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root && root->val != val)
        {
            if(root->val < val){
                root = root->right;
            }else{
                root = root->left;
            }
        }
        return root;
    }
};

int main(){
    
    return 0;
}