//Link: https://leetcode.com/problems/binary-tree-level-order-traversal/
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        //define the ds to store the arrays
        vector<vector<int>> ans;
        //if null then empty
        if(root == NULL)return ans;
        //define the queue with TreeNode not int bcz we need to access the left n right of the node we will not get it by just int
        queue<TreeNode*> q;
        q.push(root);//initialising by putting the root

        while(!q.empty()){
            int n = q.size();
            vector<int> level; // array for that particular level

            for(int i = 0; i< n;i++){
                //to know wht is the front node 
                TreeNode* node = q.front();//node = 1
                q.pop();//dequeue root (1)

                if(node->left != NULL)q.push(node->left); //. enqueue root->left(2)
                if(node->right != NULL)q.push(node->right); //. enqueue root->right(3)
                level.push_back(node->val); //[1]
            }
            ans.push_back(level); //[[1], [2, 3], [4, 5, 6, 7]]
        }
        return ans;  //only when the whole queue is empty then only return ans
    }
};
