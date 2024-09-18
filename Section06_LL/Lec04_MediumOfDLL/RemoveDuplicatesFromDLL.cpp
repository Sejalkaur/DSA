//Link: https://www.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-duplicates-from-a-sorted-doubly-linked-list
   Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        Node* temp = head;
       while(temp != NULL && temp->next != NULL){
          Node* front = temp->next;
         
           while(front != NULL && front->data == temp->data){
               Node* duplicate = front;
               front =  front->next;
               delete duplicate;
           }
         
           temp->next = front;
           if(front!= NULL) front->prev = temp;
           temp = temp->next;
       }
      
    return head;
    }
