//link: https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
void solve(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, string move, vector<vector<int>> &vis){
      if(i==n-1 && j==n-1){
          ans.push_back(move);
          return;
      }
      vis[i][j]=1;
      //downward
      if(i+1<n && !vis[i+1][j] && a[i+1][j]==1){
          
          solve(i+1, j, a, n, ans, move+'D', vis);
          
      }
      
      //left
      if(j-1>=0 && !vis[i][j-1] && a[i][j-1]==1){
          
          solve(i, j-1, a, n, ans, move+'L', vis);
         
      }
      
      //right
      if(j+1<n && !vis[i][j+1] && a[i][j+1]==1){
         
          solve(i, j+1, a, n, ans, move+'R', vis);
          
      }
      
      //upwards
      if(i-1>=0 && !vis[i-1][j] && a[i-1][j]==1){
           
          solve(i-1, j, a, n, ans, move+'U', vis);
          
      }
      vis[i][j]=0;
  }
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        int n = mat.size();
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int> (n,0));
        if(mat[0][0]==1) solve(0, 0, mat, n, ans, "", vis);
        return ans;
    }
