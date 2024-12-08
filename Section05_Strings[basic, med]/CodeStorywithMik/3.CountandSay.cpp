//Link:https://leetcode.com/problems/count-and-say/description/
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)return "1"; //base case

        string say = countAndSay(n - 1); //recursion
        //Processing

        string result = "";
        for(int i = 0; i< say.length(); i++){
            char ch = say[i];

            int count = 1;
            while( i< say.length() && say[i] == say[i+1]){
                count++;
                i++;
            }
            result += to_string(count) + string(1, ch); //"1" + "1"
        }return result;

    }
};
