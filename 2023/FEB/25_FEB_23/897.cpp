#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        // Perform in-order traversal and store nodes in a vector
        vector<TreeNode*> nodes;
        inorderTraversal(root, nodes);
        
        // Create new root node using leftmost node in the vector
        TreeNode* newRoot = nodes[0];
        
        // Iterate through remaining nodes, adding each node as the right child of the previous node
        TreeNode* prevNode = newRoot;
        for (int i = 1; i < nodes.size(); i++) {
            prevNode->left = nullptr;
            prevNode->right = nodes[i];
            prevNode = nodes[i];
        }
        
        // Set left child of last added node to nullptr
        prevNode->left = nullptr;
        
        // Return new root node
        return newRoot;
    }
    
    void inorderTraversal(TreeNode* node, vector<TreeNode*>& nodes) {
        if (!node) return;
        inorderTraversal(node->left, nodes);
        nodes.push_back(node);
        inorderTraversal(node->right, nodes);
    }
};

int main(){
    
    return 0;
}