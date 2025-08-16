//Link: https://leetcode.com/problems/flood-fill/submissions/1737559922/
class Solution {
public:
void bfs(int sr, int sc, int color,vector<vector<int>>& image, vector<vector<int>> &vis){
    int n = image.size();
    int m = image[0].size();

    vis[sr][sc] = 1;
    int initialColor = image[sr][sc];
    
    queue<pair<int, int>> q;
    q.push({sr, sc});

    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;

        image[row][col] = color;//changing color
        q.pop();//pop n start to push the connected components

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        
        //traverse in 4 directions
        for(int i = 0; i < 4; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            //if initialColor is same and not visited then only push in queue
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol< m && !vis[nrow][ncol] && image[nrow][ncol] == initialColor){
                q.push({nrow, ncol});
                vis[nrow][ncol] = 1;
            }
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();

        vector<vector<int>> vis(n, vector<int> (m, 0));

        if(!vis[sr][sc]){
            bfs(sr, sc, color, image, vis);
        }
        return image;
    }
};
