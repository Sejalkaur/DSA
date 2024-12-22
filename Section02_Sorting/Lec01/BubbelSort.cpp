//Link: https://www.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort
oid bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        for(int iteration = 1; iteration < n ;iteration++){
          
            for(int j = 0;j < n - iteration;j++){
              
                if(arr[j] > arr[j + 1])swap(arr[j], arr[j+1]);
            }
        }
    }
