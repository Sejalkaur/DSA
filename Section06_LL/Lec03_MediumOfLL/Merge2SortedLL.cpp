//Link: https://leetcode.com/problems/merge-two-sorted-lists/description/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* dNode = new ListNode(-1);
        ListNode* temp = dNode;

        while(t1 != NULL && t2 != NULL){
            //if t2<t1 then temp will point to t2 and traverse
            if(t2->val <= t1->val){
                temp ->next = t2;
                t2 = t2->next;
                temp = temp->next;
            }else{
                //temp will point to t1 and traverse
                temp ->next = t1;
                t1 = t1->next;
                temp = temp->next;
            }
        }
        //if any one of the list is exhauseted its simply going to point at the next list el
        if(t1 == NULL){
            temp->next = t2;
        }else{
            temp->next = t1;
        }
        return dNode->next;
    }
};
