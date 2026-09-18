class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        while(head && head->val == val) {
            head = head->next;
        }
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr){
            if(curr->val==val){
                prev->next=curr->next;
                curr=curr->next;
            }else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};