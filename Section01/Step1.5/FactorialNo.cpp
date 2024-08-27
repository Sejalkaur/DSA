//Link: https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1
vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
         vector<long long> result;
        long long fact = 1;
        long long i = 1;

        while (fact <= n) {
            result.push_back(fact);
            i++;
            fact *= i;  // Calculate next factorial
        }

        return result;
