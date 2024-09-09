//link: https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-a-doubly-linked-list
 // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head==NULL || head->next==NULL)return head;
        DLLNode* current=head;
        DLLNode* prevEl=NULL;
        while(current!=NULL){
            prevEl=current->prev;
            current->prev=current->next;
            current->next=prevEl;
            current=current->prev;
        }
        return prevEl->prev;
    }
