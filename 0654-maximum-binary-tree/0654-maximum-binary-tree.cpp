class Solution {
public:
    TreeNode* solve(vector<int>& nums,int start,int end){
        if(start>end) return nullptr;
        int maxi=start;
        for(int i=start+1;i<=end;i++){
            if(nums[i]>nums[maxi]){
                maxi=i;
            }
        }
        TreeNode* root=new TreeNode(nums[maxi]);
        root->left=solve(nums,start,maxi-1);
        root->right=solve(nums,maxi+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};