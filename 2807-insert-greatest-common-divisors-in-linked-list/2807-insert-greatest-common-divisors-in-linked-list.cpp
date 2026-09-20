class Solution {
public:
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr!=nullptr && curr->next!=nullptr){
            int g=gcd(curr->val,curr->next->val);
            ListNode* temp=new ListNode(g);
            temp->next=curr->next;
            curr->next=temp;
            curr=temp->next;
        }
        return head;
    }
};