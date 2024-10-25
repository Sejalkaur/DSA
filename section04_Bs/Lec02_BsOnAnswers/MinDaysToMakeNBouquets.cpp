//Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/
class Solution {
public:
//function find is it possible on a particular day
   bool possible(vector<int>& arr, int day, int m, int k){
        int cnt = 0;
        int noOfbouq = 0;

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] <= day){
                cnt++;
            }
            else{
                noOfbouq += cnt/k;
                cnt = 0;
            }
        }
        noOfbouq += cnt/k;
        return noOfbouq >= m; //it will return true or false
   }
   
   //to find maximum element for range
   int maxi(vector<int> arr){
    int maximum = INT_MIN;
    for(int i = 0;i < arr.size() ;i++){
        maximum = max(maximum, arr[i]);
    }
    return maximum;
   }

   //to find minimum element for range
   int mini(vector<int> arr){
    int minimum = INT_MAX;
    for(int i = 0;i < arr.size() ;i++){
        minimum = min(minimum, arr[i]);
    }
    return minimum;
   }

    //min function following the binary search
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low  = mini(bloomDay);
        int high  = maxi(bloomDay);
        int n = bloomDay.size();
        int ans = 0;

        long long requiredFlowers = (long long)m * k; 

        if (n < requiredFlowers) return -1;

        while(low <= high){
            int mid = (low + high)/2;

            if(possible(bloomDay, mid, m, k) == true){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
