class Solution {
public:
    vector<int> ans;
    void inorder(TreeNode* root) {
        if (root == NULL)
            return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        vector<int> modes;
        int n = ans.size();
        
        int i=0;
        int maxfreq=INT_MIN;

        while(i < n) {
            
            int freq=1;
            while(i+1<n && ans[i]==ans[i+1]) {
                
                    freq++;
                    i++;
                
            }
            if(freq>maxfreq){
                maxfreq=freq;
                modes.clear();
                modes.push_back(ans[i]);
            }
            else if(freq==maxfreq){
                modes.push_back(ans[i]);
            }
            

            i++;

        
        }
       
        return modes;
        
    }
};