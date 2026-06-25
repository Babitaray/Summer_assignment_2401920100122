class Solution {
public:


 bool hasPathSum(TreeNode* root, int targetSum) {
    if(root==NULL){
        return false;
    }
       if(root->left==NULL && root->right==NULL){
        return targetSum==root->val;
       }
       int remain=targetSum-root->val;
        return hasPathSum(root->left,remain) || hasPathSum(root->right,remain);

                                                 
    }
};