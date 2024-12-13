//Link: https://leetcode.com/problems/count-number-of-nice-subarrays/description/
//same as prev question
class Solution {
    private:
    int atMost(vector<int>& nums, int goal) {
        if(goal < 0 )return 0;
        int l = 0;
        int r = 0;
        int sum = 0;
        int count = 0;

        while(r < nums.size()){
            sum += (nums[r] % 2); //if odd then it will add 1 otherwise 0

            while(sum > goal){
                sum -= (nums[l] % 2);
                l++;
            }
            if(sum <= goal){
                count += r - l + 1;
            }
            r++;
        }
        return count;
             
        }

public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        if(k < 0)return 0;
        return atMost(nums, k) - (k > 0 ? atMost(nums, k - 1) : 0);
    }
};
