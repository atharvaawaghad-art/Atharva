class Solution {
public:
    string tree2str(TreeNode* root) {
        if (root==nullptr){
            return "";
        }
        string ans=to_string(root->val);
        if (root->left!=nullptr){
            ans+="("+tree2str(root->left)+")";
        }
        if (root->right!=nullptr){
            if (root->left==nullptr){
                ans+="()";
            }
            ans+="("+tree2str(root->right)+")";
        }
        return ans;
    }
};