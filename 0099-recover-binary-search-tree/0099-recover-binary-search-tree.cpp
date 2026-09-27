class Solution {
public:
    TreeNode* prev=nullptr;
    TreeNode* first=nullptr;
    TreeNode* second=nullptr;
    void call(TreeNode* root){
        if (root==nullptr){
            return;
        }
        call(root->left);
        if (prev!=nullptr && prev->val>root->val){
            if (first==nullptr){
                first=prev;
            }
            second=root;
        }
        prev=root;
        call(root->right);
    }
    void recoverTree(TreeNode* root) {
        call(root);
        swap(first->val,second->val);
    }
};