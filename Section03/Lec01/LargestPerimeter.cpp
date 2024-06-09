//Link: https://leetcode.com/problems/largest-perimeter-triangle/submissions/1283036056/
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=n-3;i>=0;i--){
            if((nums[i]+nums[i+1])>nums[i+2]){
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return 0;
    }
};
