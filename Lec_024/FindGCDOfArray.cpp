/*Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/
Example 2:

Input: nums = [7,5,6,8,3]
Output: 1
Explanation:
The smallest number in nums is 3.
The largest number in nums is 8.
The greatest common divisor of 3 and 8 is 1.*/
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int max=INT_MIN;
        sort(nums.begin(), nums.end());
       for(int i=1;i<=min(nums[0], nums[n-1]);i++){
        if(nums[0]%i==0 && nums[n-1]%i==0){
            if(i>max){
                max=i;
            }
        }
       }
       return max;
    }
};
