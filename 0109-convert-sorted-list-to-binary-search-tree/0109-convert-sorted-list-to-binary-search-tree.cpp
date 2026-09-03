class Solution {
public:
    TreeNode* solve(vector<int>& arr,int start,int end){
        if(start>end) return nullptr;
        int mid=start+(end-start)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=solve(arr,start,mid-1);
        root->right=solve(arr,mid+1,end);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>arr;
        ListNode* curr=head;
        while(curr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        return solve(arr,0,arr.size()-1);
    }
};