//Link: https://www.codingninjas.com/studio/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
//DataTypes
#include <bits/stdc++.h>

using namespace std;

int dataTypes(string type) {
	// Write your code here
	if(type=="Long" || type=="Double"){
		return 8;
	}
	else if(type=="Integer" || type=="Float"){
		return 4;
	}
	else if(type=="Character"){
		return 1;
	}

}
