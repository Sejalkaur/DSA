//Link: https://leetcode.com/problems/delete-columns-to-make-sorted/description/
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        int k = strs[0].length();

        //for the letter
        for(int i =0;i<k;i++){
            for(int j = 1;j<strs.size();j++){
                if(strs[j][i] < strs[j-1][i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
