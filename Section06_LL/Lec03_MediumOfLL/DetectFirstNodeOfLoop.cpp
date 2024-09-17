//Link: https://leetcode.com/problems/linked-list-cycle-ii/description/
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            // to detect if there is any cycle
          
            if(slow == fast){  //Collision point
                slow = head;
                //to detect the first node bcz distance is same from head to tht point n from collision to tht point
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow; // that point(first node)
            }
        }
        return NULL; //No cycle
    }
};
