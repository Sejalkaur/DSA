/*Link: https://leetcode.com/problems/powx-n/submissions/1363714435/
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25*/

class Solution {
public:
    double myPow(double x, int n) {
       double ans=1.0;
       long long nn=n;
       if(nn<0)nn=nn*(-1);
       while(nn){
        if(nn%2==0){
            x=x*x;
            nn=nn/2;
        }else{
            ans=ans*x;
            nn=nn-1;
        }
       }
       if(n<0)ans=double(1.0)/double(ans);
       return ans;
    }
};
