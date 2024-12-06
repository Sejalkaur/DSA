//link: https://leetcode.com/problems/trapping-rain-water/
class Solution {
public:
    vector<int> leftMax(vector<int>& arr){
        int n = arr.size();
        vector<int> prefixSum(n);
        prefixSum[0] = arr[0];

        for(int i = 1; i< arr.size(); i++){
            prefixSum[i] = max(prefixSum[i-1], arr[i]);
        }
        return prefixSum;
    }
    vector<int> rightMax(vector<int>& arr){
        int n = arr.size();
        vector<int> suffixSum(n);
        suffixSum[n-1] = arr[n-1];
        
        for(int i = n-2; i>=0; i--){
            suffixSum[i] = max(suffixSum[i+1], arr[i]);
        }
        return suffixSum;
    }
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0; // Edge case: no bars, no trapped water

        int total = 0;
        vector<int> left = leftMax(height);
        vector<int> right = rightMax(height);

        for(int i = 0; i < n; i++){
            total += min(left[i], right[i]) - height[i];
        }
        return total;
    }
};
