class Solution {
public:
    bool solve(TreeNode* root, int targetSum,int currSum){
        if(!root) return false;
        currSum+=root->val;
        if(!root->left && !root->right) return currSum==targetSum;
        return solve(root->left,targetSum,currSum) || solve(root->right,targetSum,currSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int currSum=0;
        return solve(root,targetSum,currSum);
    }
};