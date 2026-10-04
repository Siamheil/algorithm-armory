class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* tail=head;
        int carry=0;
        while(l1 || l2){
            int sum=0+carry;
            if(l1){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2){
                sum=sum+l2->val;
                l2=l2->next;
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
        return head->next;
    }
};