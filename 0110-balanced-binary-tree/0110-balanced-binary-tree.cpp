class Solution {
public:
    int height(TreeNode* root){
        if (root==nullptr){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        if (left==-1 || right==-1){
            return -1;
        }
        if (abs(left-right)>1){
            return -1;
        }
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        int ans=height(root);
        if (ans==-1){
            return false;
        }
        else{
            return true;
        }
    }
};