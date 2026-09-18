class Solution {
public:
    TreeNode* ans=nullptr;
    int solve(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root) return 0;
        int left=solve(root->left,p,q);
        int right=solve(root->right,p,q);
        int self=0;
        if(root==p || root==q) self=1;
        int total=left+self+right;
        if(total==2 && ans==nullptr) ans=root;
        return total;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        solve(root,p,q);
        return ans;
    }
};