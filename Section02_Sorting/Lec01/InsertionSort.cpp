  //Link: https://www.geeksforgeeks.org/problems/insertion-sort/0?category%5B%5D=Algorithms&page=1&query=category%5B%5DAlgorithmspage1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insertion-sort
void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = 0; i< n;i++){
            int j = i;
            
            while(j > 0 && arr[j] < arr[j - 1]){
                swap(arr[j], arr[j - 1]);
                j--;
            }
        }
    }
