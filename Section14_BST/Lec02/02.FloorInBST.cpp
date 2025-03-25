//Link: https://www.geeksforgeeks.org/problems/floor-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-bst
void f(Node* root, int& x, int& fl){
        if(root == NULL)return;
        if(root->data <= x){
            fl = root->data;
            f(root->right, x, fl);
        }
        else f(root->left, x, fl);
    }
    int floor(Node* root, int x) {
        // Code here
        int fl = -1;
        f(root, x, fl);
        return fl;
    }
