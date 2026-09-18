class Solution {
  public:
    int solve(Node* root){
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        return solve(root->left)+solve(root->right);
    }
    int countLeaves(Node* root) {
        return solve(root);
    }
};