//Link: https://www.naukri.com/code360/problems/bubble-sort_980524?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    bool swapped=false;
    for(int i=1;i<n;i++){//no of rounds
        for(int j=0;j<n-i;j++){
          //process elements
          if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            swapped=true;
          }
        }
        if(swapped==false){
          //already sorted
          break;
        }
    }
}

