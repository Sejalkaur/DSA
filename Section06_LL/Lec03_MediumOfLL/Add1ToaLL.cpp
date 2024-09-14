//Link: https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=add-1-to-a-number-represented-as-linked-list
public:
  
  int helper(Node* temp){
      if(temp == NULL) return 1;
      
      int carry = helper(temp->next);
      temp->data += carry;
      
      if(temp->data<10) return 0;  //like 5+1=6 then carry=0
      
      temp->data = 0; //Like 9+1=10 so carry =1 n data=0
      return 1;
  }
  
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        int carry = helper(head);  //this is the final carry if its 1 then new node would be formed
        if(carry == 1){
            Node* newNode = new Node(1);
            newNode->next = head;
            return newNode;
        }
        return head;
    }
