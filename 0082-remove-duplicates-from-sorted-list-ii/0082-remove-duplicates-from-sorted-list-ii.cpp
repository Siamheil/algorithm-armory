class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* curr=head;
        while(curr!=nullptr){
            if(curr->next != nullptr && curr->val==curr->next->val){
                while(curr->next != nullptr && curr->val==curr->next->val) 
                    curr=curr->next;
                prev->next=curr->next;    
            }else{
                prev=prev->next;
            }
            curr=curr->next;
        }
        return dummy->next;
    }
};