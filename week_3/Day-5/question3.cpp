class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        
        for(int i=0;i<=n-k;i++){
            int maxi=INT_MIN;
            int j=i;
            while(i+k>j && j<n){

              maxi=max(nums[j],maxi);
              j++;
              
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};