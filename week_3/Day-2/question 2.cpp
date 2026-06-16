class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode*dummy=new ListNode(0);
        dummy->next=head;

     ListNode*slow=dummy;
        ListNode*fast=dummy;

        //if(head==NULL ||head->next==NULL){
       //     return NULL;
        //}
        
       // ListNode*temp=head;
       
        for(int i=0;i<n;i++){
            if(fast->next){
            fast=fast->next;
        }

        }
        if(fast==NULL){
              return head->next;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* delnode=slow->next;
        slow->next=slow->next->next;
        delete(delnode);
        return dummy->next;
    }
};