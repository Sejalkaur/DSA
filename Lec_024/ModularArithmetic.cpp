//Link: https://www.naukri.com/code360/problems/modular-exponentiation_1082146?count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int res=1;
	while(n>0){
		if(n&1){
			res=( 1LL *(res)*(x)%m);
		}
		x=( 1LL *(x)%m*(x)%m)%m;
		n=n>>1;
		}
		return res;
}
