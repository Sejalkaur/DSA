//Link: https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root
long long int floorSqrt(long long int n) {
        // Your code goes here
        if(n == 1)return 1;
  
        long long int ans = 0;
        int low = 1;
        int high = n;
  
        while(low <= high){
            long long int mid = (low+high)/2;
          
          //maybe my answer thts why max
            if(mid*mid <= n){
                ans = max(ans, mid);
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
