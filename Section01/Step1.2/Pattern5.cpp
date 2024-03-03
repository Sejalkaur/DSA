//Link:https://www.codingninjas.com/studio/problems/seeding_6581892?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION
void seeding(int n) {
	// Write your code here.
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i+1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
