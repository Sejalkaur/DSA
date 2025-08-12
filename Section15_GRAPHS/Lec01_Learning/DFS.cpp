//Link:www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
public:
  void DFS(int node, vector<vector<int>>& adj, vector<int> &ans, vector<int> &vis){
      vis[node] = 1;
      int n = adj.size();
      ans.push_back(node);
      //traverse all its neighbours
      for(auto it: adj[node]){
          //if not visited then only go for recursion otherwise don
          if(!vis[it]){
              vis[it] = 1;
              DFS(it, adj, ans, vis);
          }
      }
     
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int> ans;
        vector<int> vis(n, 0);
        
        int node = 0;
        DFS(node, adj, ans, vis);
        
        return ans;
    }
