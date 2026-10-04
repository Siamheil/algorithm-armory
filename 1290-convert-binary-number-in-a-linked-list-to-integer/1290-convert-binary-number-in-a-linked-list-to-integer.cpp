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
    int getDecimalValue(ListNode* head) {
        head=reverse(head);
        int result=0,power=0;
        while(head){
            if(head->val==1){
                result=result+pow(2,power);
            }
            power++;
            head=head->next;
        }
        return result;
    }
};