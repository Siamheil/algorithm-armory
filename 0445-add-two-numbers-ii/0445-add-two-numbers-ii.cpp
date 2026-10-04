class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL,* fut=NULL,* curr=head;
        while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        head=prev;
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1=reverse(l1);
        ListNode* head2=reverse(l2);
        ListNode* head=new ListNode(0);
        ListNode* tail=head;
        int carry=0;
        while(head1 || head2){
            int sum=0+carry;
            if(head1){
                sum=sum+head1->val;
                head1=head1->next;
            }
            if(head2){
                sum=sum+head2->val;
                head2=head2->next;
            }
            carry=sum/10;
            sum=sum%10;
            tail->next=new ListNode(sum);
            tail=tail->next;
        }
        if(carry){
            tail->next=new ListNode(carry);
            tail=tail->next;
        }
        ListNode* newHead=reverse(head->next);
        return newHead;
    }
};