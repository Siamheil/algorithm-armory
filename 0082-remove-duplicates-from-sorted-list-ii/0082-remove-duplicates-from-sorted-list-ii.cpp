class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* curr=head;
        while(curr!=nullptr){
            if(curr->next && curr->val==curr->next->val){
                while(curr->next && curr->val==curr->next->val) curr=curr->next;
                prev->next=curr->next;
            }
            else {
                prev = curr; 
            }

            curr=curr->next;
        }
        return dummy->next;
    }
};