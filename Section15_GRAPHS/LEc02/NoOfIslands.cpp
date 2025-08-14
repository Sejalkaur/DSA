//Link: https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1
void bfs(int row, int col, vector<vector<char>> &grid, vector<vector<int>> &visited){
      int n = grid.size();
    int m = grid[0].size();
        
      visited[row][col] = 1;
      queue<pair<int, int>> q;
      q.push({row, col});
      
      while(!q.empty()){
          int row = q.front().first;
          int col = q.front().second;
          q.pop();//dequee the parent
          
          //now we need to traverse in 8 directions
          for(int delrow = -1; delrow <= 1; delrow++){
              for(int delcol = -1; delcol <= 1; delcol++){
                  
                  int neighrow = delrow + row;
                  int neighcol = delcol + col;
                  
                  if(neighrow >= 0 && neighrow < n && neighcol >= 0 && neighcol < m
                      && !visited[neighrow][neighcol] && grid[neighrow][neighcol] == 'L'){
                      q.push({neighrow, neighcol});//enque the connected componets when the its land n not visited
                      visited[neighrow][neighcol] = 1;
                  }
              }
          }
      }
  }
    int countIslands(vector<vector<char>>& grid) {
        // through BFS
        int n = grid.size();
        int m = grid[0].size();
        
        int cnt = 0;
        vector<vector<int>> visited(n, vector<int> (m, 0));
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                //when the starting node is different
                if(!visited[i][j] && grid[i][j] == 'L'){
                    cnt++;
                    bfs(i, j, grid, visited);
                }
            }
        }
        return cnt;
    }
