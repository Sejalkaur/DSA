//Link: https://www.naukri.com/code360/problems/remove-duplicates-from-sorted-array_1102307?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	//arr=[1, 1, 2, 2, 2, 2, 3, 3]
	int i=0;//at 1
	for(int j=1;j<n;j++){
		if(arr[j]!=arr[i]){ //if 1 !=2
			arr[i+1]=arr[j]; //place 2 at index 1
			i++; //for comparing
		}
	}return i+1; //to tell the size
}
