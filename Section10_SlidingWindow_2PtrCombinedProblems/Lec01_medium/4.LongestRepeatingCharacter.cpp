//Link: https://leetcode.com/problems/longest-repeating-character-replacement/
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int maxlen = 0;
        int maxf = 0;
        int hash[26] = {0};

        while(r < s.length()){
            hash[s[r] - 'A']++;
            maxf = max(maxf, hash[s[r] - 'A']);
            
            int len = r - l + 1;

            if( len - maxf > k){
                hash[s[l] - 'A']--;
                l++;
            }

            if(len - maxf <= k){
                maxlen = max(maxlen, len);
            }
            r++;
        }
        return maxlen;
    }
};
