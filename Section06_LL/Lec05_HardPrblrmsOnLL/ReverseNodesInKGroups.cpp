//Link: https://leetcode.com/problems/reverse-nodes-in-k-group/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

     ListNode* reverse(ListNode* head) {
        //Recursion
        if(head==NULL || head->next==NULL)return head;
        ListNode* newHead = reverse(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }

    ListNode* getKthNode(ListNode* temp, int k){
        k-=1;
        while(temp != NULL && k > 0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;
        while(temp != NULL){
            ListNode* kThNode = getKthNode(temp , k);
            if(kThNode == NULL){
                if(prevLast) prevLast->next = temp;
                break;
            }
            ListNode* nextNode = kThNode->next;
            kThNode->next = NULL;
            reverse(temp);
            if(temp == head)head = kThNode;
            else{
                prevLast->next = kThNode;
                
            }
            prevLast = temp;
            temp = nextNode;
        }
        return head;
    }
};
