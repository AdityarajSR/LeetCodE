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
    void postorder(TreeNode *rootis, vector<int> &input_arr)  // Yaha par & nhi lagya tha isliye wrong ans aa raha tha
    {
        if(rootis == NULL) return;
        postorder(rootis->left, input_arr);
        postorder(rootis->right, input_arr);
        input_arr.push_back(rootis->val);
    }

public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int sum = 0;
        vector<int> m;
        postorder(root, m);
        for (int i = 0; i < m.size(); i++)
        {
            if(m[i]>=low && m[i]<=high){
                sum += m[i];
            }
        }
        return sum;
    }
};

int main()
{

    return 0;
}