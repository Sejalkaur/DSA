//Link: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/submissions/1322961838/
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.length();
        while(n!=0 && s.find(part)<n){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
