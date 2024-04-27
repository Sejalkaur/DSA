//Link:https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
  
    
    vector<int> temp;
    int max=a[0];
    int min=a[0];
    int slargest=-1;
    int smin=INT_MAX;
    for(int i=0;i<n;i++){
        
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
      
    }
    for(int i=0;i<n;i++){
         if(a[i]>slargest && a[i]!=max){
           slargest=a[i];
       }
        if(a[i]<smin && a[i]!=min){
           smin=a[i];
       }
    } 
    temp.push_back(slargest);
    temp.push_back(smin);
    return temp;
}
