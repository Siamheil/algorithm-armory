class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int depth=1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            while(size--){
                TreeNode* temp=q.front();
                q.pop();
                if(!temp->left && !temp->right) return depth;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            depth++;
        }
        return -1;
    }
};