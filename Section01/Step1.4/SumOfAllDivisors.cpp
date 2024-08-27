//Link: https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
 long long sumOfDivisors(int N)
    {
        // Write Your Code here
        // long long ans=0;
        // for(int i=1;i<=N;i++){
        //     for(int j=N;j>0;j--){
        //     if(j%i==0){
        //         ans+=i;
        //     }
        //     }
        // }
        // return ans;
        
            long long ans = 0;
    // i is the divisor
    for (int i = 1; i <= N; i++) {
        // Add i as a divisor for all its multiples
        ans += (N / i) * i;
    }
    return ans;

    }
