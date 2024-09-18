//Link: https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-pairs-with-given-sum-in-doubly-linked-list

//Optimal(2 ptr approach)
 vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int, int>> result;
        Node* left = head;
        Node* right = head;
      
        //to find tail
        while(right->next!= NULL){
            right = right->next;
        }
      
      //to find pairs
        while(left->data < right->data){
            if(left->data + right->data == target){
                result.push_back(make_pair(left->data, right->data));
                left = left->next;
                right = right->prev;
            }
            else if(left->data + right->data < target){
                left = left->next;
            }
            else{
                right = right->prev;
            }
        }
        
        return result;
    }

//Brute force:
vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
            vector<pair<int, int>> result;
        Node* temp = head;
        while(temp!=NULL){
            Node* temp2=temp->next;
            while(temp2!=NULL){
                if((temp->data)+(temp2->data)==k){
                    result.push_back(make_pair(temp->data, temp2->data));
                }else{
                    temp2 = temp2->next;
                }
            }
            temp = temp->next;
        }
        return result;
}
