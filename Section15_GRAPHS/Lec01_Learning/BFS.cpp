//Link: https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int> visited(n+1, 0);
        visited[0] = 1;
        
        queue<int> q;
        q.push(0);
        
        vector<int> ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);

          //dequeu parents and enqueue children
            for(auto it: adj[node]){
                if(!visited[it]){
                    visited[it] = 1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
