//Link: https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-node-in-doubly-linked-list
  // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(head==NULL)return NULL;
        Node* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            if(cnt==x)break;
            temp=temp->next;
           
        }
         Node* prevEl=temp->prev;
            Node* front=temp->next;
            if(head==NULL || head->next==NULL)return NULL;

            if(x==1){       //head
                Node* prevEl2=head;
                head=head->next;
                head->prev=nullptr;
                prevEl2->next=nullptr;
                delete prevEl2;
                return head;
            }
            else if(front==NULL){ //Tail
                Node* tail=head;
                while(tail->next!=NULL){
                    tail=tail->next;
                }
                Node* newTail=tail->prev;
                    newTail->next=nullptr;
                    tail->prev=nullptr;
                    delete tail;
                return head;
            }
            
            prevEl->next=front;
            front->prev=prevEl;
            temp->next=nullptr;
            temp->prev=nullptr;
            delete temp;
            return head;
    }
