class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list=new ListNode(0);
        ListNode* tail=list;
        while(list1 && list2){
            if(list1->val<=list2->val){
                tail->next=new ListNode(list1->val);
                list1=list1->next;
                tail=tail->next;
                tail->next=nullptr;
            }else{
                tail->next=new ListNode(list2->val);
                list2=list2->next;
                tail=tail->next;
                tail->next=nullptr;
            }
        }
        if(!list1) tail->next=list1;
        else tail->next=list2;
        return list->next;
    }
};