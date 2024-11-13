//Link: https://www.geeksforgeeks.org/problems/implement-queue-using-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-queue-using-linked-list
/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        // Your Code
        QueueNode* temp = new QueueNode(x);
        if(front == NULL){
            front = rear = temp;
        }else{
            rear->next = temp;
            rear = temp;
        }
        
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code   
        
        if(front == NULL)return -1;
        
        int el = front->data;
        QueueNode* temp = front;
        front = front->next;
        delete temp;
  
        if (front == NULL){
        rear = NULL;
        }
        
        return el;
}
