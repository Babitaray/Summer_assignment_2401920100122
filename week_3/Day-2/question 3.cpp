class Solution {
    private:
    bool ispalin(vector<int> arr){
        int s=0;
        int e=arr.size()-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return false;
            }
            s++;
            e--;
            
        }
         return true;
    }
public:
    bool isPalindrome(ListNode* head) {
     ListNode*temp=head;
     vector<int>arr;
     while(temp!=NULL){
        arr.push_back(temp->val);
        temp=temp->next;
     }   
     return (ispalin(arr));
    }
};