//link: https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postorder-traversal-iterative
/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        vector<int> vec;
        stack<Node*> st1, st2;
        st1.push(node);
        while(!st1.empty()){
            node = st1.top();
            st1.pop();
            st2.push(node);
            
            if(node->left != NULL)st1.push(node->left);
            if(node->right != NULL)st1.push(node->right);
        }
        //st2 values when pushed in reversal then it make sthe ans
        while(!st2.empty()){
            vec.push_back(st2.top()->data);
            st2.pop();
        }
        return vec;
    }
