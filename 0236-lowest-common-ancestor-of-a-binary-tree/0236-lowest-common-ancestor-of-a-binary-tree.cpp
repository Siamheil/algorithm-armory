class Solution {
public:

    bool findPath(TreeNode* root, TreeNode* target, vector<TreeNode*>& path) {
        if (root == NULL)
            return false;

        path.push_back(root);

        if (root == target)
            return true;

        if (findPath(root->left, target, path) ||
            findPath(root->right, target, path))
            return true;

        path.pop_back();
        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        vector<TreeNode*> path1;
        vector<TreeNode*> path2;

        findPath(root, p, path1);
        findPath(root, q, path2);

        int i = 0;

        while (i < path1.size() && 
               i < path2.size() && 
               path1[i] == path2[i]) {
            i++;
        }

        return path1[i - 1];
    }
};