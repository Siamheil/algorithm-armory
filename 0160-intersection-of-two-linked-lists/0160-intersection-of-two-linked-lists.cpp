/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1=headA,* curr2=headB;
        int count1=0,count2=0;
        while(curr1){
            count1++;
            curr1=curr1->next;
        }
        while(curr2){
            count2++;
            curr2=curr2->next;
        }
        curr1=headA;
        curr2=headB;
        while(count1>count2){
            curr1=curr1->next;
            count1--;
        }
        while(count2>count1){
            curr2=curr2->next;
            count2--;
        }
        while(curr1 != curr2){
            curr1=curr1->next;
            curr2=curr2->next;
        }
        if(!curr1) return nullptr;
        return curr1;
    }
};