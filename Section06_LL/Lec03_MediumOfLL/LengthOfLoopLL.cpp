//link: https://www.geeksforgeeks.org/problems/find-length-of-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-length-of-loop
// Function to find the length of a loop in the linked list.
    int findLength(Node *slow, Node* fast){
        int cnt = 1;
        fast = fast->next;
        while(slow != fast){
            cnt++;
            fast = fast->next;
        }return cnt;
    }
    
    int countNodesinLoop(Node *head) {
        // Code here
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)return findLength(slow, fast);
        }
        return NULL;
    }
