//Link: https://www.geeksforgeeks.org/problems/aggressive-cows/0
 public:
  //to find the max element
  int maxEl(vector<int> &arr){
      int maxi = INT_MIN;
      for(int i = 0;i < arr.size(); i++){
          maxi = max(maxi, arr[i]);
      }
      return maxi;
  }
  
  //to find can we place all the cows in that particular distance
    bool canwePlace(vector<int> &arr, int dist, int cows){
        int cntCows = 1;
        int lastCoord = arr[0];
        
        for(int i = 1;i < arr.size(); i++){
            
            if(arr[i] - lastCoord >= dist){
                cntCows++;
                lastCoord = arr[i];
            }
        }
        return cntCows >= cows;
    }
    
    //to find the max(min) distance between any 2 cows(consecutive)
    int assignCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin(), stalls.end());
        
        int low = 1;
        int high = maxEl(stalls);
        int ans = 0;
        
        while(low <= high){
            int mid = (low + high) / 2;
            
            if(canwePlace(stalls, mid, k) == true){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
