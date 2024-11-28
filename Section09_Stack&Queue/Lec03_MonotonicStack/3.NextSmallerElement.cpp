//Link: https://www.naukri.com/code360/problems/next-smaller-element_1112581?leftPanelTabValue=PROBLEM
#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> nse(n);
    stack<int> st;

    for(int i = n - 1 ;i >= 0;i--){
        while(!st.empty() && arr[i] <= st.top()){
            st.pop();
        }
        if (st.empty()) {
            nse[i] = -1;
        } else {
            nse[i] = st.top();
        }
        st.push(arr[i]);
    }
    return nse;
}
