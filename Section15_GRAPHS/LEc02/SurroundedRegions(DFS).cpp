//Link: https://leetcode.com/problems/surrounded-regions/description/
class Solution {
public:
void dfs(int row, int col, vector<vector<char>>& board){
    int n = board.size();
    int m = board[0].size();

    board[row][col] = '#';

    //for traversal vertical n horizontal
    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};

    for(int i = 0;i < 4; i++){
        int nrow = delrow[i] + row;
        int ncol = delcol[i] + col;

        if(nrow >= 0 && nrow < n &&
        ncol >= 0 && ncol < m && 
        board[nrow][ncol] == 'O')dfs(nrow, ncol, board);
    }
}
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        //instead of vis matrix we marked the O tempora as '#' and we didnt go there 
         //first row n last(boundary wale)
        for(int j = 0; j < m; j++){
            if(board[0][j] == 'O')dfs(0, j, board);
            if(board[n-1][j] == 'O')dfs(n-1, j, board);
        }

        //first and last cols(boundary wale)
        for(int i = 0;i < n; i++){
            if(board[i][0] == 'O')dfs(i, 0, board);
            if(board[i][m-1] == 'O')dfs(i, m-1, board);
        }
       

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
