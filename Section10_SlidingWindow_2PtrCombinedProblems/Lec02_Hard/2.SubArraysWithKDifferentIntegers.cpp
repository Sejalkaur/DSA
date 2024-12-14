//Link: https://leetcode.com/problems/subarrays-with-k-different-integers/
class Solution {
private:
    int atMostK(vector<int>& nums, int k) {
        if(k < 0)return 0;

        int l = 0;
        int r = 0;
        int cnt = 0;
        unordered_map<int, int> freq;

        while(r < nums.size()){
                freq[nums[r]]++;

          //shrink down as it is gretaer than k
            while(freq.size() > k){
                freq[nums[l]]--;
                if(freq[nums[l]] == 0)freq.erase(nums[l]);
                l++;
                
            }
          //if the size is <= k
            cnt += r - l + 1;
            r++;
        }
        return cnt;

    }
public: 
    int subarraysWithKDistinct(vector<int>& nums, int k){
        if(k < 0)return 0;
        return atMostK(nums, k) - (k > 0 ? atMostK(nums, k - 1) : 0);
    } 
};
