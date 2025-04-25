//Link: https://leetcode.com/problems/lemonade-change/description/
class Solution {
public:
    bool lemonadeChange(vector<int>& arr) {
        int n = arr.size();
        int cnt5 = 0, cnt10 = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] == 5)cnt5++;

            else if (arr[i] == 10){
                if(cnt5 > 0){
                    cnt5--;
                    cnt10++;
                }
                else return false;
            }
            else{
                if(cnt10 > 0 && cnt5 > 0){
                    cnt10--;
                    cnt5--;
                }
                else if(cnt5 >= 3)cnt5 = cnt5- 3;
                else return false;
            }
        }
        return true;
    }
};
