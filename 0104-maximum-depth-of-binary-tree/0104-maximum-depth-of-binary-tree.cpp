class Solution {
public:
    int solve(TreeNode* root){
        if(!root) return 0;
        int left=solve(root->left);
        int right=solve(root->left);
        return 1+max(left,right);
    }
    int maxDepth(TreeNode* root) {
        return solve(root);
    }
};