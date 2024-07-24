//Link: https://leetcode.com/problems/clumsy-factorial/description/
// clumsy(10) = 10 * 9 / 8 + 7 - 6 * 5 / 4 + 3 - 2 * 1.

class Solution {
public:
    int clumsy(int n) {
       stack<int> s;
       s.push(n--);
       int idx=0;
       while(n>0){
        if(idx%4==0){
            s.top()*=n;
        }else if(idx%4==1){
            s.top()/=n;
        }else if(idx%4==2){
            s.push(n);
        }else{
            s.push(-n);
        }
        idx++;
        n--;
       }

        int res = 0;
        while (!s.empty()) {
            res += s.top();
            s.pop();
        }

        return res;
    }
};
