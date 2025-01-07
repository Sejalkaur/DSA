//link: https://www.naukri.com/code360/problems/boundary-traversal_790725?leftPanelTabValue=PROBLEM
/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
#include<stack>

bool isLeaf(TreeNode<int> *root) {
    return !root->left && !root->right;
}

void addLeftbnd(TreeNode<int> *root, vector<int> &res){
    TreeNode<int> *curr = root->left;
    while(curr){
        if(!isLeaf(curr))res.push_back(curr->data);
        if(curr->left)curr = curr->left;
        else curr = curr->right;
    }
}

void addLeaves(TreeNode<int> *root, vector<int> &res){
    if (!root) return;
    if (isLeaf(root)) {
        res.push_back(root->data);
        return;
    }
    addLeaves(root->left, res);
    addLeaves(root->right, res);
}

void addRightbnd(TreeNode<int> *root, vector<int> &res){
    TreeNode<int> *curr = root->right;
    stack<int> st;
    while (curr) {
        if (!isLeaf(curr))
          st.push(curr->data);

        if (curr->right)
          curr = curr->right;
        else
          curr = curr->left;
    }
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int> res;
    if(!root)return res;
    if(!isLeaf(root))res.push_back(root->data);
  
    addLeftbnd(root, res);
    addLeaves(root, res);
    addRightbnd(root, res);
    return res;
}
