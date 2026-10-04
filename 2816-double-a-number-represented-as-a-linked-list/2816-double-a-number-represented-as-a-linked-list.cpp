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
        head=prev;
        return head;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* newHead=reverse(head);
        int carry=0;
        ListNode* curr=newHead;
        while(curr){
            int sum=curr->val*2+carry;
            curr->val=sum%10;
            carry=sum/10;
            if(curr->next == NULL && carry!=0){
                curr->next=new ListNode(carry);
                break;
            }
            curr=curr->next;
        }
        head=reverse(newHead);
        return head;
    }
};