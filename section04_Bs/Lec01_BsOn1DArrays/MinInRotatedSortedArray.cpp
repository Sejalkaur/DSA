//Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/1422160932/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high)/2;

            //if the whole array is sorted
            if(nums[low]<= nums[high]){
                ans = min(ans, nums[low]);
                break;
            }
            //left sorted
            if(nums[low] <= nums[mid] && nums[mid] >= nums[high]){
                ans = min(ans, nums[low]);
                
                low = mid+1;
            }else{
                ans =min(ans, nums[mid]);
                
                high = mid-1;
            }
        }
        return ans;
    }
};
