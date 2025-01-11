//lin: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/1505228538/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      //if traverse krt ekrte we cam across the p n q
        if(root == NULL || root == p || root == q)return root;
      
        TreeNode* left =lowestCommonAncestor(root->left, p, q);
        TreeNode* right =lowestCommonAncestor(root->right, p, q);

        //while returning if one of them is null return the other one
        if(left == NULL)return right;
        if(right == NULL)return left;
        //if both are not null
        else return root;
    }
};
