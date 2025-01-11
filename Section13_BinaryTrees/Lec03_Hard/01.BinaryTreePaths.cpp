//Link: https://leetcode.com/problems/binary-tree-paths/submissions/1504864512/
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
    void findPaths(TreeNode* root, string path, vector<string> &ans){
        if(root == NULL)return;

        //add in the path
        if(!path.empty())path+="->";
        path+=to_string(root->val);  //to_string bcz

        //if it is a leaf then add it in the ans
        if(root->left == NULL && root->right == NULL){
            ans.push_back(path);
        }
      
        //check the left n right it will give decide that whether its leaf or not
        findPaths(root->left, path, ans);
        findPaths(root->right, path, ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root == NULL)return ans;
        //return in string
         string path = "";
        findPaths(root, path, ans);
        return ans;
    }
};







//if we store as a vector n not string
//Link: https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=root-to-leaf-paths
class Solution {
  public:
  void findPaths(Node* root, vector<int> level, vector<vector<int>> &ans){
       
       if(root == NULL)return;
       level.push_back(root->data);
       
       //if leaf then push in ans;
       if(root->left == NULL && root->right == NULL){
           ans.push_back(level);
       }
       
       findPaths(root->left, level, ans);
       findPaths(root->right, level, ans);
       //level.pop_back();//to pop back the last element added bcz it stores all if we using pass by refreence i.e vector<int> &level
  }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>> ans;
        vector<int> level;
        if(root == NULL)return ans;
        findPaths(root, level, ans);
        return ans;
    }
};
