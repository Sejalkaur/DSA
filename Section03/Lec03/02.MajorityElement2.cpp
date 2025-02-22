//Link:https://leetcode.com/problems/majority-element-ii/
//better
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> freq;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }
        
        for(auto it: freq){
            if(it.second > n/3)res.push_back(it.first);
        }
        return res;
    }
};

//optimal
class Solution {
public:
//boyer moore voting algo
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();

        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;
        
        //finding two potential candidates
        for(int i = 0; i < n; i++){
            if(cnt1 == 0 && nums[i] != el2){
                cnt1 = 1;
                el1 = nums[i];
            }
            else if(cnt2 == 0 && nums[i] != el1){
                cnt2 = 1;
                el2 = nums[i];
            }
            else if(el1 == nums[i])cnt1++;
               
            else if(el2 == nums[i])cnt2++;

            else{
                cnt1--;
                cnt2--;
            }
        }

        //second check
        cnt1 = 0, cnt2 = 0;
        for(int i = 0 ;i < n; i++){
            if(nums[i] == el1)cnt1++;
            if(nums[i] == el2)cnt2++;
        }

        if(cnt1 > n/3)res.push_back(el1);
        if(cnt2 > n/3)res.push_back(el2);

        return res;
    }
};
