//Link: https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
int isSorted(int n, vector<int> a) {
  // Write your code here.
  
  for(int i=1;i<n;i++){
      if(a[i] >= a[i-1]){
          
      }else{
          return false;
      }
  }return true;
  
}

