//Link: https://leetcode.com/problems/remove-linked-list-elements/description/?envType=problem-list-v2&envId=linked-list
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
    ListNode* removeElements(ListNode* head, int val) {
       ListNode* prev= new ListNode(-1);
       prev->next = head;
       ListNode* curr = prev;
       while(curr->next != NULL){
        if(curr->next->val == val){
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
        }
       }
       return prev->next;
      }
};
