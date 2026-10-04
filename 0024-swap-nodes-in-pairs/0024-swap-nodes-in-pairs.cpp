class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* a=head;
        ListNode* b=head->next;
        ListNode* c=head->next->next;
        b->next=a;
        a->next=swapPairs(c);
        return b;
    }
};