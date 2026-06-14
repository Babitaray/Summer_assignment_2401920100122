class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m=needle.size();
        int i=0;
        int j=0;
        for(int s=0;s<=n-m;s++){
            int j=0;
            while(j<m && haystack[s+j]==needle[j]){
                j++;
            }
            if(j==m){
                return s;
            }
        }
        return -1;
        
    }
};