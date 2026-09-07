class Solution {
public:
    void solve(TreeNode* root,int &ans){
        if(!root) return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(i==0) ans=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans;
        solve(root,ans);
        return ans;
    }
};