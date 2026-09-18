class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root==nullptr){
            return nullptr;
        }
        if (root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else if (root->val<key){
            root->right=deleteNode(root->right,key);
        }
        else{
            if (root->left==nullptr){
                return root->right;
            }
            if (root->right==nullptr){
                return root->left;
            }
            TreeNode* temp=root->right;
            while (temp->left!=nullptr){
                temp=temp->left;
            }
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }
};