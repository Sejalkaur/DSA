//Link: https://leetcode.com/problems/validate-binary-search-tree/submissions/1599242426/

class Solution {
public:
bool f(TreeNode* root, long min_val, long max_val){
    if(root == NULL)return true;
    if(root->val >= max_val || root->val <= min_val)return false;
    return f(root->left, min_val, root->val) && f(root->right, root->val, max_val);
}
    bool isValidBST(TreeNode* root) {
        return f(root, LONG_MIN, LONG_MAX);
    }
};
