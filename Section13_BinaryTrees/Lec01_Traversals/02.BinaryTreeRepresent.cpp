//Link: https://www.geeksforgeeks.org/problems/binary-tree-representation/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-tree-representation
/*struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}*/

class Solution{
public:

    void create_tree(node* root0, vector<int> &vec){
        //Your code goes here
        if(root0 == NULL)return;
       queue<node*> q;
       q.push(root0);
       int i = 1;
       
       while(!q.empty() && i<vec.size()-1){
           node* curr = q.front();
           q.pop();
           
           curr->left = newNode(vec[i]);
           q.push(curr->left);
           curr->right = newNode(vec[i+1]);
           q.push(curr->right);
           i+=2;
       }
       
    }

};
