/*Link: https://leetcode.com/problems/string-compression/description/
Example 1:

Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIdx=0;

        int n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            //u will come here wheneither vector is completed
            //or u got new /diff char
            //store old char
            chars[ansIdx++]=chars[i];
            int count=j-i;
            if(count>1){
                string cnt=to_string(count);
                for(char ch: cnt){
                    chars[ansIdx++]=ch;
                }
            }
            i=j;
        }
        return ansIdx;
    }
};
