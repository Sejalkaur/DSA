//Link to the third type of problem: https://leetcode.com/problems/pascals-triangle/description/

class Solution {
public:
  vector<int> generateRow(int row) {
        // code here
        vector<int> ansRow(row, 1);
        int ans= 1;
        
        for(int col = 1; col < row; col++){
            ans = ans * (row - col);
            ans= ans / col;
            ansRow[col] = ans;
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        for(int i = 1; i <= numRows; i++){
            res.push_back(generateRow(i));
        }

        return res;
    }
};


//Link to the 2nd type : https://www.geeksforgeeks.org/problems/pascal-triangle0652/1
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int> result(n, 1);
        int ans= 1;
        
        for(int i = 1; i < n; i++){
            ans = ans * (n - i);
            ans= ans / i;
            result[i] = ans;
        }
        return result;
    }
};
