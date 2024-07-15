/*Link: https://leetcode.com/problems/valid-palindrome/submissions/1321832774/
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.*/

class Solution {
public:
char toLowercase(char ch){
   if(ch>='a' && ch<='z'){
    return ch;
   } else{
    char temp=ch - 'A' + 'a';
    return temp;
   }
}
    bool isPalindrome(string str) {
        int s=0;
        int e=str.length();
        while(s<=e){
            if(!isalnum(str[s])){
                s++;
                continue;
            }
            if(!isalnum(str[e])){
                e--;
                continue;
            }
            if(toLowercase(str[s])!=toLowercase(str[e])){
                return 0;
            }else{
                s++;
                e--;
            }
            
        }
        return 1;
    }
};
