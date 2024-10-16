//Link: https://leetcode.com/problems/single-element-in-a-sorted-array/description/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        //only one el
        if(n==1)return nums[0];
        //1st is the unique el
        if(nums[0] != nums[1]) return nums[0];
        //if last one is the unique one
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        int low = 1;
        int high = n-2;
        while(low <= high){
            int mid = (low + high)/2;
            //if mid is the unique
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1])return nums[mid];
            //left half
            if((mid % 2 ==1 && nums[mid] == nums[mid-1]) || (mid %2 == 0 && nums[mid+1] == nums[mid])){
                low = mid+1;
            }
            //right half
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};
