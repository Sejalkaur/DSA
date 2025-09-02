//Link: https://leetcode.com/problems/find-eventual-safe-states/description/
class Solution {
public:
bool dfs(int node, vector<vector<int>>& graph, 
vector<int> &vis, vector<int> &pathvis, vector<int> &checkIsSafe){
    vis[node] = 1;
    pathvis[node] = 1;

    for(auto it: graph[node]){
        if(!vis[it]){
            if(dfs(it, graph, vis, pathvis, checkIsSafe)){
                // checkIsSafe[node] =0;
                return true;
            }
        }
        //if cycle detected
        else if(pathvis[it]){
            // checkIsSafe[node] =0;
            return true;
        }
    }
    
    pathvis[node] = 0;
    checkIsSafe[node] =1;
    return false;
}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, 0);
        vector<int> pathvis(n, 0);

        vector<int> safenodes;
        vector<int> checkIsSafe (n, 0);

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                dfs(i, graph, vis, pathvis, checkIsSafe);
            }
        }
        for(int i = 0; i < checkIsSafe.size();i++){
            if(checkIsSafe[i] == 1)safenodes.push_back(i);
        }
        return safenodes;
    }
};
