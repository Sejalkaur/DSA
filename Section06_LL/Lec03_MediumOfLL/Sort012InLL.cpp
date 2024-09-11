//Link: https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=given-a-linked-list-of-0s-1s-and-2s-sort-it
// Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Add code here
        if(head == NULL || head->next == NULL)return head;
        
        //dummy heads

        Node* zeroHead = new Node(-1);
        Node* oneHead = new Node(-1);
        Node* twoHead = new Node(-1);
        
        Node* zero = zeroHead;
        Node* one = oneHead;
        Node* two = twoHead;
        Node* temp = head;
        
        while(temp != NULL){
            if(temp->data == 0){
                zero->next = temp;
                zero = zero->next; //for traversal
            }else if(temp->data == 1){
                one->next = temp;
                one = one->next;
            }else{
                two->next = temp;
                two = two->next;
            }
            temp=temp->next;
        }
        
        //Linkage of all the three list
        zero->next = (oneHead->next) ? oneHead->next : twoHead->next; //If ones not there then link to two
        one->next = twoHead->next;
        two->next = NULL;
        
        return zeroHead->next;

    }
