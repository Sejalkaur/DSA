#include<iostream>
using namespace std;

bool IsEven(int a){
    //odd
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    cin>>num;
    if(IsEven(num)){
        cout<<"number is Even"<< endl;
    }else{
        cout<<"Number is Odd"<< endl;
    }
    return 0;
}
