//Link:https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1

public:
    int minValue(Node* root) {
        // Code here
        if(root->left == NULL)return root->data;
        return minValue(root->left);
        
    }
