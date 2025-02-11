//Link: https://leetcode.com/problems/next-permutation/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //step 1 find the breakpoint
        int n = nums.size();
        int idx = -1;

        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                idx = i;
                break;
            }
        }   
      //if it is [54321] its the last for that i have to return [12345]
        if(idx == -1){
            reverse(nums.begin(), nums.end());
            return;
        }


        //step2 find someone greater than nums[idx] but smallest among them and swap
        for(int i = n - 1; i > idx; i--){
            if(nums[idx] < nums[i]){
                swap(nums[idx], nums[i]);
                break;
            }
        }
        

        //step 3 sort the remaining elements
        reverse(nums.begin() + idx + 1, nums.end());
    }
};
