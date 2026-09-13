class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>arr;
        ListNode* curr=head;
        while(curr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int maxSum=INT_MIN;
        int i=0,j=arr.size()-1;
        while(i<j){
            int sum=arr[i]+arr[j];
            maxSum=max(maxSum,sum);
            i++;
            j--;
        }
        return maxSum;
    }
};