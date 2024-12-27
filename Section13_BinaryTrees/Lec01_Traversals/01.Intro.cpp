//Link: https://www.geeksforgeeks.org/problems/introduction-to-trees/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-trees
class Solution {
  public:
    int countNodes(int i) {
        // your code here
        int result = pow(2, i - 1);
        return result;
    }
};
