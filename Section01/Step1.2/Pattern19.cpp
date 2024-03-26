/*Link: https://www.codingninjas.com/studio/problems/symmetric-void_6581919?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * *   */
void symmetry(int N) {
    // Write your code here.
  
    for (int i = N; i >= 1; --i) {
        // Print stars
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (N - i); ++j) {
            cout << "  ";
        }
        // Print stars
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
}
for (int i = 1; i <= N; ++i) {
        // Print stars
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (N - i); ++j) {
            cout << "  ";
        }
        // Print stars
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
}
}
