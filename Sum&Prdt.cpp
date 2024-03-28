/*Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/1216356260/
Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15  */
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        while(n!=0){
            int a=n%10;
            product*=a;
            sum+=a;
            n=n/10;
        }
        int result=product-sum;
        return result;
    }
};
