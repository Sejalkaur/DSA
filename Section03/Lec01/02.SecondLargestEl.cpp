//Link: https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest
class Solution {
  public:
    // Function returns the second largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int maxi1 = arr[0];
        for(int i = 1; i<arr.size();i++){
            if(maxi1 <= arr[i])maxi1 = arr[i];
        }
        int ans = -1;
        for(int i = 0;i <arr.size(); i++){
            if(arr[i]<maxi1 && ans<= arr[i])ans =arr[i];
        }
        return ans;
    }
};



//optimised

class Solution {
  public:
    // Function returns the second largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        
        int n = arr.size();
       int largest = arr[0];
       int Slargest = -1;
       
       for(int i = 1; i < n; i++){
           if(arr[i] > largest ){
               Slargest = largest;
               largest = arr[i];
           }
           else if (arr[i] < largest && Slargest < arr[i]){
               Slargest = arr[i];
           }
       }
       return Slargest;
    }
};
