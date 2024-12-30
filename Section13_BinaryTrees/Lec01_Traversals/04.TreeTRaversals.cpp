//Link: https://www.naukri.com/code360/problems/tree-traversal_981269?leftPanelTabValue=PROBLEM
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<vector<int>> getTreeTraversal(TreeNode *root) {
  // Write your code here.
  vector<vector<int>> ans;
  if(root == NULL)return ans;
  vector<int> Pre, In, Post;
  
  stack<pair<TreeNode *, int>> st;
    st.push({root, 1});

    while(!st.empty()){
        auto [node, state] = st.top();
        st.pop();

        //preorder
        if(state == 1){
            Pre.push_back(node->data);
            st.push({node, 2});
            if(node->left){
                st.push({node->left, 1});
            }
        }
          
        //inorder
        else if(state == 2){
            In.push_back(node->data);
            st.push({node, 3});
            if(node->right){
                st.push({node->right, 1});
            }
        }
          
        //postorder
        else{
            Post.push_back(node->data);
            
        }
    }
  
    ans.push_back(In);
    ans.push_back(Pre);
    ans.push_back(Post);
    return ans;
}
