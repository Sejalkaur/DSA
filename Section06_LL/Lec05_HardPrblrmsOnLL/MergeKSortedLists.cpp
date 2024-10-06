//Link: https://leetcode.com/problems/merge-k-sorted-lists/description/
// Custom comparator for priority_queue to sort by ListNode's val in ascending order
struct Compare {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Min-heap priority_queue
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        // Push the first node of each list into the priority queue
        for(int i = 0; i < lists.size(); i++) {
            if(lists[i]) {
                pq.push(lists[i]);
            }
        }

        // Dummy node to help with list construction
        ListNode* dNode = new ListNode(-1);
        ListNode* temp = dNode;

        // Process the priority queue
        while(!pq.empty()) {
            ListNode* top = pq.top();  // Get the node with the smallest value
            pq.pop();
            
            // Add this node to the merged list
            temp->next = top;
            temp = temp->next;

            // If there is a next node in the current list, push it into the queue
            if(top->next) {
                pq.push(top->next);
            }
        }

        return dNode->next;  // Return the merged list
    }
};
