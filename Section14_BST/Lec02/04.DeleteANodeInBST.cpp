//link: https://leetcode.com/problems/delete-node-in-a-bst/submissions/1594025299/
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root){
            //traverse left
            if(key < root->val)root->left = deleteNode(root->left, key); 
            //traverse right
            else if(key > root->val)root->right = deleteNode(root->right, key);
            //key found
            else{
                //no child return null
                if(!root->left && !root->right)return NULL;

                //if one child exists then return that child only 
                if(!root->left || !root->right)return root->left ? root->left : root->right;

                //if both child exixte find inorder predecessor i.e. left subrtree ka rightmost
                TreeNode* temp = root->left;
                //rightmost tak lekr jayega
                while(temp->right != NULL)temp = temp->right;

                //replace
                root->val = temp->val;
                //delete temp;
                root->left = deleteNode(root->left,temp->val);

            }
        }
        return root;
    }
};
