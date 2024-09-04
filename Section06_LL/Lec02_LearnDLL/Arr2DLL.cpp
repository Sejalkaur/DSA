//Link: https://www.geeksforgeeks.org/problems/introduction-to-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-doubly-linked-list
 Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head=new Node(arr[0]);
        Node* temp2=head;
        for(int i=1;i<arr.size();i++){
            Node* temp=new Node(arr[i]);
            temp->next=nullptr;
            temp->prev=temp2;
            temp2->next=temp;
            temp2=temp;
        }
        return head;
    }
