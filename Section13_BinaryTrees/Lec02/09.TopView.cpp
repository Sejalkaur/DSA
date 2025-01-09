//link: https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        if(root == NULL)return ans;
        
        map<int, int> mpp;
        queue<pair<Node* , int>> q;
        q.push({root, 0});//push the firts which is root
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
          
            Node* node = it.first;
            int line = it.second;
            
            //if not in map or not visited yet
            if(mpp.find(line) == mpp.end())mpp[line] = node->data;
            
            //after popping push left n then right if exist
            if(node->left != NULL)q.push({node->left, line-1});
            if(node->right != NULL)q.push({node->right, line+1});
        }
      //we use auto to access th ekey value pair
        for(auto it: mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
