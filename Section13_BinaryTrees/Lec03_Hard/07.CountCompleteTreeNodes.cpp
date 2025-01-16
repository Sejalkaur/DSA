//Link: https://leetcode.com/problems/count-complete-tree-nodes/submissions/1510419456/
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
    //inorder
    
    int countNodes(TreeNode* root) {
        if(root == NULL)return 0;

        int lh = HghL(root);
        int rh = HghR(root);

        if(lh == rh)return (1<<lh) -1;
        else return 1+ countNodes(root->left) + countNodes(root->right);
    }

    int HghL(TreeNode* node){
        int hgh = 0;
        while(node){
            hgh++;
            node = node->left;
        }
        return hgh;
    }

    int HghR(TreeNode* node){
        int hgh = 0;
        while(node){
            hgh++;
            node = node->right;
        }
        return hgh;
    }
};
