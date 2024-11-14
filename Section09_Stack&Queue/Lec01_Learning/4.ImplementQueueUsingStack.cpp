//Link: https://leetcode.com/problems/implement-queue-using-stacks/description/
class MyQueue {
public:
//s1 is the main one
    stack<int> s1, s2;
    MyQueue() {
    }
    
    void push(int x) {

        //step 1
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }

        //step2
        s1.push(x); 

        //step 3
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int el = s1.top();
        s1.pop();
        return el;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
