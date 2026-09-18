class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<ListNode*>arr;
        ListNode* curr=head;
        while(curr){
            while(!arr.empty() && arr.back()->val<curr->val) arr.pop_back();
            arr.push_back(curr);
            curr=curr->next;
        }
        for(int i=0;i<arr.size()-1;i++){
            arr[i]->next=arr[i+1];
        }
        arr.back()->next=nullptr;
        return arr[0];
    }
};