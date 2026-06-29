class Solution {
public:
bool isdowsymmetry(TreeNode*node1,TreeNode*node2){
    if(node1==NULL ||node2==NULL){
        return (node1==node2) ;
    }
    if(node1->val!=node2->val) return false;
    else return(isdowsymmetry(node1->left,node2->right)&&isdowsymmetry(node1->right,node2->left));
}

bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true ;
        else
        return isdowsymmetry(root->left,root->right);
       
    }
    
};