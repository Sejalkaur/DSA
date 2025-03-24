//Link: https://www.geeksforgeeks.org/problems/implementing-ceil-in-bst/1
void f(Node* root, int& input, int& ceil){
    if(root == NULL)return;
    
    if(root->data >= input){
        ceil = root->data;
        f(root->left, input, ceil);
    }
    
    else f(root->right, input, ceil);
}
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;

    // Your code here
    int ceil = -1;
    f(root,input, ceil);
    return ceil;
}
