//Link: https://leetcode.com/problems/remove-element/submissions/1276571281/
class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int newptr=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(val!=arr[i]){
                arr[newptr]=arr[i];
                newptr++;
            }
        }
        return newptr;

    }
};
