lass Solution {
public:
vector<int>ans;
void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    ans.push_back(root->val);
    inorder(root->right);
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        inorder(root);
        int n=ans.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(ans[i]>=low && ans[i]<=high){
            sum=sum+ans[i];
            }
        }
        return sum;
    }
};