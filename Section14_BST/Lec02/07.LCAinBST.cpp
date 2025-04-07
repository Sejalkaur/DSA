//Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/submissions/1599587528/
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if(root == NULL)return root;

        //if both are smaller than root then move left otherwise right
        if(p->val < root->val && q->val < root->val)return lowestCommonAncestor(root->left, p, q);
        else if(p->val > root->val && q->val > root->val)return lowestCommonAncestor(root->right, p, q);

        //if p is on left and q is on right or p is in right and q is in left of root
        //OR EITHER OF THEM IS EQUAL TO ROOT->VAL 
        //or null
        else return root;

    }
};
