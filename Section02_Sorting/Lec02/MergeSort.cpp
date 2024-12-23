//link: https://www.geeksforgeeks.org/problems/merge-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-sort
void merge(vector<int>& arr, int l, int mid, int h){
      vector<int> temp;
      int left = l;
      int right = mid + 1;
      
      //checking n then puting the chote wala el in the arr
      while(left<= mid && right <= h){
          if(arr[left] <= arr[right]){
              temp.push_back(arr[left]);
              left++;
          }else{
              temp.push_back(arr[right]);
              right++;
          }
      }
      //if the right one is exhausted
      while(left <= mid){
          temp.push_back(arr[left]);
          left++;
      }
    //if the left one is exhausted
      while(right <= h){
          temp.push_back(arr[right]);
          right++;
      }
      //replace the elements of original arr by temp elements
      for(int i = l; i <= h;i++){
          arr[i] = temp[i - l];
      }
  }
    void mergeSort(vector<int>& arr, int l, int h) {
        // code here
        //base case
        if(l == h)return;
        
        int mid = (l + h) / 2;
        mergeSort(arr, l, mid);//to sort the starting half
        mergeSort(arr, mid + 1, h);//to sort the other half
        merge(arr, l, mid, h); //merge both while returning
    }
