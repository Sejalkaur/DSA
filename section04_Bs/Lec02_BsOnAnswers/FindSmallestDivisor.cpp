//Link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
class Solution {
public:
//to find the maximum element in the array
    int maxi(vector<int> arr){
        int maximum = INT_MIN;
        for(int i = 0;i < arr.size() ;i++){
            maximum = max(maximum, arr[i]);
        }
        return maximum;
   }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = maxi(nums);
        int ans =0;

        while(low <= high){
            int mid = (low + high)/2;
            int sum = 0;
            
            //sum of all the elements divided by the divisors
            for(int i = 0; i<nums.size(); i++){
                sum += ceil((double)nums[i] / (double)mid);
            }

            if(sum <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
