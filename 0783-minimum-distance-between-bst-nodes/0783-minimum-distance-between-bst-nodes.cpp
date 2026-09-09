class Solution {
public:
    void call(TreeNode* root,TreeNode* &prev,int &mini){
        if (root==nullptr){
            return;
        }
        call(root->left,prev,mini);
        if (prev!=nullptr){
            mini=min(mini,root->val-prev->val);
        }
        prev=root;
        call(root->right,prev,mini);
    }
    int minDiffInBST(TreeNode* root) {
        if (root==nullptr){
            return 0;
        }
        int mini=INT_MAX;
        TreeNode* prev=nullptr;
        call(root,prev,mini);
        return mini;
    }
};