//Link: https://leetcode.com/problems/palindrome-partitioning/description/
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        f(0, s, path, res);
        return res;
    }

    void f(int ind, string s, vector<string> &path, vector<vector<string>> &res){
        if(ind==s.size()){//base case
            res.push_back(path);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s, ind, i)){
                path.push_back(s.substr(ind, i-ind+1));
                f(i+1, s, path, res);
                path.pop_back();
            }
        }
    }
    bool isPalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
};
