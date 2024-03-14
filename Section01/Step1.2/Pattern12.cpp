//Link:https://www.codingninjas.com/studio/problems/number-crown_6581894?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION
void numberCrown(int n) {
    // Write your code here.
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        space-=2;
    }
    
}
