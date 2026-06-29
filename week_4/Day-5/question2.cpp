class Solution {
public:
unordered_map<int,int>mp;
int preindex=0;

TreeNode*solve(vector<int>inorder,vector<int> preorder,int inorderstart,int inorderend){
    if(inorderstart>inorderend){
        return NULL;
    }
    int ele=preorder[preindex++];
    TreeNode*root=new TreeNode(ele);
    int pos=mp[ele];

    root->left=solve(inorder,preorder,inorderstart,pos-1);
    root->right=solve(inorder,preorder,pos+1,inorderend);
    return root;
}

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
        TreeNode*ans=solve(inorder,preorder,0,n-1);
        return ans;
    }
};