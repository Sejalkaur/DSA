//Link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/submissions/1608322125/

class Solution {
public:
void inorder(TreeNode* root, vector<int> &arr){
    if(root == NULL)return;

    inorder(root->left, arr);
    arr.push_back(root->val);
    inorder(root->right, arr);
}

    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inorder(root, arr);
        int l = 0;
        int r = arr.size() - 1;
       
        while(l <= r ){
            if(arr[l] + arr[r] == k && l != r)return true;
            else if(arr[l] + arr[r] < k)l++;
            else r--;
        }
        return false;
    }
};
