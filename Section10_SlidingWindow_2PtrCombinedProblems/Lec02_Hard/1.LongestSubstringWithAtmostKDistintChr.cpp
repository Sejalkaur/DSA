//Link: https://www.naukri.com/code360/problems/distinct-characters_2221410?leftPanelTabValue=SUBMISSION
#include<bits/stdc++.h>
int kDistinctChars(int k, string &str)
{
    // Write your code here
    int l = 0;
    int r = 0;
    int maxlen = 0;
    unordered_map<char, int> freq;
    int n = str.length();

    while(r < n){
        freq[str[r]]++;

        if(freq.size() > k){
            freq[str[l]]--;
            if(freq[str[l]] == 0)freq.erase(str[l]);
            l++;
        }
        maxlen = max(maxlen, r - l + 1);
        r++;
    }
    return maxlen;
}


