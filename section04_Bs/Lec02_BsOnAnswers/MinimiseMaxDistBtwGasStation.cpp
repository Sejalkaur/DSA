//Link: https://www.naukri.com/code360/problems/minimise-max-distance_7541449?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION
#include<bits/stdc++.h>
double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.	
	 int n = arr.size();
        vector<int> howMany(n-1, 0);
        priority_queue<pair<long double, int>> pq;
        
        //insert all the difference n index
        for(int i = 0;i < n-1; i++){
            pq.push({arr[i+1] - arr[i], i});
        }
        
        for(int gasS = 1; gasS <= k; gasS++){
            auto tp = pq.top();
            pq.pop();
            int secInd = tp.second;
            howMany[secInd]++;
            long double iniDiff = arr[secInd + 1] - arr[secInd];
            long double newSecLen = iniDiff / (long double)(howMany[secInd] + 1);
            pq.push({newSecLen, secInd});
        }
            return pq.top().first;
}
