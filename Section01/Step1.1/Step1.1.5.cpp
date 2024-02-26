//Link: https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
//Fibonacci Series
#include<bits/stdc++.h>
using namespace std;

int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
} 
  
int main() 
{ 
    int n;
    cin>>n; 
    cout << fib(n); 
    
    return 0; 
}
