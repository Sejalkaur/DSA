//Link: https://leetcode.com/problems/is-graph-bipartite/
class Solution {
public:
bool dfs(int node, vector<vector<int>>& graph, vector<int> &coloured, int color){

    coloured[node] = color;
    
    for(auto it: graph[node]){
        //not coloured
        if(coloured[it] == -1){
            if(!dfs(it, graph, coloured, !color))return false;
        }
        //coloured
        else if(coloured[it] == color)return false;
    }
    return true;
    
}
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        int color = 0;
        vector<int> coloured(n, -1);
        // Handle disconnected components
        for (int start = 0; start < n; ++start) {
            if (coloured[start] != -1) continue;//already visited

            else if (!dfs(start, graph, coloured, color)) return false;
        }
        return true;
    }
};
