class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* curr = head;
        ListNode* prev = dummy;

        while (curr) {
            if (curr->val == val) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        head = dummy->next;
        delete dummy;
        return head;
    }
};
