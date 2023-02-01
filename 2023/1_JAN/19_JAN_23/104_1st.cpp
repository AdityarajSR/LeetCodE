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
private:
    void bfs(TreeNode *myroot, int &count)
    {
        // count = 0;
        // vector<vector<int>> ans;
        queue<TreeNode *> q;
        q.push(myroot);

        if(myroot == NULL) return;

        while (!q.empty())
        {
            count++;
            int sizeis = q.size();
            // vector<int> subans;
            for (int i = 0; i < sizeis; i++)
            {
                TreeNode *mynode = q.front();
                q.pop();
                if(mynode->left != NULL) q.push(mynode->left);
                if(mynode->right != NULL) q.push(mynode->right);
                // subans.push_back(mynode->val);
            }
            // return ans;
        }
    }

public:
    int maxDepth(TreeNode *root)
    {
        int mycount = 0;
        bfs(root, mycount);
        return mycount;
    }
};

int main()
{

    return 0;
}