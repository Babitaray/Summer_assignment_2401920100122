class Solution {
public:
vector<string>ans;
void addpath(TreeNode* root,string path){
    if(root==NULL){
        return;
    }
    path+=to_string(root->val);
    if(root->left==NULL && root->right==NULL){
        ans.push_back(path);
        return;
    }
    path+="->";

    addpath(root->left,path);
    addpath(root->right,path);
}
    vector<string> binaryTreePaths(TreeNode* root) {
        
        addpath(root,"");

        return ans;
    }
};