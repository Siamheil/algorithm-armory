class Solution {
public:
    vector<vector<int>>ans;
    void solve(TreeNode* root,int targetSum,vector<int>& temp){
        if(!root) return;
        temp.push_back(root->val);
        if(!root->left && !root->right){
            if(targetSum==root->val){
                ans.push_back(temp);
            }
        }
        solve(root->left,targetSum-root->val,temp);
        solve(root->right,targetSum-root->val,temp);
        temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return {};
        vector<int>temp;
        solve(root,targetSum,temp);
        return ans;
    }
};