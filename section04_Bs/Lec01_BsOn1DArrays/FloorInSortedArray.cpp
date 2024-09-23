//Link: https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%253BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array
   int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(x >= v[mid]){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
                
            }
        }
        return ans;
    }
