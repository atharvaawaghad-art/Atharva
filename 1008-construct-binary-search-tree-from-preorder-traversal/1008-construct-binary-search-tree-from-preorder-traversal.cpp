class Solution {
public:
    TreeNode* solve(vector<int>& preorder,int &i,int upper){
        if (i==preorder.size() || preorder[i]>upper){
            return nullptr;
        }
        TreeNode* root=new TreeNode(preorder[i]);
        i++;
        root->left=solve(preorder,i,root->val);
        root->right=solve(preorder,i,upper);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return solve(preorder,i,INT_MAX);
    }
};