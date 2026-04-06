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
    // Helper function to check if two trees are identical
    bool isIdentical(TreeNode *p, TreeNode *q) {
        if (p == NULL || q == NULL) 
            return (p == q); // both null => true, one null => false

        return (p->val == q->val) &&
               isIdentical(p->left, q->left) &&
               isIdentical(p->right, q->right);
    }

    // Main function to check if subRoot is a subtree of root
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL)
            return false;
        if (isIdentical(root, subRoot))
            return true;
        
        // Recursively check in left and right subtrees
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
