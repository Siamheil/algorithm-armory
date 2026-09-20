class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        unordered_map<int,int>mpp;
        Node* curr=head;
        Node* prev=nullptr;
        while(curr!=nullptr){
            if(mpp.count(curr->data)){
                prev->next=curr->next;
            }
            else{
                mpp[curr->data]=1;
                prev=curr;
            }
            curr=curr->next;
        }
        return head;
    }
};