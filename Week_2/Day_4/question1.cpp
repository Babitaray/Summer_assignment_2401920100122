class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        
        int start=0;
        for(int i=0;i<n;i++){
            if(s[i]==' ' || i==n-1){

               int end;

               if(s[i]==' '){
                end=i-1;
               }
               else{
                end=i;
               }
                reverse(s.begin()+start,s.begin()+end+1);
                start=i+1;
            }
        }
        return s;
    }
};