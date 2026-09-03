class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head) return head;

        int count = 0;
        ListNode* curr = head;
        ListNode* front = head;
        ListNode* end = head;

        int temp = k;

        while(temp-- > 1) {
            front = front->next;
        }

        while(curr) {
            curr = curr->next;
            count++;
        }

        int k2 = count - k;

        while(k2--) {
            end = end->next;
        }

        swap(front->val, end->val);
        return head;
    }
};