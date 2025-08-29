//Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
bool dfs(int node, vector<vector<int>> &adj, 
  vector<int> &vis, vector<int> &pathvis){
      vis[node] = 1;
      pathvis[node] = 1;
      
      for(auto it: adj[node]){
          //if not visited the call dfs
          if(!vis[it]){
              if(dfs(it, adj, vis, pathvis))return true;
          }
          //if visited and also th epath is vis then cycle
          else if(pathvis[it])return true;
      }
      pathvis[node] = 0;//make the path as 0 while returning tht means no cycle detected
      return false;
  }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
        }
        
        vector<int> vis(V, 0);
        vector<int> pathvis(V, 0);
        
        //for different components
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, pathvis))return true;
            }
        }
        return false;
    }
