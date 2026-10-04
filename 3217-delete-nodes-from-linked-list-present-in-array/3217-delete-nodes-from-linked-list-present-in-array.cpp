class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st(nums.begin(),nums.end());
        while(head && st.count(head->val)) head=head->next;
        ListNode* prev=NULL,* curr=head;
        while(curr){
            if(st.count(curr->val)) prev->next=curr->next;
            else prev=curr;
            curr=curr->next;
        }
        return head;
    }
};