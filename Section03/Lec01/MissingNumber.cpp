//Link: https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int sum = n*(n+1)/2;
        int s2 = 0;
        for(int i=0; i<n; i++){
            s2 += arr[i];
        }return sum - s2;
    }  
};
