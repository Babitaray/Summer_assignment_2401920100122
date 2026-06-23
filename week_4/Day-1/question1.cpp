class Solution {
public:
int height(TreeNode* root){
     if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right)+1;
        return (ans);
}
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }

       
        int depth=max(height(root->left),height(root->right))+1;
        return depth;
        
    }
};