//link: https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
// Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
       
        vector<int> vec(n, 0);//initials ethe array with n zeroes
      //iterate through array and increse the vec by one of that number
        for(int i = 0;i <n;i++){
            vec[arr[i] - 1]++; //one based index
        }
       
        return vec;
    }
