class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        int ans = 0;
        while (!q.empty()) {
            int n = q.size();
            long long start = q.front().second;
            for (int i = 0; i < n; i++) {
                auto [node, pos] = q.front();
                q.pop();
                pos -= start;
                if (i == n - 1){
                    ans = max(ans, (int)pos + 1);
                }
                if (node->left){
                    q.push({node->left, 2 * pos + 1});
                }
                if (node->right){
                    q.push({node->right, 2 * pos + 2});
                }
            }
        }
        return ans;
    }
};