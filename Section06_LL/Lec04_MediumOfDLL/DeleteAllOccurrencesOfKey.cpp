//Link:https://www.geeksforgeeks.org/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list
void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        Node* temp = *head_ref;
        while(temp != NULL){
            if(temp->data == x){
                if (temp == *head_ref) {
                *head_ref = temp->next; // Move the head pointer to the next node
                    if (*head_ref != NULL) {
                        (*head_ref)->prev = NULL; // Set prev of new head to NULL
                    }

                delete temp; // Delete the old head node
            } 
                else{
                    Node* front = temp->next;
                    Node* prevEl = temp->prev;
                    
                    if(front) front->prev= prevEl;
                    if(prevEl) prevEl->next = front;
                    
                    delete temp;
                    temp =front;
                }
            }
            else{
                temp = temp->next;
            }
        }
    }
