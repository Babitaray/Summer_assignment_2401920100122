class Solution {
public:
bool ispalindrom(string &s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
    string longestPalindrome(string s) {
         int n=s.length();
         string ans="";

         for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ispalindrom(s,i,j)){
                    int len=j-i+1;
                    if(len>ans.length()){
                        ans=s.substr(i,len);
                    }
                }
            }
         }
         return ans;
    }
};