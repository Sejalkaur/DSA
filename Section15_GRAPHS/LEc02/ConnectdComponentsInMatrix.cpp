//Link: https://www.geeksforgeeks.org/problems/connected-components-in-an-undirected-graph/1
void dfs(int node,  vector<vector<int>> &adjLs, vector<int> &vis, vector<int> &e){
      vis[node] = 1;
      e.push_back(node);
      
      for(auto it: adjLs[node]){
          if(!vis[it]) dfs(it, adjLs, vis, e);
      }
      //it doesnt have any more connected components then it returns
  }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        //convert this input into the adjList
        vector<vector<int>> adjLs(V);
        
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            adjLs[u].push_back(v);
            adjLs[v].push_back(u);
        }
        
        vector<int> vis(V, 0);
        vector<vector<int>> ans;
        
        //append the nodes in e then push in ans array
        for(int i = 0; i< V;i++){
            if(!vis[i]){
            //the pointer comes here when new starting node
                vector<int> e;
                dfs(i, adjLs, vis, e);
                ans.push_back(e);
            }
        }
        return ans;
    }
