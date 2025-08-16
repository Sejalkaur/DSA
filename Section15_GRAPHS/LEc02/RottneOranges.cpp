//link: https://leetcode.com/problems/rotting-oranges/
class Solution {
public:

void bfs(vector<vector<int>>& grid, int &t){
    int n = grid.size();
    int m = grid[0].size();

    queue<pair<pair<int, int>, int>> q;
    //find out the rotten oranges first
    for(int i = 0;i < n; i++){
        for(int j = 0;j < m; j++){
            if(grid[i][j] == 2)q.push({{i, j}, 0});
        }
    }

    //just keeping a track of a currTime which only increases 
    //when we start diff node
    while(!q.empty()){
        int row = q.front().first.first;
        int col = q.front().first.second;
        int currtime = q.front().second;

        q.pop();
        t = max(t, currtime); 

        //traverse th 4 directions
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        for(int i =0; i < 4;i++){
            int nrow = delrow[i] + row;
            int ncol = delcol[i] + col;

            //if the neighbours are 1 then only push
            if(nrow >= 0 && nrow < n &&
            ncol >= 0 && ncol < m &&
            grid[nrow][ncol] == 1){
                q.push({{nrow, ncol}, t+1});
                grid[nrow][ncol] = 2;
            }

        }
    }
}
    int orangesRotting(vector<vector<int>>& grid) {
        int t = 0;
        bfs(grid, t);

        //if any fresh orange left
        for(int i = 0;i < grid.size(); i++){
            for(int j = 0;j < grid[0].size(); j++){
                if(grid[i][j] == 1)return -1;
            }
        }

        return t;
    }
};
