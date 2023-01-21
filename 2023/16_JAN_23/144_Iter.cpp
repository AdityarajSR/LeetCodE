#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> toreturn;
        if(root == NULL) return toreturn;

        TreeNode *topnode = root;
        stack<TreeNode*> ans;
        ans.push(topnode);

        while (!ans.empty())
        {
            topnode = ans.top();
            toreturn.push_back(topnode->val);
            ans.pop();
            if(topnode->right != NULL){
                ans.push(topnode->right);
            }
            if(topnode->left != NULL){
                ans.push(topnode->left);
            }
        }
        return toreturn;

    }
};

int main()
{

    return 0;
}




















        // vector<int> preOrder;
        // if (root == NULL)
        //     return preOrder;

        // stack<TreeNode *> s;
        // s.push(root);

        // while (!s.empty())
        // {
        //     TreeNode *topNode = s.top();
        //     preOrder.push_back(topNode->val);
        //     s.pop();
        //     if (topNode->right != NULL)
        //         s.push(topNode->right);
        //     if (topNode->left != NULL)
        //         s.push(topNode->left);
        // }
        // return preOrder;