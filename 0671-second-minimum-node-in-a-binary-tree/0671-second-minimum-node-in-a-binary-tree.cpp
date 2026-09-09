class Solution {
public: 
    void call(TreeNode* root, int first,long &second){
        if (root==nullptr){
            return;
        }
        if (root->val>first && root->val<second){
            second=root->val;
        }
        call(root->left,first,second);
        call(root->right,first,second);

    }
    int findSecondMinimumValue(TreeNode* root) {
        if (root==nullptr){
            return -1;
        }
        int first=root->val;
        long second=LONG_MAX;
        call(root,first,second);
        if (second==LONG_MAX){
            return -1;
        }
        return second;
    }
};