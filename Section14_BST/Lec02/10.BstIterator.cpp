//Link: https://leetcode.com/problems/binary-search-tree-iterator/

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
class BSTIterator {
public:
stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    bool hasNext() {
        return !st.empty();
    }
    int next() {
        TreeNode* tmpNode = st.top();
        st.pop();
        pushAll(tmpNode->right);
        return tmpNode->val;
    }
    private:
    void pushAll(TreeNode* node){
        for(; node!= NULL; st.push(node), node = node->left);
    }
    
    
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
