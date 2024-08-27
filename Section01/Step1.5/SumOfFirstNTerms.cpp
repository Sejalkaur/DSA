//Link:https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
 long long sumOfSeries(int n) {
        // code here
         if(n==1)return 1;
         return (long long)n*n*n + sumOfSeries(n-1);
    }
