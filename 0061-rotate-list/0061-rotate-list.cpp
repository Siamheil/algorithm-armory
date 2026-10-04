class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        int count=1;
        ListNode* tail=head;
        while(tail->next){
            count++;
            tail=tail->next;
        }
        k=k%count;
        if(k==0) return head;
        tail->next=head;
        int remaining=count-k;
        ListNode* newTail=head;
        while(remaining-->1){
            newTail=newTail->next;
        }
        ListNode* newHead=newTail->next;
        newTail->next=NULL;
        return newHead;
    }
};