//Link: https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=median-in-a-row-wise-sorted-matrix
class Solution {
  public:
  int upperBound (vector<int> &arr, int x, int n){
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if(arr[mid] > x) {
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
    int lowest(vector<vector<int>> &mat){
        int mini = INT_MAX;
        for(int i = 0; i< mat.size();i++){
            if(mat[i][0]<mini){
                mini = mat[i][0];
            }
        }
        return mini;
    }
    
    int greatest(vector<vector<int>> &mat){
        int maxi = INT_MIN;
        int m = mat[0].size();
        for(int i = 0; i< mat.size();i++){
            if(mat[i][m-1]>maxi){
                maxi = mat[i][m-1];
            }
        }
        return maxi;
    }
    int blackBox(vector<vector<int>> &mat, int x){
        int cnt = 0;
        int m = mat[0].size();
        for(int i = 0;i < mat.size(); i++){
            cnt += upperBound(mat[i], x, m);
        }
        return cnt;
    }
    int median(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        int low = lowest(mat);
        int high = greatest(mat);
        int req = (n*m) / 2;
        while(low <= high){
            int mid = (low + high) / 2;
            int smallerEquals = blackBox(mat, mid);
            
            if(smallerEquals <= req){
                low = mid + 1;
            }else{
                high = mid - 1; 
            }
        }
        return low;
    }
