//Link: https://leetcode.com/problems/is-graph-bipartite/submissions/1751076651/
class Solution {
public:
bool bfs(queue<pair<int, int>> &q, vector<vector<int>>& graph, vector<int> &coloured){

    while(!q.empty()){
        int node = q.front().first;
        int color = q.front().second;

        q.pop();

        for(auto it: graph[node]){
            //not coloured
            if(coloured[it] == -1){
                if(color == 0){
                    q.push({it, 1});
                    coloured[it] = 1;
                }
                else {
                    q.push({it, 0});
                    coloured[it] = 0;
                }
            }
            //if coloured
            else{
                if(coloured[it] == color)return false;
            }
        }

    }
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> coloured(n, -1);
        
        // Handle disconnected components
        for (int start = 0; start < n; ++start) {
            if (coloured[start] != -1) continue;

            queue<pair<int,int>> q;
            q.push({start, 0});  // start this component with color            
            coloured[start] = 0;
            if (!bfs(q, graph, coloured)) return false;
        }
        return true;
    }
};
