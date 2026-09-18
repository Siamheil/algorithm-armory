class Solution {
  public:
    int solve(Node* root){
        if(!root) return 0;
        return root->data+solve(root->left)+solve(root->right);
    }
    int sumBT(Node* root) {
        return solve(root);
    }
};