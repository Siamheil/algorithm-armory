class Solution {
  public:
    void levelOrder(Node* root,vector<int>& ans){
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                Node* node=q.front();
                q.pop();
                if(i==0) ans.push_back(node->data);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
    }
    vector<int> leftView(Node *root) {
        if(!root) return {};
        vector<int>ans;
        levelOrder(root,ans);
        return ans;
    }
};