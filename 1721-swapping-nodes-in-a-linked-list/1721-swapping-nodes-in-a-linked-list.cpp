class Solution {
public:
    int findLength(ListNode* head){
        int len=0;
        while(head){
            len++;
            head=head->next;
        }
        return len;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int k1=k;
        int len=findLength(head);
        ListNode* node1=head;
        while(k1-- > 1){
            node1=node1->next;
        }
        int k2=len-k+1;
        ListNode* node2=head;
        while(k2-- >1){
            node2=node2->next;
        }
        swap(node1->val,node2->val);
        return head;
    }
};