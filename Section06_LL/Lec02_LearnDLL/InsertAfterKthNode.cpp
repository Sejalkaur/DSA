//Link: https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insert-a-node-in-doubly-linked-list
void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node* temp = head;
   int cnt = 0;
   while(temp != NULL && cnt < pos){
       temp = temp->next;
       cnt++;
   }
   if(temp == NULL){
       return;
   }
  
    Node* front = temp->next; 
    Node* newNode = new Node(data);
    newNode->prev = temp;
    newNode->next = front;

    if (front != NULL) {
        front->prev = newNode;
    }

    temp->next = newNode;
}
