//Link: https://leetcode.com/problems/find-a-peak-element-ii/description/
class Solution {
public:
    int findMaxEl(vector<vector<int>>& mat, int n, int m, int col){
        int maxi= INT_MIN;
        int index = -1;

        for(int row = 0; row < n; row++){
            if(mat[row][col] > maxi){
                maxi = mat[row][col];
                index = row;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = m - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            int row = findMaxEl(mat, n, m , mid);
            int left = mid - 1 >= 0 ? mat[row][mid - 1] : -1;
            int right = mid + 1 < m ? mat[row][mid + 1] : -1; 

            if(mat[row][mid] > left && mat[row][mid] > right){
                return {row, mid};
            }
            else if(mat[row][mid] < left)high = mid - 1;
            else low = mid + 1;


        }
        return {-1, -1};
    }
};
