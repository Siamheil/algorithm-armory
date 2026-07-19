class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        ListNode* curr=head,*prev=nullptr,*fut=nullptr;
        while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {
        int result=0,power=0;
        head=reverseLL(head);
        while(head){
            if(head->val==1) result+=pow(2,power);
            power++;
            head=head->next;
        }
        return result;
    }
};