//Link: https://leetcode.com/problems/reverse-linked-list/
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
    ListNode* reverseList(ListNode* head) {
        //Brute Force
        // ListNode* temp=head;
        // stack<int> st;
        // while(temp!=NULL){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp!=NULL){
        //     temp->val=st.top();
        //     st.pop();
        //     temp=temp->next;
        // }
        // return head;
        //Iterative

        // ListNode* temp=head;
        // ListNode* prevEl = NULL;
        // while(temp != NULL){
        //     ListNode* front = temp->next;
        //     temp->next = prevEl;
        //     prevEl = temp;
        //     temp = front;
        // }return prevEl;

        //Recursion
        if(head==NULL || head->next==NULL)return head;
        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
};
