//link: https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* curr = root;
        vector<int> vec;
        while(!st.empty() || curr != nullptr){
            if(curr!= NULL){
                st.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode* temp = st.top()->right;
                //if their is no right node
                if(temp == NULL){
                    temp = st.top();
                    st.pop();
                    vec.push_back(temp->val);
                  //if teh right nod eis processed n were visiint the parets
                    while(!st.empty() && temp == st.top()->right){
                        temp = st.top();
                        st.pop();
                        vec.push_back(temp->val);
                    }
                }
                else{
                    curr = temp;
                }
            }
        }
        return vec;
    }
};
