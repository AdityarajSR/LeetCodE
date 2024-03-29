#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    vector<int> answer;
    
    void dfs(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        // Visit the root first, then the left subtree, then the right subtree.

        answer.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        dfs(root);
        return answer;
    }
};

int main(){
    
    return 0;
}