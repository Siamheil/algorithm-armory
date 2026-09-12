/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,vector<int>& path,int& sum){
        if(!root) return;
        path.push_back(root->val);
        if(!root->left && !root->right){
            int num=0;
            for(int x:path){
                num=num*10+x;
            }
            sum=sum+num;
            path.pop_back();
            return;
        }
        solve(root->left,path,sum);
        solve(root->right,path,sum);
        path.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        vector<int>path;
        int sum=0;
        solve(root,path,sum);
        return sum;
    }
};