/*Link: https://www.codingninjas.com/studio/problems/alpha-ramp_6581888?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION
A
B B
C C C*/
void alphaRamp(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        char ch='A'+i;
          for (int j=0;j<=i;j++) {
            cout << ch << " ";
          }
          cout << endl;
        
    }
}
