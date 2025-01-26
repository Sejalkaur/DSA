//Link: https://leetcode.com/problems/move-zeroes/submissions/1521110000/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = 0;

        //swap elements when l has zero element and r is non zero
        //move r untill its non zero and move l
        while(r < n){
            if(nums[r] != 0){
                swap(nums[l], nums[r]);
                l++;
            }
            r++;
        }
    }
};
