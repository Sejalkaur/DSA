//Link: https://www.naukri.com/code360/problems/ninja-and-the-zero-s_6581958?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

//Brute:
vector<int> moveZeros(int n, vector<int> arr) {
    // Write your code here.
    int i=0;
	vector<int> temp;
	vector<int> start;
	for(int j=0;j<n;j++){
		if(arr[j]!=0){ //for non-zeroes
			start.push_back(arr[j]); 
			i++; //for comparing
		}else if(arr[j]==0){ //for zeroes
			temp.push_back(arr[j]);
		}
		
	}start.insert(start.end(), temp.begin(), temp.end()); //to merge the two arrays
	return start;
}


//Optimal:
vector<int> moveZeros(int n, vector<int> arr) {
    // Write your code here.
  int j=-1;
  for(int i=0;i<n;i++){
	  if(arr[i]==0){
		  j=i; //j was always the index of the zeroth element
		  break;
	  }
  }
  if(j==-1) return arr; 
  for(int i=j+1;i<n;i++){
	  if(arr[i]!=0){
		  swap(arr[i], arr[j]);
		  j++;
	  }
  }
  return arr;
}
