//Link: https://www.naukri.com/code360/problems/reverse-the-array_1262298
void reverseArray(vector<int> &arr , int m) {
    // Write your code here 
    int n=arr.size();
    int s=m+1;
    int e=n-1; 
    
     while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    	
}
