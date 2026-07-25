class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* odd=head,*even=head->next;
        ListNode* evenStart=head->next;
        while(even && even->next){
            odd->next=even->next;
            odd=odd->next;
            even->next=even->next->next;
            even=even->next;
        }
        odd->next=evenStart;
        return head;
    }
};