class Solution {
public:
//MORE OPTIMAL CODE THAN DFS
void bfs(queue<pair<int, int>> &q, vector<vector<char>>& board){
    int n = board.size();
    int m = board[0].size();

    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;

        board[row][col] = '#';
        q.pop();
        

        //for traversal vertical n horizontal
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        for(int i = 0;i < 4; i++){
            int nrow = delrow[i] + row;
            int ncol = delcol[i] + col;

            if(nrow >= 0 && nrow < n &&
            ncol >= 0 && ncol < m && 
            board[nrow][ncol] == 'O')q.push({nrow, ncol});
        }
    }
}
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        queue<pair<int, int>> q;
        //instead of vis matrix we marked the O tempora as '#' and we didnt go there 
         //first row n last(boundary wale)
        for(int j = 0; j < m; j++){
            if(board[0][j] == 'O')q.push({0, j});
            if(board[n-1][j] == 'O')q.push({n-1, j});
        }

        //first and last cols(boundary wale)
        for(int i = 0;i < n; i++){
            if(board[i][0] == 'O')q.push({i, 0});
            if(board[i][m-1] == 'O')q.push({i, m-1});
        }
       
        bfs(q, board);
        //change remaining O into x and # into O
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(board[row][col] == 'O' ){
                    board[row][col] = 'X';
                }

                else if(board[row][col] == '#'){
                    board[row][col] = 'O';
                }
            }
        }
    }
};
