class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {

        //doing level order traversal
        
        vector<double>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            vector<int>level;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                q.pop();
                
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                level.push_back(node->val);

            }
            //finding average of each level
            float m=level.size();
            long long sum=0;
            for(int i=0;i<m;i++){
                sum=sum+level[i];
            }
            double avg=(double)sum/m;
            ans.push_back(avg);
        }
        return ans;
    }
};