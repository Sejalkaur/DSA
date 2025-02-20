//link: https://leetcode.com/problems/climbing-stairs/submissions/1549724431/
//almost same as fibbonacci series
class Solution {
public:
    int climbStairs(int n) {
        vector<int> arr(n + 1);
        arr[0] = 1;
        arr[1] = 1;
        
        for(int i = 2; i < n + 1; i++){
            int prev1 = arr[i - 1];
            int prev2 = arr[i - 2];

            //sum of prev pointers 
            arr[i] = prev1 + prev2;   

            //increment the prev pointers
            prev1++;
            prev2++;

        }    

        return arr[n]; //return the last element
    }
};
