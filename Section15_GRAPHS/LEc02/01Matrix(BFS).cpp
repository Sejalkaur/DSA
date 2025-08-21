///Link: https://www.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1
void bfs(int n, int m,vector<vector<int>> &grid, vector<vector<int>> &vis, vector<vector<int>> &dis){
     
      queue<pair<pair<int,int>, int>> q;

      int delrow[]= {-1, 0, 1, 0};//for traversing vertical n horixzontal
      int delcol[] = {0, 1, 0, -1};
  
      for(int row = 0;row < n;row++){
          for(int col = 0; col < m; col++){
              if(grid[row][col] == 1){
                  q.push({{row, col}, 0});
                  vis[row][col] = 1;
              }
          }
      }
      while(!q.empty()){
          int row = q.front().first.first;
          int col = q.front().first.second;
          
          int count = q.front().second;
          dis[row][col] = count;
          q.pop();
          
          
          for(int i = 0;i < 4; i++){
              int nrow = delrow[i] + row;
              int ncol = delcol[i] + col;
              
              if(nrow >= 0  && nrow < n &&
              ncol >= 0 && ncol < m && !vis[nrow][ncol]){
                  q.push({{nrow, ncol}, count+1});
                  vis[nrow][ncol] = 1;
                //   dis[nrow][ncol] = count;
              }
          }
      }
  }
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<vector<int>> dis(n, vector<int>(m, 0));
        
        bfs(n, m, grid, vis, dis);
        
        return dis;
    }
