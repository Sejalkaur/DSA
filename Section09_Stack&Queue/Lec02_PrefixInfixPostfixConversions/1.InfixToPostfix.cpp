//Link: https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=infix-to-postfix
int priority(char x){
        if(x == '^')return 3;
        if(x == '*' || x == '/')return 2;
        if(x == '+' || x == '-')return 1;
        return 0;
    }
    
    string infixToPostfix(string s) {
        // Your code here
        
        stack<char> st;
        string ans = "";
        
        for(int i = 0; i < s.length();i++){
            char ch = s[i];
          
            //operand
            if((ch >= 'A' && ch <= 'Z') ||
               (ch >= 'a' && ch <= 'z') || 
               (ch >= '0' && ch <= '9')){
                   ans += ch;
            }
              
            //Opening bracket
            else if(ch == '(')st.push(ch);
              
            //closing bracket
            else if(ch == ')'){
                while(!st.empty() && st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
              
                //opening bracket left in stack
                st.pop();
            }
              
            //Operator
            else{
              
                //check priority
                while(!st.empty() && priority(ch) <= priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
              
                //after checkng all the st elemenst is its priority i snow greater thna push it in th stack
                st.push(ch);
            }
        }
      
        //for the elememts remaining in stack push it in ans
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
      
        return ans;
    }
