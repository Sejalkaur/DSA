//Link: https://www.naukri.com/code360/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
//Brute

#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    
    int n=a.size();
    int m=b.size();
   set <int > st;
    vector<int> temp;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(auto it: b){
        st.insert(it);
    }
    for(auto it: st){
        temp.push_back(it);
    } return temp;
}
//TC=O(n+m)log(n+m); SC=O(n+m);

//Optimal
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
   vector < int > temp;
   int n=a.size();
   int m=b.size();
   int i = 0;
   int j = 0;

   vector<int> Unionarr;
   while(i<n && j<m){
       if(a[i]<=b[j]){
           if(Unionarr.size()==0 || Unionarr.back()!=a[i]){
               Unionarr.push_back(a[i]);
           }i++;
       }

        else{
           if(Unionarr.size()==0 || Unionarr.back()!=b[j]){
               Unionarr.push_back(b[j]);
           }j++;
       }
   }

   while(j<m){
       if(Unionarr.size()==0 || Unionarr.back()!=b[j]){
               Unionarr.push_back(b[j]);
           }j++;
   }

   while(i<n){
        if(Unionarr.size()==0 || Unionarr.back()!=a[i]){
               Unionarr.push_back(a[i]);
           }i++;
   }
   return Unionarr; 

}
//TC=O(m+n);SC=O(m+n);
