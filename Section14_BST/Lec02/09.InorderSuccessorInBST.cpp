//Link: https://www.geeksforgeeks.org/problems/inorder-successor-in-bst/1
class Solution {
  public:
  void f(Node *root, Node *x, int &ans){
      if(root == NULL)return;
      if(root->data > x->data){
          ans = root->data;
          f(root->left, x, ans);
      }
      else f(root->right, x, ans);
  }
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    int inOrderSuccessor(Node *root, Node *x) {
        // Your code here
        int ans = -1;
        f(root, x, ans);
        return ans;
    }
};
