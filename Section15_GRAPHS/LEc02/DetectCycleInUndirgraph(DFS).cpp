//Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
bool dfs(int start, vector<vector<int>>& adjLs, vector<int> &vis, int parent){
      vis[start] = 1;
      
      for(auto it: adjLs[start]){
          if(!vis[it]){
              if(dfs(it, adjLs, vis, start))return true;
          }
          //if its visited and not parent i.e. cycle
          else if(vis[it] && it != parent)return true;
      }
      return false;
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adjLs(V);
        int parent = -1;
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            adjLs[u].push_back(v);
            adjLs[v].push_back(u);
        }
        
        vector<int> vis(V, 0);
        
        
        //this for loop is for non connected components if that have a cycle
        for(int start = 0; start < V; start++){
            if(!vis[start]){
                
               if(dfs(start, adjLs, vis, parent))return true;
            }
        }
        return false;
    }
