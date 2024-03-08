//Link:https://www.codingninjas.com/studio/problems/rotated-triangle_6573688?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION
void nStarTriangle(int n) {
    
    // Write your code here.
        for(int i=1;i<=2*n-1;i++){//till 9 we have to recurse it if ex=5
            int stars =i;
            if(i>n)
            stars=2*n-i;
        for (int j = 1; j <=stars ; j++) {
            cout<<"*";
        }
        
    

        cout<<endl;
    }
     


}
