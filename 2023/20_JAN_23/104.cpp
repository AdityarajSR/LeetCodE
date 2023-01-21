#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int a = maxDepth(root->left);
        int b = maxDepth(root->right);

        return 1+ max(a, b);
    }
};

int main(){
    
    return 0;
}