//Link: https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s
class Solution {
  public:
  int lowerBound (vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if(arr [mid] >= x) {
            ans = mid;
        // look for more small index on left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look for right
        }
    }
    return ans;
}
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();       // Number of rows
        int m = arr[0].size();    // Number of columns
        
        int cnt_max = 0;
        int index = -1;
        for(int i = 0; i < n; i++){
            int cnt_ones = m-lowerBound(arr[i], m, 1);
            if(cnt_ones > cnt_max){
                cnt_max = cnt_ones;
                index = i;
            }
        }
        return index;
    }
};
