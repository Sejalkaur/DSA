//Link: https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence
	int firstOcc(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;
    int first = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            first = mid;
            high = mid - 1;
        } else if(arr[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

int lastOcc(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;
    int last = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            last = mid;
            low = mid + 1;
        } else if(arr[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int count(int arr[], int n, int x) {
    int first = firstOcc(arr, n, x);
    if(first == -1) return 0;
    int last = lastOcc(arr, n, x);
    return last - first + 1;
}
