//Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
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

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        if(root == NULL)return vec;
        stack<TreeNode*> st;
        st.push(root); //initialise stack with 1

        while(!st.empty()){
            //after popping it can be different every time 
            root = st.top();
            st.pop();//pop from stack n push into vector
            vec.push_back(root->val);

            if(root->right != NULL)st.push(root->right);//right first bcz we neeed to access left subtree
            if(root->left != NULL)st.push(root->left);
        }
        return vec;
    }
};
