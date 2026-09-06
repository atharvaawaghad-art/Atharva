class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root==nullptr){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            vector<int>level;
            int size=q.size();
            for (int i=0;i<size;i++){
            TreeNode* node=q.front();
            q.pop();
            level.push_back(node->val);
            if (node->left!=nullptr){
                q.push(node->left);
            }
            if (node->right!=nullptr){
                q.push(node->right);
            }
            }
            ans.push_back(level);
        } 
        return ans;
    }
};