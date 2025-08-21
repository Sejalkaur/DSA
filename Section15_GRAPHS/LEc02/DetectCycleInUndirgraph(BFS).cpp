//Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adjLs(V);
        
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            adjLs[u].push_back(v);
            adjLs[v].push_back(u);
        }
        
        vector<int> vis(V, 0);
        queue<pair<int, int>> q;
        
        //this for loop is for non connected components if that have a cycle
        for(int start = 0; start < V; start++){
            if(!vis[start]){
                
                q.push({start, -1});
                vis[start] = 1;
                
                while(!q.empty()){
                    int node = q.front().first;
                    int parent = q.front().second;
                    
                    q.pop();
                    for(auto it: adjLs[node]){
                        //if its not visited tht means its not parent
                        //then we push it and the parent
                        if(!vis[it]){
                            q.push({it, node});
                            vis[it] = 1;
                        }
                        //if its nopt equal to the parent still its visited
                        //i.e. somebody has already touched i.e. cycle
                        else if(vis[it] && it!= parent)return true;
                        
                    }
                }
            }
        }
        return false;
    }
