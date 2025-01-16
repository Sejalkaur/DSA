//Link: https://www.geeksforgeeks.org/problems/unique-binary-tree-requirements/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=unique-binary-tree-requirements
class Solution
{
public:
    bool isPossible(int a,int b)
    {
        //code here
        if(b == 2 && (a == 1 || a == 3))return true; //2 is inorder without it unque tree cannot be calculated
        if(a == 2 && (b == 1 || b == 3))return true;
      
        return false;
    }
};
