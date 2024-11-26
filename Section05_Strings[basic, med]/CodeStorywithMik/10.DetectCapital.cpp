//Link: https://leetcode.com/problems/detect-capital/description/
class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalCount = 0 ;
        int n = word.length();

        for(char &ch: word){
            if(ch >= 'A' && ch <= 'Z')capitalCount++;
        }

        if(capitalCount == 0 || capitalCount == n)return true;
        if(capitalCount == 1 && (word[0] >= 'A' && word[0] <= 'Z'))return true;
        return false;
    }
};
