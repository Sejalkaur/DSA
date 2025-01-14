//Link: https://leetcode.com/problems/root-equals-sum-of-children/
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
//to validify the child sum property
class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(root == NULL || (root->left == NULL && root->right == NULL))return 1;
        int child = 0;
      
        if(root->left)child+=root->left->val;
        if(root->right)child+=root->right->val;

        if(child != root->val)return 0;

        return checkTree(root->left) &&
        checkTree(root->right);

    }
};
