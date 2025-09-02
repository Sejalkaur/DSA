//link: https://www.geeksforgeeks.org/problems/topological-sort/1
void dfs(int node, vector<vector<int>>& adjLs, 
  vector<int> &vis, stack<int> &st){
      vis[node] = 1;
      for(auto it: adjLs[node]){
          if(!vis[it]){
              dfs(it, adjLs, vis, st);
          }
      }
      st.push(node);
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        //convert edges into adjL
        vector<vector<int>> adjLs(V);
        for(auto &e: edges){
            adjLs[e[0]].push_back(e[1]);
        }
        
        vector<int> order;
        vector<int> vis(V, 0);
        
        stack<int> st;
        for(int i = 0;i < V; i++){
            if(!vis[i]){
                dfs(i, adjLs, vis, st);
            }
        }
        while(!st.empty()){
            // int node = st.top();
            order.push_back(st.top());
            st.pop();
        }
        return order;
    }
