//Link: https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& nums) {
        // Code here
        vector<int> ans;
        int n = nums.size();
        int maxi = INT_MIN;
        
        for(int i = n - 1; i>= 0; i--){
            if(nums[i] >= maxi){
                maxi = nums[i];
               ans.insert(ans.begin(), maxi); // Insert at the beginning
            }
        }
       
        return ans;
    }
};
