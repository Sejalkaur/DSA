//Link: https://leetcode.com/problems/number-of-enclaves/description/
class Solution {
public:
void bfs(queue<pair<int, int>> &q, vector<vector<int>>& board){
    int n = board.size();
    int m = board[0].size();

    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;

        q.pop();

        //traverse vertical and horizonatlly
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        for(int i = 0;i < 4; i++){
            int nrow = delrow[i] + row;
            int ncol = delcol[i] + col;

            if(nrow >= 0 && nrow < n &&
            ncol >= 0 && ncol < m &&
            board[nrow][ncol] == 1){
                q.push({nrow, ncol});//connected 1 
                board[nrow][ncol] = 0;//make it visited
            }
        }

    }
}
    int numEnclaves(vector<vector<int>>& board) {
        //check boundaries see their connections and make them 0
        //and count the rest ones
        int n = board.size();
        int m = board[0].size();

        queue<pair<int, int>> q;
        //instead of vis matrix we marked the 1 tempora as 0 and we didnt go there 
         //first row,col n last row,col(boundary wale)
        for(int row = 0; row < n; row++){
            for(int col =0;col < m; col++){
                if((row == 0 || row == n - 1 || col == 0 || col == m - 1) 
                && board[row][col] == 1){
                    q.push({row, col});
                    board[row][col] = 0;
                }
            }
        }

       

        bfs(q, board);//for graph and copnnections realted to boundaries

        int ans = 0;
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(board[row][col] == 1)ans++;
            }
        }
        return ans;
    }
};
