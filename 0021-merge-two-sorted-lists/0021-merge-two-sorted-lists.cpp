class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list=new ListNode(0);
        ListNode* tail=list;
        while(list1 && list2){
            if(list1->val<=list2->val){
                tail->next=list1;
                list1=list1->next;
                tail=tail->next;
            }else{
                tail->next=list2;
                list2=list2->next;
                tail=tail->next;
            }
        }
        if(!list1) tail->next=list2;
        else tail->next=list1;
        return list->next;
    }
};