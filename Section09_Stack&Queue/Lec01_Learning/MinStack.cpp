//Link: https://leetcode.com/problems/min-stack/
//optimised
class MinStack {
public:
    MinStack() {
        min = INT_MAX;
    }
    stack<long long> st;
    long long min;
    void push(int val2) {
        long long val = val2;
        if(st.empty()){
            min = val;
            st.push(val);
        }
        else{
            if(val >= min)st.push(val);
            else{
                st.push(2*val - min);
                min = val;
            }
        }
    }
    
    void pop() {
        if (st.empty()) return;
        long long n = st.top();
        st.pop();
        if(n < min)min = 2* min - n;
    }
    
    int top() {
        long long n = st.top();
        if(min <= n)return n;
        return min;
    }
    
    int getMin() {
        return min;
    }
};






//Brute
class MinStack {
public:
    MinStack() {
        
    }
    stack<pair<int, int>> st;
    void push(int val) {
        if(st.empty()){
            st.push({val, val});
        }
        else{
            st.push({val, min(val, st.top().second)});
        }
    }
    
    void pop() {
        if(!st.empty())st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
