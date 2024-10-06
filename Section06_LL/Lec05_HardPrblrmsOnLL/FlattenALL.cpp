//Link: https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=flattening-a-linked-list
public:
    Node* merge2list(Node* l1, Node* l2){
        Node* dNode = new Node(-1);
        Node* temp = dNode;
      
        while(l1 != NULL && l2 != NULL){
            if(l1->data <= l2->data){
                temp->bottom = l1;
                l1 = l1->bottom;
                temp = temp->bottom;
            }else{
                 temp->bottom = l2;
                l2 = l2->bottom;
                temp = temp->bottom;
            }
          temp->next = NULL;
        }
      
        //if any list terminates fisrt
      
        if(l1 == NULL)temp->bottom = l2;
        else temp->bottom = l1;
      
        return dNode->bottom;
    }

    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // using recursion
        //base case
        if(root == NULL || root->next == NULL)return root;
        
        Node* mergedHead = flatten(root->next);
        return merge2list(root, mergedHead);
    }
