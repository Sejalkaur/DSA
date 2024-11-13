//link: https://www.geeksforgeeks.org/problems/implement-stack-using-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-stack-using-linked-list
private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
        StackNode* temp = new StackNode(x);
        temp->next = top;
        top = temp;
    }

    int pop() {
        // code here
        if(top == NULL)return -1;
        int el = top->data;
        StackNode* temp = top;
        top = top->next;
        delete temp;
        return el;
    }

    MyStack() { top = NULL; }
