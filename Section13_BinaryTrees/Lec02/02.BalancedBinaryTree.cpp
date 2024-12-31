//Link: https://leetcode.com/problems/balanced-binary-tree/
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
    int traversal(TreeNode* root){
        if(root == NULL)return 0;
        int lh = traversal(root->left);
        int rh = traversal(root->right);

        if(lh == -1 || rh == -1)return -1; //unbalanced left or right subtree
        if(abs(lh - rh) > 1)return -1; //if unbalanced can be left or right(difference should be atmost 1)
    
        return 1+max(lh, rh); //balanced
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL)return true; // for []
        
        int ans = traversal(root);
        if(ans >= 0)return true; //if positive
        return false; //if -1 or negative

    }
};
