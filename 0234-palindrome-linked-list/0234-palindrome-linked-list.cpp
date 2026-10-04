/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* curr=head,* prev=NULL,* fut=NULL;
        while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        head=prev;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head,* fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=reverse(slow->next);
        ListNode* first=head,* second=newHead;
        while(second){
            if(first->val !=second->val){
                reverse(newHead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;
    }
};