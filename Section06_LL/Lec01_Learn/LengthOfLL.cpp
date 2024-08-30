//Link: https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-nodes-of-linked-list
int getCount(struct Node* head) {

        // Code here
        int cnt=0;
        Node* temp=head;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
