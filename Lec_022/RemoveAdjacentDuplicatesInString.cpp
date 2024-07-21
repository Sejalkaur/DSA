//Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/1328672076/
class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        int i=0;
        while(i<n){
            if( s[i]==s[i+1]){
                s.erase(i, 2);
                n=n-2;
                i=max(0, i-1);
            }else{
                i++;
            }
            
        }
        return s;
    }
};
