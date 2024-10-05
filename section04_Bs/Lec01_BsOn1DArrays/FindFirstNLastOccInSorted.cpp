//Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
class Solution {
public:
int firstOcc(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size() - 1;
    int first = -1;
    while(low<= high){
        int mid = (low + high)/2;
        if(nums[mid] == target){
            first = mid;
            high = mid - 1;
        }else if( nums[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return first;

}

int lastOcc(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size() - 1;
    int last = -1;
    while(low<= high){
        int mid = (low + high)/2;
        if(nums[mid] == target){
            last = mid;
            low = mid + 1;
        }else if( nums[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return last;

}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = firstOcc(nums, target);
        if(first == -1)nums.push_back(-1);
        int last = lastOcc(nums, target);
        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};
