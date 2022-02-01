class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode *prev = NULL;
        ListNode *current = head;
        ListNode *forward = NULL;
        
        while(current!=NULL){
            forward = current -> next;
            current -> next = prev ;
            prev = current;
            current = forward;
        }
        
        return prev;
        
    }
};
