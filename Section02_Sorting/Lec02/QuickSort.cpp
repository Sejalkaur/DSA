//link: https:www.geeksforgeeks.org/problems/quick-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-sort
public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low < high){
            int pIndex = partition(arr, low, high);
            quickSort(arr, low, pIndex - 1 );
            quickSort(arr, pIndex+ 1, high);
        }
       
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        // code here
       int pivot = arr[low];
       int i = low;
       int j = high;
       
       while(i <= j){
           
           while(i <= high && arr[i] <= pivot){
               i++;
           }
           while(j >= low && arr[j] > pivot){
               j--;
           }
           if(i < j)swap(arr[i], arr[j]);
       }
       swap(arr[low], arr[j]);
       return j;
    }
