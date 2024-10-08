/*Link: https://leetcode.com/problems/permutations/description/
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]
Approach1*/

class Solution {
    public:
    void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[]){
        if(ds.size()==nums.size()){//base case
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){//not marked yet
                ds.push_back(nums[i]);
                freq[i]=1;//marked as taken
                recurPermute(ds, nums, ans, freq);
                freq[i]=0;
                ds.pop_back();
            }
        }    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)freq[i]=0;
        recurPermute(ds, nums, ans, freq);
        return ans;
    }
};
