//link: https://leetcode.com/problems/determine-if-string-halves-are-alike/
class Solution {
public:

    bool isVowel(char x){
        // vector<char> arr{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        // for(int i = 0;i < arr.size(); i++){
        //     if(x - arr[i] == 0)return true;
            
        // }
        // return false;
        return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
    }

    bool halvesAreAlike(string s) {
        int n = s.length();
        int i =0;
        int j = n/2;

        int countLeft = 0;
        int countRight = 0;


        while(i<n/2 && j<n){
            if(isVowel(s[i]) == true)countLeft++;
            if(isVowel(s[j]) == true)countRight++;
            i++;
            j++;
        }
        if(countLeft == countRight)return true;
        return false;
    }
};
