//Link: https://leetcode.com/problems/course-schedule/description/
class Solution {
public:

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
         vector<vector<int>> adjLs(numCourses);
        for(auto &e: prerequisites){
            adjLs[e[1]].push_back(e[0]);
        }
        vector<int> inD(numCourses, 0);
        vector<int> order;
        
        for(int i = 0;i < numCourses;i++){
            for(auto child: adjLs[i]){
                inD[child]++;
            }
        }
        queue<int> q;
        for(int i =0; i <inD.size();i++){
            if(inD[i] == 0)q.push(i);
        }
        for(int i = 0;i < numCourses;i++){
            while(!q.empty()){
                int node = q.front();
                q.pop();
                order.push_back(node);
                for(auto it: adjLs[node]){
                    inD[it]--;
                    if(inD[it] ==  0){
                        q.push(it);
                    }
                }
            }
        }
        return (order.size() < numCourses)? false: true;
    }
};
