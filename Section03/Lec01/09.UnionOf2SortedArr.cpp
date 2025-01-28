//Link: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        vector<int> temp;
        int l = 0;
        int r = 0;
        
        while(l < a.size() && r < b.size()){
             // Skip duplicates in 'a'
            if (l > 0 && a[l] == a[l - 1]) {
                l++;
                continue;
            }
    
            // Skip duplicates in 'b'
            if (r > 0 && b[r] == b[r - 1]) {
                r++;
                continue;
            }
            
            
            if(a[l] < b[r]){
                temp.push_back(a[l]);
                l++;
            }
            else if(a[l] > b[r]){
                temp.push_back(b[r]);
                r++;
            }
            else{
                temp.push_back(a[l]);
                l++;
                r++;
            }
        }
        while(l< a.size()){
            if (l > 0 && a[l] == a[l - 1]) {
                l++;
                continue;
            }
            
            temp.push_back(a[l]);
            l++;
        }
        
        while(r< b.size()){
             // Skip duplicates in 'b'
            if (r > 0 && b[r] == b[r - 1]) {
                r++;
                continue;
            }
            temp.push_back(b[r]);
            r++;
        }
        return temp;
    }
};
