class Solution {
public:
    int find(vector<int>& inorder,int target,int inStart,int inEnd){
        for(int i=inStart;i<=inEnd;i++){
            if(inorder[i]==target) return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int inStart,int inEnd,int index){
        if(inStart>inEnd) return nullptr;
        TreeNode* root=new TreeNode(preorder[index]);
        int pos=find(inorder,preorder[index],inStart,inEnd);
        root->left=solve(preorder,inorder,inStart,pos-1,index+1);
        root->right=solve(preorder,inorder,pos+1,inEnd,index+(pos-inStart)+1);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int inStart=0,inEnd=inorder.size()-1;
        return solve(preorder,inorder,inStart,inEnd,0);
    }
};