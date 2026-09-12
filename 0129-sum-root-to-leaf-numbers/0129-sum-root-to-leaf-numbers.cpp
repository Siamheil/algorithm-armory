class Solution {
public:
    void solve(TreeNode* root,vector<int>numArray,int &sum){
        if(!root) return;
        numArray.push_back(root->val);
        if(!root->left&&!root->right){
            int num=0;
            for(int x:numArray){
                num=num*10+x;
            }
            sum=sum+num;
            return;
        }
        solve(root->left,numArray,sum);
        solve(root->right,numArray,sum);
    }
    int sumNumbers(TreeNode* root) {
        vector<int>numArray;
        int sum=0;
        solve(root,numArray,sum);
        return sum;
    }
};