//Link: https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        /*Brute
        int n=arr.size();
       for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count > n/2){
                return arr[i];
            }
        }
       }
       return 0; */

    int cnt=0;
    int n=arr.size();
    int el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
        else if(arr[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            cnt1++;
        }
        if(cnt1>n/2){
            return el;
        }
    }return 0;
    
   }
};

