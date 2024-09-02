/*Link:https://www.naukri.com/code360/problems/insertion-in-a-singly-linked-list_4609646?leftPanelTabValue=SUBMISSION

    Following is the LinkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

Node * insert(Node * head, int n, int pos, int val) {
    // Write your code here
    if(head==NULL){
        return new Node(val);
    }
    if(pos==0){
        Node* temp=new Node(val);
        temp->next=head;
        return temp;
    }
    pos--;
    Node* temp=head;
    while(temp!=NULL && pos--){
        temp=temp->next;
        
    }
    Node* x=new Node(val);
        x->next=temp->next;
        temp->next=x;
        return head;
}


//Clear Code
Node * insert(Node * head, int n, int pos, int val) {

    Node* newNode = new Node(val);
    if (head == NULL) {
        return newNode;
    }

    if (pos == 0) {
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    while(temp != NULL && --pos) {
        temp = temp->next;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}


