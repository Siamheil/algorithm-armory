class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt1=0,cnt2=0;
        ListNode* curr1=headA,*curr2=headB;
        while(curr1){
            cnt1++;
            curr1=curr1->next;
        }
        while(curr2){
            cnt2++;
            curr2=curr2->next;
        }
        curr1=headA,curr2=headB;
        while(cnt1>cnt2){
            cnt1--;
            curr1=curr1->next;
        }
        while(cnt2>cnt1){
            cnt2--;
            curr2=curr2->next;
        }
        while(curr1!=curr2){
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return curr1;
    }
};