class Solution {
public:
    ListNode* solve(ListNode* curr,ListNode* prev){
        if(curr==NULL) return prev;
        ListNode* next=curr->next;
        curr->next=prev;
        return solve(next,curr);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head,*prev=NULL;
        return solve(curr,prev);
    }
};