#include<iostream>
using namespace std;

int main(){
    cout<<(17>>1)<<endl;
    /*17/2=8*/
    cout<<(17>>2)<<endl;
    //17 divide by 2=8 then again =4//
    cout<<(19<<1)<<endl;
    //19*2=38//
    cout<<(21<<2)<<endl;
    //21*4=84//

    int i=7;
    cout<<(++i);
    //8 8
    cout<<(i++);
    //8, 9
    cout<<(i--);
    //9,8
    cout<<(--i);
    //7, 7
    return 0;
}