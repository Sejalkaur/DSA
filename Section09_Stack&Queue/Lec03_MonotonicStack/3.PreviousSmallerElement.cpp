//Link: https://www.interviewbit.com/problems/nearest-smaller-element/
vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    vector<int> nse(n);
    stack<int> st;

    for(int i = 0 ;i < n;i++){
        while(!st.empty() && A[i] <= st.top()){
            st.pop();
        }
        if (st.empty()) {
            nse[i] = -1;
        } else {
            nse[i] = st.top();
        }
        st.push(A[i]);
    }
    return nse;
}
