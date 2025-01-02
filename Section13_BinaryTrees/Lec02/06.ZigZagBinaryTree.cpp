//link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool LtoR = true;//flag which will turn left to right n right to left in push backing elements in level arraya like for first level flag = 0/true for second it will be 1/false

        while(!q.empty()){
            int n = q.size();
            vector<int> level(n);

            for(int i = 0;i < n; i++){
                TreeNode* node = q.front();
                q.pop();

                int index = (LtoR) ? i : (n - i -1);
                if(node->left != NULL)q.push(node->left);
                if(node->right != NULL)q.push(node->right);
                    
                level[index] = node->val;
            }
            LtoR = !LtoR;
            ans.push_back(level);
        }

        return ans;
    }
};
