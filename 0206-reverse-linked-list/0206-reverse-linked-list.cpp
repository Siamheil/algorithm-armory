class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* prev=nullptr;
        ListNode* fut=head->next;
        ListNode* curr=head;
        while(fut){
            curr->next=prev;
            prev=curr;
            curr=fut;
            fut=fut->next;
        }
        curr->next=prev;
        return curr;
    }
};