class Solution {
public:
    vector<double>ans;
    void solve(TreeNode* root){
        if(!root) return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            long long sum=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                sum=sum+node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            double currAvg=sum/(double)size;
            ans.push_back(currAvg);
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) return {};
        solve(root);
        return ans;
    }
};