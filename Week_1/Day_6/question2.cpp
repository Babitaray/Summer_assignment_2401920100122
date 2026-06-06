class Solution {
public:
vector<int>nodes;
void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    nodes.push_back(root->val);
    inorder(root->right);
}
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL) return -1;
        inorder(root);
        int n=nodes.size();
        sort(nodes.begin(),nodes.end());
        int firstmin=nodes[0];
        for(int i=0;i<n;i++){
          if(nodes[i]>firstmin){
            return nodes[i];
          }
        }
        return -1;
    }
};