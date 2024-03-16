//Link:https://www.codingninjas.com/studio/problems/increasing-letter-triangle_6581897?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION
void nLetterTriangle(int n) {
    // Write your code here.
    
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+ i;ch++){
            cout<< ch<<" ";
            
        }
       cout<<endl; 
        
    }
}
