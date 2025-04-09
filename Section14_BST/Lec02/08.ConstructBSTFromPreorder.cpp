//Link: https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/

class Solution {
public:
    TreeNode* f(vector<int>& preorder, int &start, int end, int ub){
        if(start >= end || preorder[start] > ub)return NULL;
        TreeNode* root = new TreeNode(preorder[start]);
        start++;
        
            root->left = f(preorder, start, end, root->val);
            root->right = f(preorder, start, end, ub);
        
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int start = 0;
        return f(preorder, start, preorder.size(), INT_MAX);
    }
};
