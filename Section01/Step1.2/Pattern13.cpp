//Link:https://www.codingninjas.com/studio/problems/increasing-number-triangle_6581893?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION
void nNumberTriangle(int n) {
    // Write your code here.
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=1;
        }cout<<endl;
    }
}
