class Solution {
public:
    int solve(TreeNode* root){
        if(!root) return 0;
        int left=solve(root->left);
        int right=solve(root->right);
        if(left==-1 || right==-1) return -1;
        if(abs(left-right)>1) return -1;
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        return solve(root)!=-1;
    }
};