//Link: https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/
class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt = 0;
        int n = s.length();
        vector<int> lastSeen(3, -1);

        for(int i = 0; i< n ;i++){
            lastSeen[s[i] - 'a'] = i; // Update the last seen index of the current character

            // Check if all characters ('a', 'b', 'c') have been seen
            if(lastSeen[0] != -1 &&lastSeen[1] != -1 &&lastSeen[2] != -1){
                cnt = cnt+ (1 + min({lastSeen[0], lastSeen[1], lastSeen[2]}));
                // Add the count of valid substrings ending at the current position
            }
        }
        return cnt;
    }
};
