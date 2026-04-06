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

class Solution {
public:
int res=-1;
int count=0;

    void result(TreeNode * root,int k)
    {
        if(!root  || res!=-1) return ;
        result(root->left,k);

        count++;

        if(count==k)
        {
            res=root->val;
            return;
        }

        result(root->right,k);
    }

    int kthSmallest(TreeNode* root, int k) {
        result(root,k);
        return res;
    }
};
