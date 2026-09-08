class Solution {
public:
    bool call(TreeNode* root,int value){
        if (root==nullptr){
            return true;
        }
        if (root->val!=value){
            return false;
        }
        return call(root->left,value) && call(root->right,value);
    }
    bool isUnivalTree(TreeNode* root) {
        if (root==nullptr){
            return true;
        }
        bool ans=call(root,root->val);
        return ans;
    }
};