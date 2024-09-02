//Link: https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=linked-list-insertion Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head==NULL)return new Node(x);
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        Node* temp2=new Node(x);
        temp->next=temp2;
        return head;
    }
