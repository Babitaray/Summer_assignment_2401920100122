class Solution {
public:
vector<int>ans1;
vector<int>ans2;
void leafnode(TreeNode* root,vector<int>&ans){
    if(root==NULL) return;

    if(root->left==NULL && root->right==NULL){
         ans.push_back(root->val);
         return;
    }
    leafnode(root->left,ans);
    leafnode(root->right,ans);
    
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leafnode(root1,ans1);
        leafnode(root2,ans2);
        
        return ans1==ans2;
    }
};