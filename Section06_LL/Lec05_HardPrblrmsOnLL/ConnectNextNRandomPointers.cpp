//Link: https://leetcode.com/problems/copy-list-with-random-pointer/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
        //1stStep->inserting the copy nodes in between

       void insertCopyNodesBTW(Node* head){
        Node* temp = head;

        while(temp != NULL){
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;

            temp->next = copyNode;
            temp = temp->next->next;
        }
       }
//2ndstep->connecting random pointers
       void connectRandomPointers(Node* head){
        
        Node* temp = head;
        while(temp != NULL){
            Node* copyNode = temp->next;

            if(temp->random){
                copyNode->random = temp->random->next;
            }
            else{
                copyNode->random = nullptr;
            }
            temp = temp->next->next;
        }
    }

//3rdstep->connecting next pointers
    Node*  connectNextPointers(Node* head){
        
        Node* dNode = new Node(-1);
        Node* result = dNode;
        Node* temp = head;

        while(temp != NULL){
            result->next = temp->next;
            temp->next = temp->next->next;

            result = result->next;
            temp = temp->next;
        }
        return dNode->next;
    }

 

    Node* copyRandomList(Node* head) {
        
        insertCopyNodesBTW(head);

        connectRandomPointers(head);
        
        return connectNextPointers(head);
        
    }
};
