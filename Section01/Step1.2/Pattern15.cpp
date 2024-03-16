/*Link:https://www.codingninjas.com/studio/problems/reverse-letter-triangle_6581906?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION
A B C
A B
A*/
void nLetterTriangle(int n) {
    // Write your code here.
     for(int i=0;i<=n;i++){
        for(char ch='A';ch<='A' +(n-i-1);ch++){
            cout<< ch<<" ";
            
        }
       cout<<endl; 
        
    }
}
