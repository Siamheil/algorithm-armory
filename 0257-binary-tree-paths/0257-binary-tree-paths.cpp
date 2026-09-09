class Solution {
public:
    void solve(TreeNode* root,string temp,vector<string>& result){
        if(!root) return;
        temp+=to_string(root->val);
        if(!root->left && !root->right ) result.push_back(temp);
        else{
            temp+="->";
            solve(root->left,temp,result);
            solve(root->right,temp,result);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>result;
        string temp="";
        solve(root,temp,result);
        return result;
    }
};