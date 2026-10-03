class Solution {
public:
    bool solve(TreeNode* root, long long &prev) {
        if(!root) return true;

        bool l = solve(root->left, prev);

        if(l == false) return false;

        if(prev >= root->val) return false;

        prev = root->val;

        return solve(root->right, prev);
    }

    bool isValidBST(TreeNode* root) {
        long long prev = LLONG_MIN;
        return solve(root, prev);
    }
};