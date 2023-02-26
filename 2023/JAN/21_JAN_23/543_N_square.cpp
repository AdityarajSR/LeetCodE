#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

// int maxi = 0;
class Solution
{
private:
    int heightoftree(TreeNode *rootis)
    {
        if (rootis == NULL)
            return 0;
        int x = heightoftree(rootis->left);
        int y = heightoftree(rootis->right);
        return 1 + max(x, y);
    }

public:
    int diameterOfBinaryTree(TreeNode *root)
    {

        if (root == NULL)
            return 0;
        int l = diameterOfBinaryTree(root->left);
        int r = diameterOfBinaryTree(root->right);

        int a = heightoftree(root->left);
        int b = heightoftree(root->right);
        
        return max(a+b+1, max(l, r));
    }
};

int main()
{

    return 0;
}