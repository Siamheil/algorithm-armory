class Solution {
public:
    int solve(TreeNode* root,int &ans){
        if(!root) return 0;
        int left=solve(root->left,ans);
        int right=solve(root->right,ans);
        ans=max(ans,left+right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        solve(root,ans);
        return ans;
    }
};