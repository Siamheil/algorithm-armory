class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        ListNode* curr=head;
        while(curr){
            while(!st.empty() && st.top()->val<curr->val)
                st.pop();
            st.push(curr); 
            curr=curr->next;
        }
        ListNode* newHead=NULL;
        while(!st.empty()){
            st.top()->next=newHead;
            newHead=st.top();
            st.pop();
        }
        return newHead;
    }
};