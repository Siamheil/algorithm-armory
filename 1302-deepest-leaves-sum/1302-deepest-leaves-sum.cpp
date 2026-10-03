class Solution {
public:
    int height(TreeNode* root){
        if(!root) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh,rh)+1;
    }
    int deepestLeavesSum(TreeNode* root) {
        int maxlevel=height(root);
        if(maxlevel==0) return root->val;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        int sum=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(level + 1 == maxlevel)
                    sum += node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            level++;
        }
        return sum;
    }
};