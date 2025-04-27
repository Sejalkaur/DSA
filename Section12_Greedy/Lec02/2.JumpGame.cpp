//Link: https://leetcode.com/problems/jump-game/submissions/1619227182/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_index = 0;

        for(int i = 0; i < nums.size(); i++){
            if(i > max_index)return false;
            max_index = max(max_index, nums[i] + i);
        }
        return true;
    }
};
