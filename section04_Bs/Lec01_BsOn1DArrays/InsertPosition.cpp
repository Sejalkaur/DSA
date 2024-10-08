//Link: https://leetcode.com/problems/search-insert-position/submissions/1400289068/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int low = 0;
        int high = nums.size()-1;
        int ans = nums.size();
        while(low <= high){
            int mid = (low + high) / 2;
            if(target <= nums[mid]){
                ans = mid;
                high = mid - 1;

            }else{
                low = mid + 1;
                
            }
        }
        return ans;
    }
};
