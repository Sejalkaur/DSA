//Link: https://leetcode.com/problems/number-of-provinces/submissions/1734855118/
class Solution {
public:
    void dfs(int node, vector<int> adjLs[], vector<int> &visited){
        visited[node] = 1;
        for(auto it: adjLs[node]){
            if(!visited[it]){
                dfs(it, adjLs, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& adjMatrix) {
        int n = adjMatrix.size();
        int cnt = 0;

        vector<int> visited(n+1, 0);
        vector<int> adjLs[n];

        //convert Matrix to list
        for(int i = 0;i < n; i++){
            for(int j = 0;j < n; j++){
                if(adjMatrix[i][j] == 1 && i != j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }

        for(int i = 0; i < n; i++){
            //if not visited i.e that is another component bcz dfs wale connected componenets ko visit kr hi lenge
            if(!visited[i]){
                cnt++;
                dfs(i, adjLs, visited);
            }
        }

        return cnt;
    }
};
