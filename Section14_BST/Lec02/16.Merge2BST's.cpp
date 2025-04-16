//Link: https://www.geeksforgeeks.org/problems/merge-two-bst-s/1?page=1&category=Binary%20Search%20Tree&sortBy=submissions
public:
  
  void inorder(Node* root1, vector<int> &arr1){
      if(root1 == NULL)return;
      
      inorder(root1->left, arr1);
      arr1.push_back(root1->data);
      inorder(root1->right, arr1);
  }
  
  void inorder2(Node* root2, vector<int> &arr2){
      if(root2 == NULL)return;
      
      inorder2(root2->left, arr2);
      arr2.push_back(root2->data);
      inorder2(root2->right, arr2);
  }
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> arr1;
        vector<int> arr2;
        vector<int> ans;
        
        inorder(root1, arr1);
        inorder2(root2, arr2);
        
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
