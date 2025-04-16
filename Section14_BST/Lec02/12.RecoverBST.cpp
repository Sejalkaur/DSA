//Link: https://leetcode.com/problems/recover-binary-search-tree/submissions/1608554057/
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
    private:
    TreeNode* first;
    TreeNode* last;
    TreeNode* middle;
    TreeNode* prev;

    void inorder(TreeNode* root){
        if(root == NULL)return;

        inorder(root->left);

        if(prev != NULL && root->val < prev->val){
            //first violation mil gyi so mark first and middle
            if(first == NULL){
                first = prev;
                middle = root;
            }
            //second violation found
            else{
                last = root;
            }
        }
        //mark this node as prev to traverse aaage
        prev = root;
        inorder(root->right);
}

public:
    void recoverTree(TreeNode* root) {
        first = last = middle = NULL;
       
        prev = new TreeNode(INT_MIN);

        inorder(root);
        //if not adjacent
        if(first && last)swap(first->val, last->val);
        //if adjacent
        else if (first && middle)swap(first->val, middle->val);
    }
};
