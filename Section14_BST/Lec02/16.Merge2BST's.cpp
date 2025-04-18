//Link: https://www.geeksforgeeks.org/problems/merge-two-bst-s/1?page=1&category=Binary%20Search%20Tree&sortBy=submissions
public:
  
  void inorder(Node* root, vector<int> &arr){
      if(root == NULL)return;
      
      inorder(root->left, arr);
      arr.push_back(root->data);
      inorder(root->right, arr);
  }

    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
         vector<int> arr1, arr2, ans;
        
        inorder(root1, arr1);
        inorder(root2, arr2);
        
        int i = 0;
        int j = 0;
        int n = arr1.size();
        int m = arr2.size();
        
        while(i < n && j < m){
            if(arr1[i] >= arr2[j]){
                ans.push_back(arr2[j]);
                j++;
            }
            else{
                ans.push_back(arr1[i]);
                i++;
            }
        }
        while(j < m){
            ans.push_back(arr2[j]);
            j++;
        }
        while(i < n){
            ans.push_back(arr1[i]);
            i++;
        }
        return ans;
    }
