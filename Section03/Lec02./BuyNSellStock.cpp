//Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mini=nums[0];
        int profit=0;
        for(int i=1;i<nums.size();i++){
           int cost=nums[i]-mini;
            profit=max(profit, cost);
            mini=min(mini, nums[i]);
        }
        return profit;
    }
};
