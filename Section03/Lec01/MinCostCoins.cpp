//Link: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/submissions/1284878985/
class Solution {
public:
    int minCostToMoveChips(vector<int>& arr) {
        int n=arr.size();
        int x=0;
        int y=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                x++;
            }else{
                y++;
            }
        }
        return min(x, y);
    }
};
