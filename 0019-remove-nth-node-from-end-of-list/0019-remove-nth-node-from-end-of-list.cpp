class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* curr=head;
        while(curr){
            len++;
            curr=curr->next;
        }
        len=len-n;
        if(len==0){
            head=head->next;
            return head;
        }
        curr=head;
        ListNode* prev=NULL;
        while(len--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        return head;
    }
};