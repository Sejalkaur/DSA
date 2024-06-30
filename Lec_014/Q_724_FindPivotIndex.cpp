/*Link: https://leetcode.com/problems/find-pivot-index/description/
Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int total=accumulate(nums.begin(), nums.end(), 0);
       int n=nums.size();
       int l_total=0;
       for(int i=0;i<n;i++){
        int r_total=total-(l_total+nums[i]);
        if(l_total==r_total){
            return i;
        }
        l_total+=nums[i];
       }
       return -1;
     
    }
};
