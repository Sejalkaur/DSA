//Link: https://www.naukri.com/code360/problems/bubble-sort_980524?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    
    if(n == 1)return;
    for(int i = 0;i <n-1; i++){
        if(arr[i] > arr[i+1])swap(arr[i], arr[i+1]);
    }
    bubbleSort(arr, n-1);
};


//optimides
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    if(n == 1)return;
    bool swapped = false;

    for(int i = 0;i <n-1; i++){
      if (arr[i] > arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
        swapped = true;
      }
    }
    if(swapped == false)return;
    bubbleSort(arr, n-1);
};
