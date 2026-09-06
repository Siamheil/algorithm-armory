class Solution {
public:
    bool solve(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        if(!p || !q) return false;
        if(p->val!=q->val) return false;
        return solve(p->left,q->right)&&solve(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return false;
        return solve(root->left,root->right);
    }
};