//Link: https://leetcode.com/problems/valid-parentheses/?envType=problem-list-v2&envId=stack
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch: s){
            //if n only if opening bracket then push into the stack
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty())return false;
                char top = st.top();

                //if the oepning bracket matches the closing bracket then pop it
                if((ch == ')' && top == '(') || 
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty(); // if st is empty then return tru otherwise false
    }
};
