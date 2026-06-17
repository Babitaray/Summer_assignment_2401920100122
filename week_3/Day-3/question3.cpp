class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>ans;
        
        stack<int>st;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
           while((!st.empty()) && st.top()<=nums2[i]){
            st.pop();
           }
           if(st.empty()){
            ans[nums2[i]]=-1;
           }
           else{
            ans[nums2[i]]=st.top();
            
           }
            st.push(nums2[i]);
        }
       
        vector<int>finalans;
        for(int x:nums1){
            finalans.push_back(ans[x]);
        }
        return finalans;
    }
};