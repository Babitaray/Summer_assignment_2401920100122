class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) {
            return ans;
        }
         queue<TreeNode*> q;
        q.push(root);
        bool lefttoright=true;

        while (!q.empty()) {
            int size = q.size();
            vector<int>level(size);
            for (int i = 0; i < size; i++) {
                TreeNode* frontnode = q.front();
                q.pop();
                int index = lefttoright ? i : size - i - 1;
                level[index] = frontnode->val;
                if (frontnode->left) {
                    q.push(frontnode->left);
                }
                if (frontnode->right) {
                    q.push(frontnode->right);
                }
            }
            ans.push_back(level);
            lefttoright = !lefttoright;
           
        }

        return ans;
    }
};