class Solution {
public:
    TreeNode* solve(vector<int>& preorder,int &index,int lower,int upper){
        if(index==preorder.size() || preorder[index]<lower || preorder[index]>upper)
            return nullptr;
        TreeNode* root=new TreeNode(preorder[index++]);
        root->left=solve(preorder,index,lower,root->val);
        root->right=solve(preorder,index,root->val,upper);   
        return root; 
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        return solve(preorder,index,INT_MIN,INT_MAX);
    }
};