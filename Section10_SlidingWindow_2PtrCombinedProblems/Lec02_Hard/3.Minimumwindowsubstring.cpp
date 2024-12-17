//Link: https://leetcode.com/problems/minimum-window-substring/
class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0;
        int r = 0;
        int minlen = INT_MAX;
        int cnt = 0;
        int sIndex = -1;
        
        unordered_map<char, int> mpp;
        for(int i = 0;i < t.length(); i++){
            mpp[t[i]]++;
        }

        while(r < s.length()){
            //if the freq in map is positive 
            if(mpp[s[r]] > 0)cnt++;
            mpp[s[r]]--;
            
            while(cnt == t.length()){
                if(r - l + 1 < minlen){
                    minlen = r - l + 1;
                    sIndex = l;
                }
                //to shrink the window
                mpp[s[l]]++;
                if(mpp[s[l]] > 0)cnt--;
                l++;
            }
            r++;

        }
        return (sIndex == -1) ? "" : s.substr(sIndex, minlen);
    }
};
