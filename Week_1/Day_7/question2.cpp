class Solution {
public:
vector<int>ans;
void inorder(TreeNode* root){
 if(root==NULL) return;
 inorder(root->left);
 ans.push_back(root->val);
 inorder(root->right); 
}
    int minDiffInBST(TreeNode* root) {
        int mini=INT_MAX;
        inorder(root);
        int n=ans.size();
        for(int i=0;i<n-1;i++){
            int sub=ans[i+1]-ans[i];
          mini=min(mini,sub);
        }
        return mini;
    }
};