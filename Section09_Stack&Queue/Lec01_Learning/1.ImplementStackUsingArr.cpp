//Link: https://www.geeksforgeeks.org/problems/implement-stack-using-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-stack-using-array
/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack ::push(int x) {
    // Your Code
    top = top+1;
    arr[top] = x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    // Your Code
    if (top == -1) {
            // Stack underflow case, return -1 if stack is empty
            return -1;
        }
        int element = arr[top];  // Store the top element to return later
        top = top - 1;          // Decrement the top pointer
        return element;
}
