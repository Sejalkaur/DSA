//Link: https://www.geeksforgeeks.org/problems/prefix-to-infix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prefix-to-infix-conversion
string preToInfix(string s) {
        // Write your code here
        int n = s.length();
        int i = n - 1;
        stack<string> st;
        
        while(i >= 0){
            
            //operand
            if((s[i] >= 'A' && s[i] <= 'Z')||
            (s[i] >= 'a' && s[i] <= 'z')||
            (s[i] >= '0' && s[i] <= '9')){
                st.push(string(1, s[i]));
            }
            
            //operator
            else{
                string top1 = st.top(); st.pop();
                string top2 = st.top(); st.pop();
                
                string s2 = '(' + top1 + s[i] + top2 + ')';
                st.push(s2);
            }
            i--;
        }
        return st.top();
    }
