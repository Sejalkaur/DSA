#include<iostream>
using namespace std;

int main(){
    
    
    int num=10;
    int i;
    int total=1330;
    while(total!=0){
      switch(num){
        case 100: i=total/100;
                total=total-(i*100);
                cout<<i;
                break;
        case 50: i=total/50;
                 
                 total=total-(i*50);
                 cout<<i;
                break;
        case 20: i=total/20;
                total=total-(i*20);
                cout<<i;
                break;

        case 10: i=total/10;
                
                total=total-(i*10);
                cout<<i;
                
      }

    }

    return 0;
}