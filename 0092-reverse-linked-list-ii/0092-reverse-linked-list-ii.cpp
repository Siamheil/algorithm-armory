class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* leftPre=dummy,* curr=head;
        for(int i=0;i<left-1;i++){
            leftPre=leftPre->next;
            curr=curr->next;
        }
        ListNode* sublistHead=curr;
        ListNode* prev=NULL;
        for(int i=0;i<=right-left;i++){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        leftPre->next=prev;
        sublistHead->next=curr;
        return dummy->next;
    }
};