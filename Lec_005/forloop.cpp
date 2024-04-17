/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
        

    }cout<<sum;
    Fibbonaci
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int next=a+b;

        
cout<<next<<" ";
a=b;
b=next;
        
    }
}*/
#include<iostream>
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