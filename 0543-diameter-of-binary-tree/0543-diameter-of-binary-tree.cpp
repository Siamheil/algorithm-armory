class Solution {
public:
    int height(TreeNode* root){
        if(!root) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int leftDia=diameterOfBinaryTree(root->left);
        int rightDia=diameterOfBinaryTree(root->right);
        int currDia=height(root->left)+height(root->right);
        return max(currDia,max(leftDia,rightDia));
    }
};