//link: https://leetcode.com/problems/palindrome-number/submissions/1269397851/
class Solution {
public:
    bool isPalindrome(int x) {
        int dup=x;
       long long revNo=0;
       while(x>0){
        int lastDigit=x%10;
        revNo=revNo*10 + lastDigit;
        x=x/10;
       }
       if(revNo==dup){
        return "True";
       }
       return false;
    }
};
