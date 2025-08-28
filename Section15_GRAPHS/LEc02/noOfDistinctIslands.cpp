//Link: https://www.geeksforgeeks.org/problems/number-of-distinct-islands/1
void dfs(int row, int col, vector<vector<int>>& grid,
  vector<vector<int>> &vis,vector<pair<int, int>> &vec,int row0, int col0){
    vis[row][col] = 1;
    int n = grid.size();
    int m = grid[0].size();
    vec.push_back({row - row0, col - col0});
    
    int delrow[]= {-1, 0, 1, 0};
    int delcol[]= {0, 1, 0, -1};
    for(int i = 0; i < 4; i++){
        int nrow = delrow[i] + row;
        int ncol = delcol[i] + col;
        
        if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
        !vis[nrow][ncol] && grid[nrow][ncol] == 1){
            dfs(nrow, ncol, grid, vis, vec, row0, col0);
        }
    }
  }
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        set<vector<pair<int, int>>> st;
        for(int row = 0;row < n; row++){
            for(int col = 0; col < m; col++){
                if(grid[row][col] == 1 && !vis[row][col]){
                    
                    vector<pair<int, int>> vec;
                    //i and j are as row0 & col0
                    dfs(row, col, grid, vis, vec, row, col);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
