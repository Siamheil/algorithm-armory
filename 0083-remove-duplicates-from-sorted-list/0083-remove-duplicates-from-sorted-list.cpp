class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* curr=head;
        ListNode* fut=curr->next;
        while(fut){
            if(fut->val==curr->val){
                fut=fut->next;
                continue;
            }
            curr->next=fut;
            curr=fut;
            fut=fut->next;
        }
        curr->next=nullptr;
        return head;
    }
};