class Solution {
public:
    bool solve(TreeNode* root,int targetSum){
        if(!root) return false;
        if(!root->left && !root->right) return root->val==targetSum;
        return solve(root->left,targetSum-root->val)||solve(root->right,targetSum-root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root,targetSum);
    }
};