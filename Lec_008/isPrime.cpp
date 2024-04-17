#include<iostream>
using namespace std;

//1-Prime no
//0-not a prime no

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }return 1;

}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"it is a prime no"<<endl;
    }else{
        cout<<"Its not a prime no"<<endl;
    }
    return 0;
}