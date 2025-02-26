//Link: https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        //keeping i fixed
        for(int i = 0; i < n; i++){

            if(i > 0 && nums[i] == nums[i - 1])continue;

            int j = i + 1;
            int k = n - 1;

            while(j < k){
                
                int sum = nums[i] + nums[j] + nums[k];

                if(sum < 0)j++;
                
                else if(sum > 0)k--;
                
                //triplet found
                else{
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;

                    //so that they are not equal
                    while(j < k && nums[j] == nums[j - 1])j++;
                    while(j < k && nums[k] == nums[k + 1])k--;

                }
            }
        }
        return ans;
    }
};
