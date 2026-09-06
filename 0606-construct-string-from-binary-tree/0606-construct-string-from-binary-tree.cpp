class Solution {
public:
    void solve(TreeNode* root, string& ans) {
        if (root == nullptr) {
            return;
        }
        ans += to_string(root->val);
        if (root->left != nullptr || root->right != nullptr) {
            ans += "(";
            solve(root->left, ans);
            ans += ")";
        }
        if (root->right != nullptr) {
            ans += "(";
            solve(root->right, ans);
            ans += ")";
        }
    }
    string tree2str(TreeNode* root) {
        string ans;
        solve(root, ans);
        return ans;
    }
};