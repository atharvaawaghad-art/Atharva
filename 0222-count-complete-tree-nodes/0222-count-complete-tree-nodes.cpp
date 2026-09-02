class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root==nullptr){
            return 0;
        }
        int left=0;
        int right=0;
        TreeNode* l=root;
        TreeNode* r=root;
        while(l!=nullptr){
            left++;
            l=l->left;
        }
        while(r!=nullptr){
            right++;
            r=r->right;
        }
        if(left==right){
            return (1<<left)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};