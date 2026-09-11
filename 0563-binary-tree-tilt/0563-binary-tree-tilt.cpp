class Solution {
public:
    int solve(TreeNode* root,int &total){
        if (root==nullptr){
            return 0;
        }
        int left=solve(root->left,total);
        int right=solve(root->right,total);
        total+=abs(left-right);
        return root->val+left+right;
    }
    int findTilt(TreeNode* root) {
        int total=0;
        solve(root,total);
        return total;
    }
};