#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
private:
    void inorder(TreeNode* myroot, queue<int>& qis){
        if(myroot == NULL) return;
        inorder(myroot->left, qis);
        qis.push(myroot->val);
        inorder(myroot->right, qis);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        queue<int> myq;
        inorder(root, myq);
        TreeNode* ansroot;
        for (int i = 0; i < myq.size(); i++)
        {
            ansroot->val = myq.front();
            myq.pop();
            
        }
        
    }
};

int main(){
    
    return 0;
}