//Link: https://www.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort
void bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        for(int it = 1; it < n ;it++){
            bool swapped = false;
            for(int j = 0;j < n - it;j++){
                if(arr[j] > arr[j + 1]){
                    swap(arr[j], arr[j+1]);
                    swapped = true;
                }
            }
            if(swapped == false)break;
        }
        
    }
