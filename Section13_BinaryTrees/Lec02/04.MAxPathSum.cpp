//link: https://leetcode.com/problems/binary-tree-maximum-path-sum/description/
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
    int Function(TreeNode* root, int &maxi){
            if(root == NULL)return 0;
            int ls = max(0, Function(root->left, maxi));
            int rs = max(0, Function(root->right, maxi));

            maxi = max(maxi, ls + rs + root->val);
            return (root->val + max(ls, rs));
    }
public:

    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        Function(root, maxi);
        return maxi;
    }
};
