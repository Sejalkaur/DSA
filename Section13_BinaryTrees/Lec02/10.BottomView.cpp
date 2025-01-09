//link: https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1
class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root == NULL)return ans;
        map<int, int> mpp;
        queue<pair<Node*, int>> q;
        q.push({root, 0}); //push the root
        
        while(!q.empty()){
            auto it = q.front(); //we used auto to access the key value pair
            Node* node = it.first;//for queue we need node n line
            int line = it.second;
            
            q.pop();//pop n push the left n right n push in map either it alreday in it or not so taht it would change
            mpp[line] = node->data;
            if(node->left != NULL)q.push({node->left, line-1});
            if(node->right != NULL)q.push({node->right, line+1});
        }
        //to push from map to ans vec
        for(auto it: mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
