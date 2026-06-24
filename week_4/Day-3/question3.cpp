lass Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) {
            return NULL;
            }
            if (root == p || root == q) {
                return root;
            }
           
            TreeNode* leftA = lowestCommonAncestor(root->left, p, q);
            TreeNode* rightA = lowestCommonAncestor(root->right, p, q);

            if (leftA != NULL && rightA != NULL) {
                return root;
            }
            if (leftA != NULL || rightA == NULL) {
                return leftA;
            } else if (rightA != NULL || leftA == NULL) {
                return rightA;
            }
            return NULL;
        
        
    }
};