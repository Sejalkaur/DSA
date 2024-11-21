//Link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/
class Solution {
public:
    bool checkIfPangram(string sentence) {

        vector<int> arr(26, 0);
        int n = arr.size();
        for(char ch: sentence){
            int index = ch - 'a';
            arr[index]++;
        }
        for(int i =0;i<n;i++){
            if(arr[i]==0)return false;
        
        }
        return true;
    }
};
