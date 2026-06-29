class Codec {
public:
vector<int>ans;
void preorder(TreeNode* root,string &s){
    if (root == NULL)
            return;

        s += to_string(root->val) + " ";
        preorder(root->left, s);
        preorder(root->right, s);
}

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s;
        preorder(root ,s);
        return s;
    }
TreeNode* build(vector<int>&preorder,int &idx,int lower,int upper){
    if (idx == preorder.size())
            return NULL;

        int val = preorder[idx];

        if (val < lower || val > upper)
            return NULL;

        TreeNode* root = new TreeNode(val);
        idx++;

        root->left = build(preorder, idx, lower, val);
        root->right = build(preorder, idx, val, upper);

        return root;
}
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.empty())
            return NULL;

        vector<int> preorder;
        stringstream ss(data);
        int x;

        while (ss >> x)
            preorder.push_back(x);

        int idx = 0;
        return build(preorder, idx, INT_MIN, INT_MAX);
    }
};
