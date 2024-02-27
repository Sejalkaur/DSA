//Link:https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
//Adding even and odd digits of an integer separately
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n, a;
	int even_sum=0;
	int odd_sum=0;
	cin>>n;
	while(n>0){
		a=n%10;
		n=n/10;
		if(a%2==0){
			even_sum+=a;
                } else {
                        odd_sum += a;
                }
        }
	cout<<even_sum<<" "<<odd_sum;
	return 0;
	
	
}
