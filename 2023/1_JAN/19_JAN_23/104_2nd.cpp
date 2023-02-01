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
    void dfs(TreeNode *myroot, int &count)
    {
        if(myroot == NULL) count++;
        dfs(myroot->left, count);
        dfs(myroot->right, count);    
    }

public:
    int maxDepth(TreeNode *root)
    {
        int mycount = 0;
        dfs(root, mycount);
        return mycount;
    }
};

int main()
{

    return 0;
}