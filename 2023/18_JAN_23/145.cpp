#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

// Recursive Solution
class Solution
{
private:
    void dfs(TreeNode *rootnode, vector<int> &input_arr)
    {
        if (rootnode == NULL)
        {
            return;
        }

            dfs(rootnode->left, input_arr);
            dfs(rootnode->right, input_arr);
            input_arr.push_back(rootnode->val);
    }

public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        dfs(root, ans);
        return ans;
    }
};

int main()
{

    return 0;
}