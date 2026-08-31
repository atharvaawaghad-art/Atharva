class Solution {
public:
    vector<string> ans;
    void call(TreeNode* root,string path){
        if (root==nullptr){
            return;
        }
        path+=to_string(root->val);
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(path);
            return;
        }
        path+="->";
        call(root->left,path);
        call(root->right,path);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        call(root,"");
        return ans;
    }
};