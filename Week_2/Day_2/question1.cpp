class Solution {
public:
vector<int>ans;
int idx=0;
void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    ans.push_back(root->val);
    inorder(root->right);
}
 void arrtobst(TreeNode* root){
    if(root==NULL) return;
    arrtobst(root->left);

    root->val=ans[idx++];
    
    arrtobst(root->right);
}
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(ans.begin(),ans.end());
        idx=0;
        arrtobst(root);
    }
};