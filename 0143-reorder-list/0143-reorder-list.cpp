class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* curr=head,* prev=NULL,* fut=NULL;
        while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        ListNode* slow=head,* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=reverse(slow->next);
        slow->next=NULL;
        ListNode* curr1=head;
        ListNode* curr2=newHead;

        while(curr1 && curr2) {
            ListNode* next1=curr1->next;
            ListNode* next2=curr2->next;

            curr1->next=curr2;
            curr2->next=next1;

            curr1=next1;
            curr2=next2;
        }
    }
};