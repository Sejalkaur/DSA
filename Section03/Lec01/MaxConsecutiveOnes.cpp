//Link: https://leetcode.com/problems/max-consecutive-ones/submissions/1256815850/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int cnt=0;
        int maxi=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                cnt++;
                maxi=max(maxi, cnt);
            }else{
                cnt=0;
            }
        }
        return maxi;
    }
};
