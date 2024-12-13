//link: https://leetcode.com/problems/binary-subarrays-with-sum/description/
class Solution {
private:
    int atMost(vector<int>& nums, int goal) {
        if(goal < 0)return 0;
        int l = 0;
        int r = 0;
        int count = 0;
        int sum = 0;

        while(r < nums.size()){
            sum += nums[r];

          //shrinking window 
            while(sum > goal){
                sum -= nums[l];
                l++;
            }
            count+= (r - l + 1);
            r++;
        }
        return count;
             
        }
  
public: 
    int numSubarraysWithSum(vector<int>& nums, int goal){
        if(goal < 0)return 0;
        return atMost(nums, goal) - (goal > 0 ? atMost(nums, goal - 1) : 0);
    }
};
