//Link:https://www.codingninjas.com/studio/problems/print-all-divisors-of-a-number_1164188?resumeRedirection=true&leftPanelTabValue=PROBLEM&customSource=studio_nav
//Print all the divisors
int* printDivisors(int n, int &size){
// Write your code here
for(int i=1;i<=n;i++){
    if(n%i==0){
        cout<<i<<" ";
    }
}
return 0;
}
