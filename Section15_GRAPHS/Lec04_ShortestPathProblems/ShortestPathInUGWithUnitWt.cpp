//Link: https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
// Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // we dont eed min dist bcz its one itsnot varied
        vector<int> ans(adj.size(), -1);
        
        queue<int> q;
        q.push(src);
        ans[src] = 0;
        
        while(!q.empty()){
            int node = q.front();

            q.pop();
            for(auto it: adj[node]){
                if(ans[it] == -1){
                    ans[it] = ans[node] + 1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
