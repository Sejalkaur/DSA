//Link: https://www.geeksforgeeks.org/problems/largest-bst/1
class NodeValue {
    public: int maxNode, minNode, maxSize;
    
    NodeValue(int minNode, int maxNode, int maxSize){
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
};

class Solution{
    private:
    NodeValue f(Node* root){
        
        //if empty tree then size = 0
        if(!root){
            return NodeValue(INT_MAX, INT_MIN, 0);
        }
        
        //get values from left and right subtree 
        auto left = f(root->left);
        auto right = f(root->right);
        
        //if it validates
        if(left.maxNode < root->data && root->data < right.minNode){
            return NodeValue(min(root->data, left.minNode), max(root->data, right.maxNode), left.maxSize + right.maxSize + 1);
        }
        
        //if not bst then put the [-im, im]
        return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
    }
    
    public:
   
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
    	return f(root).maxSize;
    }
