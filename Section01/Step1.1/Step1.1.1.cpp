/*Link: https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
Problem statement
Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z).
0, if the character is a lowercase alphabet (a - z).
-1, if the character is not an alphabet.*/

#include <bits/stdc++.h>

using namespace std;

void check(char x){
	if (x >= 'A' && x <= 'Z') {
		cout << "1";
	}
	else if(x >= 'a' && x <= 'z'){
		cout << "0";
	}
	else{
		cout<<"-1";
	}
}

int main() {
	// Write your code here
	char x;
	cin>>x;
	check(x);
	
	return 0;
	
}
