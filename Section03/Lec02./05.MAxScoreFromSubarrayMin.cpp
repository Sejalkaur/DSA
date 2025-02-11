//link: https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-sum-in-sub-arrays
int pairWithMaxSum(vector<int> &nums) {
        // Your code goes here
        int maxi = INT_MIN;
        int n = nums.size();
  
        for(int i = 0; i< n - 1; i++){
           maxi = max(maxi, nums[i] + nums[i + 1]);
        }
  
        return maxi;
        
    }
