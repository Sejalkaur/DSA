//Link: https://www.geeksforgeeks.org/problems/postfix-to-infix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postfix-to-prefix-conversion
string postToInfix(string s) {
        // Write your code here
        int i = 0;
        stack<string> st;
        int n = s.length();
        
        while(i < n){
            
            //operand
            if((s[i] >= 'A' && s[i] <= 'Z')||
            (s[i] >= 'a' && s[i] <= 'z')||
            (s[i] >= '0' && s[i] <= '9')){
                st.push(string(1, s[i]));  // Convert char to string and push
            }
            
            //operator
            else{
                //first top elememt
                string t1 = st.top();
                st.pop();
                
                //second top element
                string t2 = st.top();
                st.pop();
                
                string s2 = '(' + t2 + s[i] + t1 + ')';
                st.push(s2);
            }
            
            i++;
            
        }
        return st.top();
}
