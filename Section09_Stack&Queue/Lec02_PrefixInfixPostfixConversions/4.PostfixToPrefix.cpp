//Link: https://www.geeksforgeeks.org/problems/postfix-to-prefix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postfix-to-prefix-conversion
string postToPre(string s) {
        // Write your code here
        int n = s.length();
        int i = 0;
         stack<string> st;
         
         while(i < n){
             
            //operand simply push into the stack
            if((s[i] >= 'A' && s[i] <= 'Z')||
            (s[i] >= 'a' && s[i] <= 'z')||
            (s[i] >= '0' && s[i] <= '9')){
                st.push(string(1, s[i]));
            }
            
            //operator
            else{
                string top1 = st.top(); st.pop();
                string top2 = st.top(); st.pop();
                
                string s2 = s[i] + top2 + top1;
                st.push(s2);
            }
            i++;
         }
         return st.top();
    }
