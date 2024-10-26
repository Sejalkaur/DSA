//Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
class Solution {
public:
    //to find the max element which will be low
    int maxEl(vector<int>& arr){
        int maxi = INT_MIN;
        for(int i = 0; i<arr.size(); i++){
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }

    //to find the sum of the wholw array elements to make high
    int summationOfArray(vector<int>& arr){
        int sum = 0;
        for(int i = 0;i < arr.size(); i++){
            sum += arr[i];
        }
        return sum;
    }

    //to find the no of days wrt to changing capacity
    int func(vector<int>& weights, int capacity){
        int day = 1;
        int load = 0;

        for(int i = 0; i < weights.size(); i++){
            if(load + weights[i] > capacity){
                day = day + 1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return day;
    }

    //main function
    int shipWithinDays(vector<int>& weights, int days) {
        int low = maxEl(weights);
        int high = summationOfArray(weights);
        int ans = 0;

        while(low <= high){
            int mid = (low + high)/2;
            int noOfDays = func(weights, mid);

            if(noOfDays <= days){
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
