//Link: https://leetcode.com/problems/zigzag-conversion/description/
class Solution {
public:
    string convert(string s, int numRows) {
        // Special case: no zigzag needed.
        if(numRows == 1 || numRows >= s.length())return s;

        vector<string> rows(min(numRows, int(s.length())));
        int currentRow = 0;
        bool goingDown = false;

        for(char c: s){
            rows[currentRow] += c;

            // Change direction at the top or bottom row

            if(currentRow == 0 || currentRow == numRows - 1){
                goingDown = !goingDown;
            }
            currentRow += goingDown ? 1 : -1;
        }

        // Combine all rows to form the final result

        string result;
        for(const string &row: rows){
            result += row;
        }
        return result;
    }
};
