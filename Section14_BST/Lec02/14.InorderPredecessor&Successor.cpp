//Link: https://www.geeksforgeeks.org/problems/predecessor-and-successor/1?page=1&category=Binary%20Search%20Tree&sortBy=submissions
/* BST Node
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;(Onlythisisdefinedthatiswhy)
	    left = NULL;
	    right = NULL;
	}
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
class Solution
{
    public:
    //successor
    void findSucc(Node* root, int key, Node*& suc){
        if(root == NULL)return;
        
        if(root->key > key){
            suc = root;
            findSucc(root->left, key, suc);
        }
        else findSucc(root->right, key, suc);
    }
    
    //predecessor
    void findPre(Node* root, int key, Node*& pre){
        if(root == NULL)return;
        
        if(root->key < key){
            pre = root;
            findPre(root->right, key, pre);
        }
        else findPre(root->left, key, pre);
    }
    
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        suc = NULL;
        pre = NULL;
        findSucc(root, key, suc);
        findPre(root, key, pre);
        
    }
};
