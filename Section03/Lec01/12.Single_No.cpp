//Link: https://leetcode.com/problems/single-number/
//Better O(N), O(NLogN), O(N/2 + 1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> freq;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto it: freq){
            if(it.second == 1)return it.first;
        }
        return 0;
    }
};


//optimised O(N), O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0;
        for(int i = 0;i < nums.size(); i++){
            XOR = XOR ^ nums[i];
        }
        return XOR;
    }
};
