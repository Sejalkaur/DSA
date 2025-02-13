//Link: https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

 // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int> s(arr.begin(), arr.end()); //pehle hi insert krdie saar elements
        int maxcnt = 0;
        
        for(int num: s){
            //start sequence only when its th ebeginner element i.e pichla element nhi h 
            if(s.find(num - 1) == s.end()){
                // int currentnum = num;
                int cnt = 1;
                
                //add the cnt if the next elements exist in set
                while(s.find(num + 1) != s.end()){
                    cnt++;
                    num++;
                }
                maxcnt = max(maxcnt, cnt);
            }
        }
        return maxcnt;
    }
