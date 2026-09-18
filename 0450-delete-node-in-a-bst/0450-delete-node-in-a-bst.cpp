class Solution {
public:
    TreeNode* arraytoBST(vector<int>& arr,int l,int r){
        if(l>r) return nullptr;
        int mid=l+(r-l)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=arraytoBST(arr,l,mid-1);
        root->right=arraytoBST(arr,mid+1,r);
        return root;
    }
    void inorder(TreeNode* root,vector<int>& arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        vector<int>arr;
        inorder(root,arr);
        for(int i=0;i<arr.size();i++){
            if(arr[i]==key){
                arr.erase(arr.begin()+i);
            }
        }
        return arraytoBST(arr,0,arr.size()-1);
    }
};