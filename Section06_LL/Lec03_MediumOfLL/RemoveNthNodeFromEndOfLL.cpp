//link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        for(int i = 0;i < n;i++){
            fast = fast->next;  //fast is at 3 now 
        }

         if(fast == NULL){ //we have to delete head
            return head->next;
            delete head;

        }

        ListNode* slow = head;
        while(fast->next!= NULL){
            slow = slow->next; //slow is at3
            fast = fast->next; //fast is at 5
        }

        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        return head;
    }
};
