//Link: https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1
vector<int> topoSort(int V, vector<vector<pair<int, int>>> &adjLs){
      vector<int> inDegree(V, 0);
        queue<int> q;
        vector<int> order;
        for(int i = 0; i < V;i++){
            for(auto it: adjLs[i]){
                inDegree[it.first]++;
            }
        }
        
        for(int i = 0;i < inDegree.size();i++){
            if(inDegree[i] == 0)q.push(i);
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            order.push_back(node);
            
            for(auto it: adjLs[node]){
                inDegree[it.first]--;
                if(inDegree[it.first] == 0)q.push(it.first);
            }
        }
        return order;
  }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int, int>>> adjLs(V);
        
        for(auto &e: edges){
            int u = e[0], v = e[1], wt = e[2];
            adjLs[u].push_back({v, wt});
        }
        
        //step 1 toposort
        vector<int> order = topoSort(V, adjLs);
        
        //step 2 pop and relax the edges
        const long long INF = (1LL<<60);
        vector<long long> dist(V, INF);
        dist[0] = 0; // source is vertex 0
        
        // relax edges in topo order
        for (int node : order) {
            for (auto p : adjLs[node]) {
                int to = p.first;
                int wt = p.second;
                if (dist[node] + wt < dist[to]) dist[to] = dist[node] + wt;
            }
        }
        
        vector<int> ans(V);
        for(int i = 0; i < dist.size();i++){
            if(dist[i] == INF)ans[i] = -1;
            else ans[i] = (int)dist[i];
        }
        return ans;
        
        // return (int)dist;
    }
