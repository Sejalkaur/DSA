//Link:https://www.codingninjas.com/studio/problems/star-diamond_6573686?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
void nStarDiamond(int n) {
    // Write your code here.
        for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout<<"*";
        }
        for (int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }
    

        cout<<endl;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }cout<<endl;
    }

}
