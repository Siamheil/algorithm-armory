class Solution {
public:
    vector<vector<int>>ans;
    void solve(TreeNode* root){
        if(!root) return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>currLevel;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                currLevel.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(currLevel);
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return {};
        solve(root);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};