//Link: https://leetcode.com/problems/sort-list/submissions/1413796905/

/*Brute
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> ans;

        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        sort(ans.begin(), ans.end());

        temp = head;
        int i = 0;
        while(temp != NULL){
            
            temp->val = ans[i];
            i++;

            temp = temp->next;
        }
        return head;
    }
};*/

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

    ListNode* findMiddle(ListNode* head){
      //Tortoise Hare method
      
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next== NULL)return head;

       ListNode* middle = findMiddle(head);
      
        ListNode* leftHead = head;
        ListNode* rightHead = middle->next;
        middle->next = NULL;
      
        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);

        return mergeTwoLists(leftHead, rightHead);
    }
};
