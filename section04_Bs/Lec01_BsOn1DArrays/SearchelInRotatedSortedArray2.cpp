//Link:https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/
class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int n=nums.size();
        int low = 0;
        int high = n - 1;

        while(low <= high){
            int mid = (low + high)/2;

            if(nums[mid] == k)return true;
//new code snippet
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;
        }

            //leftsorted
            if(nums[low] <= nums[mid]){
                //present in left side only 
                if(nums[low] <= k && k <= nums[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
            //right sorted(assumption all el will be in right side so first check here)
            else{
                //present in right side only
                if(nums[mid] <= k && k <= nums[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};
