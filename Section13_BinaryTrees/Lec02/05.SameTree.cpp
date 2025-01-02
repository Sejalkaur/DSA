//link: https://leetcode.com/problems/same-tree/solutions/3746149/recursive-approach-with-easy-steps/
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)return true;//we will reach here only when value is same taht is statement 18

        if(p == NULL || q == NULL)return false;//if anyone is diff like P(2, null) return false
        if(p->val == q->val){ //if val is same check recursively(imp)
        return isSameTree(p->left, q->left) &&
        isSameTree(p->right, q->right);
        } //&& islie bcz dono true hone chahie otherwise false if 2 nd or 3rd level is not identical
        return false;
        
    }
};
