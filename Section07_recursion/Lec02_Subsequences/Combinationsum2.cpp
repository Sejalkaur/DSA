//Link: https://leetcode.com/problems/combination-sum-ii/
class Solution {
    public:
    void f(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
        if(target==0){//base case
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(arr[i]>target)break;
            if(i>ind && arr[i]==arr[i-1])continue;
            ds.push_back(arr[i]);
            f(i+1, target-arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        f(0, target, candidates, ans, ds);
        return ans;
    }
};
