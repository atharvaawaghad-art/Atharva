class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root==nullptr){
            return ans;
        }
        int l=1;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            int size=q.size();
            vector<int> level;
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
            if (l%2==0){
                reverse(level.begin(),level.end());
                ans.push_back(level);
            }
            else{
            ans.push_back(level);
            }
            l++;
        }
        return ans;
    }
};