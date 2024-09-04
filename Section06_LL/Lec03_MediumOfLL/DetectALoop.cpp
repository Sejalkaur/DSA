//link: https://leetcode.com/problems/linked-list-cycle/?envType=problem-list-v2&envId=linked-list
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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        if(head==NULL){
            return NULL;
        }
        slow = slow->next;
        fast = fast->next->next;   


        if (slow == fast) {
            return true; // Cycle detected
        }
    }

    return false;
    }
};
