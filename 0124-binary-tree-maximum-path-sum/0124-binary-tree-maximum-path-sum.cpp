class Solution {
public:
    int ans=INT_MIN;
    int solve(TreeNode* root){
        if (root==nullptr){
            return 0;
        }
        int ls=max(0,solve(root->left));
        int rs=max(0,solve(root->right));
        ans=max(ans,root->val+ls+rs);
        return root->val+max(ls,rs);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return ans;
    }
};