class Solution {
public:
vector<int>ans;
void  inordertraversal(TreeNode* root){
if(root==NULL){
    return ;

}
inordertraversal(root->left);
ans.push_back(root->val);
inordertraversal(root->right);

}
    bool isValidBST(TreeNode* root) {
        inordertraversal(root);
        for(int i=0;i<ans.size()-1;i++){
           if( ans[i]>=ans[i+1]){
            return false;
           }
        }
        return true;
    }
};