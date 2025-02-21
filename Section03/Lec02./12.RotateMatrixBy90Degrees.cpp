//Link: https://leetcode.com/problems/rotate-image/submissions/1550655393/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        //step 1 find the transpose of teh matrix and diagonal els would be same so swap the els opposite to the diagonal

        for(int i = 0; i <= n - 2; i++){
            for(int j = i + 1; j <= n - 1; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //step 2 reverse all the rows
        for(int i = 0; i <= n - 1; i++){
            reverse(matrix[i].begin(), matrix[i].end());
            
        }
    }
};
