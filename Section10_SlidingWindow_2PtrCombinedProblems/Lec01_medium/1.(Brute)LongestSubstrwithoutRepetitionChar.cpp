//Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        unordered_set<char> st;
        for(int i = 0; i < s.length(); i++){
            for(int j = i ; j < s.length(); j++){
                if(st.empty() || st.find(s[j]) == st.end()){
                    st.insert(s[j]);
                    len = max(len, static_cast<int>(st.size())); // Update max length
                }
                else {
                    break;
                }                
            }
            st.clear();

        }
        return len;
    }
};
