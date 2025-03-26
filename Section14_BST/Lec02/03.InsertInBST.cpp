//Link: https://leetcode.com/problems/insert-into-a-binary-search-tree/description/
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)return new TreeNode(val); // when no element is there 
        
        if(root->val > val){
            if(root->left != NULL)insertIntoBST(root->left, val);//traverse untill leaf comes.
            else root->left = new TreeNode(val); //leaf
            
        }
        if(root->val < val){
            if(root->right != NULL)insertIntoBST(root->right, val);
            else root->right = new TreeNode(val); //leaf pr hi attach hogi new node
        }

        return root;
    }
};
