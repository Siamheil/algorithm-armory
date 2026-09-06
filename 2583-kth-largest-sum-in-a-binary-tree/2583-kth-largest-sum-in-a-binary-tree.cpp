class Solution {
public:
    void solve(TreeNode* root,int k,vector<long long>& ans){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            long long sum=0;
            while(size--){
                TreeNode* node=q.front();
                q.pop();
                sum=sum+node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(sum);
        }
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>ans;
        solve(root,k,ans);
        if(ans.size()<k) return -1;
        sort(ans.begin(),ans.end());
        return ans[ans.size()-k];
    }
};