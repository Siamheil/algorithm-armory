class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val) head=head->next;
        ListNode* prev=NULL,* curr=head;
        while(curr){
            if(curr->val==val){
                prev->next=curr->next;
            }else{
                prev=curr;
            }
            curr=curr->next;
        }
        return head;
    }
};