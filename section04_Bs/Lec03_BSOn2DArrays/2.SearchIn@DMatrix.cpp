//Link: https://leetcode.com/problems/search-a-2d-matrix/description/
//brute O(n)+O(logm)
class Solution {
public:

    bool bs(vector<int>& arr, int k){
        int low = 0;
        int high = arr.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] == k)return true;
            if(arr[mid] < k)low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n; i++){
            if(matrix[i][0] <= target && target <= matrix[i][m - 1]){
                return bs(matrix[i], target);
            }
        }
        return false;
    }
};


//optmised O(log(n*m))
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0;
        int high = n * m - 1;
      //we tried flattening in our thought

        while(low <= high){
            int mid = (low + high) / 2;
            int row = mid / m;
            int col = mid % m;

            if(matrix[row][col] == target)return true;
            if(matrix[row][col] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};
