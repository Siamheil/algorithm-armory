class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next) return head;
        ListNode* small=new ListNode(0);
        ListNode* smallp=small;
        ListNode* large=new ListNode(0);
        ListNode* largep=large;
        while(head){
            if(head->val<x){
                smallp->next=new ListNode(head->val);
                smallp=smallp->next;
            }else{
                largep->next=new ListNode(head->val);
                largep=largep->next;
            }
            head=head->next;
        }
        smallp->next=large->next;
        return small->next;
    }
};