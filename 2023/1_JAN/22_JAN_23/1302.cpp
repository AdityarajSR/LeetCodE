#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
};


class Solution {
private:
    vector<vector<int>> levelOrder(TreeNode *root, vector<vector<int>>& ans)
    {
        

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
public:
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>> inputvec;
        inputvec = levelOrder(root, inputvec);

        int m = inputvec.size() - 1;
        
        int mm = inputvec[m].size();

        int sum = 0;

        for (int i = 0; i < mm; i++)
        {
            sum += inputvec[m][i];
        }
        return sum;
    }
};

int main(){
    
    return 0;
}