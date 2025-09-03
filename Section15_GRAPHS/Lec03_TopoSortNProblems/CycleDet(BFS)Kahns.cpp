//link: https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
 bool isCyclic(int V, vector<vector<int>> &edges) {
        // let's do this by Kahn's Algo(BFS) with inDegree vec
        vector<vector<int>> adj(V);
        
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
        }
        //inDegree tell abt how many dependices are there for any node
        vector<int> inDegree(V, 0);
        for(int i = 0;i < V;i++){
            for(auto it: adj[i]){
                inDegree[it]++;
            }
        }
        
        queue<int> q;
        for(int i = 0; i < V;i++){
            if(inDegree[i] == 0)q.push(i);
        }
        // vector<int> ans;
        int cnt = 0;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cnt++;
            // ans.push_back(node);//only contains nodes which has completed its dependcies
            for(auto it: adj[node]){
                inDegree[it]--;
                if(inDegree[it] == 0)q.push(it);
            }
        }
        //false if q emptied before but tasks still left
        return (cnt < V) ? true: false;
    }
