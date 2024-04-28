//Link: https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
int isSorted(int n, vector<int> a) {
    // Write your code here.
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                ans=1;
            }else{
                ans= 0;
            }
        }return ans;
    }
}
