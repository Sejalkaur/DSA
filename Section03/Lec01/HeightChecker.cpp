/*Link: https://leetcode.com/problems/height-checker/submissions/1283482161/
Input: heights = [1,1,4,2,1,3]
Output: 3
Explanation: 
heights:  [1,1,4,2,1,3]
expected: [1,1,1,2,3,4]
Indices 2, 4, and 5 do not match.
*/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp;
        int count=0;
        int n=heights.size();
        for(int i=0;i<n;i++){
            temp.push_back(heights[i]);
        }
        sort(heights.begin(), heights.end());
        for(int i=0;i<n;i++){
            if(heights[i]!=temp[i]){
                count++;
            }
        }
        return count;
    }
};
