class Solution {
public:
    unordered_map<int,int> mp;
    int index=0;
    TreeNode* solve(vector<int>& preorder,int left,int right){
        if (left>right){
            return nullptr;
        }
        int value=preorder[index];
        index++;
        TreeNode* root=new TreeNode(value);
        int mid=mp[value];
        root->left=solve(preorder,left,mid-1);
        root->right=solve(preorder,mid+1,right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i=0;i<preorder.size();i++){
            mp[inorder[i]]=i;
        }
        return solve(preorder,0,preorder.size()-1);
    }
};