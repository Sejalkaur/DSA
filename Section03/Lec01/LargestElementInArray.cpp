//Link:https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int start=0;
    for(int i=0;i<n;i++){
        if(arr[start]<arr[i]){
            arr[start]=arr[i];
        }
    }return arr[start];
}
