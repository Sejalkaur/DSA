//Link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/
/*Example 1:

Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.*/


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        
        for(int i=0;i<n;i++){
            int m=grid[i].size();
            for(int j=0;j<m;j++){
                if(grid[i][j] <0){
                    count++;
                }
            }
        }
        return count;
    }
};
