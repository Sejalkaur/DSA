//Link: https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    vector<int> num={};
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==nullptr)return num;//base case
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        num.push_back(root->val);//to push back the value of the root
        return num;
    }
};
