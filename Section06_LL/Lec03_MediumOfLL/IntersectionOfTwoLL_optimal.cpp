/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
//we have to traverse them together when the t1 reaches null it move sto the other head so that their difference is resolved 
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1 = headA;
        ListNode* t2 = headB;

        while(t1 != t2){
            t1 = t1->next;
            t2 = t2->next;

            if(t1 == t2) return t1;

            if(t1 == NULL) t1 = headB; 
            if(t2 == NULL) t2 = headA;

        }
        return t1;
    }
};
