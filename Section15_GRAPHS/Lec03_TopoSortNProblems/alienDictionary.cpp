//Link: www.geeksforgeeks.org/problems/alien-dictionary/1
vector<char> topoSort(vector<vector<int>> &adj, vector<bool> &present){
      int m = adj.size();
      vector<char> order;
    vector<int> inDegree(m, 0);
        
        for(int i = 0;i < m;i++){
            for(auto it: adj[i]){
                inDegree[it]++;
            }
        }
        
        queue<int> q;
        for(int i = 0;i < m;i++){
            if(present[i] && inDegree[i] == 0)q.push(i);
        }
        
        while(!q.empty()){
            int node= q.front();
            q.pop();
            order.push_back(node + 'a');
            
            for(auto it: adj[node]){
                inDegree[it]--;
                if(present[it] && inDegree[it] == 0)q.push(it);
            }
        }
        return order;
  }
    string findOrder(vector<string> &words) {
        // code here
        int n = words.size();
        vector<vector<int>> adj(26);
        vector<bool> present(26, false);
        
        //for marking all the charcter a-z who are present in 
        //otherwise who are not present and inDegree = 0 would also be added
        for(string &w: words){
            for(char ch: w){
                present[ch - 'a'] = true;
            }
        }
        
        for(int i= 0; i < n-1; i++){
            string s1 = words[i];
            string s2 = words[i+1];
            int len = min((int)s1.length(), (int)s2.length());
            
            int ptr = 0;
            for(; ptr < len; ptr++){
                if(s1[ptr] != s2[ptr]){
                    // adj.push_back(s1[ptr] - 'a');
                    adj[s1[ptr] -'a'].push_back(s2[ptr] -'a');//directed edge in terms of 0, 1, 2,
                    break;
                }
            }
            if(ptr == len && s1.length() > s2.length()) return "";
        }
        
        //topo sort
        vector<char> ans= topoSort(adj, present);
        string order = "";
        for(auto it: ans){
            order.push_back(it);
        }
        
        //if the cycle is present
        int cntPresent = 0;
        for(bool x: present){
            if(x)cntPresent++;
        }
        if(order.size() != cntPresent)return "";
        return order;
    }
