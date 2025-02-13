//Link: https://leetcode.com/problems/subarray-sum-equals-k/
//brute
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum += nums[j];
                if(sum == k)cnt++;
            }
        }
        return cnt;
    }
};

//optimal
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumFreq;
        prefixSumFreq[0] = 1;  // Base case: Sum 0 exists once (empty prefix)

        int count = 0, prefixSum = 0;
        for(int num : nums) {
            prefixSum += num;  // Update the prefix sum

            // Check if (prefixSum - k) exists in map
            if(prefixSumFreq.find(prefixSum - k) != prefixSumFreq.end()) {
                count += prefixSumFreq[prefixSum - k];  // Add the number of times it appeared
            }

            // Store the prefix sum in the map
            prefixSumFreq[prefixSum]++;
        }

        return count;
    }
};
