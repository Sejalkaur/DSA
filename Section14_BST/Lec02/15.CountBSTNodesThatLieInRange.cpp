//Link: https://www.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1?page=1&category=Binary%20Search%20Tree&sortBy=submissions
void f(Node *root, int l, int h, int &cnt){
      if(root == NULL)return;
  
  //case1 when its valid move both sides
      if(root->data >= l && root->data <= h){
          cnt++;
          f(root->left, l, root->data, cnt);
          f(root->right, root->data, h, cnt);
      }
        //case 2 when its greater than ub so the ans must be in left
      else if(root->data > h)f(root->left, l, h, cnt);

        //case 3 when its less than lb then the ans must be in right
      else f(root->right, l, h, cnt);
  }
    int getCount(Node *root, int l, int h) {
        // your code here
        int cnt = 0;
        f(root, l, h, cnt);
        return cnt;
    }
