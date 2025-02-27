//Link: https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?category%5B%5D=Hash&company%5B%5D=Amazon&page=1&query=category%5B%5DHashcompany%5B%5DAmazonpage1company%5B%5DAmazoncategory%5B%5DHash&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-subarray-with-0-sum
class Solution {
  public:
    int maxLen(vector<int>& arr) {
        //map stores, psum and index
        unordered_map<int, int> mpp;
        int maxlen = 0;
        int psum = 0;
        
        for(int i = 0; i < arr.size(); i++){
            psum += arr[i];
            
            //if sum found 0 it means its in the starting or the prev eles are zero
            if(psum == 0)maxlen = i - 0 + 1;
            
            else{
                
                //if found in hashmap calculate the length
                if(mpp.find(psum) != mpp.end()){
                    maxlen = max(maxlen, i - mpp[psum]);
                }
                //if not found in hashmap simply push it
                else{
                    mpp[psum] = i;
                }
            }
        }
        return maxlen;
    }
};
