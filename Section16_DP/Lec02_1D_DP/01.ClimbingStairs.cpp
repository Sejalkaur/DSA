//link: https://leetcode.com/problems/climbing-stairs/submissions/1549724431/
//optimised
class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 || n == 1)return 1;

        int prev2 = 1, prev1 = 1;

        for(int i = 2; i < n + 1; i++){
            int curr = prev2 + prev1;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};

//better solution
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
