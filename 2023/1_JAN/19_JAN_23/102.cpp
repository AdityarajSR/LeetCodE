#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;

        if(root == NULL) return ans;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int qsize = q.size();
            vector<int> subans;
            for (int i = 0; i < qsize; i++)
            {
                TreeNode *nodeis = q.front();
                q.pop();
                if(nodeis->left) q.push(nodeis->left);
                if(nodeis->right) q.push(nodeis->right);
                subans.push_back(nodeis->val);
            }
            ans.push_back(subans);
        }
        return ans;
    }
};

int main()
{

    return 0;
}