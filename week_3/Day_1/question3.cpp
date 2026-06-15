class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
           
            if(slow!=NULL){
                slow=slow->next;
            }
            
        }
        return slow;
    }
};