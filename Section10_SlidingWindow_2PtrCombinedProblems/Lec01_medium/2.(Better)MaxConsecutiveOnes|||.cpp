//Link: https://leetcode.com/problems/max-consecutive-ones-iii/
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlen = 0;
        int l = 0;
        int r = 0;
        int zeroes = 0;
      
        while(r < n){
            //check if it is a zero then increase zero
            if(nums[r] == 0)zeroes++;

            //check if zeroes exceeds the k
            while(zeroes > k){
                if(nums[l] == 0)zeroes--;
                l++;
            }

            //check if it is in the count no
            if(zeroes <= k){
                int len = r - l + 1;
                maxlen = max(maxlen, len);
            }
            //iterate 
            r++;
        }
        
        return maxlen;
    }
};
