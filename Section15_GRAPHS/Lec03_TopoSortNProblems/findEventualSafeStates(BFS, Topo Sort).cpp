//Link: https://leetcode.com/problems/find-eventual-safe-states/
class Solution {
public:

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<vector<int>> adjRev(n);
        vector<int> inDegree(n, 0);

        //reverse edges and store indegree
        for(int i = 0;i < n; i++){
            for(auto it: graph[i]){
                adjRev[it].push_back(i);
                inDegree[i]++;
            }
        }

        //lets remove rge edge by queue
        queue<int> q;
        for(int i = 0; i < inDegree.size();i++){
            if(inDegree[i] == 0)q.push(i);
        }
        
        vector<int> safenodes;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            safenodes.push_back(node);
            for(auto it: adjRev[node]){
                inDegree[it]--;
                if(inDegree[it] == 0)q.push(it);
            }
        }
        sort(safenodes.begin(), safenodes.end());
        return safenodes;
    }
};
