class Solution {
public:
vector<int>ans;
void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    ans.push_back(root->val);
    inorder(root->right);
}
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int diff=0;
        int mini=INT_MAX;
        int size=ans.size();
        for(int i=0;i<size-1;i++){
           diff=ans[i+1]-ans[i];
           mini=min(mini,diff);
        }
        
      return mini;
    }
    
};