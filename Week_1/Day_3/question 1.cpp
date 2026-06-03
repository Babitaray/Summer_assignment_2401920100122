class Solution {
public:
    int findheight(TreeNode* root) {

        if (root == NULL) {
            
            return 0;
        }

        int left = findheight(root->left);
        int right = findheight(root->right);
        int h = max(left, right) + 1;
        return h;
    }

    void countlevel(TreeNode* root, int level, int height, int& c) {
        if (root == NULL)
            return ;
        if (level == height) {
            c++;
            return;
        }
        countlevel(root->left, level + 1, height, c);
        countlevel(root->right, level + 1, height, c);
    }
    int countNodes(TreeNode* root) {
        int c = 0;

        if (root == NULL) {

            return 0;
        }
        int height = findheight(root);
        countlevel(root, 1, height, c);
        
        int ans = pow(2, (height - 1)) + c - 1;
        return ans;
    }
};