class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        if(!head || !head->next) return head;
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* fut=curr->next;
        while(fut){
            curr->next=prev;
            prev=curr;
            curr=fut;
            fut=fut->next;
        }
        curr->next=prev;
        return curr;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        head = reverseLL(head);
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] != head->val)
                return false;
            head = head->next;
        }
        return true;
    }
};