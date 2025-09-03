//Link: https://www.geeksforgeeks.org/problems/topological-sort/1
void bfs(vector<vector<int>>& adjLs, 
  vector<int> &inDegree, queue<int> &q,vector<int> &order){
      
      while(!q.empty()){
          
          int node = q.front();
          //pop & push in order
          q.pop();
          order.push_back(node);
          
          //then reduce it sconnection's indegree
          for(auto it: adjLs[node]){
              inDegree[it]--;
                if(inDegree[it] == 0)q.push(it);
          }
      }
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        //convert edges into adjL
        vector<vector<int>> adjLs(V);
        for(auto &e: edges){
            adjLs[e[0]].push_back(e[1]);
        }
        vector<int> inDegree(V, 0);
        vector<int> order;
        
        //track all the indegrees of nodes first
        for(int node = 0; node < V; node++){
            for(auto it: adjLs[node]){
                  inDegree[it]++;
            }
        }
        queue<int> q;
        //push the el which has indegree 0 in q
        for(int i = 0; i < V; i++){
            if(inDegree[i] == 0)q.push(i);
        }
        
        bfs(adjLs, inDegree, q, order);
        
        return order;
    }
